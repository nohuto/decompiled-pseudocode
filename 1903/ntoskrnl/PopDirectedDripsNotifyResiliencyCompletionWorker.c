/*
 * XREFs of PopDirectedDripsNotifyResiliencyCompletionWorker @ 0x1402F11B0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     PopPdcCompleteResiliencyCallback @ 0x1408ABC34 (PopPdcCompleteResiliencyCallback.c)
 */

_QWORD *__fastcall PopDirectedDripsNotifyResiliencyCompletionWorker(__int64 a1)
{
  unsigned __int64 v1; // rsi
  unsigned int v3; // ebp
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v6; // r14
  unsigned int v7; // r8d
  int v8; // eax
  __int64 v9; // rcx
  _KLOCK_ENTRY *v10; // rdi
  bool v11; // zf
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // ecx
  __int64 v15; // rdx
  _QWORD *result; // rax
  __int64 v17; // rcx
  int v18; // [rsp+60h] [rbp+8h] BYREF
  int v19; // [rsp+68h] [rbp+10h]

  v1 = a1 + 160;
  v3 = 0;
  ExAcquirePushLockExclusiveEx(a1 + 160, 0LL);
  if ( *(_BYTE *)(a1 + 176) )
  {
    v3 = *(_DWORD *)(a1 + 172);
    *(_DWORD *)(a1 + 172) = 0;
    *(_BYTE *)(a1 + 176) = 0;
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 216), 0);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v1);
  v18 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v1) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v6 = ++CurrentThread->AbAllocationRegionCount;
  v7 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v11 = !_BitScanReverse((unsigned int *)&v12, v7);
    v19 = v12;
    if ( v11 )
      goto LABEL_15;
    v8 = 1 << v12;
    v9 = v12;
    v10 = &CurrentThread->LockEntries[v9];
    v7 &= ~v8;
    if ( (v10->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v10->LockState.0 & 1) == 0
      && (*(_QWORD *)&v10->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v1 & 0x7FFFFFFFFFFFFFFCLL)
      && v10->LockState.SessionId == SessionId )
    {
      v10->AcquiredByte &= ~1u;
      if ( v10->LockState.0 )
        break;
    }
  }
  if ( !v10 )
  {
LABEL_15:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v1, SessionId, 0LL);
    goto LABEL_22;
  }
  v10->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v10->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v9].TreeNode);
  v13 = v10->BoostBitmap.AllFields & 0x1FFFF;
  v14 = v10->BoostBitmap.AllFields & 0xFFFE0000;
  v10->ThreadLocalFlags &= ~1u;
  v18 = v13;
  v10->BoostBitmap.AllFields = v14;
  v10->LockState.0 = 0LL;
  v15 = ((char *)v10 - (char *)CurrentThread - 800) / 96;
  if ( v6 == 1 )
    CurrentThread->AbEntrySummary |= 1 << v15;
  else
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v15);
LABEL_22:
  --CurrentThread->AbAllocationRegionCount;
  result = (_QWORD *)KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v1, &v18);
  v11 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v11 )
  {
    result = &CurrentThread->152;
    if ( (_QWORD *)*result != result )
      result = (_QWORD *)KiCheckForKernelApcDelivery(v17);
  }
  if ( v3 )
    return (_QWORD *)PopPdcCompleteResiliencyCallback(v17, v3);
  return result;
}
