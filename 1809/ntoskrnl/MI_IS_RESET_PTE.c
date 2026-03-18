/*
 * XREFs of MI_IS_RESET_PTE @ 0x140081D40
 * Callers:
 *     MiRestoreTransitionPte @ 0x140081010 (MiRestoreTransitionPte.c)
 *     MiReservePageFileSpaceForPage @ 0x140081800 (MiReservePageFileSpaceForPage.c)
 *     MiActOnPte @ 0x14009410C (MiActOnPte.c)
 *     MiCombineCandidate @ 0x1400B26B0 (MiCombineCandidate.c)
 *     MiWsleFlush @ 0x1400B32F0 (MiWsleFlush.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_IS_RESET_PTE(unsigned __int64 a1)
{
  if ( (a1 & 1) != 0 || (a1 & 0x400) != 0 || (a1 & 0x800) != 0 || (a1 & 4) != 0 || (a1 & 2) != 0 )
    return 0LL;
  if ( qword_14043A0C0 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_14043A0C0;
  }
  return HIDWORD(a1) == 1;
}
