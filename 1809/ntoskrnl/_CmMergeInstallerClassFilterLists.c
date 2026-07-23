/*
 * XREFs of _CmMergeInstallerClassFilterLists @ 0x1409002D0
 * Callers:
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x1408FF528 (_CmGetInstallerClassCompoundFiltersWorker.c)
 * Callees:
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     _CmFindInstallerClassFilterInflectionPoint @ 0x1408FE71C (_CmFindInstallerClassFilterInflectionPoint.c)
 *     _PnpMultiSzAppend @ 0x14090154C (_PnpMultiSzAppend.c)
 */

__int64 __fastcall CmMergeInstallerClassFilterLists(
        wchar_t *Str1,
        wchar_t *a2,
        wchar_t *a3,
        wchar_t *a4,
        unsigned int a5,
        _DWORD *a6)
{
  wchar_t *v7; // rbx
  int v9; // r13d
  unsigned int v10; // r14d
  const wchar_t *InstallerClassFilterInflectionPoint; // r15
  const wchar_t *i; // rdi
  __int64 v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  const wchar_t *j; // rdi
  __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  unsigned int v24; // eax
  __int64 result; // rax
  unsigned int v26; // [rsp+78h] [rbp+50h]
  wchar_t *Str2; // [rsp+80h] [rbp+58h]
  wchar_t *v28; // [rsp+88h] [rbp+60h]

  Str2 = a3;
  v26 = 0;
  v7 = 0LL;
  v28 = 0LL;
  v9 = 0;
  v10 = 0;
  if ( a4 )
  {
    if ( a5 >= 2 )
    {
      v10 = a5;
      v7 = a4;
      *a4 = 0;
    }
    v28 = v7;
  }
  while ( 1 )
  {
    InstallerClassFilterInflectionPoint = CmFindInstallerClassFilterInflectionPoint(Str1, a2, a3);
    for ( i = Str1; *i; i += v15 + 1 )
    {
      if ( InstallerClassFilterInflectionPoint && !wcsicmp(i, InstallerClassFilterInflectionPoint) )
        break;
      if ( wcsicmp(i, Str2) )
      {
        v13 = -1LL;
        do
          ++v13;
        while ( i[v13] );
        v9 += 2 * v13 + 2;
        if ( v7 )
        {
          if ( (unsigned __int8)PnpMultiSzAppend(v7) )
          {
            v7 = v28;
          }
          else
          {
            v7 = 0LL;
            v28 = 0LL;
            v26 = -1073741789;
          }
          if ( v7 )
          {
            v14 = v10;
            if ( v10 > 2 )
              v14 = v10 - 2;
            v10 -= v14;
          }
        }
      }
      v15 = -1LL;
      do
        ++v15;
      while ( i[v15] );
    }
    Str1 = (wchar_t *)i;
    if ( *i )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( i[v16] );
      Str1 = (wchar_t *)&i[v16 + 1];
    }
    if ( a2 )
    {
      for ( j = a2; *j; j += v20 + 1 )
      {
        if ( InstallerClassFilterInflectionPoint && !wcsicmp(j, InstallerClassFilterInflectionPoint) )
          break;
        v18 = -1LL;
        do
          ++v18;
        while ( j[v18] );
        v9 += 2 * v18 + 2;
        if ( v7 )
        {
          if ( (unsigned __int8)PnpMultiSzAppend(v7) )
          {
            v7 = v28;
          }
          else
          {
            v7 = 0LL;
            v28 = 0LL;
            v26 = -1073741789;
          }
          if ( v7 )
          {
            v19 = v10;
            if ( v10 > 2 )
              v19 = v10 - 2;
            v10 -= v19;
          }
        }
        v20 = -1LL;
        do
          ++v20;
        while ( j[v20] );
      }
      a2 = (wchar_t *)j;
      if ( *j )
      {
        v21 = -1LL;
        do
          ++v21;
        while ( j[v21] );
        a2 = (wchar_t *)&j[v21 + 1];
      }
    }
    if ( !InstallerClassFilterInflectionPoint )
      break;
    v22 = wcsicmp(InstallerClassFilterInflectionPoint, Str2);
    a3 = Str2;
    if ( v22 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( InstallerClassFilterInflectionPoint[v23] );
      a3 = Str2;
      v9 += 2 * v23 + 2;
      if ( v7 )
      {
        if ( (unsigned __int8)PnpMultiSzAppend(v7) )
        {
          v7 = v28;
        }
        else
        {
          v7 = 0LL;
          v26 = -1073741789;
          v28 = 0LL;
        }
        a3 = Str2;
        if ( v7 )
        {
          v24 = v10;
          if ( v10 > 2 )
            v24 = v10 - 2;
          a3 = Str2;
          v10 -= v24;
        }
      }
    }
  }
  if ( !v9 )
    return 3221226021LL;
  result = v26;
  *a6 = v9 + 2;
  return result;
}
