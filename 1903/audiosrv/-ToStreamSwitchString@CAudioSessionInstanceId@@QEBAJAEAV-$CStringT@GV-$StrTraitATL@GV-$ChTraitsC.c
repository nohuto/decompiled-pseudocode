/*
 * XREFs of ?ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800DC988
 * Callers:
 *     ?GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800CED10 (-GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 * Callees:
 *     ?ToString@CAppInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180021A70 (-ToString@CAppInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x1800233A0 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?ToString@CAppAudioSessionId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180023680 (-ToString@CAppAudioSessionId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18002DBA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180043FB4 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?EscapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800DB6A0 (-EscapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@AT.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionInstanceId::ToStreamSwitchString(__int64 a1, wchar_t **a2)
{
  int v4; // ebx
  ATL::CAtlException *v6; // [rsp+28h] [rbp-20h] BYREF
  const wchar_t *v7; // [rsp+60h] [rbp+18h] BYREF
  char *v8; // [rsp+68h] [rbp+20h] BYREF

  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v8, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v7, (__int64)&ATL::g_strmgr);
  v4 = CAppAudioSessionId::ToString(a1 + 8, (void **)&v8);
  if ( v4 < 0 )
    goto LABEL_5;
  v4 = CAppInstanceId::ToString((unsigned int *)(a1 + 56), (__int64)&v7);
  if ( v4 < 0 )
    goto LABEL_5;
  try
  {
    CAudioIdentifier::EscapeIdentifierString((const wchar_t **)&v8);
    CAudioIdentifier::EscapeIdentifierString(&v7);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
      a2,
      L"%s|%s",
      v8,
      v7,
      -2LL);
  }
  catch ( ATL::CAtlException *v6 )
  {
    v4 = *(_DWORD *)v6;
  }
  if ( v4 < 0 )
LABEL_5:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::ToStreamSwitchString", 1185, v4);
  ATL::CStringData::Release((ATL::CStringData *)(v7 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v8 - 24));
  return (unsigned int)v4;
}
