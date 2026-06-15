/*
 * XREFs of ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x1800DB808
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800DC160 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800DC4D4 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18000A204 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x180020370 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18002DBA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x18003BF84 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180042D98 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180043FB4 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x180064CCA (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x18006B903 (memcpy_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BD31C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x1800D1B78 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ??$AtlConvAllocMemory@G@ATL@@YAXPEAPEAGHPEAGH@Z @ 0x1800DB4A0 (--$AtlConvAllocMemory@G@ATL@@YAXPEAPEAGHPEAGH@Z.c)
 *     ??9ATL@@YA_NPEBDAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z @ 0x1800DB540 (--9ATL@@YA_NPEBDAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@@Z.c)
 *     ??A?$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z @ 0x1800DB590 (--A-$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z.c)
 *     ?GetAt@?$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z @ 0x1800DB6E0 (-GetAt@-$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800DCAA4 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAppAudioSessionId::Initialize(CAppAudioSessionId *this, unsigned __int16 *a2)
{
  CAppAudioSessionId *v3; // r14
  int v4; // r15d
  int v5; // edi
  int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 *v9; // rax
  __int64 v10; // rdi
  char *v11; // rbx
  _BYTE *v13; // rdx
  volatile signed __int32 *v14; // rcx
  int *v15; // r12
  volatile signed __int32 *v16; // rbx
  __int64 v17; // r8
  __int64 *v18; // rax
  unsigned __int16 *v19; // rcx
  char v20; // r15
  int v21; // edi
  volatile signed __int32 *v22; // rcx
  int *v23; // r15
  volatile signed __int32 *v24; // rdi
  int *v25; // rbx
  int *v26; // rbx
  int *v27; // rbx
  int v28; // [rsp+20h] [rbp-1A8h] BYREF
  void *Src; // [rsp+28h] [rbp-1A0h] BYREF
  int v30; // [rsp+30h] [rbp-198h]
  unsigned __int16 *v31; // [rsp+38h] [rbp-190h] BYREF
  __int64 v32; // [rsp+40h] [rbp-188h] BYREF
  __int64 v33; // [rsp+48h] [rbp-180h] BYREF
  CAppAudioSessionId *v34; // [rsp+50h] [rbp-178h]
  __int64 v35; // [rsp+58h] [rbp-170h]
  ATL::CAtlException *v36; // [rsp+60h] [rbp-168h] BYREF
  ATL::CAtlException *v37; // [rsp+68h] [rbp-160h] BYREF
  ATL::CAtlException *v38; // [rsp+70h] [rbp-158h] BYREF
  LPCOLESTR lpsz; // [rsp+80h] [rbp-148h] BYREF
  _BYTE v40[264]; // [rsp+88h] [rbp-140h] BYREF

  v35 = -2LL;
  v3 = this;
  v34 = this;
  v4 = 0;
  v30 = 0;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v31, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&Src, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v32, (__int64)&ATL::g_strmgr);
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v32, a2);
  }
  catch ( ATL::CAtlException *v36 )
  {
    v25 = (int *)v36;
    if ( *(_DWORD *)v36 == -1073741571 )
      _o__resetstkoflw();
    v28 = *v25;
    v5 = v28;
    if ( v28 < 0 )
      goto LABEL_11;
    v4 = v30;
    v3 = v34;
  }
  *((GUID *)v3 + 1) = GUID_00000000_0000_0000_0000_000000000000;
  v6 = 0;
  v28 = 0;
  if ( (unsigned __int16)ATL::CSimpleStringT<unsigned short,0>::operator[](&v32, 0) == 124 )
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&v31, word_180162EC4);
  }
  else
  {
    v9 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
           &v32,
           &v33,
           v7,
           &v28);
    v4 = 1;
    v30 = 1;
    v6 = v28;
    ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)&v31, (_WORD *)*v9);
  }
  if ( (v4 & 1) != 0 )
  {
    v4 &= ~1u;
    ATL::CStringData::Release((ATL::CStringData *)(v33 - 24));
  }
  v10 = -1LL;
  if ( v6 == -1 )
  {
    v5 = -2147467259;
LABEL_11:
    v11 = (char *)Src;
LABEL_12:
    AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Initialize", 459, v5);
    goto LABEL_13;
  }
  v13 = (_BYTE *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                    &v32,
                    &v33,
                    v8,
                    &v28);
  v14 = (volatile signed __int32 *)(v13 - 24);
  v11 = (char *)Src;
  v15 = (int *)((char *)Src - 24);
  if ( v13 - 24 != (char *)Src - 24 )
  {
    if ( v15[4] >= 0 && *(_QWORD *)v14 == *(_QWORD *)v15 )
    {
      v16 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v14);
      ATL::CStringData::Release((ATL::CStringData *)v15);
      v11 = (char *)(v16 + 6);
      Src = v11;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(&Src, v13, *((_DWORD *)v13 - 4));
      v11 = (char *)Src;
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v33 - 24));
  if ( v28 == -1 )
    goto LABEL_20;
  v18 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v32,
          &v33,
          v17,
          &v28);
  v30 = v4 | 2;
  if ( ATL::operator!=(v19, v18) || (v20 = 0, v28 != -1) )
    v20 = 1;
  ATL::CStringData::Release((ATL::CStringData *)(v33 - 24));
  if ( v20 )
  {
LABEL_20:
    v5 = -2147467259;
    goto LABEL_12;
  }
  if ( *((_DWORD *)v31 - 4) == 1 && (unsigned __int16)ATL::CSimpleStringT<unsigned short,0>::GetAt(&v31) == 35 )
  {
    *((_DWORD *)v3 + 10) = 1;
  }
  else
  {
    try
    {
      CAudioIdentifier::UnescapeIdentifierString(&v31);
    }
    catch ( ATL::CAtlException *v37 )
    {
      v26 = (int *)v37;
      if ( *(_DWORD *)v37 == -1073741571 )
        _o__resetstkoflw();
      v28 = *v26;
      v5 = v28;
      if ( v28 < 0 )
        goto LABEL_11;
      v10 = -1LL;
      v3 = v34;
    }
  }
  try
  {
    CAudioIdentifier::UnescapeIdentifierString(&Src);
  }
  catch ( ATL::CAtlException *v38 )
  {
    v27 = (int *)v38;
    if ( *(_DWORD *)v38 == -1073741571 )
      _o__resetstkoflw();
    v28 = *v27;
    v5 = v28;
    if ( v28 < 0 )
      goto LABEL_11;
    v10 = -1LL;
    v3 = v34;
  }
  lpsz = (LPCOLESTR)v40;
  v11 = (char *)Src;
  if ( Src )
  {
    do
      ++v10;
    while ( *((_WORD *)Src + v10) );
    v21 = v10 + 1;
    ATL::AtlConvAllocMemory<unsigned short>((void **)&lpsz, v21, v40);
    if ( 2LL * v21 )
    {
      if ( !lpsz )
      {
        *(_DWORD *)_o__errno(0LL) = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memcpy_0((void *)lpsz, v11, 2LL * v21);
    }
  }
  else
  {
    lpsz = 0LL;
  }
  v5 = CLSIDFromString(lpsz, (LPCLSID)v3 + 1);
  if ( lpsz != (LPCOLESTR)v40 )
    free((void *)lpsz);
  if ( v5 < 0 )
    goto LABEL_12;
  v22 = (volatile signed __int32 *)(v31 - 12);
  v23 = (int *)(*(_QWORD *)v3 - 24LL);
  if ( v31 - 12 != (unsigned __int16 *)v23 )
  {
    if ( v23[4] >= 0 && *(_QWORD *)v22 == *(_QWORD *)v23 )
    {
      v24 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v22);
      ATL::CStringData::Release((ATL::CStringData *)v23);
      *(_QWORD *)v3 = v24 + 6;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((void **)v3, v31, *((_DWORD *)v31 - 4));
    }
  }
  v5 = CAppAudioSessionId::CalculateStaticId(v3);
  if ( v5 < 0 )
    goto LABEL_12;
LABEL_13:
  ATL::CStringData::Release((ATL::CStringData *)(v32 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v11 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v31 - 12));
  return (unsigned int)v5;
}
