/*
 * XREFs of ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x1800D05BC
 * Callers:
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x1800D8860 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18000A204 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18002DBA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x18003BF84 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180042D98 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180043FB4 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ??9ATL@@YA_NAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z @ 0x1800CCF4C (--9ATL@@YA_NAEBV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@0@PEBD@Z.c)
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x1800D1B78 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800DC160 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800DCAA4 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CAudioSession::ParseStreamSwitchId(
        const unsigned __int16 *a1,
        unsigned __int16 *a2,
        struct CAudioSessionInstanceId *a3,
        unsigned int *a4,
        unsigned int *a5,
        bool *a6)
{
  int v7; // edi
  _BYTE *v8; // rdx
  volatile signed __int32 *v9; // rcx
  int *v10; // rsi
  volatile signed __int32 *v11; // rbx
  __int64 v12; // r8
  _BYTE *v13; // rdx
  volatile signed __int32 *v14; // rcx
  int *v15; // rsi
  volatile signed __int32 *v16; // rbx
  __int64 v17; // r8
  _BYTE *v18; // rdx
  volatile signed __int32 *v19; // rcx
  int *v20; // rsi
  volatile signed __int32 *v21; // rbx
  __int64 v22; // r8
  _BYTE *v23; // rdx
  volatile signed __int32 *v24; // rcx
  int *v25; // rsi
  volatile signed __int32 *v26; // rbx
  __int64 v27; // r8
  __int64 v28; // rax
  bool v29; // bl
  __int64 v30; // rdx
  int *v32; // rbx
  __int64 v33; // r8
  int v34; // [rsp+20h] [rbp-78h] BYREF
  __int64 v35; // [rsp+28h] [rbp-70h] BYREF
  __int64 v36; // [rsp+30h] [rbp-68h] BYREF
  wchar_t *v37; // [rsp+38h] [rbp-60h] BYREF
  wchar_t *v38; // [rsp+40h] [rbp-58h] BYREF
  wchar_t *String; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int16 *v40; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v41[2]; // [rsp+58h] [rbp-40h] BYREF
  ATL::CAtlException *v42; // [rsp+68h] [rbp-30h] BYREF
  ATL::CAtlException *v43; // [rsp+70h] [rbp-28h] BYREF

  v41[1] = -2LL;
  LODWORD(v35) = 0;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v36, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v40, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&String, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v38, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v37, (__int64)&ATL::g_strmgr);
  try
  {
    v7 = 0;
    ATL::CSimpleStringT<unsigned short,0>::SetString(&v36, a2);
  }
  catch ( ATL::CAtlException *v42 )
  {
    v32 = (int *)v42;
    if ( *(_DWORD *)v42 == -1073741571 )
      _o__resetstkoflw();
    v34 = *v32;
    v7 = v34;
    if ( v34 < 0 )
      goto LABEL_31;
  }
  v34 = 0;
  v8 = *(_BYTE **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                    &v36,
                    &v35,
                    v33,
                    &v34);
  v9 = (volatile signed __int32 *)(v8 - 24);
  v10 = (int *)(v40 - 12);
  if ( v8 - 24 != (_BYTE *)(v40 - 12) )
  {
    if ( v10[4] >= 0 && *(_QWORD *)v9 == *(_QWORD *)v10 )
    {
      v11 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v9);
      ATL::CStringData::Release((ATL::CStringData *)v10);
      v40 = (unsigned __int16 *)(v11 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((void **)&v40, v8, *((_DWORD *)v8 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v35 - 24));
  if ( v34 == -1 )
    goto LABEL_30;
  v13 = *(_BYTE **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                     &v36,
                     &v35,
                     v12,
                     &v34);
  v14 = (volatile signed __int32 *)(v13 - 24);
  v15 = (int *)(String - 12);
  if ( v13 - 24 != (_BYTE *)(String - 12) )
  {
    if ( v15[4] >= 0 && *(_QWORD *)v14 == *(_QWORD *)v15 )
    {
      v16 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v14);
      ATL::CStringData::Release((ATL::CStringData *)v15);
      String = (wchar_t *)(v16 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((void **)&String, v13, *((_DWORD *)v13 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v35 - 24));
  if ( v34 == -1 )
    goto LABEL_30;
  v18 = *(_BYTE **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                     &v36,
                     &v35,
                     v17,
                     &v34);
  v19 = (volatile signed __int32 *)(v18 - 24);
  v20 = (int *)(v38 - 12);
  if ( v18 - 24 != (_BYTE *)(v38 - 12) )
  {
    if ( v20[4] >= 0 && *(_QWORD *)v19 == *(_QWORD *)v20 )
    {
      v21 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v19);
      ATL::CStringData::Release((ATL::CStringData *)v20);
      v38 = (wchar_t *)(v21 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((void **)&v38, v18, *((_DWORD *)v18 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v35 - 24));
  if ( v34 == -1 )
    goto LABEL_30;
  v23 = *(_BYTE **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
                     &v36,
                     &v35,
                     v22,
                     &v34);
  v24 = (volatile signed __int32 *)(v23 - 24);
  v25 = (int *)(v37 - 12);
  if ( v23 - 24 != (_BYTE *)(v37 - 12) )
  {
    if ( v25[4] >= 0 && *(_QWORD *)v24 == *(_QWORD *)v25 )
    {
      v26 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v24);
      ATL::CStringData::Release((ATL::CStringData *)v25);
      v37 = (wchar_t *)(v26 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((void **)&v37, v23, *((_DWORD *)v23 - 4));
    }
  }
  ATL::CStringData::Release((ATL::CStringData *)(v35 - 24));
  if ( v34 == -1 )
    goto LABEL_30;
  v28 = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Tokenize(
          &v36,
          v41,
          v27,
          &v34);
  v29 = 1;
  LODWORD(v35) = 1;
  if ( !ATL::operator!=(v28, v30) )
    v29 = v34 != -1;
  ATL::CStringData::Release((ATL::CStringData *)(v41[0] - 24LL));
  if ( v29 )
  {
LABEL_30:
    v7 = -2147467259;
  }
  else
  {
    try
    {
      CAudioIdentifier::UnescapeIdentifierString(&v40);
      CAudioIdentifier::UnescapeIdentifierString(&String);
      CAudioIdentifier::UnescapeIdentifierString(&v38);
      CAudioIdentifier::UnescapeIdentifierString(&v37);
    }
    catch ( ATL::CAtlException *v43 )
    {
      v34 = *(_DWORD *)v43;
      v7 = v34;
    }
    if ( v7 >= 0 )
    {
      v7 = CAudioSessionInstanceId::Initialize(a3, a1, v40);
      if ( v7 >= 0 )
      {
        *a4 = wcstoul(String, 0LL, 10);
        *a5 = wcstoul(v38, 0LL, 10);
        *a6 = wcstoul(v37, 0LL, 10) != 0;
        goto LABEL_32;
      }
    }
  }
LABEL_31:
  AudSrvTraceLoggingErrorHelper("CAudioSession::ParseStreamSwitchId", 629, v7);
LABEL_32:
  ATL::CStringData::Release((ATL::CStringData *)(v37 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v38 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(String - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v40 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v36 - 24));
  return (unsigned int)v7;
}
