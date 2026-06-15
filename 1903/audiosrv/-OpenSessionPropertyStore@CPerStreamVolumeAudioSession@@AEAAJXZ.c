/*
 * XREFs of ?OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180039588
 * Callers:
 *     ?StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180028AA4 (-StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ @ 0x1800392F0 (-LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ.c)
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x180039340 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x18002C84C (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18002DBA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG0PEAPEAUIPropertyStore@@@Z @ 0x180039764 (-GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG0PEAPEAUIPropertyStore@@@Z.c)
 *     ?GetOwningProcesses@CAudioSession@@QEAAJAEAV?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x18003A028 (-GetOwningProcesses@CAudioSession@@QEAAJAEAV-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncod.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x180040874 (-_Tidy@-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$c.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C2644 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x1800C2680 (WPP_SF_S.c)
 *     WPP_SF_Sq @ 0x1800D2104 (WPP_SF_Sq.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::OpenSessionPropertyStore(CPerStreamVolumeAudioSession *this)
{
  int v2; // edi
  struct IPropertyStore **v3; // r14
  unsigned __int16 *v4; // rbx
  const unsigned __int16 *v5; // r8
  int OwningProcesses; // eax
  unsigned int v7; // eax
  void *v8; // rsi
  unsigned int v9; // r15d
  unsigned int AudioSessionPropertyStore; // eax
  ATL::CStringData *v11; // rcx
  DWORD LastError; // edi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-30h] BYREF
  char v15; // [rsp+38h] [rbp-28h]
  __int128 v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  LPVOID pv; // [rsp+90h] [rbp+30h] BYREF
  unsigned __int16 *v20; // [rsp+98h] [rbp+38h] BYREF

  v2 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 992);
  v15 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v3 = (struct IPropertyStore **)((char *)this + 1032);
  if ( *((_QWORD *)this + 129) )
    goto LABEL_20;
  v20 = (unsigned __int16 *)((*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24);
  v2 = CAudioSessionInstanceId::ToPersistedString((__int64 *)this + 82, &v20, 1);
  if ( v2 < 0 )
  {
    v11 = (ATL::CStringData *)(v20 - 12);
LABEL_18:
    ATL::CStringData::Release(v11);
    if ( v2 < 0 )
      AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioSession::OpenSessionPropertyStore", 4489, v2);
    goto LABEL_20;
  }
  v4 = v20;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 95LL, &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids, v20);
  }
  v5 = 0LL;
  pv = 0LL;
  if ( !*((_BYTE *)this + 302) )
  {
LABEL_12:
    AudioSessionPropertyStore = CPolicyConfig::GetAudioSessionPropertyStore(g_PolicyConfig, v4, v5, v3);
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
          &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids,
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
        (unsigned int)&WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids,
        (_DWORD)v4,
        (char)*v3);
    }
    if ( pv )
      CoTaskMemFree(pv);
    v11 = (ATL::CStringData *)(v4 - 12);
    goto LABEL_18;
  }
  v17 = 0LL;
  v16 = 0LL;
  OwningProcesses = CAudioSession::GetOwningProcesses(this, &v16);
  v2 = OwningProcesses;
  if ( OwningProcesses >= 0 )
  {
    if ( ((*((_QWORD *)&v16 + 1) - (_QWORD)v16) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v16 + 48LL))(*(_QWORD *)v16);
      v8 = pv;
      v9 = v7;
      if ( pv )
      {
        LastError = GetLastError();
        CoTaskMemFree(v8);
        SetLastError(LastError);
      }
      (*(void (__fastcall **)(struct IAudioPolicyManager *, _QWORD, LPVOID *))(*(_QWORD *)g_PolicyManager + 376LL))(
        g_PolicyManager,
        v9,
        &pv);
    }
    std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Tidy(&v16);
    v5 = (const unsigned __int16 *)pv;
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1175,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
    (const char *)(unsigned int)OwningProcesses);
  std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Tidy(&v16);
  if ( pv )
    CoTaskMemFree(pv);
  ATL::CStringData::Release((ATL::CStringData *)(v4 - 12));
LABEL_20:
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v2;
}
