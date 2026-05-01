/*
 * XREFs of ?InitializePositionWithShowCommand@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAK@Z @ 0x180334AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18002F540 (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@PEAK@Z @ 0x18002FC70 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180306034 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ??1InitializePositionWithShowCommand@ShellPositionerTelemetry@@QEAA@XZ @ 0x180333FB0 (--1InitializePositionWithShowCommand@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@InitializePositionWithShowCommand@ShellPositionerTelemetry@@QEAAXXZ @ 0x180335C14 (-StartActivity@InitializePositionWithShowCommand@ShellPositionerTelemetry@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellPositionerManager::InitializePositionWithShowCommand(
        ShellPositionerManager *this,
        struct IApplicationView *a2,
        struct IUnknown *a3,
        unsigned int *a4)
{
  __int64 v8; // rbx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  struct IImmersiveMonitor *v13[2]; // [rsp+30h] [rbp-188h] BYREF
  _QWORD v14[40]; // [rsp+40h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  v13[1] = (struct IImmersiveMonitor *)-2LL;
  *a4 = 0;
  wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v14,
    (__int64)"InitializePositionWithShowCommand");
  v14[0] = &ShellPositionerTelemetry::InitializePositionWithShowCommand::`vftable';
  ShellPositionerTelemetry::InitializePositionWithShowCommand::StartActivity((ShellPositionerTelemetry::InitializePositionWithShowCommand *)v14);
  v13[0] = 0LL;
  v8 = *((_QWORD *)this + 5);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v13);
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v8 + 72LL))(
         v8,
         0LL,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         v13);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v9 = ShellPositionerManager::HandleActivationRequest((unsigned int *)this - 28, 0, a2, v13[0], a3, a4);
    v10 = v9;
    if ( v9 >= 0 )
    {
      wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v14);
      v10 = 0;
      goto LABEL_7;
    }
    v11 = 494LL;
  }
  else
  {
    v11 = 493LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)v9);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v13);
  ShellPositionerTelemetry::InitializePositionWithShowCommand::~InitializePositionWithShowCommand((ShellPositionerTelemetry::InitializePositionWithShowCommand *)v14);
  return v10;
}
