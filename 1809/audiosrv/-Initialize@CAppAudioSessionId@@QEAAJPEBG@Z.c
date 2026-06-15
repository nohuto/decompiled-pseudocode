/*
 * XREFs of ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x1800CD280
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800CDC1C (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800CDFBC (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180006B4C (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x180008B44 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001FAA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001FB10 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x18002B8C0 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x18006165A (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x1800C3354 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ??$AtlConvAllocMemory@G@ATL@@YAXPEAPEAGHPEAGH@Z @ 0x1800CCEA8 (--$AtlConvAllocMemory@G@ATL@@YAXPEAPEAGHPEAGH@Z.c)
 *     ??9ATL@@YA_NPEBDAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z @ 0x1800CCF48 (--9ATL@@YA_NPEBDAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z.c)
 *     ?GetAt@?$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z @ 0x1800CD10C (-GetAt@-$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800CE558 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAppAudioSessionId::Initialize(CAppAudioSessionId *this, unsigned __int16 *a2)
{
  CAppAudioSessionId *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rax
  HRESULT v6; // esi
  _BYTE *v7; // rdx
  volatile signed __int32 *v8; // rcx
  char *v9; // rbx
  int *v10; // rdi
  volatile signed __int32 *v11; // rbx
  __int64 v12; // r8
  _BYTE *v13; // rdx
  volatile signed __int32 *v14; // rcx
  char *v15; // rdi
  int *v16; // r15
  volatile signed __int32 *v17; // rdi
  __int64 v18; // r8
  __int64 *v19; // rax
  unsigned __int16 *v20; // rcx
  char v21; // r15
  int v22; // esi
  volatile signed __int32 *v23; // rcx
  int *v24; // r15
  volatile signed __int32 *v25; // rsi
  int *v27; // rbx
  __int64 v28; // r8
  int *v29; // rbx
  int *v30; // rbx
  HRESULT v31; // [rsp+20h] [rbp-1A8h] BYREF
  char *v32; // [rsp+28h] [rbp-1A0h] BYREF
  void *Src; // [rsp+30h] [rbp-198h] BYREF
  __int64 v34; // [rsp+38h] [rbp-190h] BYREF
  char *v35; // [rsp+40h] [rbp-188h] BYREF
  CAppAudioSessionId *v36; // [rsp+48h] [rbp-180h]
  __int64 v37[2]; // [rsp+50h] [rbp-178h] BYREF
  ATL::CAtlException *v38; // [rsp+60h] [rbp-168h] BYREF
  ATL::CAtlException *v39; // [rsp+68h] [rbp-160h] BYREF
  ATL::CAtlException *v40; // [rsp+70h] [rbp-158h] BYREF
  LPCOLESTR lpsz; // [rsp+80h] [rbp-148h] BYREF
  _BYTE v42[264]; // [rsp+88h] [rbp-140h] BYREF

  v37[1] = -2LL;
  v3 = this;
  v36 = this;
  LODWORD(v34) = 0;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v32, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&Src, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v35, (__int64)&ATL::g_strmgr);
  v4 = -1LL;
  if ( a2 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a2[v5] );
  }
  else
  {
    LODWORD(v5) = 0;
  }
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString((void **)&v35, a2, v5);
  }
  catch ( ATL::CAtlException *v38 )
  {
    v27 = (int *)v38;
    if ( *(_DWORD *)v38 == -1073741571 )
      _o__resetstkoflw();
    v31 = *v27;
    v6 = v31;
    if ( v31 < 0 )
      goto LABEL_51;
    v4 = -1LL;
    v3 = v36;
  }
  *((GUID *)v3 + 1) = GUID_00000000_0000_0000_0000_000000000000;
  v31 = 0;
  v7 = (_BYTE *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                   (__int64 *)&v35,
                   &v34,
                   v28,
                   &v31);
  v8 = (volatile signed __int32 *)(v7 - 24);
  v9 = v32;
  v10 = (int *)(v32 - 24);
  if ( v7 - 24 != v32 - 24 )
  {
    if ( v10[4] >= 0 && *(_QWORD *)v8 == *(_QWORD *)v10 )
    {
      v11 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v8);
      ATL::CStringData::Release((ATL::CStringData *)v10);
      v9 = (char *)(v11 + 6);
      v32 = v9;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((void **)&v32, v7, *((_DWORD *)v7 - 4));
      v9 = v32;
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v34 - 24));
  if ( v31 == -1 )
  {
    v6 = -2147467259;
LABEL_52:
    v15 = (char *)Src;
    goto LABEL_53;
  }
  v13 = (_BYTE *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                    (__int64 *)&v35,
                    &v34,
                    v12,
                    &v31);
  v14 = (volatile signed __int32 *)(v13 - 24);
  v15 = (char *)Src;
  v16 = (int *)((char *)Src - 24);
  if ( v13 - 24 != (char *)Src - 24 )
  {
    if ( v16[4] >= 0 && *(_QWORD *)v14 == *(_QWORD *)v16 )
    {
      v17 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v14);
      ATL::CStringData::Release((ATL::CStringData *)v16);
      v15 = (char *)(v17 + 6);
      Src = v15;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(&Src, v13, *((_DWORD *)v13 - 4));
      v15 = (char *)Src;
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v34 - 24));
  if ( v31 == -1 )
    goto LABEL_21;
  v19 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          (__int64 *)&v35,
          v37,
          v18,
          &v31);
  LODWORD(v34) = 1;
  if ( ATL::operator!=(v20, v19) || (v21 = 0, v31 != -1) )
    v21 = 1;
  ATL::CStringData::Release((ATL::CStringData *)(v37[0] - 24));
  if ( v21 )
  {
LABEL_21:
    v6 = -2147467259;
LABEL_53:
    AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Initialize", 450, v6);
    goto LABEL_54;
  }
  if ( *((_DWORD *)v9 - 4) == 1
    && (unsigned __int16)ATL::CSimpleStringT<unsigned short,0>::GetAt((unsigned __int16 **)&v32) == 35 )
  {
    *((_DWORD *)v3 + 10) = 1;
  }
  else
  {
    try
    {
      CAudioIdentifier::UnescapeIdentifierString(&v32);
    }
    catch ( ATL::CAtlException *v39 )
    {
      v29 = (int *)v39;
      if ( *(_DWORD *)v39 == -1073741571 )
        _o__resetstkoflw();
      v31 = *v29;
      v6 = v31;
      if ( v31 < 0 )
        goto LABEL_51;
      v4 = -1LL;
      v3 = v36;
    }
    v9 = v32;
  }
  try
  {
    CAudioIdentifier::UnescapeIdentifierString(&Src);
  }
  catch ( ATL::CAtlException *v40 )
  {
    v30 = (int *)v40;
    if ( *(_DWORD *)v40 == -1073741571 )
      _o__resetstkoflw();
    v31 = *v30;
    v6 = v31;
    if ( v31 >= 0 )
    {
      v4 = -1LL;
      v9 = v32;
      v3 = v36;
      goto LABEL_34;
    }
LABEL_51:
    v9 = v32;
    goto LABEL_52;
  }
LABEL_34:
  lpsz = (LPCOLESTR)v42;
  v15 = (char *)Src;
  if ( Src )
  {
    do
      ++v4;
    while ( *((_WORD *)Src + v4) );
    v22 = v4 + 1;
    ATL::AtlConvAllocMemory<unsigned short>((void **)&lpsz, v22, v42);
    if ( 2LL * v22 )
    {
      if ( !lpsz )
      {
        *(_DWORD *)_o__errno(0LL) = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memcpy_0((void *)lpsz, v15, 2LL * v22);
    }
  }
  else
  {
    lpsz = 0LL;
  }
  v6 = CLSIDFromString(lpsz, (LPCLSID)v3 + 1);
  if ( lpsz != (LPCOLESTR)v42 )
    free((void *)lpsz);
  if ( v6 < 0 )
    goto LABEL_53;
  v23 = (volatile signed __int32 *)(v9 - 24);
  v24 = (int *)(*(_QWORD *)v3 - 24LL);
  if ( v9 - 24 != (char *)v24 )
  {
    if ( v24[4] >= 0 && *(_QWORD *)v23 == *(_QWORD *)v24 )
    {
      v25 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v23);
      ATL::CStringData::Release((ATL::CStringData *)v24);
      *(_QWORD *)v3 = v25 + 6;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((void **)v3, v9, *((_DWORD *)v9 - 4));
    }
  }
  v6 = CAppAudioSessionId::CalculateStaticId(v3);
  if ( v6 < 0 )
    goto LABEL_53;
LABEL_54:
  ATL::CStringData::Release((ATL::CStringData *)(v35 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v15 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v9 - 24));
  return (unsigned int)v6;
}
