/*
 * XREFs of ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800DC4D4
 * Callers:
 *     AudioSessionManagerGetExistingSession @ 0x1800D8670 (AudioSessionManagerGetExistingSession.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18000A204 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x180020280 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180020AB0 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18002DBA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x18003BF84 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180042D98 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180043FB4 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ??9ATL@@YA_NAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z @ 0x1800CCF4C (--9ATL@@YA_NAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x1800D1B78 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x1800DB808 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x1800DBD74 (-Initialize@CAppInstanceId@@QEAAJPEBG@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800DCAA4 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CAudioSessionInstanceId::Initialize(CAudioSessionInstanceId *this, unsigned __int16 *a2)
{
  CAudioSessionInstanceId *v3; // rsi
  int v4; // edi
  _BYTE *v5; // rdx
  volatile signed __int32 *v6; // rcx
  int *v7; // r14
  volatile signed __int32 *v8; // rbx
  __int64 v9; // r8
  _BYTE *v10; // rdx
  volatile signed __int32 *v11; // rcx
  int *v12; // r14
  volatile signed __int32 *v13; // rbx
  __int64 v14; // r8
  _BYTE *v15; // rdx
  volatile signed __int32 *v16; // rcx
  int *v17; // r14
  volatile signed __int32 *v18; // rbx
  __int64 v19; // r8
  __int64 *v20; // rax
  bool v21; // bl
  __int64 v22; // rdx
  int *v24; // rbx
  __int64 v25; // r8
  __int64 v26; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int16 *v27; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int16 *v28; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int16 *v29; // [rsp+38h] [rbp-40h] BYREF
  __int64 v30[2]; // [rsp+40h] [rbp-38h] BYREF
  ATL::CAtlException *v31; // [rsp+50h] [rbp-28h] BYREF
  ATL::CAtlException *v32; // [rsp+58h] [rbp-20h] BYREF
  int v34; // [rsp+90h] [rbp+18h] BYREF
  __int64 v35; // [rsp+98h] [rbp+20h] BYREF

  v30[1] = -2LL;
  v3 = this;
  LODWORD(v35) = 0;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v29, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v28, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v27, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v26, (__int64)&ATL::g_strmgr);
  try
  {
    v4 = 0;
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v26, a2);
  }
  catch ( ATL::CAtlException *v31 )
  {
    v24 = (int *)v31;
    if ( *(_DWORD *)v31 == -1073741571 )
      _o__resetstkoflw();
    v34 = *v24;
    v4 = v34;
    if ( v34 < 0 )
      goto LABEL_32;
    v3 = this;
  }
  v34 = 0;
  v5 = (_BYTE *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                   &v26,
                   &v35,
                   v25,
                   &v34);
  v6 = (volatile signed __int32 *)(v5 - 24);
  v7 = (int *)(v29 - 12);
  if ( v5 - 24 != (_BYTE *)(v29 - 12) )
  {
    if ( v7[4] >= 0 && *(_QWORD *)v6 == *(_QWORD *)v7 )
    {
      v8 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v6);
      ATL::CStringData::Release((ATL::CStringData *)v7);
      v29 = (unsigned __int16 *)(v8 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((void **)&v29, v5, *((_DWORD *)v5 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v35 - 24));
  if ( v34 == -1 )
    goto LABEL_10;
  v10 = (_BYTE *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                    &v26,
                    &v35,
                    v9,
                    &v34);
  v11 = (volatile signed __int32 *)(v10 - 24);
  v12 = (int *)(v28 - 12);
  if ( v10 - 24 != (_BYTE *)(v28 - 12) )
  {
    if ( v12[4] >= 0 && *(_QWORD *)v11 == *(_QWORD *)v12 )
    {
      v13 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v11);
      ATL::CStringData::Release((ATL::CStringData *)v12);
      v28 = (unsigned __int16 *)(v13 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((void **)&v28, v10, *((_DWORD *)v10 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v35 - 24));
  if ( v34 == -1 )
    goto LABEL_10;
  v15 = (_BYTE *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                    &v26,
                    &v35,
                    v14,
                    &v34);
  v16 = (volatile signed __int32 *)(v15 - 24);
  v17 = (int *)(v27 - 12);
  if ( v15 - 24 != (_BYTE *)(v27 - 12) )
  {
    if ( v17[4] >= 0 && *(_QWORD *)v16 == *(_QWORD *)v17 )
    {
      v18 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v16);
      ATL::CStringData::Release((ATL::CStringData *)v17);
      v27 = (unsigned __int16 *)(v18 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((void **)&v27, v15, *((_DWORD *)v15 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v35 - 24));
  if ( v34 == -1 )
    goto LABEL_10;
  v20 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v26,
          v30,
          v19,
          &v34);
  v21 = 1;
  LODWORD(v35) = 1;
  if ( !ATL::operator!=((__int64)v20, v22) )
    v21 = v34 != -1;
  ATL::CStringData::Release((ATL::CStringData *)(v30[0] - 24));
  if ( v21 )
  {
LABEL_10:
    v4 = -2147467259;
LABEL_32:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 790, v4);
    goto LABEL_33;
  }
  try
  {
    CAudioIdentifier::UnescapeIdentifierString(&v29);
    CAudioIdentifier::UnescapeIdentifierString(&v28);
    CAudioIdentifier::UnescapeIdentifierString(&v27);
  }
  catch ( ATL::CAtlException *v32 )
  {
    v34 = *(_DWORD *)v32;
    v3 = this;
    v4 = v34;
  }
  if ( v4 < 0 )
    goto LABEL_32;
  v4 = CAudioEndpointId::Initialize(v3, v29);
  if ( v4 < 0 )
    goto LABEL_32;
  v4 = CAppAudioSessionId::Initialize((CAudioSessionInstanceId *)((char *)v3 + 8), v28);
  if ( v4 < 0 )
    goto LABEL_32;
  v4 = CAppInstanceId::Initialize((CAudioSessionInstanceId *)((char *)v3 + 56), v27);
  if ( v4 < 0 )
    goto LABEL_32;
  v4 = CAudioSessionInstanceId::CalculateStaticId(v3);
  if ( v4 < 0 )
    goto LABEL_32;
LABEL_33:
  ATL::CStringData::Release((ATL::CStringData *)(v26 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v27 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v28 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v29 - 12));
  return (unsigned int)v4;
}
