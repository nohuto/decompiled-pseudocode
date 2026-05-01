/*
 * XREFs of ?CreateDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x180385BF0
 * Callers:
 *     ?CreateDesktopW@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x180385D70 (-CreateDesktopW@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180144304 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ??1VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180385694 (--1VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ?StartActivity@VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x18038762C (-StartActivity@VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?Stop@VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@PEAUIVirtualDesktopCollection@@@Z @ 0x180387BCC (-Stop@VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDes.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopManager::CreateDesktopInternal(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  struct IVirtualDesktop *v8; // rax
  struct IVirtualDesktop *v10[2]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v11[40]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v10[1] = (struct IVirtualDesktop *)-2LL;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v11,
    (__int64)"VirtualDesktopCreatedActivity");
  v11[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity::`vftable';
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity *)v11);
  if ( a2 )
    *a2 = 0LL;
  if ( !*((_DWORD *)this + 36) )
  {
    v10[0] = 0LL;
    v5 = *((_QWORD *)this + 9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v10);
    v6 = (*(__int64 (__fastcall **)(__int64, struct IVirtualDesktop **))(*(_QWORD *)v5 + 56LL))(v5, v10);
    v4 = v6;
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, struct IVirtualDesktop *))(**((_QWORD **)this + 12) + 24LL))(
             *((_QWORD *)this + 12),
             v10[0]);
      v4 = v6;
      if ( v6 >= 0 )
      {
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity::Stop(
          (VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity *)v11,
          v10[0],
          *((struct IVirtualDesktopCollection **)this + 9));
        if ( a2 )
        {
          v8 = v10[0];
          v10[0] = 0LL;
          *a2 = v8;
        }
        v4 = 0;
        goto LABEL_13;
      }
      v7 = 300LL;
    }
    else
    {
      v7 = 299LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v6);
LABEL_13:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v10);
    goto LABEL_14;
  }
  v4 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x128,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)0x8007139FLL);
LABEL_14:
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity::~VirtualDesktopCreatedActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity *)v11);
  return v4;
}
