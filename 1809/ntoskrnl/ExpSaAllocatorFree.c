/*
 * XREFs of ExpSaAllocatorFree @ 0x1401672E8
 * Callers:
 *     ExSaFree @ 0x140167270 (ExSaFree.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     ExfAcquirePushLockSharedEx @ 0x140005550 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExpSaPageGroupFreeMemory @ 0x1401673B4 (ExpSaPageGroupFreeMemory.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ExpSaAllocatorOptimizeList @ 0x14031F694 (ExpSaAllocatorOptimizeList.c)
 */

_QWORD *__fastcall ExpSaAllocatorFree(ULONG_PTR BugCheckParameter2, __int64 *a2, __int64 a3, unsigned int a4)
{
  int v4; // edi
  _RTL_BALANCED_NODE *v9; // rax
  _RTL_BALANCED_NODE *v10; // rbp
  char v11; // r15
  signed __int32 v12; // eax
  _QWORD *result; // rax
  __int64 *v14; // rax
  __int64 **v15; // rcx
  __int64 **v16; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v19; // r14
  unsigned int v20; // r8d
  bool v21; // zf
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  _KLOCK_ENTRY *v25; // rbp
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // [rsp+78h] [rbp+10h] BYREF

  v4 = *((_DWORD *)a2 + 10);
  v9 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
  v10 = v9;
  if ( v4 == 1 )
  {
    v11 = 1;
    if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v9, BugCheckParameter2);
    if ( v10 )
      BYTE2(v10[1].Left) |= 1u;
    *((_DWORD *)a2 + 10) = 0;
    v14 = (__int64 *)*a2;
    if ( *(__int64 **)(*a2 + 8) != a2
      || (v15 = (__int64 **)a2[1], *v15 != a2)
      || (*v15 = v14,
          v14[1] = (__int64)v15,
          v16 = *(__int64 ***)(BugCheckParameter2 + 16),
          *v16 != (__int64 *)(BugCheckParameter2 + 8)) )
    {
      __fastfail(3u);
    }
    *a2 = BugCheckParameter2 + 8;
    a2[1] = (__int64)v16;
    *v16 = a2;
    *(_QWORD *)(BugCheckParameter2 + 16) = a2;
  }
  else
  {
    v11 = 0;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)BugCheckParameter2, v9, BugCheckParameter2);
    if ( v10 )
      BYTE2(v10[1].Left) |= 1u;
  }
  if ( (unsigned __int8)ExpSaPageGroupFreeMemory(a2, a3, a4) )
  {
    _m_prefetchw((const void *)(BugCheckParameter2 + 64));
    v12 = _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 64), 2u) | 2;
  }
  else
  {
    v12 = *(_DWORD *)(BugCheckParameter2 + 64);
  }
  if ( (v12 & 2) != 0 )
  {
    if ( v11 || _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) == 17 )
      goto LABEL_27;
    v11 = 0;
  }
  if ( !v11 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
    return (_QWORD *)KeAbPostRelease(BugCheckParameter2);
  }
LABEL_27:
  ExpSaAllocatorOptimizeList(BugCheckParameter2);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  v28 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --CurrentThread->SpecialApcDisable;
  v19 = ++CurrentThread->AbAllocationRegionCount;
  v20 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v21 = !_BitScanReverse((unsigned int *)&v22, v20);
    if ( v21 )
      goto LABEL_34;
    v23 = 1 << v22;
    v24 = v22;
    v25 = &CurrentThread->LockEntries[v24];
    v20 &= ~v23;
    if ( (v25->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v25->LockState.0 & 1) == 0
      && (*(_QWORD *)&v25->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
      && v25->LockState.SessionId == (_DWORD)SessionId )
    {
      v25->AcquiredByte &= ~1u;
      if ( v25->LockState.0 )
        break;
    }
  }
  if ( !v25 )
  {
LABEL_34:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, (unsigned int)SessionId, 0LL);
    goto LABEL_46;
  }
  v25->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v25->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v24].TreeNode, SessionId);
  v28 = 0;
  v28 = v25->BoostBitmap.AllFields & 0x1FFFF;
  v25->BoostBitmap.AllFields &= 0xFFFE0000;
  v25->ThreadLocalFlags &= ~1u;
  v25->LockState.0 = 0LL;
  v26 = ((char *)v25 - (char *)CurrentThread - 800) / 96;
  if ( v19 == 1 )
    CurrentThread->AbEntrySummary |= 1 << v26;
  else
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v26);
LABEL_46:
  --CurrentThread->AbAllocationRegionCount;
  result = (_QWORD *)KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, BugCheckParameter2, (__int64)&v28);
  v21 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v21 )
  {
    result = &CurrentThread->152;
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery(v27);
  }
  return result;
}
