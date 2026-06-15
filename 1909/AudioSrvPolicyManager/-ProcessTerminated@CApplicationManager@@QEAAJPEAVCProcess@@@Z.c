/*
 * XREFs of ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001BEC0
 * Callers:
 *     ?Invoke@CProcessTerminatedWorkItem@@UEAAXXZ @ 0x180028EF0 (-Invoke@CProcessTerminatedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000D20C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000D600 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetActiveProcessCount@CApplication@@QEAAIXZ @ 0x18000E408 (-GetActiveProcessCount@CApplication@@QEAAIXZ.c)
 *     ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x18000EC98 (-OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ.c)
 *     ?CastingStateChanged@CApplication@@QEAAXH@Z @ 0x1800107CC (-CastingStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?VoipCallStateChanged@CApplication@@QEAAXH@Z @ 0x1800108CC (-VoipCallStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?DialogSessionStateChanged@CApplication@@QEAAXH@Z @ 0x1800109CC (-DialogSessionStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180012C80 (-RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_000.c)
 *     ?RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180012D38 (-RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_000.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x180013480 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x180013A08 (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     ?SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z @ 0x180013CC0 (-SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180019318 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001BAE4 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x18001CCBC (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 *     ?TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z @ 0x1800258E8 (-TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x180025AE8 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 *     ?TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z @ 0x180026178 (-TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x1800263AC (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180029554 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::ProcessTerminated(CApplicationManager *this, struct CProcess *a2)
{
  CApplicationManager *v3; // r13
  struct _RTL_CRITICAL_SECTION *v4; // r14
  struct CApplication *v5; // rsi
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // edx
  __int64 v9; // rdi
  __int64 v10; // r10
  __int64 v11; // r8
  unsigned int v12; // r9d
  __int64 v13; // rdx
  __int64 v14; // rax
  _DWORD *v15; // rax
  unsigned int i; // ecx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-69h] BYREF
  char v22; // [rsp+38h] [rbp-61h]
  LPCRITICAL_SECTION v23; // [rsp+40h] [rbp-59h] BYREF
  char v24; // [rsp+48h] [rbp-51h]
  __int64 v25; // [rsp+50h] [rbp-49h]
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+60h] [rbp-39h]
  _QWORD v27[17]; // [rsp+68h] [rbp-31h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  CApplicationManager *v29; // [rsp+100h] [rbp+67h] BYREF
  int v30; // [rsp+108h] [rbp+6Fh] BYREF
  struct _RTL_CRITICAL_SECTION *v31; // [rsp+118h] [rbp+7Fh]

  v29 = this;
  v25 = -2LL;
  v3 = g_ApplicationManager;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v31 = v4;
  v5 = (struct CApplication *)*((_QWORD *)a2 + 32);
  LODWORD(v29) = 0;
  v30 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)a2 + 32);
  v22 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  CProcess::CleanupProcessTerminationWatcher(a2, 0);
  *((_DWORD *)a2 + 112) = 2;
  _InterlockedAdd((volatile signed __int32 *)a2 + 2, 1u);
  _InterlockedAdd((volatile signed __int32 *)a2 + 2, 1u);
  v27[0] = off_180039AE8;
  v27[1] = a2;
  v27[7] = v27;
  v6 = QueueGenericWorkItem(v27);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xF99,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      (const char *)(unsigned int)v6);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)a2 + 32LL))(a2);
    (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)a2 + 24LL))(a2, 1LL);
  }
  if ( v22 )
    LeaveCriticalSection(lpCriticalSection);
  v23 = (LPCRITICAL_SECTION)((char *)a2 + 624);
  v24 = 0;
  ATL::CCritSecLock::Lock(&v23);
  if ( *((_QWORD *)a2 + 84) )
  {
    v7 = 0;
    v8 = *((_DWORD *)a2 + 170);
    if ( v8 )
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)(*((_QWORD *)a2 + 83) + 8LL * v7);
        if ( v9 )
          break;
        if ( ++v7 >= v8 )
          goto LABEL_19;
      }
      do
      {
        v10 = v9;
        v11 = *(_QWORD *)(v9 + 16);
        if ( !v11 )
        {
          v11 = 0LL;
          v12 = *((_DWORD *)a2 + 170);
          v13 = *(_DWORD *)(v9 + 24) % v12 + 1;
          do
          {
            if ( (unsigned int)v13 >= v12 )
              break;
            v14 = *((_QWORD *)a2 + 83);
            if ( *(_QWORD *)(v14 + 8 * v13) )
              v11 = *(_QWORD *)(v14 + 8 * v13);
            v13 = (unsigned int)(v13 + 1);
          }
          while ( !v11 );
        }
        v9 = v11;
        (*(void (__fastcall **)(_QWORD, char *, _QWORD))(**(_QWORD **)(v10 + 8) + 24LL))(
          *(_QWORD *)(v10 + 8),
          (char *)a2 + 16,
          *(_QWORD *)v10);
      }
      while ( v9 );
    }
  }
LABEL_19:
  if ( v24 )
    LeaveCriticalSection(v23);
  if ( (unsigned int)TsSessionIdIsAScreenReaderProcess(*((_DWORD *)a2 + 49), *((_DWORD *)a2 + 48), 0LL) )
    TsSessionIdScreenReaderStateChanged(*((_DWORD *)a2 + 49), *((_DWORD *)a2 + 48), 0, 1.0, &v30);
  CProcess::SimulateStreamStateChange(a2, 0, (int *)&v29);
  if ( (_DWORD)v29 || v30 )
    CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)v3, *((_DWORD *)a2 + 49), 3u);
  if ( v5 && (unsigned int)TsSessionIsActiveMediaApplication(v5) )
  {
    EnterCriticalSection(v4);
    v26 = v4;
    if ( !(unsigned int)CApplication::GetActiveProcessCount(v5) )
      CApplicationManager::UpdateActiveMediaAppForSession(v3, v5, 1);
    if ( v4 )
      LeaveCriticalSection(v4);
  }
  if ( (*((_BYTE *)a2 + 488) & 1) != 0 )
    CProcess::RegisteredForSoundLevelNotifications((__int64)a2, 0, -1);
  v15 = (_DWORD *)((char *)a2 + 528);
  if ( *((_DWORD *)a2 + 132) )
  {
    for ( i = 0; i < 2; ++i )
      *v15++ = 0;
    if ( v5 )
      CApplication::OnSmtcSubscriptionChanged(v5);
  }
  if ( (*((_DWORD *)a2 + 122) & 0x1000) != 0 )
    CProcess::RegisteredForTrackStateNotifications((__int64)a2, 0, -1);
  if ( *((_DWORD *)a2 + 123) )
  {
    TsSessionIdDeleteAppManagerClient(a2);
    *((_DWORD *)a2 + 123) = 0;
  }
  if ( *((_DWORD *)a2 + 124) )
    *((_DWORD *)a2 + 124) = 0;
  *((_DWORD *)a2 + 130) = 0;
  v17 = *((_DWORD *)a2 + 135);
  if ( v17 > 0 )
  {
    CApplication::CastingStateChanged(*((CApplication **)a2 + 32), -v17);
    *((_DWORD *)a2 + 135) = 0;
  }
  v18 = *((_DWORD *)a2 + 136);
  if ( v18 > 0 )
  {
    CApplication::VoipCallStateChanged(*((CApplication **)a2 + 32), -v18);
    *((_DWORD *)a2 + 136) = 0;
  }
  v19 = *((_DWORD *)a2 + 137);
  if ( v19 > 0 )
  {
    CApplication::DialogSessionStateChanged(*((CApplication **)a2 + 32), -v19);
    *((_DWORD *)a2 + 137) = 0;
  }
  CProcess::NotifyPLM((__int64)a2, 1);
  CApplicationManager::Unregister(v3, a2);
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
