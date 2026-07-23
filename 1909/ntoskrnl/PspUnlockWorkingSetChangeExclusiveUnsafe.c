/*
 * XREFs of PspUnlockWorkingSetChangeExclusiveUnsafe @ 0x1403073C4
 * Callers:
 *     PspSetQuotaLimits @ 0x1406D7FE0 (PspSetQuotaLimits.c)
 *     PspApplyWorkingSetLimits @ 0x1408C7024 (PspApplyWorkingSetLimits.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

_QWORD *PspUnlockWorkingSetChangeExclusiveUnsafe()
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v2; // si
  unsigned int v3; // r8d
  int v4; // eax
  __int64 v5; // rcx
  _KLOCK_ENTRY *v6; // rdi
  bool v7; // zf
  __int64 v8; // rcx
  __int64 v9; // rdx
  _QWORD *result; // rax
  __int64 v11; // rcx
  int v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+58h] [rbp+10h]

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14042BDB0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14042BDB0);
  v12 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_14042BDB0) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v2 = ++CurrentThread->AbAllocationRegionCount;
  v3 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v7 = !_BitScanReverse((unsigned int *)&v8, v3);
    v13 = v8;
    if ( v7 )
      goto LABEL_13;
    v4 = 1 << v8;
    v5 = v8;
    v6 = &CurrentThread->LockEntries[v5];
    v3 &= ~v4;
    if ( (v6->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v6->LockState.0 & 1) == 0
      && (*(_QWORD *)&v6->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_14042BDB0 & 0x7FFFFFFFFFFFFFFCLL)
      && v6->LockState.SessionId == SessionId )
    {
      v6->AcquiredByte &= ~1u;
      if ( v6->LockState.0 )
        break;
    }
  }
  if ( !v6 )
  {
LABEL_13:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&qword_14042BDB0, SessionId, 0LL);
    goto LABEL_20;
  }
  v6->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v6->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v5].TreeNode);
  v12 = v6->BoostBitmap.AllFields & 0x1FFFF;
  v6->BoostBitmap.AllFields &= 0xFFFE0000;
  v6->ThreadLocalFlags &= ~1u;
  v6->LockState.0 = 0LL;
  v9 = ((char *)v6 - (char *)CurrentThread - 800) / 96;
  if ( v2 == 1 )
    CurrentThread->AbEntrySummary |= 1 << v9;
  else
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v9);
LABEL_20:
  --CurrentThread->AbAllocationRegionCount;
  result = (_QWORD *)KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&qword_14042BDB0, &v12);
  v7 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v7 )
  {
    result = &CurrentThread->152;
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery(v11);
  }
  return result;
}
