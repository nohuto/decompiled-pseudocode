/*
 * XREFs of ?RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180387090
 * Callers:
 *     ?RemoveDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180386F20 (-RemoveDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18006999C (-_UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180144304 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ??1VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x1803856C0 (--1VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     _lambda_f76058b0ad220b64be2731f8c298d5bb_::operator() @ 0x180385798 (_lambda_f76058b0ad220b64be2731f8c298d5bb_--operator().c)
 *     ?StartActivity@VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x180387794 (-StartActivity@VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?Stop@VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@0@Z @ 0x180388000 (-Stop@VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualD.c)
 *     ?SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180389C60 (-SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?_CheckDesktopRemovalPreconditions@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@0@Z @ 0x18038A0B4 (-_CheckDesktopRemovalPreconditions@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@0@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CVirtualDesktopManager::RemoveDesktopInternal(
        CVirtualDesktopManager *this,
        struct IUnknown *a2,
        struct IVirtualDesktop *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rdx
  bool v8; // r15
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  char v12; // r14
  int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // esi
  __int64 v16; // rbx
  int updated; // eax
  struct IVirtualDesktop *v18; // r8
  __int64 v19; // rdx
  struct IVirtualDesktop *v21; // [rsp+30h] [rbp-D0h] BYREF
  struct IUnknown *v22; // [rsp+38h] [rbp-C8h] BYREF
  struct IApplicationView *v23; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v24; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v26; // [rsp+58h] [rbp-A8h]
  struct IVirtualDesktop **v27; // [rsp+68h] [rbp-98h]
  __int128 v28; // [rsp+70h] [rbp-90h] BYREF
  struct IVirtualDesktop **v29; // [rsp+80h] [rbp-80h]
  char v30; // [rsp+88h] [rbp-78h]
  __int64 v31; // [rsp+90h] [rbp-70h]
  _QWORD v32[40]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  v31 = -2LL;
  v22 = a2;
  v21 = a3;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v32,
    (__int64)"VirtualDesktopDestroyedActivity");
  v32[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity::`vftable';
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity *)v32);
  v4 = CVirtualDesktopManager::_CheckDesktopRemovalPreconditions(
         (CVirtualDesktopManager *)((char *)this - 8),
         (struct IVirtualDesktop *)v22,
         v21);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( !*((_QWORD *)this + 10) )
    {
      v5 = -2147417848;
      v6 = 2147549448LL;
      v7 = 417LL;
      goto LABEL_5;
    }
    v8 = (unsigned int)SHIsSameObject(v22, *((struct IUnknown **)this + 17)) != 0;
    v25 = 0LL;
    v9 = *((_QWORD *)this + 10);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 24LL))(v9, &v25);
    v5 = v10;
    if ( v10 < 0 )
    {
      v11 = 422LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v10);
LABEL_36:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
      goto LABEL_37;
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *, struct IVirtualDesktop *))(**((_QWORD **)this + 12)
                                                                                         + 32LL))(
            *((_QWORD *)this + 12),
            v22,
            v21);
    v5 = v10;
    if ( v10 < 0 )
    {
      v11 = 424LL;
      goto LABEL_10;
    }
    *(_QWORD *)&v26 = (char *)this - 8;
    *((_QWORD *)&v26 + 1) = &v22;
    v27 = &v21;
    v28 = v26;
    v29 = &v21;
    v12 = 1;
    v30 = 1;
    v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v25 + 24LL))(v25, &v24);
    v5 = v13;
    if ( v13 >= 0 )
    {
      v15 = 0;
      if ( v24 )
      {
        while ( 1 )
        {
          v23 = 0LL;
          v16 = v25;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
          updated = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IApplicationView **))(*(_QWORD *)v16 + 32LL))(
                      v16,
                      v15,
                      &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
                      &v23);
          v5 = updated;
          if ( updated < 0 )
            break;
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *, struct IUnknown *))(**((_QWORD **)this + 11) + 32LL))(
                 *((_QWORD *)this + 11),
                 v23,
                 v22) )
          {
            updated = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, struct IVirtualDesktop *))(**((_QWORD **)this + 11) + 40LL))(
                        *((_QWORD *)this + 11),
                        v23,
                        v21);
            v5 = updated;
            if ( updated < 0 )
            {
              v19 = 437LL;
              goto LABEL_27;
            }
            v18 = v21;
            if ( !v8 )
              v18 = (struct IVirtualDesktop *)*((_QWORD *)this + 17);
            updated = CVirtualDesktopManager::_UpdateViewVisibility(
                        (CVirtualDesktopManager *)((char *)this - 8),
                        v23,
                        v18);
            v5 = updated;
            if ( updated < 0 )
            {
              v19 = 438LL;
              goto LABEL_27;
            }
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
          if ( ++v15 >= v24 )
            goto LABEL_21;
        }
        v19 = 434LL;
LABEL_27:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
          (const char *)(unsigned int)updated);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
        goto LABEL_34;
      }
LABEL_21:
      if ( v8 && (v13 = CVirtualDesktopManager::SwitchDesktopInternal(this, v21), v5 = v13, v13 < 0) )
      {
        v14 = 444LL;
      }
      else
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *))(**((_QWORD **)this + 9) + 64LL))(
                *((_QWORD *)this + 9),
                v22);
        v5 = v13;
        if ( v13 >= 0 )
        {
          v12 = 0;
          v30 = 0;
          v13 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *, struct IVirtualDesktop *))(**((_QWORD **)this + 12)
                                                                                               + 48LL))(
                  *((_QWORD *)this + 12),
                  v22,
                  v21);
          v5 = v13;
          if ( v13 >= 0 )
          {
            VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity::Stop(
              (VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity *)v32,
              (struct IVirtualDesktop *)v22,
              v21);
            v5 = 0;
LABEL_34:
            if ( v12 )
            {
              v30 = 0;
              lambda_f76058b0ad220b64be2731f8c298d5bb_::operator()((_QWORD **)&v28);
            }
            goto LABEL_36;
          }
          v14 = 450LL;
        }
        else
        {
          v14 = 447LL;
        }
      }
    }
    else
    {
      v14 = 430LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_34;
  }
  v6 = (unsigned int)v4;
  v7 = 416LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)v6);
LABEL_37:
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity::~VirtualDesktopDestroyedActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity *)v32);
  return v5;
}
