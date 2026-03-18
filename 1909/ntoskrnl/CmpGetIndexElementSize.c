/*
 * XREFs of CmpGetIndexElementSize @ 0x140665400
 * Callers:
 *     CmpCheckKey @ 0x140664430 (CmpCheckKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetIndexElementSize(_WORD *a1)
{
  return ((*a1 - 26220) & 0xFDFF) != 0 ? 4 : 8;
}
