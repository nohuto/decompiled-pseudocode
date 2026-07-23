/*
 * XREFs of ExDisableHandleTracing @ 0x140319DA8
 * Callers:
 *     PsSetProcessHandleTracingInformation @ 0x1408899B4 (PsSetProcessHandleTracingInformation.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ExDereferenceHandleDebugInfo @ 0x1408CEED4 (ExDereferenceHandleDebugInfo.c)
 */

_QWORD *__fastcall ExDisableHandleTracing(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v3; // rsi
  __int64 v4; // r14
  struct _KTHREAD *v5; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v7; // r12
  unsigned int v8; // r8d
  int v9; // eax
  __int64 v10; // rcx
  _KLOCK_ENTRY *v11; // rdi
  bool v12; // zf
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *result; // rax
  int v17; // [rsp+60h] [rbp+8h] BYREF
  int v18; // [rsp+68h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = a1 + 56;
  ExAcquirePushLockExclusiveEx(a1 + 56, 0LL);
  v4 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 96) = 0LL;
  if ( v4 && (*(_DWORD *)(v4 + 8) & 8) == 0 )
    *(_BYTE *)(a1 + 44) &= ~2u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  v17 = 0;
  v5 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v3) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)v5->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v5->SpecialApcDisable;
  v7 = ++v5->AbAllocationRegionCount;
  v8 = ((char)v5->AbEntrySummary | (char)v5->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v12 = !_BitScanReverse((unsigned int *)&v13, v8);
    v18 = v13;
    if ( v12 )
      goto LABEL_16;
    v9 = 1 << v13;
    v10 = v13;
    v11 = &v5->LockEntries[v10];
    v8 &= ~v9;
    if ( (v11->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v11->LockState.0 & 1) == 0
      && (*(_QWORD *)&v11->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v3 & 0x7FFFFFFFFFFFFFFCLL)
      && v11->LockState.SessionId == (_DWORD)SessionId )
    {
      v11->AcquiredByte &= ~1u;
      if ( v11->LockState.0 )
        break;
    }
  }
  if ( !v11 )
  {
LABEL_16:
    if ( (*((_DWORD *)&v5->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v5, v3, (unsigned int)SessionId, 0LL);
    goto LABEL_23;
  }
  v11->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v11->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v5->LockEntries[v10].TreeNode, SessionId);
  v17 = 0;
  v17 = v11->BoostBitmap.AllFields & 0x1FFFF;
  v11->BoostBitmap.AllFields &= 0xFFFE0000;
  v11->ThreadLocalFlags &= ~1u;
  v11->LockState.0 = 0LL;
  v14 = ((char *)v11 - (char *)v5 - 800) / 96;
  if ( v7 == 1 )
    v5->AbEntrySummary |= 1 << v14;
  else
    _InterlockedOr8((volatile signed __int8 *)&v5->AbOrphanedEntrySummary, 1 << v14);
LABEL_23:
  --v5->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v5, v3, (__int64)&v17);
  v12 = v5->SpecialApcDisable++ == -1;
  if ( v12 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v5->ApcState.ApcListHead[0].Flink != &v5->152 )
    KiCheckForKernelApcDelivery(v15);
  result = KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v4 )
    return (_QWORD *)ExDereferenceHandleDebugInfo(a1, v4);
  return result;
}
