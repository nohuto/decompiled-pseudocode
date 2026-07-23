/*
 * XREFs of MiInitializeInPageSupport @ 0x14002C6B0
 * Callers:
 *     MiGetInPageSupportBlock @ 0x14002C610 (MiGetInPageSupportBlock.c)
 *     MiMigratePfn @ 0x14003C640 (MiMigratePfn.c)
 *     MiMakeOutswappedPageResident @ 0x1402A4558 (MiMakeOutswappedPageResident.c)
 *     MiPfIssueCoalescedSupport @ 0x1402AF194 (MiPfIssueCoalescedSupport.c)
 *     MiGetReadyInPageBlock @ 0x14085054C (MiGetReadyInPageBlock.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14030FC24 (EtwTraceAutoBoostEntryExhaustion.c)
 */

__int64 __fastcall MiInitializeInPageSupport(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Queue; // edx
  unsigned int v7; // edx
  int v8; // ecx
  char v9; // al
  __int64 result; // rax
  struct _KTHREAD *v11; // rdi
  __int64 v12; // rax
  char v13; // cl
  int SessionId; // eax
  __int64 v15; // rcx
  int v17; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v19; // [rsp+48h] [rbp+10h] BYREF

  memset((void *)BugCheckParameter2, 0, 0x110uLL);
  *(_WORD *)(BugCheckParameter2 + 32) = 0;
  *(_BYTE *)(BugCheckParameter2 + 34) = 6;
  v4 = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 36) = 0;
  *(_QWORD *)(BugCheckParameter2 + 48) = BugCheckParameter2 + 40;
  *(_QWORD *)(BugCheckParameter2 + 40) = BugCheckParameter2 + 40;
  *(_WORD *)(BugCheckParameter2 + 56) = 0;
  *(_BYTE *)(BugCheckParameter2 + 58) = 6;
  *(_DWORD *)(BugCheckParameter2 + 60) = 0;
  *(_QWORD *)(BugCheckParameter2 + 72) = BugCheckParameter2 + 64;
  *(_QWORD *)(BugCheckParameter2 + 64) = BugCheckParameter2 + 64;
  if ( (a2 & 1) != 0 )
    *(_DWORD *)(BugCheckParameter2 + 192) |= 0x40u;
  *(_DWORD *)(BugCheckParameter2 + 176) = 1;
  *(_QWORD *)(BugCheckParameter2 + 24) = BugCheckParameter2 + 16;
  *(_QWORD *)(BugCheckParameter2 + 16) = BugCheckParameter2 + 16;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(BugCheckParameter2 + 152) = CurrentThread;
  Queue = (unsigned int)CurrentThread[1].Queue;
  if ( (Queue & 0x100) != 0 )
  {
    v7 = (Queue >> 9) & 7;
  }
  else
  {
    v7 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
    if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    {
      v17 = 2;
      if ( v7 < 2 )
        v17 = v7;
      v7 = v17;
    }
  }
  v8 = *(_DWORD *)(BugCheckParameter2 + 192);
  if ( v7 > 5 )
  {
    v7 = 5;
    v9 = 5;
  }
  else
  {
    v8 |= 0x80000u;
    *(_DWORD *)(BugCheckParameter2 + 192) = v8;
    if ( v7 )
      v9 = v7 - 1;
    else
      v9 = 0;
  }
  result = (unsigned __int8)(v9 & 7) << 12;
  *(_DWORD *)(BugCheckParameter2 + 192) = result | (v7 << 9) & 0xFFFF8FFF | v8 & 0xFFFF81FF;
  if ( (a2 & 2) != 0 )
  {
    v19 = 0;
    v11 = KeGetCurrentThread();
    --v11->SpecialApcDisable;
    if ( ++v11->AbAllocationRegionCount != 1 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v11, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
    LOBYTE(v12) = v11->AbEntrySummary;
    if ( !(_BYTE)v12 )
    {
      if ( !v11->AbOrphanedEntrySummary )
      {
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(v11, BugCheckParameter2);
        goto LABEL_30;
      }
      AbOrphanedEntrySummary = v11->AbOrphanedEntrySummary;
      v11->AbOrphanedEntrySummary = 0;
      LOBYTE(v12) = v11->AbEntrySummary | AbOrphanedEntrySummary;
      v11->AbEntrySummary = v12;
    }
    v13 = v12;
    _BitScanForward((unsigned int *)&v12, (unsigned __int8)v12);
    v11->AbEntrySummary = v13 & ~(1 << v12);
    v4 = (__int64)&v11->LockEntries[v12];
    if ( v4 )
    {
      if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
        && byte_14043CA10[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
      {
        SessionId = MmGetSessionIdEx(v11->ApcState.Process);
      }
      else
      {
        SessionId = -1;
      }
      *(_DWORD *)(v4 + 40) = SessionId;
      *(_QWORD *)(v4 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
      goto LABEL_16;
    }
LABEL_30:
    _interlockedbittestandset((volatile signed __int32 *)&v11->116 + 1, 0x10u);
LABEL_16:
    --v11->AbAllocationRegionCount;
    result = KiAbThreadRemoveBoosts(v11, BugCheckParameter2, &v19);
    if ( v11->SpecialApcDisable++ == -1 )
    {
      result = (__int64)&v11->152;
      if ( *(_QWORD *)result != result )
        result = KiCheckForKernelApcDelivery(v15);
    }
    *(_QWORD *)(BugCheckParameter2 + 216) = v4;
    if ( v4 )
      *(_BYTE *)(v4 + 26) |= 1u;
  }
  return result;
}
