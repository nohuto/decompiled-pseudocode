/*
 * XREFs of ExDeleteLookasideListEx @ 0x1401280D0
 * Callers:
 *     <none>
 * Callees:
 *     ExFlushLookasideListEx @ 0x140128110 (ExFlushLookasideListEx.c)
 *     ExpRemoveGeneralLookaside @ 0x140128154 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeleteLookasideListEx(PLOOKASIDE_LIST_EX Lookaside)
{
  bool v2; // zf
  KSPIN_LOCK *v3; // rcx

  v2 = (Lookaside->L.Type & 1) == 0;
  v3 = &ExNPagedLookasideLock;
  if ( !v2 )
    v3 = &ExPagedLookasideLock;
  ExpRemoveGeneralLookaside(v3);
  ExFlushLookasideListEx(Lookaside);
}
