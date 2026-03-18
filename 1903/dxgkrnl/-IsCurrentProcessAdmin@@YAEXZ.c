/*
 * XREFs of ?IsCurrentProcessAdmin@@YAEXZ @ 0x1C0032ECC
 * Callers:
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x1C00411D8 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 *     DxgkEscape @ 0x1C01012F0 (DxgkEscape.c)
 *     ?IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ @ 0x1C01ED790 (-IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ.c)
 * Callees:
 *     <none>
 */

bool IsCurrentProcessAdmin(void)
{
  int v0; // eax
  char v1; // cl
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v0 = RtlCheckTokenMembership(0LL, SeExports->SeAliasAdminsSid, &v3);
  v1 = 0;
  if ( v0 >= 0 )
    return v3 != 0;
  return v1;
}
