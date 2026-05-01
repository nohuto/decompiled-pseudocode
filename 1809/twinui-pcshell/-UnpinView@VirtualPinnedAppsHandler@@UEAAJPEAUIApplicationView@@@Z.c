/*
 * XREFs of ?UnpinView@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x180395390
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000EF5C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180144304 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ??1VirtualDesktopUnpinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180391898 (--1VirtualDesktopUnpinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ?StartActivity@VirtualDesktopUnpinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x180392EF4 (-StartActivity@VirtualDesktopUnpinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?Stop@VirtualDesktopUnpinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x180393CB0 (-Stop@VirtualDesktopUnpinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIApplic.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualPinnedAppsHandler::UnpinView(VirtualPinnedAppsHandler *this, struct IApplicationView *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  struct IVirtualDesktop *v9; // [rsp+28h] [rbp-E0h] BYREF
  RTL_SRWLOCK *v10[2]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v11[40]; // [rsp+48h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B0h] [rbp+A8h]

  v10[1] = (RTL_SRWLOCK *)-2LL;
  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 9) + 32LL))(*((_QWORD *)this + 9), v10);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v11,
    (__int64)"VirtualDesktopUnpinWindowActivity");
  v11[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinWindowActivity::`vftable';
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinWindowActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinWindowActivity *)v11);
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 288LL))(*((_QWORD *)this + 6)) )
  {
    v9 = 0LL;
    v5 = *((_QWORD *)this + 6);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
    v6 = (*(__int64 (__fastcall **)(__int64, struct IVirtualDesktop **))(*(_QWORD *)v5 + 224LL))(v5, &v9);
    v4 = v6;
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(VirtualPinnedAppsHandler *, struct IApplicationView *, struct IVirtualDesktop *))(*(_QWORD *)this + 104LL))(
             this,
             a2,
             v9);
      v4 = v6;
      if ( v6 >= 0 )
      {
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinWindowActivity::Stop(
          (VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinWindowActivity *)v11,
          a2,
          v9);
        v4 = 0;
        goto LABEL_9;
      }
      v7 = 235LL;
    }
    else
    {
      v7 = 234LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
      (const char *)(unsigned int)v6);
LABEL_9:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
    goto LABEL_10;
  }
  v4 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE7,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
    (const char *)0x8007139FLL);
LABEL_10:
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinWindowActivity::~VirtualDesktopUnpinWindowActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinWindowActivity *)v11);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v10);
  return v4;
}
