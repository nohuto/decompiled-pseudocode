/*
 * XREFs of RtlStringCchCatNW @ 0x140181B10
 * Callers:
 *     SepRmFetchGlobalSacl @ 0x1407380C0 (SepRmFetchGlobalSacl.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCatNW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToAppend)
{
  NTSTATUS v5; // r10d
  size_t v8; // rcx
  NTSTRSAFE_PWSTR i; // rax
  size_t v10; // r8
  wchar_t *v11; // rdx
  size_t v12; // rcx
  size_t v13; // rax
  char *v14; // rbx
  wchar_t v15; // r8
  wchar_t *v16; // rax

  v5 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v5 = -1073741811;
  if ( v5 < 0 )
    goto LABEL_21;
  v8 = cchDest;
  for ( i = pszDest; v8; --v8 )
  {
    if ( !*i )
      break;
    ++i;
  }
  v5 = v8 == 0 ? 0xC000000D : 0;
  if ( v8 )
    v10 = cchDest - v8;
  else
LABEL_21:
    v10 = 0LL;
  if ( v5 >= 0 )
  {
    if ( cchToAppend > 0x7FFFFFFE )
    {
      return -1073741811;
    }
    else
    {
      v11 = &pszDest[v10];
      v12 = cchDest - v10;
      if ( cchDest != v10 )
      {
        v13 = cchToAppend;
        v14 = (char *)((char *)pszSrc - (char *)v11);
        do
        {
          if ( !v13 )
            break;
          v15 = *(wchar_t *)((char *)v11 + (_QWORD)v14);
          if ( !v15 )
            break;
          *v11 = v15;
          --v13;
          ++v11;
          --v12;
        }
        while ( v12 );
      }
      v16 = v11 - 1;
      if ( v12 )
        v16 = v11;
      v5 = v12 == 0 ? 0x80000005 : 0;
      *v16 = 0;
    }
  }
  return v5;
}
