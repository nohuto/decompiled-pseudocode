/*
 * XREFs of VrpDereferenceDiffHiveEntry @ 0x14080E5A4
 * Callers:
 *     VrpLoadDifferencingHive @ 0x14080EAF8 (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x14080EEBC (VrpUnloadDifferencingHive.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     VrpDereferenceDiffHiveEntryWithLock @ 0x14080E628 (VrpDereferenceDiffHiveEntryWithLock.c)
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
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
