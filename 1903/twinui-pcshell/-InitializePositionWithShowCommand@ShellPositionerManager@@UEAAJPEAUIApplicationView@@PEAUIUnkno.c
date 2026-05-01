/*
 * XREFs of ?InitializePositionWithShowCommand@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAK@Z @ 0x18007B690
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180048340 (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@1PEAK@Z @ 0x180048814 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1InitializePositionWithShowCommand@ShellPositionerTelemetry@@QEAA@XZ @ 0x18007B7C4 (--1InitializePositionWithShowCommand@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@InitializePositionWithShowCommand@ShellPositionerTelemetry@@QEAAXXZ @ 0x18007B870 (-StartActivity@InitializePositionWithShowCommand@ShellPositionerTelemetry@@QEAAXXZ.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007B9B4 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellPositionerManager::InitializePositionWithShowCommand(
        ShellPositionerManager *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IUnknown *a3,
        struct IPresentationRequestedArgs *a4,
        unsigned int *a5)
{
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **); // rbx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v14; // rdx
  struct IImmersiveMonitor *v15[2]; // [rsp+40h] [rbp-198h] BYREF
  _QWORD v16[40]; // [rsp+50h] [rbp-188h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+0h]

  v15[1] = (struct IImmersiveMonitor *)-2LL;
  *a5 = 0;
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v16);
  v16[0] = &ShellPositionerTelemetry::InitializePositionWithShowCommand::`vftable';
  ShellPositionerTelemetry::InitializePositionWithShowCommand::StartActivity((ShellPositionerTelemetry::InitializePositionWithShowCommand *)v16);
  v15[0] = 0LL;
  v9 = *((_QWORD *)this + 5);
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v9 + 72LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v15);
  v11 = v10(v9, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, v15);
  v12 = v11;
  if ( v11 < 0 )
  {
    v14 = 532LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_4;
  }
  v11 = ShellPositionerManager::HandleActivationRequest(
          (unsigned int *)this - 28,
          0,
          a2,
          v15[0],
          a3,
          (__int64)a4,
          0,
          a5);
  v12 = v11;
  if ( v11 < 0 )
  {
    v14 = 533LL;
    goto LABEL_7;
  }
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v16);
  v12 = 0;
LABEL_4:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v15);
  ShellPositionerTelemetry::InitializePositionWithShowCommand::~InitializePositionWithShowCommand((ShellPositionerTelemetry::InitializePositionWithShowCommand *)v16);
  return v12;
}
