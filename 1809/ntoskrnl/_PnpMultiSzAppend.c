/*
 * XREFs of _PnpMultiSzAppend @ 0x14090154C
 * Callers:
 *     _CmAppendInstallerClassFiltersLevel @ 0x1408FDC88 (_CmAppendInstallerClassFiltersLevel.c)
 *     _CmGetDeviceChildren @ 0x1408FE818 (_CmGetDeviceChildren.c)
 *     _CmGetInstallerClassCompoundFilterList @ 0x1408FF2F8 (_CmGetInstallerClassCompoundFilterList.c)
 *     _CmMergeInstallerClassFilterLists @ 0x1409002D0 (_CmMergeInstallerClassFilterLists.c)
 * Callees:
 *     RtlStringCbCopyExW @ 0x140007504 (RtlStringCbCopyExW.c)
 */

char __fastcall PnpMultiSzAppend(NTSTRSAFE_PWSTR pszDest, unsigned int *a2, const wchar_t *a3, wchar_t **a4)
{
  wchar_t v4; // r10
  unsigned __int64 v5; // r11
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // edi
  wchar_t *v13; // rax
  NTSTRSAFE_PWSTR v14; // rdi
  __int64 v15; // rbx
  size_t v16; // rdx
  __int64 v17; // rcx
  wchar_t *v18; // rcx

  v4 = *pszDest;
  v5 = *a2;
  if ( *pszDest )
  {
    v14 = pszDest;
    if ( (_DWORD)v5 )
    {
      do
      {
        if ( v4 )
        {
          do
            ++v14;
          while ( *v14 );
        }
        v4 = *++v14;
      }
      while ( *v14 && 2 * (unsigned __int64)(unsigned int)(v14 - pszDest) < v5 );
    }
    v15 = -1LL;
    v16 = *a2;
    v17 = -1LL;
    do
      ++v17;
    while ( a3[v17] );
    if ( 2 * (v14 - pszDest + v17) + 4 <= v5 && RtlStringCbCopyExW(v14, v16, a3, 0LL, 0LL, 0x900u) >= 0 )
    {
      do
        ++v15;
      while ( a3[v15] );
      v18 = &v14[v15 + 1];
      *v18 = 0;
      *a2 = 2 * (v18 - pszDest) + 2;
      if ( a4 )
        *a4 = v18;
      return 1;
    }
  }
  else
  {
    v10 = -1LL;
    v11 = -1LL;
    do
      ++v11;
    while ( a3[v11] );
    v12 = 2 * v11 + 4;
    if ( v12 <= (unsigned int)v5 && RtlStringCbCopyExW(pszDest, *a2, a3, 0LL, 0LL, 0x900u) >= 0 )
    {
      do
        ++v10;
      while ( pszDest[v10] );
      *a2 = v12;
      v13 = &pszDest[v10 + 1];
      *v13 = 0;
      if ( a4 )
        *a4 = v13;
      return 1;
    }
  }
  return 0;
}
