/*
 * XREFs of SetFFHPState @ 0x1C0001310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SetFFHPState(__int64 a1, char a2)
{
  __writemsr(0xC0010062, a2 & 0xF);
  return 0LL;
}
