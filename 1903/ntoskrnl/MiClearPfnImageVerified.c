/*
 * XREFs of MiClearPfnImageVerified @ 0x1400DBB6C
 * Callers:
 *     MiInsertPageInList @ 0x1400262A0 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002AEF0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCopyPage @ 0x14002C5D0 (MiCopyPage.c)
 *     MiFlushSectionInternal @ 0x140051530 (MiFlushSectionInternal.c)
 *     MiGatherMappedPages @ 0x14007B1D8 (MiGatherMappedPages.c)
 *     MiProbeLeafPteAccess @ 0x14008F7B0 (MiProbeLeafPteAccess.c)
 *     MiStealPage @ 0x1400A0834 (MiStealPage.c)
 *     MiReferencePageForModifiedWrite @ 0x1400A469C (MiReferencePageForModifiedWrite.c)
 *     MiDeleteClusterPage @ 0x1400B8200 (MiDeleteClusterPage.c)
 *     MiDeleteClusterSection @ 0x1400D8E50 (MiDeleteClusterSection.c)
 *     MiRestoreTransitionPte @ 0x1400DB6B0 (MiRestoreTransitionPte.c)
 *     MiDeletePerSessionProtos @ 0x140138800 (MiDeletePerSessionProtos.c)
 *     MiReadyLargePageToFree @ 0x1401468A0 (MiReadyLargePageToFree.c)
 *     MiFreeLargePageSubPageAsSmall @ 0x1402DF7B4 (MiFreeLargePageSubPageAsSmall.c)
 *     MmChangeImageProtection @ 0x1406A5FC0 (MmChangeImageProtection.c)
 *     MiTradeBootImagePage @ 0x1409EF93C (MiTradeBootImagePage.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x140024900 (MiGetPagePrivilege.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     KeSetPagePrivilege @ 0x1402A4778 (KeSetPagePrivilege.c)
 */

char __fastcall MiClearPfnImageVerified(ULONG_PTR BugCheckParameter2, char a2)
{
  char result; // al
  unsigned __int8 v5; // di
  int PagePrivilege; // eax
  __int64 v7; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = 0LL;
  v9[1] = 0LL;
  result = (*(_QWORD *)(BugCheckParameter2 + 40) >> 54) & 7;
  if ( result == 3 )
  {
    if ( (a2 & 4) != 0 )
      v5 = 17;
    else
      v5 = MiLockPageInline(BugCheckParameter2);
    if ( (a2 & 8) != 0 )
    {
      PagePrivilege = MiGetPagePrivilege(BugCheckParameter2, 1, v9);
      if ( PagePrivilege )
      {
        v7 = (PagePrivilege & 0x20) != 0 ? 512LL : (a2 & 0x10) != 0 ? 32 : 16;
        if ( (int)KeSetPagePrivilege((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48, v9, v7) < 0 )
          KeBugCheckEx(0x1Au, 0x5150BuLL, (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48, 0LL, 0LL);
      }
    }
    result = -1;
    *(_QWORD *)(BugCheckParameter2 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    if ( v5 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      result = v5;
      __writecr8(v5);
    }
  }
  return result;
}
