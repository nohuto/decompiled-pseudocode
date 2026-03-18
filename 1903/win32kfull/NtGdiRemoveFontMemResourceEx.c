/*
 * XREFs of NtGdiRemoveFontMemResourceEx @ 0x1C02A8D50
 * Callers:
 *     <none>
 * Callees:
 *     GreRemoveFontMemResourceEx @ 0x1C02880F0 (GreRemoveFontMemResourceEx.c)
 */

__int64 __fastcall NtGdiRemoveFontMemResourceEx(__int64 a1)
{
  if ( a1 )
    return GreRemoveFontMemResourceEx(a1);
  else
    return 0LL;
}
