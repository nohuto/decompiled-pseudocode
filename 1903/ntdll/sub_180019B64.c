/*
 * XREFs of sub_180019B64 @ 0x180019B64
 * Callers:
 *     sub_1800199E0 @ 0x1800199E0 (sub_1800199E0.c)
 *     LdrEnumResources @ 0x1800DFDA0 (LdrEnumResources.c)
 * Callees:
 *     wcsncmp @ 0x180092410 (wcsncmp.c)
 */

__int64 __fastcall sub_180019B64(const wchar_t *a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // rbx
  unsigned __int16 *v6; // rbx
  unsigned int v7; // edx
  __int64 v8; // rcx

  v3 = *a3;
  if ( ((unsigned __int64)a1 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (int)v3 >= 0 )
      return -1LL;
    LODWORD(v3) = v3 & 0x7FFFFFFF;
    v6 = (unsigned __int16 *)(a2 + v3);
    v7 = wcsncmp(a1, v6 + 1, *v6);
    if ( v7 )
      return v7;
    v8 = -1LL;
    do
      ++v8;
    while ( a1[v8] );
    if ( v8 == *v6 )
      return v7;
  }
  else if ( (int)v3 >= 0 )
  {
    return (unsigned int)((_DWORD)a1 - v3);
  }
  return 1LL;
}
