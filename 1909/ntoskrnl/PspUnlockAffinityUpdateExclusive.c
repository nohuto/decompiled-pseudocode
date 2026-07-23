/*
 * XREFs of PspUnlockAffinityUpdateExclusive @ 0x140307140
 * Callers:
 *     PsUpdateActiveProcessAffinity @ 0x1408C6120 (PsUpdateActiveProcessAffinity.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

_QWORD *__fastcall PspUnlockAffinityUpdateExclusive(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v4; // bp
  unsigned int v5; // r8d
  int v6; // eax
  __int64 v7; // rcx
  _KLOCK_ENTRY *v8; // rdi
  bool v9; // zf
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v16; // [rsp+68h] [rbp+10h] BYREF
  int v17; // [rsp+70h] [rbp+18h]

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspAffinityUpdateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspAffinityUpdateLock);
  v16 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PspAffinityUpdateLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v4 = ++CurrentThread->AbAllocationRegionCount;
  v5 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v9 = !_BitScanReverse((unsigned int *)&v10, v5);
    v17 = v10;
    if ( v9 )
      goto LABEL_13;
    v6 = 1 << v10;
    v7 = v10;
    v8 = &CurrentThread->LockEntries[v7];
    v5 &= ~v6;
    if ( (v8->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v8->LockState.0 & 1) == 0
      && (*(_QWORD *)&v8->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PspAffinityUpdateLock & 0x7FFFFFFFFFFFFFFCLL)
      && v8->LockState.SessionId == SessionId )
    {
      v8->AcquiredByte &= ~1u;
      if ( v8->LockState.0 )
        break;
    }
  }
  if ( !v8 )
  {
LABEL_13:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&PspAffinityUpdateLock, SessionId, 0LL);
    goto LABEL_20;
  }
  v8->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v8->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v7].TreeNode);
  v11 = v8->BoostBitmap.AllFields & 0x1FFFF;
  v12 = v8->BoostBitmap.AllFields & 0xFFFE0000;
  v8->ThreadLocalFlags &= ~1u;
  v16 = v11;
  v8->BoostBitmap.AllFields = v12;
  v8->LockState.0 = 0LL;
  v13 = ((char *)v8 - (char *)CurrentThread - 800) / 96;
  if ( v4 == 1 )
    CurrentThread->AbEntrySummary |= 1 << v13;
  else
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v13);
LABEL_20:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&PspAffinityUpdateLock, &v16);
  v9 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v9 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v14);
  return KeLeaveCriticalRegionThread(a1);
}
