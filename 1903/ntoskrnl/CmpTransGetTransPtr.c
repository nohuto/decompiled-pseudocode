/*
 * XREFs of CmpTransGetTransPtr @ 0x14082F29C
 * Callers:
 *     CmpTransIsTransActive @ 0x14027FFCC (CmpTransIsTransActive.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CmpTransGetTransPtr(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFEuLL;
}
