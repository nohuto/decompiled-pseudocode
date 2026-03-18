/*
 * XREFs of NtGdiRemoveFontMemResourceEx @ 0x1C0293220
 * Callers:
 *     <none>
 * Callees:
 *     GreRemoveFontMemResourceEx @ 0x1C026F7E8 (GreRemoveFontMemResourceEx.c)
 */

__int64 __fastcall NtGdiRemoveFontMemResourceEx(__int64 a1)
{
  if ( a1 )
    return GreRemoveFontMemResourceEx(a1);
  else
    return 0LL;
}
