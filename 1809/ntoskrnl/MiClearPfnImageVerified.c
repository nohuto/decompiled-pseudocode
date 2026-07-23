/*
 * XREFs of MiClearPfnImageVerified @ 0x140082944
 * Callers:
 *     MiFreeLargePageMemory @ 0x140026200 (MiFreeLargePageMemory.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x140039FD0 (MiInsertPageInList.c)
 *     MiProbeLeafPteAccess @ 0x1400420D0 (MiProbeLeafPteAccess.c)
 *     MiFlushSectionInternal @ 0x14004C270 (MiFlushSectionInternal.c)
 *     MiGatherMappedPages @ 0x14007E6A0 (MiGatherMappedPages.c)
 *     MiRestoreTransitionPte @ 0x140081000 (MiRestoreTransitionPte.c)
 *     MiDeleteClusterSection @ 0x140081EF0 (MiDeleteClusterSection.c)
 *     MiCopyPage @ 0x1400B1B90 (MiCopyPage.c)
 *     MiStealPage @ 0x1400EBFC4 (MiStealPage.c)
 *     MiReferencePageForModifiedWrite @ 0x14011BC04 (MiReferencePageForModifiedWrite.c)
 *     MiDeletePerSessionProtos @ 0x1401370A4 (MiDeletePerSessionProtos.c)
 *     MiDeleteClusterPage @ 0x1402C641C (MiDeleteClusterPage.c)
 *     MmChangeImageProtection @ 0x140652920 (MmChangeImageProtection.c)
 *     MiTradeBootImagePage @ 0x1409B96AC (MiTradeBootImagePage.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiGetPagePrivilege @ 0x1400B29B0 (MiGetPagePrivilege.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KeSetPagePrivilege @ 0x14028DE10 (KeSetPagePrivilege.c)
 */

char __fastcall MiClearPfnImageVerified(ULONG_PTR BugCheckParameter2, char a2)
{
  char result; // al
  unsigned __int8 v5; // di
  struct _KPRCB *CurrentPrcb; // rcx
  _BYTE v7[24]; // [rsp+30h] [rbp-18h] BYREF

  result = (*(_QWORD *)(BugCheckParameter2 + 40) >> 54) & 7;
  if ( result == 3 )
  {
    if ( (a2 & 4) != 0 )
      v5 = 17;
    else
      v5 = MiLockPageInline(BugCheckParameter2);
    if ( (a2 & 8) != 0
      && (unsigned int)MiGetPagePrivilege(BugCheckParameter2)
      && (int)KeSetPagePrivilege((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48, v7, (a2 & 0x10) != 0 ? 32 : 16) < 0 )
    {
      KeBugCheckEx(0x1Au, 0x5150BuLL, (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48, 0LL, 0LL);
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
