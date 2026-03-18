/*
 * XREFs of CmpGetIndexElementSize @ 0x140652300
 * Callers:
 *     CmpCheckKey @ 0x140651270 (CmpCheckKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetIndexElementSize(_WORD *a1)
{
  return ((*a1 - 26220) & 0xFDFF) != 0 ? 4 : 8;
}
