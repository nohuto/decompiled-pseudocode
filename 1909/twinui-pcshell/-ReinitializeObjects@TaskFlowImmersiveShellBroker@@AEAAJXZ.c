/*
 * XREFs of ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x180213B6C
 * Callers:
 *     ?OnActivityFeedOperationStateChanged@TaskFlowImmersiveShellBroker@@UEAAJW4ActivityFeedOperationScope@@W4ActivityFeedOperationState@@@Z @ 0x180213140 (-OnActivityFeedOperationStateChanged@TaskFlowImmersiveShellBroker@@UEAAJW4ActivityFeedOperationS.c)
 *     ?SubscribeToServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z @ 0x180215880 (-SubscribeToServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x18004A5D8 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180085AAC (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x1801F1A58 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18020C890 (--$ActivateInstance@V-$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL.c)
 *     ??$PoliciesTaskFlowFeatureState@AEAE_N@TaskFlowDataEngineTelemetry@@SAXAEAE$$QEA_N@Z @ 0x18020D808 (--$PoliciesTaskFlowFeatureState@AEAE_N@TaskFlowDataEngineTelemetry@@SAXAEAE$$QEA_N@Z.c)
 *     ??$TaskflowDataEngine_CDPInitializeResult@AEAJ@TaskFlowDataEngineTelemetry@@SAXAEAJ@Z @ 0x18020DB74 (--$TaskflowDataEngine_CDPInitializeResult@AEAJ@TaskFlowDataEngineTelemetry@@SAXAEAJ@Z.c)
 *     _lambda_e6dbb4c1b06bb51faf8482f5ad286731_::operator() @ 0x18020F858 (_lambda_e6dbb4c1b06bb51faf8482f5ad286731_--operator().c)
 *     ?EnsureViewActiveActivityManager@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1802106BC (-EnsureViewActiveActivityManager@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?IsAFCAndActivityTrackingEnabled@TaskFlowImmersiveShellBroker@@AEAA_NXZ @ 0x180212F54 (-IsAFCAndActivityTrackingEnabled@TaskFlowImmersiveShellBroker@@AEAA_NXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ClipboardSignalsForActivities@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802142AC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ClipboardSignalsForActivities@@@wil@.c)
 *     ?StartActivityIndexer@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x180214CE4 (-StartActivityIndexer@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartAppActivitySessionListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x180214DFC (-StartAppActivitySessionListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartAppViewListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x180215028 (-StartAppViewListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartAppViewTitleChangeListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1802151C4 (-StartAppViewTitleChangeListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartFileListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x18021552C (-StartFileListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartUserPresenceListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1802156E4 (-StartUserPresenceListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TaskFlowImmersiveShellBroker::ReinitializeObjects(TaskFlowImmersiveShellBroker *this)
{
  TaskFlowImmersiveShellBroker *v1; // rdi
  int started; // eax
  char *v3; // rsi
  int v4; // ebx
  char v5; // al
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // rdx
  bool IsAFCAndActivityTrackingEnabled; // si
  __int64 v10; // rcx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v16; // rbx
  __int64 v17; // rdx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  bool v23; // dl
  int v24; // eax
  TaskFlowImmersiveShellBroker *v25; // rcx
  int active; // eax
  unsigned __int8 v27; // [rsp+28h] [rbp-49h] BYREF
  unsigned __int8 v28[3]; // [rsp+29h] [rbp-48h] BYREF
  __int16 v29; // [rsp+2Ch] [rbp-45h] BYREF
  char v30; // [rsp+30h] [rbp-41h] BYREF
  int v31; // [rsp+34h] [rbp-3Dh] BYREF
  __int64 v32; // [rsp+38h] [rbp-39h] BYREF
  TaskFlowImmersiveShellBroker *v33; // [rsp+40h] [rbp-31h] BYREF
  TaskFlowImmersiveShellBroker *v34; // [rsp+48h] [rbp-29h] BYREF
  int v35; // [rsp+54h] [rbp-1Dh]
  unsigned int v36[2]; // [rsp+58h] [rbp-19h] BYREF
  const char *v37; // [rsp+60h] [rbp-11h]
  __int64 v38; // [rsp+68h] [rbp-9h]
  __int16 v39; // [rsp+70h] [rbp-1h]
  __int64 v40; // [rsp+78h] [rbp+7h]
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp+Fh] BYREF
  __int64 v42; // [rsp+98h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v40 = -2LL;
  v1 = this;
  if ( !*((_QWORD *)this + 35) && *((_DWORD *)this + 50) != 2 )
  {
    started = TaskFlowImmersiveShellBroker::StartActivityIndexer(this);
    this = retaddr;
    if ( started < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x43,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)started);
  }
  v3 = (char *)v1 + 296;
  if ( !*((_BYTE *)v1 + 296) )
  {
    v4 = CDPInitialize(this);
    v31 = v4;
    TaskFlowDataEngineTelemetry::TaskflowDataEngine_CDPInitializeResult<long &>(&v31);
    if ( v4 >= 0 )
    {
      if ( v3 == &v30 )
      {
        CDPShutdown();
      }
      else
      {
        v5 = *v3;
        *v3 = 0;
        if ( v5 )
          CDPShutdown();
        *v3 = 1;
      }
      if ( !*((_QWORD *)v1 + 38) && *((_DWORD *)v1 + 50) != 2 )
      {
        wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)v1 + 38);
        v6 = CDPGetUserActivitySettings((char *)v1 + 304);
        v7 = retaddr;
        if ( v6 < 0 )
        {
          v8 = 81LL;
LABEL_18:
          wil::details::in1diag3::_Log_Hr(
            v7,
            (void *)v8,
            (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
            (const char *)(unsigned int)v6);
          goto LABEL_19;
        }
        v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64))(**((_QWORD **)v1 + 38) + 56LL))(
               *((_QWORD *)v1 + 38),
               ((unsigned __int64)v1 + 144) & -(__int64)(v1 != 0LL),
               (__int64)v1 + 312);
        v7 = retaddr;
        if ( v6 < 0 )
        {
          v8 = 83LL;
          goto LABEL_18;
        }
      }
    }
  }
LABEL_19:
  IsAFCAndActivityTrackingEnabled = TaskFlowImmersiveShellBroker::IsAFCAndActivityTrackingEnabled(v1);
  v28[0] = IsAFCAndActivityTrackingEnabled;
  v29 = 1;
  v10 = *((_QWORD *)v1 + 38);
  if ( !v10 )
    goto LABEL_23;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int16 *))(*(_QWORD *)v10 + 48LL))(v10, 3LL, &v29);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5E,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)v11);
  v27 = 1;
  if ( v29 )
LABEL_23:
    v27 = 0;
  TaskFlowDataEngineTelemetry::PoliciesTaskFlowFeatureState<unsigned char &,bool>(v28, &v27);
  if ( IsAFCAndActivityTrackingEnabled && (!*((_QWORD *)v1 + 26) && *((_DWORD *)v1 + 50) != 2 || *((_BYTE *)v1 + 320)) )
  {
    v42 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Internal.Shell.TaskFlow.DataEngine.ActivityArbiter",
      0x3Bu,
      0x3Au);
    v13 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter>>(
            v42,
            (__int64 *)v1 + 26);
    if ( v13 < 0 )
    {
      v14 = 104LL;
LABEL_30:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v13);
      return (unsigned int)v13;
    }
  }
  if ( *((_DWORD *)v1 + 50) != 2 )
  {
    v32 = *((_QWORD *)v1 + 26);
    v16 = v32;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v32);
    if ( v16 )
    {
      LOBYTE(v17) = IsAFCAndActivityTrackingEnabled;
      v18 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 80LL))(v16, v17);
      if ( v18 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x75,
          (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v18);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
  }
  if ( IsAFCAndActivityTrackingEnabled )
  {
    if ( !*((_QWORD *)v1 + 27) && *((_DWORD *)v1 + 50) != 2 || *((_BYTE *)v1 + 320) )
    {
      v13 = TaskFlowImmersiveShellBroker::StartAppViewListener(v1);
      if ( v13 < 0 )
      {
        v14 = 126LL;
        goto LABEL_30;
      }
    }
    if ( !*((_QWORD *)v1 + 31) && *((_DWORD *)v1 + 50) != 2 || *((_BYTE *)v1 + 320) )
    {
      v19 = TaskFlowImmersiveShellBroker::StartAppActivitySessionListener(v1);
      v12 = retaddr;
      if ( v19 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x84,
          (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v19);
    }
    if ( !*((_QWORD *)v1 + 30) && *((_DWORD *)v1 + 50) != 2 || *((_BYTE *)v1 + 320) )
    {
      v20 = TaskFlowImmersiveShellBroker::StartUserPresenceListener(v1);
      v12 = retaddr;
      if ( v20 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x89,
          (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v20);
    }
    if ( !*((_QWORD *)v1 + 29) && *((_DWORD *)v1 + 50) != 2 || *((_BYTE *)v1 + 320) )
    {
      v21 = TaskFlowImmersiveShellBroker::StartFileListener(v1);
      v12 = retaddr;
      if ( v21 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x8E,
          (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v21);
    }
    if ( !*((_QWORD *)v1 + 28) && *((_DWORD *)v1 + 50) != 2 || *((_BYTE *)v1 + 320) )
    {
      v22 = TaskFlowImmersiveShellBroker::StartAppViewTitleChangeListener(v1);
      v12 = retaddr;
      if ( v22 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x93,
          (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v22);
    }
    v33 = v1;
    *(_QWORD *)v36 = retaddr;
    v37 = "pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp";
    v38 = 0LL;
    v39 = 150;
    wil::Feature<__WilFeatureTraits_Feature_ClipboardSignalsForActivities>::ReportUsageToService(v12);
    wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)&v34, v23);
    v24 = lambda_e6dbb4c1b06bb51faf8482f5ad286731_::operator()((__int64 *)&v33);
    if ( v24 < 0 )
      wil::details::ReportFeatureError(
        (wil::details *)(unsigned int)v24,
        (__int64)&v34,
        (struct wil::ThreadErrorContext *)0x10AAB75,
        (__int64)v36);
    v25 = v34;
    if ( v34 )
      *((_DWORD *)v34 + 4) = v35;
    active = TaskFlowImmersiveShellBroker::EnsureViewActiveActivityManager(v25);
    if ( active < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA6,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)active);
    *((_BYTE *)v1 + 320) = 0;
  }
  return 0LL;
}
