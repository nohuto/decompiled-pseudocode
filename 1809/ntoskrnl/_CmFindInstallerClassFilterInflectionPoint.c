/*
 * XREFs of _CmFindInstallerClassFilterInflectionPoint @ 0x1408FE71C
 * Callers:
 *     _CmMergeInstallerClassFilterLists @ 0x1409002D0 (_CmMergeInstallerClassFilterLists.c)
 * Callees:
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 */

const wchar_t *__fastcall CmFindInstallerClassFilterInflectionPoint(wchar_t *Str1, wchar_t *a2, wchar_t *Str2)
{
  const wchar_t *v3; // rdi
  const wchar_t *v6; // rbx
  const wchar_t *v7; // r15
  __int64 v8; // r14
  const wchar_t *v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rax

  v3 = Str1;
  v6 = 0LL;
  v7 = 0LL;
  if ( a2 && *a2 && *Str1 )
  {
    while ( 1 )
    {
      v6 = 0LL;
      v8 = -1LL;
      do
        ++v8;
      while ( v3[v8] );
      v9 = a2;
      if ( *a2 )
      {
        while ( 1 )
        {
          v10 = -1LL;
          do
            ++v10;
          while ( v9[v10] );
          if ( (_DWORD)v10 == (_DWORD)v8 && !wcsicmp(v9, v3) )
            break;
          v9 += (unsigned int)(v10 + 1);
          if ( !*v9 )
            goto LABEL_14;
        }
        v6 = v9;
      }
LABEL_14:
      if ( v6 )
        break;
      if ( !wcsicmp(v3, Str2) )
        v7 = v3;
      v11 = -1LL;
      do
        ++v11;
      while ( v3[v11] );
      v3 += v11 + 1;
      if ( !*v3 )
      {
        if ( v7 )
          return v7;
        return v6;
      }
    }
  }
  return v6;
}
