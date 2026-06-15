/*
 * XREFs of ?OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180006A28
 * Callers:
 *     ?LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ @ 0x180003D20 (-LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ.c)
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x1800067B0 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     ?StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180010BD4 (-StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 * Callees:
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180006B4C (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x180006B84 (-GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBGPEAPEAUIPropertyStore@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x18001F54C (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001FAA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     WPP_SF_S @ 0x1800B3ED8 (WPP_SF_S.c)
 *     WPP_SF_Sq @ 0x1800C38D4 (WPP_SF_Sq.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::OpenSessionPropertyStore(CPerStreamVolumeAudioSession *this)
{
  int v2; // edi
  struct IPropertyStore **v3; // rsi
  CPolicyConfig *v4; // rcx
  unsigned __int16 *v5; // rbx
  unsigned int AudioSessionPropertyStore; // eax
  ATL::CStringData *v7; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+38h] [rbp-10h]
  unsigned __int16 *v11; // [rsp+50h] [rbp+8h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 1032);
  v2 = 0;
  v10 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v3 = (struct IPropertyStore **)((char *)this + 1072);
  if ( !*((_QWORD *)this + 134) )
  {
    ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v11, &ATL::g_strmgr);
    v2 = CAudioSessionInstanceId::ToPersistedString((char *)this + 696, &v11, 1LL);
    if ( v2 < 0 )
    {
      v7 = (ATL::CStringData *)(v11 - 12);
    }
    else
    {
      v4 = WPP_GLOBAL_Control;
      v5 = v11;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 95LL, &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids, v11);
      }
      AudioSessionPropertyStore = CPolicyConfig::GetAudioSessionPropertyStore(v4, v5, v3);
      v2 = AudioSessionPropertyStore;
      if ( AudioSessionPropertyStore )
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            96LL,
            &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids,
            AudioSessionPropertyStore);
        }
      }
      else if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
             && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_Sq(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          97,
          (unsigned int)&WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids,
          (_DWORD)v5,
          (char)*v3);
      }
      v7 = (ATL::CStringData *)(v5 - 12);
    }
    ATL::CStringData::Release(v7);
    if ( v2 < 0 )
      AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioSession::OpenSessionPropertyStore", 0x1183u, v2);
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v2;
}
