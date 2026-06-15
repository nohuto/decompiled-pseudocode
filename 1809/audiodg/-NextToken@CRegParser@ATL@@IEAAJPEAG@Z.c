/*
 * XREFs of ?NextToken@CRegParser@ATL@@IEAAJPEAG@Z @ 0x140051CAC
 * Callers:
 *     ?AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z @ 0x1400507F0 (-AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z.c)
 *     ?RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z @ 0x140052B2C (-RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z.c)
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x140052EC4 (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 *     ?SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z @ 0x1400535FC (-SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z.c)
 * Callees:
 *     ?SkipWhiteSpace@CRegParser@ATL@@IEAAXXZ @ 0x140053688 (-SkipWhiteSpace@CRegParser@ATL@@IEAAXXZ.c)
 */

__int64 __fastcall ATL::CRegParser::NextToken(ATL::CRegParser *this, unsigned __int16 *a2)
{
  const WCHAR *v4; // rsi
  WCHAR v5; // ax
  unsigned __int16 *v6; // rbp
  LPWSTR v7; // rcx
  WCHAR i; // ax
  const WCHAR *v9; // rsi
  LPWSTR v10; // rax
  __int64 v11; // rdx
  signed __int64 v12; // rsi
  __int64 v13; // rcx
  LPWSTR v14; // rax
  LPWSTR v15; // r8
  __int64 v16; // rdx
  signed __int64 v17; // rsi
  __int64 v18; // rcx

  ATL::CRegParser::SkipWhiteSpace(this);
  v4 = *(const WCHAR **)this;
  v5 = **(_WORD **)this;
  if ( v5 )
  {
    v6 = a2 + 4096;
    if ( v5 == 39 )
    {
      v7 = CharNextW(*(LPCWSTR *)this);
      *(_QWORD *)this = v7;
      for ( i = *v7; i && (i != 39 || *CharNextW(v7) == 39); i = *v7 )
      {
        v9 = *(const WCHAR **)this;
        if ( **(_WORD **)this == 39 )
        {
          v9 = CharNextW(*(LPCWSTR *)this);
          *(_QWORD *)this = v9;
        }
        v10 = CharNextW(v9);
        *(_QWORD *)this = v10;
        v7 = v10;
        v11 = v10 - v9;
        if ( &a2[v11 + 1] >= v6 )
          return 2147614729LL;
        if ( (int)v11 > 0 )
        {
          v12 = (char *)v9 - (char *)a2;
          v13 = (unsigned int)v11;
          do
          {
            *a2 = *(unsigned __int16 *)((char *)a2 + v12);
            ++a2;
            --v13;
          }
          while ( v13 );
          v7 = *(LPWSTR *)this;
        }
      }
      if ( **(_WORD **)this && a2 < v6 )
      {
        *a2 = 0;
        *(_QWORD *)this = CharNextW(*(LPCWSTR *)this);
        return 0LL;
      }
    }
    else
    {
      do
      {
        if ( v5 >= 9u && (v5 <= 0xAu || v5 == 13 || v5 == 32) )
          break;
        v14 = CharNextW(v4);
        *(_QWORD *)this = v14;
        v15 = v14;
        v16 = v14 - v4;
        if ( &a2[v16 + 1] >= v6 )
          return 2147614729LL;
        if ( (int)v16 > 0 )
        {
          v17 = (char *)v4 - (char *)a2;
          v18 = (unsigned int)v16;
          do
          {
            *a2 = *(unsigned __int16 *)((char *)a2 + v17);
            ++a2;
            --v18;
          }
          while ( v18 );
          v15 = *(LPWSTR *)this;
        }
        v5 = *v15;
        v4 = v15;
      }
      while ( *v15 );
      if ( a2 < v6 )
      {
        *a2 = 0;
        return 0LL;
      }
    }
  }
  return 2147614729LL;
}
