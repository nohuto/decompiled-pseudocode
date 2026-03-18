/*
 * XREFs of StringCchCatW @ 0x1C0249738
 * Callers:
 *     GetNlsTablePath @ 0x1C0249584 (GetNlsTablePath.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCchCatW(STRSAFE_LPWSTR pszDest, size_t cchDest, STRSAFE_LPCWSTR pszSrc)
{
  __int64 v4; // r9
  STRSAFE_LPWSTR v5; // rax
  HRESULT result; // eax
  __int64 v7; // r8
  wchar_t *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  char *v11; // r10
  wchar_t v12; // r8
  wchar_t *v13; // rax

  v4 = 260LL;
  v5 = pszDest;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0x80070057 : 0;
  if ( v4 )
    v7 = 260 - v4;
  else
    v7 = 0LL;
  if ( v4 )
  {
    v8 = &pszDest[v7];
    v9 = 260 - v7;
    if ( 260 != v7 )
    {
      v10 = 2147483646LL;
      v11 = (char *)((char *)pszSrc - (char *)v8);
      do
      {
        if ( !v10 )
          break;
        v12 = *(wchar_t *)((char *)v8 + (_QWORD)v11);
        if ( !v12 )
          break;
        *v8 = v12;
        --v10;
        ++v8;
        --v9;
      }
      while ( v9 );
    }
    v13 = v8 - 1;
    if ( v9 )
      v13 = v8;
    *v13 = 0;
    return v9 == 0 ? 0x8007007A : 0;
  }
  return result;
}
