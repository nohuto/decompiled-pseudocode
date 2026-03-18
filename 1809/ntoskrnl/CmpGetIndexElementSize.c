/*
 * XREFs of CmpGetIndexElementSize @ 0x1405DBEB0
 * Callers:
 *     CmpCheckKey @ 0x1405DA210 (CmpCheckKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetIndexElementSize(_WORD *a1)
{
  return ((*a1 - 26220) & 0xFDFF) != 0 ? 4 : 8;
}
