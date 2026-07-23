/*
 * XREFs of MiUnlockVad @ 0x1400784A0
 * Callers:
 *     MiLockAddressSpaceToo @ 0x140025794 (MiLockAddressSpaceToo.c)
 *     MiDeleteVad @ 0x140065E00 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x140067760 (MiFinishVadDeletion.c)
 *     MiInsertViewOfPhysicalSection @ 0x14018CDD4 (MiInsertViewOfPhysicalSection.c)
 *     MiReleaseCommitForResetPages @ 0x1402A4FB4 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1402A5164 (MiReleaseOutSwappedProcessCommit.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1402A7D10 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiCanDeleteEnclave @ 0x1402BD004 (MiCanDeleteEnclave.c)
 *     MiFindPlaceholderVadToReplace @ 0x1402C4F38 (MiFindPlaceholderVadToReplace.c)
 *     MiWaitForVadDeletion @ 0x1402CB340 (MiWaitForVadDeletion.c)
 *     MiAllocateVirtualMemory @ 0x1405EE650 (MiAllocateVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x1405F1BB0 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1405F2600 (MiReserveUserMemory.c)
 *     MmCleanProcessAddressSpace @ 0x1405F2BC8 (MmCleanProcessAddressSpace.c)
 *     MiMapViewOfImageSection @ 0x1405F4660 (MiMapViewOfImageSection.c)
 *     MiUnlockVadRange @ 0x140605A50 (MiUnlockVadRange.c)
 *     MiMapLockedPagesInUserSpace @ 0x140696CE4 (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140697060 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapViewOfPhysicalSection @ 0x140755690 (MiMapViewOfPhysicalSection.c)
 *     MiCoalescePlaceholderAllocations @ 0x140852C58 (MiCoalescePlaceholderAllocations.c)
 *     MiPerformImageHotPatch @ 0x140857EE0 (MiPerformImageHotPatch.c)
 *     MiSetImageHotPatchAllowed @ 0x140859224 (MiSetImageHotPatchAllowed.c)
 *     MiInitializeEnclave @ 0x14085B4A0 (MiInitializeEnclave.c)
 *     MiTerminateEnclave @ 0x14085B980 (MiTerminateEnclave.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

_QWORD *__fastcall MiUnlockVad(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR SessionId; // r9
  BOOL v6; // r14d
  __int64 v7; // rdx
  bool v8; // zf
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  _KLOCK_ENTRY *v12; // rbx
  __int64 v13; // rdx
  _QWORD *result; // rax
  __int64 v15; // rcx
  int v16; // [rsp+60h] [rbp+8h] BYREF
  int v17; // [rsp+68h] [rbp+10h]

  *(_BYTE *)(a1 + 1752) &= ~0x80u;
  v2 = a2 + 40;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2 + 40);
  v16 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --CurrentThread->SpecialApcDisable;
  v6 = ++CurrentThread->AbAllocationRegionCount == 1;
  LODWORD(v7) = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  v8 = !_BitScanReverse((unsigned int *)&v9, v7);
  v17 = v9;
  if ( v8 )
    goto LABEL_25;
  while ( 1 )
  {
    v10 = 1 << v9;
    v11 = v9;
    v12 = &CurrentThread->LockEntries[v11];
    v7 = ~v10 & (unsigned int)v7;
    if ( (v12->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v12->LockState.0 & 1) == 0
      && (*(_QWORD *)&v12->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v2 & 0x7FFFFFFFFFFFFFFCLL)
      && v12->LockState.SessionId == (_DWORD)SessionId )
    {
      v12->AcquiredByte &= ~1u;
      if ( v12->LockState.0 )
        break;
    }
    v8 = !_BitScanReverse((unsigned int *)&v9, v7);
    v17 = v9;
    if ( v8 )
      goto LABEL_25;
  }
  if ( !v12 )
  {
LABEL_25:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, SessionId, 0LL);
  }
  else
  {
    v12->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v12->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v11].TreeNode, v7);
    v16 = 0;
    v16 = v12->BoostBitmap.AllFields & 0x1FFFF;
    v12->BoostBitmap.AllFields &= 0xFFFE0000;
    v12->ThreadLocalFlags &= ~1u;
    v12->LockState.0 = 0LL;
    v13 = ((char *)v12 - (char *)CurrentThread - 800) / 96;
    if ( v6 )
      CurrentThread->AbEntrySummary |= 1 << v13;
    else
      _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v13);
  }
  --CurrentThread->AbAllocationRegionCount;
  result = (_QWORD *)KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v2, (__int64)&v16);
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 )
  {
    result = &CurrentThread->152;
    if ( (_QWORD *)*result != result )
      result = (_QWORD *)KiCheckForKernelApcDelivery(v15);
  }
  v8 = (*(_WORD *)(a1 + 486))++ == 0xFFFF;
  if ( v8 )
  {
    result = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery(v15);
  }
  return result;
}
