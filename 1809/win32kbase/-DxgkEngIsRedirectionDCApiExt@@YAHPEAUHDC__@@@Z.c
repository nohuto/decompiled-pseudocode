/*
 * XREFs of ?DxgkEngIsRedirectionDCApiExt@@YAHPEAUHDC__@@@Z @ 0x1C00FCFE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkEngIsRedirectionDCApiExt(HDC a1)
{
  int IsRedirectionDCSupported; // eax
  unsigned int v3; // edx

  IsRedirectionDCSupported = IsDxgkEngIsRedirectionDCSupported();
  v3 = 0;
  if ( IsRedirectionDCSupported >= 0 )
    return (unsigned int)DxgkEngIsRedirectionDC(a1, 0LL);
  return v3;
}
