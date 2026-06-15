/*
 * XREFs of ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800DC160
 * Callers:
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x1800D05BC (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
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

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAudioSessionInstanceId::Initialize(
        CAudioSessionInstanceId *this,
        const unsigned __int16 *a2,
        unsigned __int16 *a3)
{
  CAudioSessionInstanceId *v4; // rsi
  int v5; // edi
  _BYTE *v6; // rdx
  volatile signed __int32 *v7; // rcx
  int *v8; // r14
  volatile signed __int32 *v9; // rbx
  __int64 v10; // r8
  _BYTE *v11; // rdx
  volatile signed __int32 *v12; // rcx
  int *v13; // r14
  volatile signed __int32 *v14; // rbx
  __int64 v15; // r8
  __int64 *v16; // rax
  bool v17; // bl
  __int64 v18; // rdx
  int *v20; // rbx
  __int64 v21; // r8
  unsigned __int16 *v22; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int16 *v23; // [rsp+28h] [rbp-50h] BYREF
  __int64 v24; // [rsp+30h] [rbp-48h] BYREF
  __int64 v25; // [rsp+38h] [rbp-40h] BYREF
  __int64 v26[2]; // [rsp+40h] [rbp-38h] BYREF
  ATL::CAtlException *v27; // [rsp+50h] [rbp-28h] BYREF
  ATL::CAtlException *v28; // [rsp+58h] [rbp-20h] BYREF
  int v31; // [rsp+98h] [rbp+20h] BYREF

  v26[1] = -2LL;
  v4 = this;
  LODWORD(v24) = 0;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v23, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v22, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v25, (__int64)&ATL::g_strmgr);
  try
  {
    v5 = 0;
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v25, a3);
  }
  catch ( ATL::CAtlException *v27 )
  {
    v20 = (int *)v27;
    if ( *(_DWORD *)v27 == -1073741571 )
      _o__resetstkoflw();
    v31 = *v20;
    v5 = v31;
    if ( v31 < 0 )
      goto LABEL_25;
    v4 = this;
  }
  v31 = 0;
  v6 = (_BYTE *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                   &v25,
                   &v24,
                   v21,
                   &v31);
  v7 = (volatile signed __int32 *)(v6 - 24);
  v8 = (int *)(v23 - 12);
  if ( v6 - 24 != (_BYTE *)(v23 - 12) )
  {
    if ( v8[4] >= 0 && *(_QWORD *)v7 == *(_QWORD *)v8 )
    {
      v9 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v7);
      ATL::CStringData::Release((ATL::CStringData *)v8);
      v23 = (unsigned __int16 *)(v9 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((void **)&v23, v6, *((_DWORD *)v6 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v24 - 24));
  if ( v31 == -1 )
    goto LABEL_19;
  v11 = (_BYTE *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                    &v25,
                    &v24,
                    v10,
                    &v31);
  v12 = (volatile signed __int32 *)(v11 - 24);
  v13 = (int *)(v22 - 12);
  if ( v11 - 24 != (_BYTE *)(v22 - 12) )
  {
    if ( v13[4] >= 0 && *(_QWORD *)v12 == *(_QWORD *)v13 )
    {
      v14 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v12);
      ATL::CStringData::Release((ATL::CStringData *)v13);
      v22 = (unsigned __int16 *)(v14 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((void **)&v22, v11, *((_DWORD *)v11 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v24 - 24));
  if ( v31 == -1 )
    goto LABEL_19;
  v16 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v25,
          v26,
          v15,
          &v31);
  v17 = 1;
  LODWORD(v24) = 1;
  if ( !ATL::operator!=((__int64)v16, v18) )
    v17 = v31 != -1;
  ATL::CStringData::Release((ATL::CStringData *)(v26[0] - 24));
  if ( v17 )
  {
LABEL_19:
    v5 = -2147467259;
LABEL_25:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 867, v5);
    goto LABEL_26;
  }
  try
  {
    CAudioIdentifier::UnescapeIdentifierString(&v23);
    CAudioIdentifier::UnescapeIdentifierString(&v22);
  }
  catch ( ATL::CAtlException *v28 )
  {
    v31 = *(_DWORD *)v28;
    v4 = this;
    v5 = v31;
  }
  if ( v5 < 0 )
    goto LABEL_25;
  v5 = CAudioEndpointId::Initialize(v4, a2);
  if ( v5 < 0 )
    goto LABEL_25;
  v5 = CAppAudioSessionId::Initialize((CAudioSessionInstanceId *)((char *)v4 + 8), v23);
  if ( v5 < 0 )
    goto LABEL_25;
  v5 = CAppInstanceId::Initialize((CAudioSessionInstanceId *)((char *)v4 + 56), v22);
  if ( v5 < 0 )
    goto LABEL_25;
  v5 = CAudioSessionInstanceId::CalculateStaticId(v4);
  if ( v5 < 0 )
    goto LABEL_25;
LABEL_26:
  ATL::CStringData::Release((ATL::CStringData *)(v25 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v22 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v23 - 12));
  return (unsigned int)v5;
}
