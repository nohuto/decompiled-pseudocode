/*
 * XREFs of ?InternalEscapeEnabled@@YAEXZ @ 0x1C020D524
 * Callers:
 *     DxgkEscape @ 0x1C01124E0 (DxgkEscape.c)
 * Callees:
 *     DxgkpIsDrtEnabled @ 0x1C0208860 (DxgkpIsDrtEnabled.c)
 */

unsigned __int8 InternalEscapeEnabled(void)
{
  char v0; // bl

  v0 = 0;
  if ( g_OSTestSigningEnabled || DxgkpIsDrtEnabled() )
    return 1;
  return v0;
}
