/*
 * XREFs of ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KG_K@Z @ 0x1801D6480
 * Callers:
 *     ?TryExtractJavaMainClassNameFromCommandLine@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x1800BE72C (-TryExtractJavaMainClassNameFromCommandLine@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wstring::find(char *a1, __int16 a2, unsigned __int64 a3)
{
  char *v4; // r9
  unsigned __int64 v5; // rcx
  char *v6; // rdx
  char *v7; // rax
  unsigned __int64 v8; // rcx

  v4 = a1;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    v4 = *(char **)a1;
  v5 = *((_QWORD *)a1 + 2);
  if ( a3 >= v5 )
    return -1LL;
  v6 = &v4[2 * a3];
  v7 = 0LL;
  v8 = v5 - a3;
  if ( v8 )
  {
    while ( *(_WORD *)v6 != a2 )
    {
      if ( v8 == 1 )
        goto LABEL_10;
      --v8;
      v6 += 2;
    }
    v7 = v6;
  }
LABEL_10:
  if ( v7 )
    return (v7 - v4) >> 1;
  else
    return -1LL;
}
