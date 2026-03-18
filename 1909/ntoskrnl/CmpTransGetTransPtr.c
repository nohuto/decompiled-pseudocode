/*
 * XREFs of CmpTransGetTransPtr @ 0x14082F10C
 * Callers:
 *     CmpTransIsTransActive @ 0x14027FD2C (CmpTransIsTransActive.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CmpTransGetTransPtr(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFEuLL;
}
