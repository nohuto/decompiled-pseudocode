/*
 * XREFs of _CmMergeFilterLists @ 0x14093CE84
 * Callers:
 *     _CmGetDeviceCompoundFiltersWorker @ 0x14093B1B8 (_CmGetDeviceCompoundFiltersWorker.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x14093C01C (_CmGetInstallerClassCompoundFiltersWorker.c)
 * Callees:
 *     _wcsicmp @ 0x1401A0820 (_wcsicmp.c)
 *     _CmFindFilterListInflectionPoint @ 0x14093ACA8 (_CmFindFilterListInflectionPoint.c)
 *     _PnpMultiSzAppend @ 0x14093E0E4 (_PnpMultiSzAppend.c)
 */

__int64 __fastcall CmMergeFilterLists(
        wchar_t *Str1,
        wchar_t *a2,
        wchar_t *a3,
        wchar_t *a4,
        unsigned int a5,
        _DWORD *a6)
{
  wchar_t *v7; // r14
  wchar_t *v8; // rbx
  int v9; // r13d
  unsigned int v10; // r15d
  const wchar_t *FilterListInflectionPoint; // r12
  const wchar_t *v12; // rdi
  __int64 v13; // rax
  int v14; // esi
  __int64 v15; // rax
  __int64 v16; // rax
  const wchar_t *i; // rdi
  __int64 v18; // rax
  int v19; // esi
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  int v24; // edi
  __int64 result; // rax
  unsigned int v26; // [rsp+20h] [rbp-18h]
  wchar_t *v27; // [rsp+28h] [rbp-10h]
  wchar_t *v28; // [rsp+80h] [rbp+48h]
  wchar_t *v29; // [rsp+88h] [rbp+50h]
  wchar_t *Str2; // [rsp+90h] [rbp+58h]

  Str2 = a3;
  v29 = a2;
  v7 = a2;
  v26 = 0;
  v8 = 0LL;
  v27 = 0LL;
  v9 = 0;
  v10 = 0;
  if ( a4 && a5 >= 2 )
  {
    v10 = a5;
    v8 = a4;
    v27 = a4;
    *a4 = 0;
  }
  while ( 1 )
  {
    FilterListInflectionPoint = CmFindFilterListInflectionPoint(Str1, v7, a3);
    v12 = Str1;
    if ( *Str1 )
    {
      do
      {
        if ( FilterListInflectionPoint && !wcsicmp(v12, FilterListInflectionPoint) )
          break;
        if ( wcsicmp(v12, Str2) )
        {
          v13 = -1LL;
          do
            ++v13;
          while ( v12[v13] );
          v9 += 2 * v13 + 2;
          v14 = 2 * v13 + 2;
          if ( v8 )
          {
            if ( (unsigned __int8)PnpMultiSzAppend(v8) )
            {
              v8 = v27;
            }
            else
            {
              v8 = 0LL;
              v27 = 0LL;
              v26 = -1073741789;
            }
            v10 -= v14;
          }
        }
        v15 = -1LL;
        do
          ++v15;
        while ( v12[v15] );
        v12 += v15 + 1;
      }
      while ( *v12 );
      v7 = v29;
    }
    v28 = (wchar_t *)v12;
    if ( *v12 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( v12[v16] );
      v28 = (wchar_t *)&v12[v16 + 1];
    }
    if ( v7 )
    {
      for ( i = v7; *i; i += v20 + 1 )
      {
        if ( FilterListInflectionPoint && !wcsicmp(i, FilterListInflectionPoint) )
          break;
        v18 = -1LL;
        do
          ++v18;
        while ( i[v18] );
        v9 += 2 * v18 + 2;
        v19 = 2 * v18 + 2;
        if ( v8 )
        {
          if ( (unsigned __int8)PnpMultiSzAppend(v8) )
          {
            v8 = v27;
          }
          else
          {
            v8 = 0LL;
            v27 = 0LL;
            v26 = -1073741789;
          }
          v10 -= v19;
        }
        v20 = -1LL;
        do
          ++v20;
        while ( i[v20] );
      }
      v7 = (wchar_t *)i;
      v29 = (wchar_t *)i;
      if ( *i )
      {
        v21 = -1LL;
        do
          ++v21;
        while ( i[v21] );
        v7 = (wchar_t *)&i[v21 + 1];
        v29 = v7;
      }
    }
    if ( !FilterListInflectionPoint )
      break;
    v22 = wcsicmp(FilterListInflectionPoint, Str2);
    Str1 = v28;
    a3 = Str2;
    if ( v22 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( FilterListInflectionPoint[v23] );
      a3 = Str2;
      v9 += 2 * v23 + 2;
      v24 = 2 * v23 + 2;
      if ( v8 )
      {
        if ( (unsigned __int8)PnpMultiSzAppend(v8) )
        {
          v8 = v27;
        }
        else
        {
          v8 = 0LL;
          v26 = -1073741789;
          v27 = 0LL;
        }
        a3 = Str2;
        v10 -= v24;
      }
    }
  }
  if ( !v9 )
    return 3221226021LL;
  result = v26;
  *a6 = v9 + 2;
  return result;
}
