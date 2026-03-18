/*
 * XREFs of MI_IS_RESET_PTE @ 0x1400241E0
 * Callers:
 *     MiWsleFlush @ 0x140025220 (MiWsleFlush.c)
 *     MiReservePageFileSpaceForPage @ 0x14002D250 (MiReservePageFileSpaceForPage.c)
 *     MiRestoreTransitionPte @ 0x1400BB530 (MiRestoreTransitionPte.c)
 *     MiActOnPte @ 0x1400BE5C0 (MiActOnPte.c)
 *     MiCombineCandidate @ 0x140140780 (MiCombineCandidate.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_IS_RESET_PTE(unsigned __int64 a1)
{
  if ( (a1 & 1) != 0 || (a1 & 0x400) != 0 || (a1 & 0x800) != 0 || (a1 & 4) != 0 || (a1 & 2) != 0 )
    return 0LL;
  if ( qword_140465800 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140465800;
  }
  return HIDWORD(a1) == 1;
}
