/*
 * XREFs of ?AddWindowToView@ViewManagerBridge@@UEAAJPEAUIUnknown@@I@Z @ 0x180284E00
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18000C348 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005FB64 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??1AddWindowToView@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180284A1C (--1AddWindowToView@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ?StartActivity@AddWindowToView@ViewManagerInteropTraceLogging@@QEAAXKK@Z @ 0x18028A810 (-StartActivity@AddWindowToView@ViewManagerInteropTraceLogging@@QEAAXKK@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewManagerBridge::AddWindowToView(ViewManagerBridge *this, struct IUnknown *a2, unsigned int a3)
{
  unsigned int v6; // ebx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  int v8; // eax
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  unsigned int v14; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD v16[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+60h] [rbp-A0h]
  __int64 v18; // [rsp+70h] [rbp-90h]
  _OWORD v19[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-60h]
  _QWORD v21[40]; // [rsp+B0h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  v18 = -2LL;
  if ( !*((_BYTE *)this + 145) )
  {
    v15 = 0LL;
    QueryInterface = a2->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
      a2,
      &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
      &v15);
    v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v15 + 152LL))(v15, &v14);
    v6 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20E,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v8);
LABEL_12:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
      return v6;
    }
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v21,
      (__int64)"AddWindowToView");
    v21[0] = &ViewManagerInteropTraceLogging::AddWindowToView::`vftable';
    ViewManagerInteropTraceLogging::AddWindowToView::StartActivity(
      (ViewManagerInteropTraceLogging::AddWindowToView *)v21,
      a3,
      v14);
    memset_0(v16, 0, 0x28uLL);
    v9 = (__int64 *)*((_QWORD *)this + 13);
    v10 = *v9;
    v19[0] = v16[0];
    v19[1] = v16[1];
    v20 = v17;
    v11 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _OWORD *, _OWORD *))(v10 + 64))(v9, a3, v16, v19);
    v6 = v11;
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 13) + 80LL))(
              *((_QWORD *)this + 13),
              a3,
              v14);
      v6 = v11;
      if ( v11 >= 0 )
      {
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
          (__int64)v21,
          0);
        v6 = 0;
        goto LABEL_11;
      }
      v12 = 533LL;
    }
    else
    {
      v12 = 531LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v11);
LABEL_11:
    ViewManagerInteropTraceLogging::AddWindowToView::~AddWindowToView((ViewManagerInteropTraceLogging::AddWindowToView *)v21);
    goto LABEL_12;
  }
  v6 = -2147417848;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x208,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
    (const char *)0x80010108LL);
  return v6;
}
