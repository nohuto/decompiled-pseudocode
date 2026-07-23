/*
 * XREFs of LdrpCompareResourceNamesWithValidation @ 0x18009EF8C
 * Callers:
 *     ResourceEntryBinarySearch @ 0x18003DE8C (ResourceEntryBinarySearch.c)
 *     LdrEnumResources @ 0x1800E22B0 (LdrEnumResources.c)
 * Callees:
 *     wcsncmp @ 0x180095B80 (wcsncmp.c)
 */

__int64 __fastcall LdrpCompareResourceNamesWithValidation(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        __int64 a4,
        int *a5,
        _BYTE *a6)
{
  char v8; // r10
  int v9; // edx
  unsigned __int64 v11; // r8
  unsigned __int16 *v12; // rbx
  unsigned int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // edx
  __int64 v16; // rcx

  if ( !a1 || (v8 = 1, !a2) )
    v8 = 0;
  *a6 = 1;
  v9 = *a5;
  if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( v9 >= 0 )
      return -1LL;
    v11 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v8 && a4 + (unsigned __int64)(v9 & 0x7FFFFFFF) > v11 + a2
      || (v12 = (unsigned __int16 *)(a4 + (v9 & 0x7FFFFFFF)), v8)
      && ((v13 = v9 & 0x7FFFFFFF, v14 = v13 + 2 * *v12, v14 < v13) || a4 + (unsigned __int64)v14 > v11 + a2) )
    {
      *a6 = 0;
      return -1LL;
    }
    v15 = wcsncmp(a3, v12 + 1, *v12);
    if ( v15 )
      return v15;
    v16 = -1LL;
    do
      ++v16;
    while ( a3[v16] );
    if ( v16 == *v12 )
      return v15;
    return 1LL;
  }
  if ( v9 < 0 )
    return 1LL;
  return (unsigned int)((_DWORD)a3 - v9);
}
