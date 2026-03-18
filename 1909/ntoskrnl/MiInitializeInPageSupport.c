/*
 * XREFs of MiInitializeInPageSupport @ 0x14005A840
 * Callers:
 *     MiGetInPageSupportBlock @ 0x140093A1C (MiGetInPageSupportBlock.c)
 *     MiMigratePfn @ 0x1400B3DB0 (MiMigratePfn.c)
 *     MiMakeOutswappedPageResident @ 0x1402BB4A8 (MiMakeOutswappedPageResident.c)
 *     MiPfIssueCoalescedSupport @ 0x1402C6B54 (MiPfIssueCoalescedSupport.c)
 *     MiGetReadyInPageBlock @ 0x14088AA9C (MiGetReadyInPageBlock.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     PsGetPagePriorityThread @ 0x14005A580 (PsGetPagePriorityThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401C0674 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall MiInitializeInPageSupport(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 v4; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int Queue; // eax
  unsigned int PagePriorityThread; // eax
  int v8; // edx
  char v9; // cl
  __int64 result; // rax
  struct _KTHREAD *v11; // rbx
  __int64 v12; // rax
  char v13; // cl
  int SessionId; // eax
  bool v15; // zf
  unsigned __int8 AbOrphanedEntrySummary; // si
  int v17; // [rsp+48h] [rbp+10h] BYREF

  memset((void *)BugCheckParameter2, 0, 0x110uLL);
  *(_WORD *)(BugCheckParameter2 + 33) = 1536;
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
    PagePriorityThread = (Queue >> 9) & 7;
  else
    PagePriorityThread = PsGetPagePriorityThread((__int64)CurrentThread);
  v8 = *(_DWORD *)(BugCheckParameter2 + 192);
  if ( PagePriorityThread > 5 )
  {
    LOBYTE(PagePriorityThread) = 5;
    v9 = 5;
  }
  else
  {
    v8 |= 0x80000u;
    if ( PagePriorityThread )
      v9 = PagePriorityThread - 1;
    else
      v9 = 0;
  }
  result = PagePriorityThread & 7;
  *(_DWORD *)(BugCheckParameter2 + 192) = v8 & 0xFFFF81FF | (((unsigned int)result | (8 * (v9 & 7))) << 9);
  if ( (a2 & 2) != 0 )
  {
    v17 = 0;
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
        goto LABEL_26;
      }
      AbOrphanedEntrySummary = v11->AbOrphanedEntrySummary;
      v11->AbOrphanedEntrySummary = 0;
      LOBYTE(v12) = AbOrphanedEntrySummary | v11->AbEntrySummary;
    }
    v13 = v12;
    _BitScanForward((unsigned int *)&v12, (unsigned __int8)v12);
    v11->AbEntrySummary = v13 & ~(1 << v12);
    v4 = (__int64)&v11->LockEntries[v12];
    if ( v4 )
    {
      if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
        SessionId = MmGetSessionIdEx((__int64)v11->ApcState.Process);
      else
        SessionId = -1;
      *(_DWORD *)(v4 + 40) = SessionId;
      *(_QWORD *)(v4 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_15:
      --v11->AbAllocationRegionCount;
      result = KiAbThreadRemoveBoosts((ULONG_PTR)v11, BugCheckParameter2, &v17);
      v15 = v11->SpecialApcDisable++ == -1;
      if ( v15 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
        result = KiCheckForKernelApcDelivery();
      *(_QWORD *)(BugCheckParameter2 + 216) = v4;
      if ( v4 )
        *(_BYTE *)(v4 + 26) |= 1u;
      return result;
    }
LABEL_26:
    _interlockedbittestandset((volatile signed __int32 *)&v11->116 + 1, 0x10u);
    goto LABEL_15;
  }
  return result;
}
