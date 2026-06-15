/*
 * XREFs of ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001EFC8
 * Callers:
 *     ?Invoke@CProcessTerminatedWorkItem@@UEAAXXZ @ 0x18002C470 (-Invoke@CProcessTerminatedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180010910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetActiveProcessCount@CApplication@@QEAAIXZ @ 0x180011620 (-GetActiveProcessCount@CApplication@@QEAAIXZ.c)
 *     ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x180011EB0 (-OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ.c)
 *     ?CastingStateChanged@CApplication@@QEAAXH@Z @ 0x180013A0C (-CastingStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?VoipCallStateChanged@CApplication@@QEAAXH@Z @ 0x180013B0C (-VoipCallStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180015E20 (-RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_000.c)
 *     ?RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180015ED8 (-RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_000.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x180016620 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x180016BA8 (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     ?SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z @ 0x180016E60 (-SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001C494 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001EBF8 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x18001FD50 (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 *     ?TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z @ 0x180028FE8 (-TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x1800291E8 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 *     ?TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z @ 0x18002984C (-TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x180029A80 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::ProcessTerminated(CApplicationManager *this, struct CProcess *a2)
{
  CApplicationManager *v3; // r13
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  struct CApplication *v5; // r14
  int v6; // r12d
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  unsigned int v9; // ecx
  unsigned int v10; // edx
  __int64 v11; // rdi
  __int64 v12; // r10
  __int64 v13; // r8
  unsigned int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // rax
  _DWORD *v17; // rax
  unsigned int i; // ecx
  int v19; // edx
  int v20; // edx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-18h] BYREF
  char v23; // [rsp+40h] [rbp-10h]
  CApplicationManager *v24; // [rsp+90h] [rbp+40h] BYREF
  int v25; // [rsp+98h] [rbp+48h] BYREF
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+A0h] [rbp+50h]

  v24 = this;
  v3 = g_ApplicationManager;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v26 = v4;
  v5 = (struct CApplication *)*((_QWORD *)a2 + 32);
  v25 = 0;
  v6 = 0;
  LODWORD(v24) = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)a2 + 32);
  v23 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  CProcess::CleanupProcessTerminationWatcher(a2, 0);
  *((_DWORD *)a2 + 112) = 2;
  v7 = (_QWORD *)*((_QWORD *)a2 + 9);
  while ( v7 )
  {
    v8 = v7[2];
    v7 = (_QWORD *)*v7;
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 80LL))(v8, (char *)a2 + 16);
  }
  if ( v23 )
    LeaveCriticalSection(lpCriticalSection);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)a2 + 616);
  v23 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_QWORD *)a2 + 83) )
  {
    v9 = 0;
    v10 = *((_DWORD *)a2 + 168);
    if ( v10 )
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(*((_QWORD *)a2 + 82) + 8LL * v9);
        if ( v11 )
          break;
        if ( ++v9 >= v10 )
          goto LABEL_18;
      }
      do
      {
        v12 = v11;
        v13 = *(_QWORD *)(v11 + 16);
        if ( !v13 )
        {
          v14 = *((_DWORD *)a2 + 168);
          v15 = *(_DWORD *)(v11 + 24) % v14 + 1;
          do
          {
            if ( (unsigned int)v15 >= v14 )
              break;
            v16 = *((_QWORD *)a2 + 82);
            if ( *(_QWORD *)(v16 + 8 * v15) )
              v13 = *(_QWORD *)(v16 + 8 * v15);
            v15 = (unsigned int)(v15 + 1);
          }
          while ( !v13 );
        }
        v11 = v13;
        (*(void (__fastcall **)(_QWORD, char *, _QWORD))(**(_QWORD **)(v12 + 8) + 24LL))(
          *(_QWORD *)(v12 + 8),
          (char *)a2 + 16,
          *(_QWORD *)v12);
      }
      while ( v11 );
    }
  }
LABEL_18:
  if ( v23 )
    LeaveCriticalSection(lpCriticalSection);
  if ( (unsigned int)TsSessionIdIsAScreenReaderProcess(*((_DWORD *)a2 + 49), *((_DWORD *)a2 + 48), 0LL) )
  {
    TsSessionIdScreenReaderStateChanged(*((_DWORD *)a2 + 49), *((_DWORD *)a2 + 48), 0, 1.0, (int *)&v24);
    v6 = (int)v24;
  }
  CProcess::SimulateStreamStateChange(a2, 0, &v25);
  if ( v25 || v6 )
    CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)v3, *((_DWORD *)a2 + 49), 3u);
  if ( v5 && (unsigned int)TsSessionIsActiveMediaApplication(v5) )
  {
    EnterCriticalSection(v4);
    v24 = (CApplicationManager *)v4;
    if ( !(unsigned int)CApplication::GetActiveProcessCount(v5) )
      CApplicationManager::UpdateActiveMediaAppForSession(v3, v5, 1);
    if ( v4 )
      LeaveCriticalSection(v4);
  }
  if ( (*((_BYTE *)a2 + 484) & 1) != 0 )
    CProcess::RegisteredForSoundLevelNotifications((__int64)a2, 0, -1);
  v17 = (_DWORD *)((char *)a2 + 524);
  if ( *((_DWORD *)a2 + 131) )
  {
    for ( i = 0; i < 2; ++i )
      *v17++ = 0;
    if ( v5 )
      CApplication::OnSmtcSubscriptionChanged(v5);
  }
  if ( (*((_DWORD *)a2 + 121) & 0x1000) != 0 )
    CProcess::RegisteredForTrackStateNotifications((__int64)a2, 0, -1);
  if ( *((_DWORD *)a2 + 122) )
  {
    TsSessionIdDeleteAppManagerClient(a2);
    *((_DWORD *)a2 + 122) = 0;
  }
  if ( *((_DWORD *)a2 + 123) )
    *((_DWORD *)a2 + 123) = 0;
  *((_DWORD *)a2 + 129) = 0;
  v19 = *((_DWORD *)a2 + 134);
  if ( v19 > 0 )
  {
    CApplication::CastingStateChanged(*((CApplication **)a2 + 32), -v19);
    *((_DWORD *)a2 + 134) = 0;
  }
  v20 = *((_DWORD *)a2 + 135);
  if ( v20 > 0 )
  {
    CApplication::VoipCallStateChanged(*((CApplication **)a2 + 32), -v20);
    *((_DWORD *)a2 + 135) = 0;
  }
  CProcess::NotifyPLM((__int64)a2, 1);
  CApplicationManager::Unregister(v3, a2);
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
