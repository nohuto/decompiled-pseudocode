/*
 * XREFs of PopDirectedDripsDiagTraceBroadcastRootDevice @ 0x140304420
 * Callers:
 *     PopDirectedDripsBuildBroadcastTreePartial @ 0x1408B92F8 (PopDirectedDripsBuildBroadcastTreePartial.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     PopDirectedDripsDiagCreateDeviceDiagnostic @ 0x1408B7D0C (PopDirectedDripsDiagCreateDeviceDiagnostic.c)
 */

_QWORD *__fastcall PopDirectedDripsDiagTraceBroadcastRootDevice(__int64 a1, int *a2)
{
  __int64 DeviceDiagnostic; // rax
  unsigned int SessionId; // esi
  int v6; // eax
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 v8; // bp
  unsigned int v9; // edx
  int v10; // eax
  __int64 v11; // rcx
  _KLOCK_ENTRY *v12; // rdi
  bool v13; // zf
  __int64 v14; // rcx
  int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // rdx
  _QWORD *result; // rax
  __int64 v19; // rcx
  int v20; // [rsp+60h] [rbp+8h] BYREF
  int v21; // [rsp+70h] [rbp+18h]

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopDirectedDripsDiagLock, 0LL);
  DeviceDiagnostic = *(_QWORD *)(a1 + 776);
  SessionId = -1;
  if ( DeviceDiagnostic
    || (++PopDirectedDripsDiagNextBroadcastTreeId,
        (DeviceDiagnostic = PopDirectedDripsDiagCreateDeviceDiagnostic(a1)) != 0) )
  {
    *(_DWORD *)(DeviceDiagnostic + 124) |= 0x60000u;
    v6 = *(_DWORD *)(DeviceDiagnostic + 120);
  }
  else
  {
    v6 = -1;
  }
  *a2 = v6;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock);
  v20 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopDirectedDripsDiagLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  --CurrentThread->SpecialApcDisable;
  v8 = ++CurrentThread->AbAllocationRegionCount;
  v9 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v13 = !_BitScanReverse((unsigned int *)&v14, v9);
    v21 = v14;
    if ( v13 )
      goto LABEL_16;
    v10 = 1 << v14;
    v11 = v14;
    v12 = &CurrentThread->LockEntries[v11];
    v9 &= ~v10;
    if ( (v12->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v12->LockState.0 & 1) == 0
      && (*(_QWORD *)&v12->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopDirectedDripsDiagLock & 0x7FFFFFFFFFFFFFFCLL)
      && v12->LockState.SessionId == SessionId )
    {
      v12->AcquiredByte &= ~1u;
      if ( v12->LockState.0 )
        break;
    }
  }
  if ( !v12 )
  {
LABEL_16:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&PopDirectedDripsDiagLock, SessionId, 0LL);
    goto LABEL_23;
  }
  v12->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v12->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v11].TreeNode);
  v15 = v12->BoostBitmap.AllFields & 0x1FFFF;
  v16 = v12->BoostBitmap.AllFields & 0xFFFE0000;
  v12->ThreadLocalFlags &= ~1u;
  v20 = v15;
  v12->BoostBitmap.AllFields = v16;
  v12->LockState.0 = 0LL;
  v17 = ((char *)v12 - (char *)CurrentThread - 800) / 96;
  if ( v8 == 1 )
    CurrentThread->AbEntrySummary |= 1 << v17;
  else
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v17);
LABEL_23:
  --CurrentThread->AbAllocationRegionCount;
  result = (_QWORD *)KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&PopDirectedDripsDiagLock, &v20);
  v13 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v13 )
  {
    result = &CurrentThread->152;
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery(v19);
  }
  return result;
}
