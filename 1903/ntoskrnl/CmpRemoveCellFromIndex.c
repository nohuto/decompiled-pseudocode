/*
 * XREFs of CmpRemoveCellFromIndex @ 0x14083911C
 * Callers:
 *     CmpRemoveSubKeyCellNoCellRef @ 0x1408391BC (CmpRemoveSubKeyCellNoCellRef.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 */

unsigned __int16 __fastcall CmpRemoveCellFromIndex(_WORD *a1, unsigned __int16 a2)
{
  unsigned __int16 result; // ax
  unsigned __int16 v4; // r8
  size_t v5; // r8
  _WORD *v6; // rdx
  _WORD *v7; // rcx
  unsigned __int16 v8; // dx

  result = *a1 - 26220;
  if ( (result & 0xFDFF) != 0 )
  {
    v4 = a1[1] - 1;
    a1[1] = v4;
    if ( !v4 )
      return result;
    v5 = 4 * (v4 - (unsigned __int64)a2);
    v6 = &a1[2 * a2 + 4];
    v7 = &a1[2 * a2 + 2];
  }
  else
  {
    v8 = a1[1] - 1;
    a1[1] = v8;
    if ( !v8 )
      return result;
    v5 = 8 * (v8 - (unsigned __int64)a2);
    v6 = &a1[4 * a2 + 6];
    v7 = &a1[4 * a2 + 2];
  }
  return (unsigned __int16)memmove(v7, v6, v5);
}
