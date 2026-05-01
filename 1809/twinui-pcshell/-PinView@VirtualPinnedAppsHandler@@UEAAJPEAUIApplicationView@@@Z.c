/*
 * XREFs of ?PinView@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x1803920A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000EF5C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180144304 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ??1VirtualDesktopPinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180391840 (--1VirtualDesktopPinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ?PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x18039231C (-PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?StartActivity@VirtualDesktopPinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x180392C24 (-StartActivity@VirtualDesktopPinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?Stop@VirtualDesktopPinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18039344C (-Stop@VirtualDesktopPinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIApplicat.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall VirtualPinnedAppsHandler::PinView(VirtualPinnedAppsHandler *this, struct IApplicationView *a2)
{
  unsigned int v4; // ebx
  const WCHAR *v5; // r8
  __int64 v6; // rbx
  __int64 v7; // r15
  bool v8; // r14
  const WCHAR *v9; // rcx
  int v10; // eax
  __int64 v11; // rbx
  struct IVirtualDesktop *v13; // [rsp+38h] [rbp-D0h] BYREF
  LPCWCH lpString2; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+48h] [rbp-C0h]
  __int64 v16; // [rsp+50h] [rbp-B8h]
  LPCWCH v17; // [rsp+58h] [rbp-B0h]
  RTL_SRWLOCK *v18[3]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v19[40]; // [rsp+78h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v18[1] = (RTL_SRWLOCK *)-2LL;
  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 9) + 32LL))(*((_QWORD *)this + 9), v18);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v19,
    (__int64)"VirtualDesktopPinWindowActivity");
  v19[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinWindowActivity::`vftable';
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinWindowActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinWindowActivity *)v19);
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 288LL))(*((_QWORD *)this + 6)) )
  {
    if ( !(*(unsigned int (__fastcall **)(VirtualPinnedAppsHandler *, struct IApplicationView *))(*(_QWORD *)this + 128LL))(
            this,
            a2) )
    {
      lpString2 = 0LL;
      v15 = 0LL;
      v16 = 0LL;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
      v15 = -1LL;
      v16 = -1LL;
      if ( (*(int (__fastcall **)(struct IApplicationView *, LPCWCH *))(*(_QWORD *)a2 + 136LL))(a2, &lpString2) < 0
        || (v5 = lpString2, v17 = lpString2, v6 = *((_QWORD *)this + 12), v7 = *((_QWORD *)this + 13), v6 == v7) )
      {
LABEL_12:
        v8 = 0;
      }
      else
      {
        v8 = 1;
        while ( 1 )
        {
          v9 = (const WCHAR *)v6;
          if ( *(_QWORD *)(v6 + 24) >= 8uLL )
            v9 = *(const WCHAR **)v6;
          if ( CompareStringOrdinal(v9, -1, v5, -1, 1) == 2 )
            break;
          v6 += 32LL;
          if ( v6 == v7 )
            goto LABEL_12;
          v5 = v17;
        }
      }
      v10 = VirtualPinnedAppsHandler::PinViewInternal(this, a2, v8);
      v4 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xDA,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
          (const char *)(unsigned int)v10);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
        goto LABEL_17;
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
    }
    v13 = 0LL;
    v11 = *((_QWORD *)this + 6);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    (*(void (__fastcall **)(__int64, struct IVirtualDesktop **))(*(_QWORD *)v11 + 224LL))(v11, &v13);
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinWindowActivity::Stop(
      (VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinWindowActivity *)v19,
      a2,
      v13);
    v4 = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    goto LABEL_17;
  }
  v4 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD4,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
    (const char *)0x8007139FLL);
LABEL_17:
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinWindowActivity::~VirtualDesktopPinWindowActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinWindowActivity *)v19);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v18);
  return v4;
}
