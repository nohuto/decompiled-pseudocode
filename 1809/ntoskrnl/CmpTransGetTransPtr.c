/*
 * XREFs of CmpTransGetTransPtr @ 0x1407F64E0
 * Callers:
 *     CmpTransIsTransActive @ 0x14026C56C (CmpTransIsTransActive.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CmpTransGetTransPtr(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFEuLL;
}
