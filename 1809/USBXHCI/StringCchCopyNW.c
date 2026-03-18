/*
 * XREFs of StringCchCopyNW @ 0x1C00435E0
 * Callers:
 *     WerKernelSubmitReport @ 0x1C004393C (WerKernelSubmitReport.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCchCopyNW(STRSAFE_LPWSTR pszDest, size_t cchDest, STRSAFE_PCNZWCH pszSrc, size_t cchToCopy)
{
  HRESULT v4; // r10d
  size_t v5; // r9
  signed __int64 v6; // r8
  wchar_t v7; // ax
  STRSAFE_LPWSTR v8; // rax

  v4 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 < 0 )
  {
    if ( cchDest )
      goto LABEL_15;
  }
  else
  {
    if ( cchToCopy > 0x7FFFFFFE )
    {
      v4 = -2147024809;
LABEL_15:
      *pszDest = 0;
      return v4;
    }
    if ( cchDest )
    {
      v5 = cchToCopy - cchDest;
      v6 = (char *)pszSrc - (char *)pszDest;
      do
      {
        if ( !(v5 + cchDest) )
          break;
        v7 = *(STRSAFE_LPWSTR)((char *)pszDest + v6);
        if ( !v7 )
          break;
        *pszDest++ = v7;
        --cchDest;
      }
      while ( cchDest );
    }
    v8 = pszDest - 1;
    if ( cchDest )
      v8 = pszDest;
    v4 = cchDest == 0 ? 0x8007007A : 0;
    *v8 = 0;
  }
  return v4;
}
