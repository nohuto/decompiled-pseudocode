/*
 * XREFs of ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x18002FAAC
 * Callers:
 *     ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x18002E3BC (-LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wstring::find(char *a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax
  char *v3; // r9
  unsigned __int64 v4; // r8
  char *v5; // rcx
  char *v6; // rsi
  __int64 v7; // r8
  unsigned __int64 v8; // r10
  const wchar_t *v9; // r8
  wchar_t v10; // bx
  int v11; // r8d

  v1 = -1LL;
  result = 0LL;
  do
    ++v1;
  while ( aP[v1] );
  v3 = a1;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    v3 = *(char **)a1;
  v4 = *((_QWORD *)a1 + 2);
  if ( v1 <= v4 )
  {
    if ( !v1 )
      return result;
    v5 = v3;
    v6 = &v3[2 * (v4 - v1) + 2];
    while ( 1 )
    {
      v7 = (v6 - v5) >> 1;
      if ( v7 )
      {
        while ( *(_WORD *)v5 != 95 )
        {
          v5 += 2;
          if ( !--v7 )
            goto LABEL_11;
        }
      }
      else
      {
LABEL_11:
        v5 = 0LL;
      }
      if ( !v5 )
        break;
      v8 = v1;
      v9 = L"_p";
      while ( 1 )
      {
        v10 = *(const wchar_t *)((char *)v9 + v5 - (char *)L"_p");
        if ( v10 != *v9 )
          break;
        ++v9;
        if ( !--v8 )
        {
          v11 = 0;
          goto LABEL_17;
        }
      }
      v11 = v10 < *v9 ? -1 : 1;
LABEL_17:
      if ( !v11 )
        return (v5 - v3) >> 1;
      v5 += 2;
    }
  }
  return -1LL;
}
