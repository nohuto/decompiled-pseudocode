/*
 * XREFs of ?OnIdleStateFlagsChanged@DesktopBlueLightReductionManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x1801602A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180082E6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$IdleStateFlagsChanged@II@DesktopBlueLightReductionManagerTelemetry@@SAX$$QEAI0@Z @ 0x18015F4D0 (--$IdleStateFlagsChanged@II@DesktopBlueLightReductionManagerTelemetry@@SAX$$QEAI0@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b99ea844b066f66ee4bc802de9267df7___ @ 0x18015F944 (Windows--Internal--ComTaskPool--QueueTask__lambda_b99ea844b066f66ee4bc802de9267df7___.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801607D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1801607D0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DesktopBlueLightReductionManager::OnIdleStateFlagsChanged(__int64 a1, int a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  const char *v7; // r9
  __int64 v8; // rbx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rbx
  int v12; // edi
  __int64 v13; // rbx
  int v14; // eax
  __int64 result; // rax
  __int64 v16; // [rsp+38h] [rbp-30h] BYREF
  __int64 v17; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v19; // [rsp+70h] [rbp+8h] BYREF
  int v20; // [rsp+78h] [rbp+10h] BYREF
  __int64 v21; // [rsp+80h] [rbp+18h] BYREF
  __int64 v22; // [rsp+88h] [rbp+20h] BYREF

  v4 = *(_DWORD *)(a1 + 88) ^ a2;
  v20 = v4;
  v19 = a2;
  DesktopBlueLightReductionManagerTelemetry::IdleStateFlagsChanged<unsigned int,unsigned int>(
    (__int64)&v19,
    (__int64)&v20);
  try
  {
    if ( v4 )
    {
      *(_DWORD *)(a1 + 88) = a2;
      if ( (v4 & 0xD) != 0 )
      {
        if ( (a2 & 0xD) == 0 )
        {
          if ( !*(_DWORD *)(a1 + 72) )
          {
            v21 = 0LL;
            v8 = *(_QWORD *)(a1 + 56);
            wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v21);
            v9 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v8 + 24LL))(
                   v8,
                   &IID_IImmersiveWindowMessageService,
                   &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
                   &v21);
            if ( v9 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                295LL,
                (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
                (const char *)(unsigned int)v9);
            v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v21 + 24LL))(
                    v21,
                    30LL,
                    (a1 - 16) & -(__int64)(a1 != 120),
                    a1 + 72);
            if ( v10 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                296LL,
                (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
                (const char *)(unsigned int)v10);
            wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v21);
          }
          v11 = a1 - 120;
          if ( a1 != 120 )
            _InterlockedIncrement((volatile signed __int32 *)(v11 + 164));
          v16 = a1 - 120;
          v17 = a1 - 120;
          if ( a1 != 120 )
            _InterlockedIncrement((volatile signed __int32 *)(v11 + 164));
          v12 = Windows::Internal::ComTaskPool::QueueTask__lambda_b99ea844b066f66ee4bc802de9267df7___(
                  v6,
                  v5,
                  *(_DWORD *)(a1 + 84),
                  &v16);
          if ( v17 )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(v17);
          if ( v12 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x131,
              (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
              (const char *)(unsigned int)v12);
          if ( v11 )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(v11);
        }
      }
      else if ( *(_DWORD *)(a1 + 72) )
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
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x145,
                           (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
                           v7);
  }
  return result;
}
