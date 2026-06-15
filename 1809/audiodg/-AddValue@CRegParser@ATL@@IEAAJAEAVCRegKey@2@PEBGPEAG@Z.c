/*
 * XREFs of ?AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z @ 0x1400507F0
 * Callers:
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x140052EC4 (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     memset_0 @ 0x14001CA76 (memset_0.c)
 *     _alloca_probe @ 0x14001D940 (_alloca_probe.c)
 *     ??$AtlMultiplyThrow@_K@ATL@@YA_K_K0@Z @ 0x1400431F0 (--$AtlMultiplyThrow@_K@ATL@@YA_K_K0@Z.c)
 *     ??1?$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ @ 0x140043220 (--1-$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ.c)
 *     ?AllocateHeap@?$CTempBuffer@G$0EAA@VCCRTAllocator@ATL@@@ATL@@AEAAX_K@Z @ 0x140050C9C (-AllocateHeap@-$CTempBuffer@G$0EAA@VCCRTAllocator@ATL@@@ATL@@AEAAX_K@Z.c)
 *     ?AtlHresultFromWin32@ATL@@YAJK@Z @ 0x140050DBC (-AtlHresultFromWin32@ATL@@YAJK@Z.c)
 *     ?FreeHeap@?$CTempBuffer@G$0EAA@VCCRTAllocator@ATL@@@ATL@@AEAAXXZ @ 0x140051AE0 (-FreeHeap@-$CTempBuffer@G$0EAA@VCCRTAllocator@ATL@@@ATL@@AEAAXXZ.c)
 *     ?NextToken@CRegParser@ATL@@IEAAJPEAG@Z @ 0x140051CAC (-NextToken@CRegParser@ATL@@IEAAJPEAG@Z.c)
 *     ?SetMultiStringValue@CRegKey@ATL@@QEAAJPEBG0@Z @ 0x140053590 (-SetMultiStringValue@CRegKey@ATL@@QEAAJPEBG0@Z.c)
 *     ?SkipWhiteSpace@CRegParser@ATL@@IEAAXXZ @ 0x140053688 (-SkipWhiteSpace@CRegParser@ATL@@IEAAXXZ.c)
 *     ?VTFromRegType@CRegParser@ATL@@KAHPEBGAEAG@Z @ 0x140053B00 (-VTFromRegType@CRegParser@ATL@@KAHPEBGAEAG@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ATL::CRegParser::AddValue(
        ATL::CRegParser *this,
        HKEY *a2,
        const unsigned __int16 *a3,
        unsigned __int16 *a4)
{
  const WCHAR *v4; // r13
  HKEY *v5; // r12
  ATL::CRegParser *v6; // r15
  unsigned int v7; // ebx
  __int64 result; // rax
  __int64 v9; // rdi
  int v10; // edi
  unsigned __int64 v11; // rax
  BYTE *v12; // rdi
  WCHAR *i; // rsi
  const WCHAR *v14; // rax
  LSTATUS v15; // edi
  HRESULT v16; // edi
  __int64 v17; // rdi
  signed int cbData; // esi
  unsigned __int64 v19; // rax
  int v20; // r9d
  __int64 v21; // r8
  WCHAR v22; // dx
  char v23; // dl
  __int64 v24; // rdi
  int Token; // eax
  __int64 v26; // [rsp+0h] [rbp-21C8h] BYREF
  ULONG pulOut; // [rsp+30h] [rbp-2198h] BYREF
  BYTE Data[8]; // [rsp+38h] [rbp-2190h] BYREF
  ATL::CRegParser *v29; // [rsp+40h] [rbp-2188h] BYREF
  struct ATL::CRegKey *v30; // [rsp+48h] [rbp-2180h]
  const unsigned __int16 *v31; // [rsp+50h] [rbp-2178h]
  unsigned __int16 *v32; // [rsp+60h] [rbp-2168h]
  __int64 v33; // [rsp+68h] [rbp-2160h]
  BYTE *lpData; // [rsp+70h] [rbp-2158h] BYREF
  _BYTE v35[264]; // [rsp+78h] [rbp-2150h] BYREF
  WCHAR sz[4096]; // [rsp+180h] [rbp-2048h] BYREF

  v33 = -2LL;
  v4 = a3;
  v5 = a2;
  v6 = this;
  v29 = this;
  v30 = (struct ATL::CRegKey *)a2;
  v31 = a3;
  v32 = a4;
  v7 = 0;
  LOWORD(pulOut) = 0;
  result = ATL::CRegParser::NextToken(this, sz);
  if ( (int)result >= 0 )
  {
    if ( !(unsigned int)ATL::CRegParser::VTFromRegType(sz, (unsigned __int16 *)&pulOut) )
      return 2147614729LL;
    ATL::CRegParser::SkipWhiteSpace(v6);
    result = ATL::CRegParser::NextToken(v6, sz);
    if ( (int)result >= 0 )
    {
      if ( (unsigned __int16)pulOut == 8 )
      {
        v24 = -1LL;
        do
          ++v24;
        while ( sz[v24] );
        v15 = RegSetValueExW(*v5, v4, 0, 1u, (const BYTE *)sz, 2 * v24 + 2);
        goto LABEL_58;
      }
      if ( (unsigned __int16)pulOut != 17 )
      {
        if ( (unsigned __int16)pulOut == 19 )
        {
          pulOut = 0;
          v29 = 0LL;
          v16 = VarUI4FromStr(sz, 0, 0, &pulOut);
          if ( v16 < 0 )
          {
            ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::~CAtlSafeAllocBufferManager<ATL::CCRTAllocator>((_QWORD **)&v29);
            return (unsigned int)v16;
          }
          *(_DWORD *)Data = pulOut;
          v15 = RegSetValueExW(*v5, v4, 0, 4u, Data, 4u);
          ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::~CAtlSafeAllocBufferManager<ATL::CCRTAllocator>((_QWORD **)&v29);
        }
        else
        {
          if ( (unsigned __int16)pulOut != 16392 )
          {
LABEL_60:
            Token = ATL::CRegParser::NextToken(v6, v32);
            if ( Token < 0 )
              return (unsigned int)Token;
            return v7;
          }
          v9 = -1LL;
          do
            ++v9;
          while ( sz[v9] );
          v10 = v9 + 2;
          lpData = 0LL;
          try
          {
            v11 = ATL::AtlMultiplyThrow<unsigned __int64>(v10, 2uLL);
            if ( v11 <= 0x100 )
              lpData = v35;
            else
              ATL::CTempBuffer<unsigned short,1024,ATL::CCRTAllocator>::AllocateHeap(&lpData, v11);
          }
          catch ( ... )
          {
            v7 = 0;
            v6 = v29;
            v5 = (HKEY *)v30;
            v4 = v31;
          }
          v12 = lpData;
          if ( lpData )
          {
            for ( i = sz; *i; v12 += 2 )
            {
              v14 = CharNextW(i);
              if ( *i == 92 && *v14 == 48 )
              {
                *(_WORD *)v12 = 0;
                i = CharNextW(v14);
              }
              else
              {
                *(_WORD *)v12 = *i++;
              }
            }
            *(_WORD *)v12 = 0;
            *((_WORD *)v12 + 1) = 0;
            v15 = ATL::CRegKey::SetMultiStringValue((ATL::CRegKey *)v5, v4, (const unsigned __int16 *)lpData);
          }
          else
          {
            v15 = 14;
          }
          if ( lpData != v35 )
            goto LABEL_25;
        }
        goto LABEL_58;
      }
      v17 = -1LL;
      do
        ++v17;
      while ( sz[v17] );
      *(_DWORD *)Data = v17;
      if ( (v17 & 1) != 0 )
        return 2147500037LL;
      cbData = (int)v17 / 2;
      pulOut = (int)v17 / 2;
      lpData = 0LL;
      try
      {
        v19 = ATL::AtlMultiplyThrow<unsigned __int64>((int)v17 / 2, 1uLL);
        if ( v19 <= 0x100 )
          lpData = v35;
        else
          ATL::CTempBuffer<unsigned short,1024,ATL::CCRTAllocator>::AllocateHeap(&lpData, v19);
      }
      catch ( ... )
      {
        v7 = 0;
        LODWORD(v17) = *(_DWORD *)Data;
        cbData = pulOut;
        v6 = v29;
        v5 = (HKEY *)v30;
        v4 = v31;
      }
      if ( !lpData )
      {
        if ( &v26 != (__int64 *)-120LL )
          ATL::CTempBuffer<unsigned short,1024,ATL::CCRTAllocator>::FreeHeap(&lpData);
        return 2147500037LL;
      }
      memset_0(lpData, 0, cbData);
      v20 = 0;
      if ( (int)v17 <= 0 )
      {
LABEL_53:
        v15 = RegSetValueExW(*v5, v4, 0, 3u, lpData, cbData);
        if ( lpData != v35 )
LABEL_25:
          ATL::CTempBuffer<unsigned short,1024,ATL::CCRTAllocator>::FreeHeap(&lpData);
LABEL_58:
        if ( v15 )
          return ATL::AtlHresultFromWin32(v15);
        goto LABEL_60;
      }
      v21 = 0LL;
      while ( 1 )
      {
        v22 = sz[v21];
        if ( v22 < 0x30u )
          break;
        if ( v22 <= 0x39u )
        {
          v23 = v22 - 48;
        }
        else
        {
          if ( v22 <= 0x40u )
            break;
          if ( v22 <= 0x46u )
          {
            v23 = v22 - 55;
          }
          else
          {
            if ( v22 <= 0x60u || v22 > 0x66u )
              break;
            v23 = v22 - 87;
          }
        }
LABEL_52:
        lpData[v20 / 2] |= v23 << (4 - 4 * (v20 & 1));
        ++v20;
        if ( ++v21 >= (int)v17 )
          goto LABEL_53;
      }
      v23 = 0;
      goto LABEL_52;
    }
  }
  return result;
}
