/*
 * XREFs of MiUpdatePfnOnSlabStandbyList @ 0x1402DCCB4
 * Callers:
 *     MiInsertPageInList @ 0x140026690 (MiInsertPageInList.c)
 *     MiReplaceTransitionPage @ 0x1400C2CE8 (MiReplaceTransitionPage.c)
 * Callees:
 *     MiSetPfnNodeBlinkHigh @ 0x1400C20A4 (MiSetPfnNodeBlinkHigh.c)
 */

unsigned __int64 __fastcall MiUpdatePfnOnSlabStandbyList(__int64 a1, int a2)
{
  unsigned __int64 result; // rax

  if ( a2 )
  {
    result = 0x8000000000000000uLL;
    *(_QWORD *)a1 |= 0x8000000000000000uLL;
  }
  else
  {
    *(_WORD *)(a1 + 36) = 0;
    MiSetPfnNodeBlinkHigh(a1, 0, 1);
    result = 0xFFFFFFFFFLL;
    *(_BYTE *)(a1 + 39) = 0;
    *(_QWORD *)a1 &= 0xFFFFFFFFFuLL;
  }
  return result;
}
