/*
 * XREFs of MiInvalidPteConforms @ 0x140039720
 * Callers:
 *     MiCheckProtoPtePageState @ 0x140030780 (MiCheckProtoPtePageState.c)
 *     MiPfPutPagesInTransition @ 0x140064E70 (MiPfPutPagesInTransition.c)
 *     MiLockLeafPage @ 0x140080ED0 (MiLockLeafPage.c)
 *     MiReservePageFileSpaceForPage @ 0x140081800 (MiReservePageFileSpaceForPage.c)
 *     MiTryLockLeafPage @ 0x140082A0C (MiTryLockLeafPage.c)
 *     MiDeleteSubsectionPages @ 0x140094F80 (MiDeleteSubsectionPages.c)
 *     MiLockTransitionLeafPage @ 0x140095744 (MiLockTransitionLeafPage.c)
 *     MiGetWorkingSetInfoList @ 0x1400965F0 (MiGetWorkingSetInfoList.c)
 *     MiTradePage @ 0x14009C0F0 (MiTradePage.c)
 *     MiMakeOutswappedPageResident @ 0x1402A4268 (MiMakeOutswappedPageResident.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiInvalidPteConforms(__int64 a1)
{
  return (a1 & 1) == 0 && (!a1 || !qword_14043A0C0 || (qword_14043A0C0 & a1) != 0);
}
