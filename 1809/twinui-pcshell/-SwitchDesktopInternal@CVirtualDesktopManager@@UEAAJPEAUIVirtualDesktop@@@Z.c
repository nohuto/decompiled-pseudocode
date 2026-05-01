/*
 * XREFs of ?SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180389C60
 * Callers:
 *     ?RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180387090 (-RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?SwitchDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180389B80 (-SwitchDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001C76C (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18006999C (-_UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180144304 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ??1VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x1803856EC (--1VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ?StartActivity@VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x1803878FC (-StartActivity@VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?Stop@VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@0@Z @ 0x180388450 (-Stop@VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDe.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CVirtualDesktopManager::SwitchDesktopInternal(struct IUnknown **this, struct IUnknown *a2)
{
  struct IApplicationView **v4; // r14
  unsigned int v6; // ebx
  __int64 v7; // rdx
  struct IUnknown *v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // esi
  __int64 v12; // rbx
  int updated; // eax
  struct IVirtualDesktop *v14; // rbx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rdx
  struct IApplicationView *v19; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v21[2]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v22[40]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v21[1] = -2LL;
  v4 = (struct IApplicationView **)(this + 17);
  if ( (unsigned int)SHIsSameObject(a2, this[17]) )
    return 0LL;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v22,
    (__int64)"VirtualDesktopSwitchedActivity");
  v22[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity::`vftable';
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity *)v22);
  if ( !*((_DWORD *)this + 36) )
  {
    if ( !((unsigned __int8 (__fastcall *)(struct IUnknown *, struct IUnknown *))this[9]->lpVtbl[1].AddRef)(this[9], a2) )
    {
      v6 = -2147024809;
      v7 = 259LL;
      goto LABEL_9;
    }
    v8 = this[10];
    if ( !v8 )
    {
      v6 = -2147417848;
      v7 = 260LL;
      goto LABEL_9;
    }
    v21[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v21);
    v9 = ((__int64 (__fastcall *)(struct IUnknown *, __int64 *))v8->lpVtbl[1].QueryInterface)(v8, v21);
    v6 = v9;
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21[0] + 24LL))(v21[0], &v20);
      v6 = v9;
      if ( v9 >= 0 )
      {
        v11 = 0;
        if ( (_DWORD)v20 )
        {
          while ( 1 )
          {
            v19 = 0LL;
            v12 = v21[0];
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
            updated = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IApplicationView **))(*(_QWORD *)v12 + 32LL))(
                        v12,
                        v11,
                        &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
                        &v19);
            v6 = updated;
            if ( updated < 0 )
              break;
            updated = CVirtualDesktopManager::_UpdateViewVisibility(
                        (CVirtualDesktopManager *)(this - 1),
                        v19,
                        (struct IVirtualDesktop *)a2);
            v6 = updated;
            if ( updated < 0 )
            {
              v18 = 271LL;
              goto LABEL_30;
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
            if ( ++v11 >= (unsigned int)v20 )
              goto LABEL_19;
          }
          v18 = 270LL;
LABEL_30:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v18,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
            (const char *)(unsigned int)updated);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
        }
        else
        {
LABEL_19:
          v14 = *v4;
          v19 = *v4;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
          Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v4, (__int64)a2);
          v15 = ((__int64 (__fastcall *)(struct IUnknown *, struct IApplicationView *))this[13]->lpVtbl[1].QueryInterface)(
                  this[13],
                  *v4);
          if ( v15 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              278LL,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
              (const char *)(unsigned int)v15);
          v16 = ((__int64 (__fastcall *)(struct IUnknown *, struct IApplicationView *))this[14]->lpVtbl[1].AddRef)(
                  this[14],
                  *v4);
          if ( v16 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              279LL,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
              (const char *)(unsigned int)v16);
          v17 = ((__int64 (__fastcall *)(struct IUnknown *, struct IVirtualDesktop *, struct IApplicationView *))this[12]->lpVtbl[2].Release)(
                  this[12],
                  v14,
                  *v4);
          if ( v17 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              280LL,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
              (const char *)(unsigned int)v17);
          VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity::Stop(
            (VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity *)v22,
            v14,
            *v4);
          v6 = 0;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
        }
        goto LABEL_26;
      }
      v10 = 266LL;
    }
    else
    {
      v10 = 263LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v9);
LABEL_26:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v21);
    goto LABEL_27;
  }
  v6 = -2147019873;
  v7 = 258LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)v6);
LABEL_27:
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity::~VirtualDesktopSwitchedActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity *)v22);
  return v6;
}
