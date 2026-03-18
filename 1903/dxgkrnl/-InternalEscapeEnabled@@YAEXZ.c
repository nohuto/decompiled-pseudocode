/*
 * XREFs of ?InternalEscapeEnabled@@YAEXZ @ 0x1C02404F0
 * Callers:
 *     DxgkEscape @ 0x1C01012F0 (DxgkEscape.c)
 * Callees:
 *     DxgkpIsDrtEnabled @ 0x1C023A3D0 (DxgkpIsDrtEnabled.c)
 */

unsigned __int8 __fastcall InternalEscapeEnabled(__int64 a1, __int64 a2)
{
  char v2; // bl

  v2 = 0;
  if ( g_OSTestSigningEnabled || DxgkpIsDrtEnabled(a1, a2) )
    return 1;
  return v2;
}
