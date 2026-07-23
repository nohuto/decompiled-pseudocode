/*
 * XREFs of MI_IS_RESET_PTE @ 0x140081D30
 * Callers:
 *     MiRestoreTransitionPte @ 0x140081000 (MiRestoreTransitionPte.c)
 *     MiReservePageFileSpaceForPage @ 0x1400817F0 (MiReservePageFileSpaceForPage.c)
 *     MiActOnPte @ 0x14009404C (MiActOnPte.c)
 *     MiCombineCandidate @ 0x1400B2610 (MiCombineCandidate.c)
 *     MiWsleFlush @ 0x1400B3250 (MiWsleFlush.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_IS_RESET_PTE(unsigned __int64 a1)
{
  if ( (a1 & 1) != 0 || (a1 & 0x400) != 0 || (a1 & 0x800) != 0 || (a1 & 4) != 0 || (a1 & 2) != 0 )
    return 0LL;
  if ( qword_14043B180 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_14043B180;
  }
  return HIDWORD(a1) == 1;
}
