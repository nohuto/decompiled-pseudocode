/*
 * XREFs of VrpDereferenceDiffHiveEntry @ 0x140846330
 * Callers:
 *     VrpLoadDifferencingHive @ 0x140846830 (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x140846C2C (VrpUnloadDifferencingHive.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     VrpDereferenceDiffHiveEntryWithLock @ 0x1408463B4 (VrpDereferenceDiffHiveEntryWithLock.c)
 */

_QWORD *__fastcall VrpDereferenceDiffHiveEntry(_QWORD *P)
{
  _QWORD *result; // rax
  signed __int64 i; // rdx
  _QWORD *v4; // rtt
  struct _KTHREAD *CurrentThread; // rax

  _m_prefetchw(P + 2);
  result = (_QWORD *)P[2];
  for ( i = (signed __int64)result - 1; i > 0; i = (signed __int64)result - 1 )
  {
    v4 = result;
    result = (_QWORD *)_InterlockedCompareExchange64(P + 2, i, (signed __int64)result);
    if ( v4 == result )
      return result;
  }
  if ( i )
    __fastfail(0xEu);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  VrpDereferenceDiffHiveEntryWithLock(P);
  ExReleasePushLockEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
