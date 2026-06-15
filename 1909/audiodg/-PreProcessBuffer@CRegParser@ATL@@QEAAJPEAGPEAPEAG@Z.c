/*
 * XREFs of ?PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z @ 0x14004FA50
 * Callers:
 *     ?RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z @ 0x1400506CC (-RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140015E90 (__security_check_cookie.c)
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x14002F588 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     ??1?$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ @ 0x140040290 (--1-$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QEAA@XZ.c)
 *     ??0CParseBuffer@CRegParser@ATL@@QEAA@H@Z @ 0x14004D234 (--0CParseBuffer@CRegParser@ATL@@QEAA@H@Z.c)
 *     ?Append@CParseBuffer@CRegParser@ATL@@QEAAHPEBGH@Z @ 0x14004E870 (-Append@CParseBuffer@CRegParser@ATL@@QEAAHPEBGH@Z.c)
 *     ?StrChrW@CRegParser@ATL@@KAPEAGPEAGG@Z @ 0x140051254 (-StrChrW@CRegParser@ATL@@KAPEAGPEAGG@Z.c)
 *     ?StrFromMap@CRegObject@ATL@@QEAAPEBGPEAG@Z @ 0x1400512A0 (-StrFromMap@CRegObject@ATL@@QEAAPEBGPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CRegParser::PreProcessBuffer(
        ATL::CRegObject **this,
        unsigned __int16 *a2,
        unsigned __int16 **a3)
{
  LPWSTR v4; // rbx
  unsigned int v6; // edi
  __int64 v7; // rax
  WCHAR v8; // ax
  LPWSTR v9; // rax
  const unsigned __int16 *v10; // rdx
  unsigned __int16 *v11; // rax
  unsigned __int16 *v12; // r14
  __int64 v13; // rax
  unsigned int v14; // eax
  const unsigned __int16 *v15; // rax
  __int64 v16; // r8
  int v17; // ebx
  LPWSTR v18; // rax
  unsigned __int16 *v19; // rcx
  __int64 v21; // [rsp+28h] [rbp-39h] BYREF
  LPVOID pv; // [rsp+30h] [rbp-31h]
  _QWORD *v23[2]; // [rsp+38h] [rbp-29h] BYREF
  unsigned __int16 v24[32]; // [rsp+48h] [rbp-19h] BYREF

  v23[1] = (_QWORD *)-2LL;
  v4 = a2;
  v6 = 0;
  if ( !a2 || !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v7 = -1LL;
  do
    ++v7;
  while ( a2[v7] );
  ATL::CRegParser::CParseBuffer::CParseBuffer((ATL::CRegParser::CParseBuffer *)&v21, 2 * v7);
  if ( !pv )
  {
LABEL_6:
    v6 = -2147024882;
    goto LABEL_24;
  }
  *this = (ATL::CRegObject *)v4;
  v8 = *v4;
  if ( !*v4 )
  {
LABEL_23:
    v19 = (unsigned __int16 *)pv;
    pv = 0LL;
    v21 = 0LL;
    *a3 = v19;
    goto LABEL_24;
  }
  while ( 1 )
  {
    if ( v8 != 37 )
    {
      v10 = v4;
LABEL_21:
      if ( !(unsigned int)ATL::CRegParser::CParseBuffer::Append((ATL::CRegParser::CParseBuffer *)&v21, v10, 1) )
        goto LABEL_6;
      goto LABEL_22;
    }
    v9 = CharNextW(v4);
    *this = (ATL::CRegObject *)v9;
    if ( *v9 == 37 )
    {
      v10 = v9;
      goto LABEL_21;
    }
    v11 = ATL::CRegParser::StrChrW(v9, 0x25u);
    v12 = v11;
    if ( !v11 )
      break;
    v13 = ((char *)v11 - (char *)*this) >> 1;
    if ( v13 > 31 )
    {
      v6 = -2147467259;
      goto LABEL_24;
    }
    v14 = _o_wcsncpy_s(v24, 32LL, *this, (int)v13);
    ATL::AtlCrtErrorCheck(v14);
    v15 = ATL::CRegObject::StrFromMap(this[1], v24);
    if ( !v15 )
      break;
    v23[0] = 0LL;
    v16 = -1LL;
    do
      ++v16;
    while ( v15[v16] );
    v17 = ATL::CRegParser::CParseBuffer::Append((ATL::CRegParser::CParseBuffer *)&v21, v15, v16);
    ATL::_ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::~CAtlSafeAllocBufferManager<ATL::CCRTAllocator>(v23);
    if ( !v17 )
      goto LABEL_6;
    if ( *this != (ATL::CRegObject *)v12 )
    {
      do
      {
        v18 = CharNextW((LPCWSTR)*this);
        *this = (ATL::CRegObject *)v18;
      }
      while ( v18 != v12 );
    }
LABEL_22:
    v4 = CharNextW((LPCWSTR)*this);
    *this = (ATL::CRegObject *)v4;
    v8 = *v4;
    if ( !*v4 )
      goto LABEL_23;
  }
  v6 = -2147352567;
LABEL_24:
  CoTaskMemFree(pv);
  return v6;
}
