/*
 * XREFs of ?Replace@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEBG0@Z @ 0x180024410
 * Callers:
 *     ?EscapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800DB200 (-EscapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@AT.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800260A0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800451FC (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x180065CBA (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x18006C963 (memcpy_0.c)
 *     memmove_0 @ 0x18006C96F (memmove_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BCE4C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Replace(
        const wchar_t **a1,
        const wchar_t *a2,
        _WORD *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  const wchar_t *v7; // rsi
  int v8; // r15d
  unsigned __int64 v9; // r12
  wchar_t *v10; // rcx
  __int64 v11; // rax
  const wchar_t *v13; // r13
  unsigned int v14; // eax
  unsigned int v15; // r12d
  __int64 v16; // rdx
  const wchar_t *v17; // rsi
  wchar_t *v18; // r12
  size_t v19; // rcx
  __int64 v20; // r9
  wchar_t *v21; // rdx
  size_t v22; // r8
  wchar_t *v23; // rax
  __int64 v24; // rax
  __int64 v25; // r13
  unsigned int v26; // [rsp+20h] [rbp-58h]
  unsigned __int64 v27; // [rsp+38h] [rbp-40h]
  unsigned int v29; // [rsp+88h] [rbp+10h]
  int v30; // [rsp+98h] [rbp+20h]

  if ( !a2 )
    return 0LL;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  if ( !(_DWORD)v5 )
    return 0LL;
  if ( a3 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a3[v6] );
  }
  else
  {
    LODWORD(v6) = 0;
  }
  v7 = *a1;
  v8 = 0;
  v9 = (unsigned __int64)&(*a1)[*((int *)*a1 - 4)];
  if ( (unsigned __int64)*a1 < v9 )
  {
    do
    {
      v10 = wcsstr(v7, a2);
      if ( v10 )
      {
        v25 = (int)v5;
        do
        {
          v7 = &v10[v25];
          ++v8;
          v10 = wcsstr(&v10[v25], a2);
        }
        while ( v10 );
      }
      if ( v7 )
      {
        v11 = -1LL;
        do
          ++v11;
        while ( v7[v11] );
      }
      else
      {
        LODWORD(v11) = 0;
      }
      v7 += (int)v11 + 1;
    }
    while ( (unsigned __int64)v7 < v9 );
    if ( v8 > 0 )
    {
      v13 = *a1;
      v14 = *((_DWORD *)*a1 - 4);
      v15 = v14 + v8 * (v6 - v5);
      v29 = v14;
      v16 = v14;
      v26 = v15;
      if ( (int)v15 > (int)v14 )
        v16 = v15;
      if ( (int)((*((_DWORD *)*a1 - 3) - v16) | (1 - *((_DWORD *)v13 - 2))) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, v16);
        v13 = *a1;
      }
      v17 = v13;
      v27 = (unsigned __int64)&v13[v29];
      if ( (unsigned __int64)v13 < v27 )
      {
        do
        {
          v18 = wcsstr(v17, a2);
          if ( v18 )
          {
            v19 = (int)v6;
            v20 = (int)v5;
            do
            {
              v17 = &v18[v19];
              v30 = v29 - (v18 - v13) - v5;
              v21 = &v18[v20];
              v22 = 2LL * v30;
              if ( v22 )
              {
                if ( !v17 || !v21 )
                  goto LABEL_45;
                memmove_0(&v18[v19], v21, v22);
                v19 = (int)v6;
              }
              if ( v19 * 2 )
              {
                if ( !v18 )
                  goto LABEL_45;
                if ( !a3 )
                {
                  memset_0(v18, 0, v19 * 2);
LABEL_45:
                  *(_DWORD *)_o__errno(v19 * 2) = 22;
                  invalid_parameter_noinfo();
                  ATL::AtlThrowImpl(-2147024809);
                }
                memcpy_0(v18, a3, v19 * 2);
              }
              v18[(int)v6 + v30] = 0;
              v29 += v6 - v5;
              v23 = wcsstr(v17, a2);
              v19 = (int)v6;
              v18 = v23;
              v20 = (int)v5;
            }
            while ( v23 );
          }
          if ( v17 )
          {
            v24 = -1LL;
            do
              ++v24;
            while ( v17[v24] );
          }
          else
          {
            LODWORD(v24) = 0;
          }
          v17 += (int)v24 + 1;
        }
        while ( (unsigned __int64)v17 < v27 );
        v15 = v26;
      }
      ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, v15);
    }
  }
  return (unsigned int)v8;
}
