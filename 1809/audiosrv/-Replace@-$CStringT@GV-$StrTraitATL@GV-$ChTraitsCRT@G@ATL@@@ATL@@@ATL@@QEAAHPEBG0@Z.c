/*
 * XREFs of ?Replace@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEBG0@Z @ 0x18002CC90
 * Callers:
 *     ?EscapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001FAD0 (-EscapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@AT.c)
 * Callees:
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180013618 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18002B690 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SafeStringLen@?$ChTraitsCRT@G@ATL@@SAHPEBG@Z @ 0x18002CF40 (-SafeStringLen@-$ChTraitsCRT@G@ATL@@SAHPEBG@Z.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x18006165A (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     memmove_0 @ 0x1800688AF (memmove_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Replace(
        __int64 *a1,
        const wchar_t *a2,
        _WORD *a3,
        ...)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  const wchar_t *v6; // rsi
  int v7; // r15d
  unsigned __int64 v8; // r12
  wchar_t *v9; // rcx
  __int64 v10; // rax
  __int64 v12; // r13
  unsigned __int64 v13; // r12
  signed int v14; // eax
  int v15; // r13d
  signed int v16; // edx
  const wchar_t *v17; // rsi
  wchar_t *v18; // r9
  size_t v19; // rcx
  __int64 v20; // r10
  wchar_t *v21; // rdx
  size_t v22; // r8
  wchar_t *v23; // rax
  wchar_t *v24; // [rsp+20h] [rbp-68h]
  unsigned __int64 v25; // [rsp+38h] [rbp-50h]
  signed int v27; // [rsp+98h] [rbp+10h]
  int v29; // [rsp+A8h] [rbp+20h]

  if ( !a2 )
    return 0LL;
  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  if ( !(_DWORD)v4 )
    return 0LL;
  if ( a3 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a3[v5] );
  }
  else
  {
    LODWORD(v5) = 0;
  }
  v6 = (const wchar_t *)*a1;
  v7 = 0;
  v8 = *a1 + 2LL * *(int *)(*a1 - 16);
  if ( *a1 < v8 )
  {
    do
    {
      v9 = wcsstr(v6, a2);
      if ( v9 )
      {
        v12 = (int)v4;
        do
        {
          v6 = &v9[v12];
          ++v7;
          v9 = wcsstr(&v9[v12], a2);
        }
        while ( v9 );
      }
      if ( v6 )
      {
        v10 = -1LL;
        do
          ++v10;
        while ( v6[v10] );
      }
      else
      {
        LODWORD(v10) = 0;
      }
      v6 += (int)v10 + 1;
    }
    while ( (unsigned __int64)v6 < v8 );
    if ( v7 > 0 )
    {
      v13 = *a1;
      v14 = *(_DWORD *)(*a1 - 16);
      v15 = v14 + v7 * (v5 - v4);
      v27 = v14;
      v16 = v14;
      if ( v15 > v14 )
        v16 = v14 + v7 * (v5 - v4);
      if ( ((*(_DWORD *)(*a1 - 12) - v16) | (1 - *(_DWORD *)(v13 - 8))) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, v16);
        v13 = *a1;
      }
      v17 = (const wchar_t *)v13;
      v25 = v13 + 2LL * v27;
      if ( v13 < v25 )
      {
        do
        {
          v24 = wcsstr(v17, a2);
          v18 = v24;
          if ( v24 )
          {
            v19 = (int)v5;
            v20 = (int)v4;
            do
            {
              v17 = &v18[v19];
              v29 = v27 - ((__int64)((__int64)v18 - v13) >> 1) - v4;
              v21 = &v18[v20];
              v22 = 2LL * v29;
              if ( v22 )
              {
                if ( !v17 || !v21 )
                  goto LABEL_40;
                memmove_0(&v18[v19], v21, v22);
                v18 = v24;
                v19 = (int)v5;
              }
              if ( v19 * 2 )
              {
                if ( !v18 )
                  goto LABEL_40;
                if ( !a3 )
                {
                  memset_0(v18, 0, v19 * 2);
LABEL_40:
                  *(_DWORD *)_o__errno(v19 * 2) = 22;
                  invalid_parameter_noinfo();
                  ATL::AtlThrowImpl(-2147024809);
                }
                memcpy_0(v18, a3, v19 * 2);
              }
              v24[(int)v5 + v29] = 0;
              v27 += v5 - v4;
              v23 = wcsstr(v17, a2);
              v19 = (int)v5;
              v18 = v23;
              v20 = (int)v4;
              v24 = v23;
            }
            while ( v23 );
          }
          v17 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen(v17) + 1);
        }
        while ( (unsigned __int64)v17 < v25 );
      }
      ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, v15);
    }
  }
  return (unsigned int)v7;
}
