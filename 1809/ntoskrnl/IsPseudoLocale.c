/*
 * XREFs of IsPseudoLocale @ 0x1403195A4
 * Callers:
 *     ExpValidateLocale @ 0x1408CE0B8 (ExpValidateLocale.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsPseudoLocale(int a1)
{
  return a1 == 1281 || a1 == 1534 || a1 == 2305 || a1 == 2559;
}
