/*
 * XREFs of ?DxgkEngGetRgnDataApiExt@@YAIPEAUHRGN__@@IPEAU_RGNDATA@@@Z @ 0x1C00FCF00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkEngGetRgnDataApiExt(HRGN a1, unsigned int a2, struct _RGNDATA *a3)
{
  int RgnDataSupported; // eax
  unsigned int v7; // r9d

  RgnDataSupported = IsDxgkEngGetRgnDataSupported();
  v7 = 0;
  if ( RgnDataSupported >= 0 )
    return (unsigned int)DxgkEngGetRgnData(a1, a2, a3, 0LL);
  return v7;
}
