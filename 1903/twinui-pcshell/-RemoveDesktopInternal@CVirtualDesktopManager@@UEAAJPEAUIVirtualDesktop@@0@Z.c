/*
 * XREFs of ?RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1803ECB20
 * Callers:
 *     ?RemoveDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1803EC9B0 (-RemoveDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18002758C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18006AFE0 (-_UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18016FD64 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ??1VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x1803EB130 (--1VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     _lambda_4cd311c558c75f42f66c9a2141adb89d_::operator() @ 0x1803EB1B4 (_lambda_4cd311c558c75f42f66c9a2141adb89d_--operator().c)
 *     ?StartActivity@VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x1803ED258 (-StartActivity@VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?Stop@VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@0@Z @ 0x1803EDB4C (-Stop@VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualD.c)
 *     ?SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x1803EFA40 (-SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?_CheckDesktopRemovalPreconditions@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@0@Z @ 0x1803EFEB4 (-_CheckDesktopRemovalPreconditions@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@0@Z.c)
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
  bool v8; // r12
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64 *); // rbx
  int v11; // eax
  __int64 v12; // rdx
  char v13; // r15
  int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // r14d
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, _QWORD, GUID *, struct IApplicationView **); // rdi
  int updated; // eax
  struct IVirtualDesktop *v20; // r8
  __int64 v21; // rdx
  struct IVirtualDesktop *v23; // [rsp+38h] [rbp-D0h] BYREF
  struct IUnknown *v24; // [rsp+40h] [rbp-C8h] BYREF
  struct IApplicationView *v25; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v28; // [rsp+60h] [rbp-A8h]
  _QWORD v29[4]; // [rsp+70h] [rbp-98h] BYREF
  char v30; // [rsp+90h] [rbp-78h]
  __int64 v31; // [rsp+98h] [rbp-70h]
  _QWORD v32[40]; // [rsp+A8h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+230h] [rbp+128h]

  v31 = -2LL;
  v24 = a2;
  v23 = a3;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v32,
    (__int64)"VirtualDesktopDestroyedActivity");
  v32[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity::`vftable';
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity *)v32);
  v4 = CVirtualDesktopManager::_CheckDesktopRemovalPreconditions(
         (CVirtualDesktopManager *)((char *)this - 8),
         (struct IVirtualDesktop *)v24,
         v23);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( !*((_QWORD *)this + 10) )
    {
      v5 = -2147417848;
      v6 = 2147549448LL;
      v7 = 419LL;
      goto LABEL_5;
    }
    v8 = (unsigned int)SHIsSameObject(v24, *((struct IUnknown **)this + 17)) != 0;
    v27 = 0LL;
    v9 = *((_QWORD *)this + 10);
    v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 24LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
    v11 = v10(v9, &v27);
    v5 = v11;
    if ( v11 < 0 )
    {
      v12 = 424LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v11);
LABEL_36:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      goto LABEL_37;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *, struct IVirtualDesktop *))(**((_QWORD **)this + 12)
                                                                                         + 32LL))(
            *((_QWORD *)this + 12),
            v24,
            v23);
    v5 = v11;
    if ( v11 < 0 )
    {
      v12 = 426LL;
      goto LABEL_10;
    }
    *(_QWORD *)&v28 = (char *)this - 8;
    *((_QWORD *)&v28 + 1) = &v24;
    v29[0] = &v23;
    *(_OWORD *)&v29[1] = v28;
    v29[3] = &v23;
    v13 = 1;
    v30 = 1;
    v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 24LL))(v27, &v26);
    v5 = v14;
    if ( v14 >= 0 )
    {
      v16 = 0;
      if ( (_DWORD)v26 )
      {
        while ( 1 )
        {
          v25 = 0LL;
          v17 = v27;
          v18 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IApplicationView **))(*(_QWORD *)v27 + 32LL);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
          updated = v18(v17, v16, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v25);
          v5 = updated;
          if ( updated < 0 )
            break;
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *, struct IUnknown *))(**((_QWORD **)this + 11) + 32LL))(
                 *((_QWORD *)this + 11),
                 v25,
                 v24) )
          {
            updated = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, struct IVirtualDesktop *))(**((_QWORD **)this + 11) + 40LL))(
                        *((_QWORD *)this + 11),
                        v25,
                        v23);
            v5 = updated;
            if ( updated < 0 )
            {
              v21 = 439LL;
              goto LABEL_27;
            }
            v20 = v23;
            if ( !v8 )
              v20 = (struct IVirtualDesktop *)*((_QWORD *)this + 17);
            updated = CVirtualDesktopManager::_UpdateViewVisibility(
                        (CVirtualDesktopManager *)((char *)this - 8),
                        v25,
                        v20);
            v5 = updated;
            if ( updated < 0 )
            {
              v21 = 440LL;
              goto LABEL_27;
            }
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
          if ( ++v16 >= (unsigned int)v26 )
            goto LABEL_21;
        }
        v21 = 436LL;
LABEL_27:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v21,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
          (const char *)(unsigned int)updated);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
        goto LABEL_34;
      }
LABEL_21:
      if ( v8 && (v14 = CVirtualDesktopManager::SwitchDesktopInternal(this, v23), v5 = v14, v14 < 0) )
      {
        v15 = 446LL;
      }
      else
      {
        v14 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *))(**((_QWORD **)this + 9) + 64LL))(
                *((_QWORD *)this + 9),
                v24);
        v5 = v14;
        if ( v14 >= 0 )
        {
          v13 = 0;
          v30 = 0;
          v14 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *, struct IVirtualDesktop *))(**((_QWORD **)this + 12)
                                                                                               + 48LL))(
                  *((_QWORD *)this + 12),
                  v24,
                  v23);
          v5 = v14;
          if ( v14 >= 0 )
          {
            VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity::Stop(
              (VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity *)v32,
              (struct IVirtualDesktop *)v24,
              v23);
            v5 = 0;
LABEL_34:
            if ( v13 )
            {
              v30 = 0;
              lambda_4cd311c558c75f42f66c9a2141adb89d_::operator()((_QWORD **)&v29[1]);
            }
            goto LABEL_36;
          }
          v15 = 452LL;
        }
        else
        {
          v15 = 449LL;
        }
      }
    }
    else
    {
      v15 = 432LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_34;
  }
  v6 = (unsigned int)v4;
  v7 = 418LL;
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
