/*
 * XREFs of ?OnIdleStateFlagsChanged@DesktopBlueLightReductionManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x18017F5C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180085AAC (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$IdleStateFlagsChanged@II@DesktopBlueLightReductionManagerTelemetry@@SAX$$QEAI0@Z @ 0x18017E790 (--$IdleStateFlagsChanged@II@DesktopBlueLightReductionManagerTelemetry@@SAX$$QEAI0@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b99ea844b066f66ee4bc802de9267df7___ @ 0x18017EC04 (Windows--Internal--ComTaskPool--QueueTask__lambda_b99ea844b066f66ee4bc802de9267df7___.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18017F260 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImm_ea_18017F260.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18017F5A4 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18017F5A4.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18017FAE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_18017FAE0.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall DesktopBlueLightReductionManager::OnIdleStateFlagsChanged(__int64 a1, int a2)
{
  int v4; // ebx
  volatile int *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  int v8; // eax
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  __int64 v11; // rbx
  int v12; // edi
  __int64 v13; // rbx
  int v14; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // [rsp+38h] [rbp-20h] BYREF
  __int64 v20; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF
  int v23; // [rsp+68h] [rbp+10h] BYREF

  v23 = *(_DWORD *)(a1 + 88) ^ a2;
  v4 = v23;
  LODWORD(v22) = a2;
  DesktopBlueLightReductionManagerTelemetry::IdleStateFlagsChanged<unsigned int,unsigned int>(
    (__int64)&v22,
    (__int64)&v23);
  if ( !v4 )
    return 0LL;
  *(_DWORD *)(a1 + 88) = a2;
  if ( (v4 & 0xD) == 0 )
  {
    if ( *(_DWORD *)(a1 + 72) )
    {
      v22 = 0LL;
      v13 = *(_QWORD *)(a1 + 56);
      wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v22);
      v14 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v13 + 24LL))(
              v13,
              &IID_IImmersiveWindowMessageService,
              &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
              &v22);
      if ( v14 >= 0 )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v22 + 32LL))(v22, *(unsigned int *)(a1 + 72));
        *(_DWORD *)(a1 + 72) = 0;
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x13A,
          (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
          (const char *)(unsigned int)v14);
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v22);
    }
    return 0LL;
  }
  if ( (a2 & 0xD) != 0 )
    return 0LL;
  if ( *(_DWORD *)(a1 + 72) )
  {
LABEL_8:
    v11 = a1 - 120;
    if ( a1 != 120 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::InternalAddRef(
        a1 - 120,
        v5);
    v19 = a1 - 120;
    v20 = a1 - 120;
    if ( a1 != 120 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::AddRef(a1 - 120);
    v12 = Windows::Internal::ComTaskPool::QueueTask__lambda_b99ea844b066f66ee4bc802de9267df7___(
            v6,
            (__int64)v5,
            *(_DWORD *)(a1 + 84),
            &v19);
    if ( v20 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(v20);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x131,
        (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
        (const char *)(unsigned int)v12);
    if ( v11 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(v11);
    return 0LL;
  }
  v22 = 0LL;
  v7 = *(_QWORD *)(a1 + 56);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v22);
  v8 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v7 + 24LL))(
         v7,
         &IID_IImmersiveWindowMessageService,
         &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
         &v22);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      295LL,
      (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
      (const char *)(unsigned int)v8);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v22 + 24LL))(
           v22,
           30LL,
           (a1 - 16) & -(__int64)(a1 != 120),
           a1 + 72);
    v10 = retaddr;
    if ( v9 >= 0 )
    {
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v22);
      goto LABEL_8;
    }
  }
  wil::details::in1diag3::Throw_Hr(
    v10,
    296LL,
    (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
    (const char *)(unsigned int)v9);
  __debugbreak();
  return DesktopBlueLightReductionManager::OnIdleStateFlagsChanged_::_1_::dtor_0(v17, v16, v18);
}
