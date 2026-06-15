/*
 * XREFs of ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800CDC1C
 * Callers:
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x1800C1C8C (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
 * Callees:
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180006B4C (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x180008B44 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001FAA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001FB10 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x180028820 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x18002BFE0 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ??9ATL@@YA_NAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z @ 0x1800BE734 (--9ATL@@YA_NAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x1800C3354 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x1800CD280 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x1800CD7F8 (-Initialize@CAppInstanceId@@QEAAJPEBG@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800CE558 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAudioSessionInstanceId::Initialize(
        CAudioSessionInstanceId *this,
        const unsigned __int16 *a2,
        unsigned __int16 *a3)
{
  CAudioSessionInstanceId *v4; // r14
  int v5; // edi
  __int64 v6; // rax
  _BYTE *v7; // rdx
  volatile signed __int32 *v8; // rcx
  int *v9; // r15
  volatile signed __int32 *v10; // rbx
  __int64 v11; // r8
  _BYTE *v12; // rdx
  volatile signed __int32 *v13; // rcx
  int *v14; // r15
  volatile signed __int32 *v15; // rbx
  __int64 v16; // r8
  __int64 *v17; // rax
  bool v18; // bl
  __int64 v19; // rdx
  int *v21; // rbx
  __int64 v22; // r8
  unsigned __int16 *v23; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int16 *v24; // [rsp+28h] [rbp-60h] BYREF
  char *v25; // [rsp+30h] [rbp-58h] BYREF
  __int64 v26[2]; // [rsp+38h] [rbp-50h] BYREF
  ATL::CAtlException *v27; // [rsp+48h] [rbp-40h] BYREF
  ATL::CAtlException *v28; // [rsp+50h] [rbp-38h] BYREF
  int v31; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v32; // [rsp+A8h] [rbp+20h] BYREF

  v26[1] = -2LL;
  v4 = this;
  LODWORD(v32) = 0;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v24, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v23, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v25, (__int64)&ATL::g_strmgr);
  v5 = 0;
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
  try
  {
    ATL::CSimpleStringT<unsigned short,0>::SetString((void **)&v25, a3, v6);
  }
  catch ( ATL::CAtlException *v27 )
  {
    v21 = (int *)v27;
    if ( *(_DWORD *)v27 == -1073741571 )
      _o__resetstkoflw();
    v31 = *v21;
    v5 = v31;
    if ( v31 < 0 )
      goto LABEL_29;
    v4 = this;
  }
  v31 = 0;
  v7 = (_BYTE *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                   (__int64 *)&v25,
                   &v32,
                   v22,
                   &v31);
  v8 = (volatile signed __int32 *)(v7 - 24);
  v9 = (int *)(v24 - 12);
  if ( v7 - 24 != (_BYTE *)(v24 - 12) )
  {
    if ( v9[4] >= 0 && *(_QWORD *)v8 == *(_QWORD *)v9 )
    {
      v10 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v8);
      ATL::CStringData::Release((ATL::CStringData *)v9);
      v24 = (unsigned __int16 *)(v10 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((void **)&v24, v7, *((_DWORD *)v7 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v32 - 24));
  if ( v31 == -1 )
    goto LABEL_23;
  v12 = (_BYTE *)*ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                    (__int64 *)&v25,
                    &v32,
                    v11,
                    &v31);
  v13 = (volatile signed __int32 *)(v12 - 24);
  v14 = (int *)(v23 - 12);
  if ( v12 - 24 != (_BYTE *)(v23 - 12) )
  {
    if ( v14[4] >= 0 && *(_QWORD *)v13 == *(_QWORD *)v14 )
    {
      v15 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v13);
      ATL::CStringData::Release((ATL::CStringData *)v14);
      v23 = (unsigned __int16 *)(v15 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((void **)&v23, v12, *((_DWORD *)v12 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v32 - 24));
  if ( v31 == -1 )
    goto LABEL_23;
  v17 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          (__int64 *)&v25,
          v26,
          v16,
          &v31);
  v18 = 1;
  LODWORD(v32) = 1;
  if ( !ATL::operator!=((__int64)v17, v19) )
    v18 = v31 != -1;
  ATL::CStringData::Release((ATL::CStringData *)(v26[0] - 24));
  if ( v18 )
  {
LABEL_23:
    v5 = -2147467259;
LABEL_29:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 858, v5);
    goto LABEL_30;
  }
  try
  {
    CAudioIdentifier::UnescapeIdentifierString(&v24);
    CAudioIdentifier::UnescapeIdentifierString(&v23);
  }
  catch ( ATL::CAtlException *v28 )
  {
    v31 = *(_DWORD *)v28;
    v4 = this;
    v5 = v31;
  }
  if ( v5 < 0 )
    goto LABEL_29;
  v5 = CAudioEndpointId::Initialize(v4, a2);
  if ( v5 < 0 )
    goto LABEL_29;
  v5 = CAppAudioSessionId::Initialize((CAudioSessionInstanceId *)((char *)v4 + 8), v24);
  if ( v5 < 0 )
    goto LABEL_29;
  v5 = CAppInstanceId::Initialize((CAudioSessionInstanceId *)((char *)v4 + 56), v23);
  if ( v5 < 0 )
    goto LABEL_29;
  v5 = CAudioSessionInstanceId::CalculateStaticId(v4);
  if ( v5 < 0 )
    goto LABEL_29;
LABEL_30:
  ATL::CStringData::Release((ATL::CStringData *)(v25 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v23 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v24 - 12));
  return (unsigned int)v5;
}
