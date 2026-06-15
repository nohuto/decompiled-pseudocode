/*
 * XREFs of ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18004DDBC
 * Callers:
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x1800284D0 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ??1CPerStreamVolumeAudioSession@@EEAA@XZ @ 0x18002E1A4 (--1CPerStreamVolumeAudioSession@@EEAA@XZ.c)
 *     ?LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ @ 0x18003D5B0 (-LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ.c)
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x18003D600 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     ?Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800CD600 (-Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800D00E0 (-OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x18002F6DC (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180030A30 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180048474 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z @ 0x18004DEA0 (-ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Sq @ 0x1800D1CB4 (WPP_SF_Sq.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::CloseSessionPropertyStore(CPerStreamVolumeAudioSession *this)
{
  unsigned __int16 *v3; // rbx
  ATL::CStringData *v4; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v6; // [rsp+38h] [rbp-10h]
  unsigned __int16 *v7; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 992);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_QWORD *)this + 129) )
  {
    ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v7, (__int64)&ATL::g_strmgr);
    if ( (int)CAudioSessionInstanceId::ToPersistedString((__int64 *)this + 82, &v7, 1) < 0 )
    {
      v4 = (ATL::CStringData *)(v7 - 12);
    }
    else
    {
      v3 = v7;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_Sq(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          98,
          (unsigned int)&WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids,
          (_DWORD)v7,
          *((_QWORD *)this + 129));
      }
      CPolicyConfig::ReleaseAudioSessionPropertyStore(g_PolicyConfig, v3);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 129) + 16LL))(*((_QWORD *)this + 129));
      *((_QWORD *)this + 129) = 0LL;
      v4 = (ATL::CStringData *)(v3 - 12);
    }
    ATL::CStringData::Release(v4);
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
