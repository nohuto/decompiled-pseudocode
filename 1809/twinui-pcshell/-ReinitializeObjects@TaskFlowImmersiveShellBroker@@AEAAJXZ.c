/*
 * XREFs of ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801AA9BC
 * Callers:
 *     ?OnActivityFeedOperationStateChanged@TaskFlowImmersiveShellBroker@@UEAAJW4ActivityFeedOperationScope@@W4ActivityFeedOperationState@@@Z @ 0x1801AA370 (-OnActivityFeedOperationStateChanged@TaskFlowImmersiveShellBroker@@UEAAJW4ActivityFeedOperationS.c)
 *     ?SubscribeToServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801ABCA0 (-SubscribeToServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180056888 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@.c)
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x1800568F0 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$ActivateInstance@V?$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801A6110 (--$ActivateInstance@V-$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL.c)
 *     ??$PoliciesTaskFlowFeatureState@AEAE_N_N@TaskFlowDataEngineTelemetry@@SAXAEAE$$QEA_N1@Z @ 0x1801A6B90 (--$PoliciesTaskFlowFeatureState@AEAE_N_N@TaskFlowDataEngineTelemetry@@SAXAEAE$$QEA_N1@Z.c)
 *     ??$TaskflowDataEngine_CDPInitializeResult@AEAJ@TaskFlowDataEngineTelemetry@@SAXAEAJ@Z @ 0x1801A6ED0 (--$TaskflowDataEngine_CDPInitializeResult@AEAJ@TaskFlowDataEngineTelemetry@@SAXAEAJ@Z.c)
 *     ?EnsureViewActiveActivityManager@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801A8BAC (-EnsureViewActiveActivityManager@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?IsAFCAndActivityTrackingEnabled@TaskFlowImmersiveShellBroker@@AEAA_NXZ @ 0x1801AA264 (-IsAFCAndActivityTrackingEnabled@TaskFlowImmersiveShellBroker@@AEAA_NXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TaskFlowAFCIndexer@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801AAEFC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TaskFlowAFCIndexer@@@wil@@CAX_NW4Rep.c)
 *     ?StartActivityIndexer@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801AB53C (-StartActivityIndexer@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartAppActivitySessionListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801AB654 (-StartAppActivitySessionListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartAppViewListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801AB714 (-StartAppViewListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartAppViewTitleChangeListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801AB8AC (-StartAppViewTitleChangeListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartFileListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801ABA44 (-StartFileListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartUserPresenceListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801ABB04 (-StartUserPresenceListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskFlowImmersiveShellBroker::ReinitializeObjects(TaskFlowImmersiveShellBroker *this)
{
  bool v2; // dl
  __int64 v3; // rdx
  __int64 v4; // r8
  int started; // eax
  PVOID Reserved1; // rcx
  unsigned __int8 *v7; // rsi
  int v8; // ebx
  unsigned __int8 v9; // al
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  bool IsAFCAndActivityTrackingEnabled; // si
  __int64 v15; // r8
  wil::details::in1diag3 *v16; // rcx
  int v17; // eax
  unsigned __int8 v18; // al
  __int64 v19; // rdx
  TaskFlowImmersiveShellBroker *v20; // rcx
  __int64 v21; // r8
  int v22; // ebx
  __int64 v23; // rdx
  PVOID v25; // rbx
  __int64 v26; // rdx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int active; // eax
  bool v33; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int8 v34; // [rsp+21h] [rbp-3Fh] BYREF
  unsigned __int8 v35[2]; // [rsp+22h] [rbp-3Eh] BYREF
  __int16 v36; // [rsp+24h] [rbp-3Ch] BYREF
  __int64 v37; // [rsp+28h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  __int64 v39; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v37 = -2LL;
  wil::Feature<__WilFeatureTraits_Feature_TaskFlowAFCIndexer>::ReportUsageToService();
  wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)&hstringHeader, v2);
  if ( !*((_QWORD *)this + 34) && *((_DWORD *)this + 50) != 2 )
  {
    started = TaskFlowImmersiveShellBroker::StartActivityIndexer(this);
    if ( started < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        73LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)started);
  }
  Reserved1 = hstringHeader.Reserved.Reserved1;
  if ( hstringHeader.Reserved.Reserved1 )
    *((_DWORD *)hstringHeader.Reserved.Reserved1 + 4) = *(_DWORD *)&hstringHeader.Reserved.Reserved2[12];
  wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::ReportUsageToService(
    (__int64)Reserved1,
    v3,
    v4);
  v7 = (unsigned __int8 *)this + 288;
  if ( !*((_BYTE *)this + 288) )
  {
    v8 = CDPInitialize();
    LODWORD(hstringHeader.Reserved.Reserved1) = v8;
    TaskFlowDataEngineTelemetry::TaskflowDataEngine_CDPInitializeResult<long &>((int *)&hstringHeader);
    if ( v8 >= 0 )
    {
      if ( v7 == (unsigned __int8 *)&v33 )
      {
        CDPShutdown();
      }
      else
      {
        v9 = *v7;
        *v7 = 0;
        if ( v9 )
          CDPShutdown();
        *v7 = 1;
      }
      if ( !*((_QWORD *)this + 37) && *((_DWORD *)this + 50) != 2 )
      {
        wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 37);
        v10 = CDPGetUserActivitySettings((char *)this + 296);
        v11 = retaddr;
        if ( v10 < 0 )
        {
          v12 = 93LL;
LABEL_20:
          wil::details::in1diag3::_Log_Hr(
            v11,
            v12,
            (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
            (const char *)(unsigned int)v10);
          goto LABEL_21;
        }
        v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 37) + 56LL))(
                *((_QWORD *)this + 37),
                ((unsigned __int64)this + 144) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
                (char *)this + 304);
        v11 = retaddr;
        if ( v10 < 0 )
        {
          v12 = 95LL;
          goto LABEL_20;
        }
      }
    }
  }
LABEL_21:
  IsAFCAndActivityTrackingEnabled = TaskFlowImmersiveShellBroker::IsAFCAndActivityTrackingEnabled(this);
  v33 = IsAFCAndActivityTrackingEnabled;
  v36 = 1;
  v16 = (wil::details::in1diag3 *)*((_QWORD *)this + 37);
  if ( !v16 )
    goto LABEL_25;
  v17 = (*(__int64 (__fastcall **)(wil::details::in1diag3 *, __int64, __int16 *))(*(_QWORD *)v16 + 48LL))(
          v16,
          3LL,
          &v36);
  v16 = retaddr;
  if ( v17 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      107LL,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)v17);
  v18 = 1;
  if ( v36 )
LABEL_25:
    v18 = 0;
  v34 = v18;
  wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::ReportUsageToService(
    (__int64)v16,
    v13,
    v15);
  v35[0] = 1;
  TaskFlowDataEngineTelemetry::PoliciesTaskFlowFeatureState<unsigned char &,bool,bool>(
    (unsigned __int8 *)&v33,
    v35,
    &v34);
  if ( IsAFCAndActivityTrackingEnabled
    && (!*((_QWORD *)this + 26) && *((_DWORD *)this + 50) != 2 || *((_BYTE *)this + 313)) )
  {
    v39 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Internal.Shell.TaskFlow.DataEngine.ActivityArbiter",
      0x3Bu,
      0x3Au);
    v22 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter>>(
            v39,
            (__int64 *)this + 26);
    if ( v22 < 0 )
    {
      v23 = 117LL;
LABEL_32:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v23,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v22);
      return (unsigned int)v22;
    }
  }
  if ( *((_DWORD *)this + 50) != 2 )
  {
    hstringHeader.Reserved.Reserved1 = (PVOID)*((_QWORD *)this + 26);
    v25 = hstringHeader.Reserved.Reserved1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&hstringHeader);
    if ( v25 )
    {
      LOBYTE(v26) = IsAFCAndActivityTrackingEnabled;
      v27 = (*(__int64 (__fastcall **)(PVOID, __int64))(*(_QWORD *)v25 + 80LL))(v25, v26);
      if ( v27 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          130LL,
          (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v27);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hstringHeader);
  }
  if ( IsAFCAndActivityTrackingEnabled )
  {
    if ( !*((_QWORD *)this + 27) && *((_DWORD *)this + 50) != 2 || *((_BYTE *)this + 313) )
    {
      v22 = TaskFlowImmersiveShellBroker::StartAppViewListener(this);
      if ( v22 < 0 )
      {
        v23 = 139LL;
        goto LABEL_32;
      }
    }
    if ( !*((_QWORD *)this + 31) && *((_DWORD *)this + 50) != 2 || *((_BYTE *)this + 313) )
    {
      v28 = TaskFlowImmersiveShellBroker::StartAppActivitySessionListener(this);
      if ( v28 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          145LL,
          (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v28);
    }
    if ( !*((_QWORD *)this + 30) && *((_DWORD *)this + 50) != 2 || *((_BYTE *)this + 313) )
    {
      v29 = TaskFlowImmersiveShellBroker::StartUserPresenceListener(this);
      if ( v29 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          150LL,
          (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v29);
    }
    if ( !*((_QWORD *)this + 29) && *((_DWORD *)this + 50) != 2 || *((_BYTE *)this + 313) )
    {
      v30 = TaskFlowImmersiveShellBroker::StartFileListener(this);
      if ( v30 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          155LL,
          (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v30);
    }
    if ( !*((_QWORD *)this + 28) && *((_DWORD *)this + 50) != 2 || *((_BYTE *)this + 313) )
    {
      v31 = TaskFlowImmersiveShellBroker::StartAppViewTitleChangeListener(this);
      if ( v31 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          160LL,
          (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v31);
    }
    active = TaskFlowImmersiveShellBroker::EnsureViewActiveActivityManager(v20, v19, v21);
    if ( active < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        163LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)active);
    *((_BYTE *)this + 313) = 0;
  }
  return 0LL;
}
