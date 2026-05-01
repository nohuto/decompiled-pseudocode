/*
 * XREFs of ?RemoveWindowFromView@ViewManagerBridge@@UEAAJPEAUIUnknown@@I@Z @ 0x1802898E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18000C348 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005FB64 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??1RemoveWindowFromView@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180284D34 (--1RemoveWindowFromView@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ?CloseServerWindow@ViewManagerBridge@@UEAAJI@Z @ 0x1802853A0 (-CloseServerWindow@ViewManagerBridge@@UEAAJI@Z.c)
 *     ?StartActivity@RemoveWindowFromView@ViewManagerInteropTraceLogging@@QEAAXKK@Z @ 0x18028C1B0 (-StartActivity@RemoveWindowFromView@ViewManagerInteropTraceLogging@@QEAAXKK@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewManagerBridge::RemoveWindowFromView(
        ViewManagerBridge *this,
        struct IUnknown *a2,
        unsigned int a3)
{
  unsigned int v6; // ebx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdx
  unsigned int v12; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v13[3]; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v14[40]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v13[1] = -2LL;
  if ( !*((_BYTE *)this + 145) )
  {
    v13[0] = 0LL;
    QueryInterface = a2->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
    ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
      a2,
      &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
      v13);
    v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v13[0] + 152LL))(v13[0], &v12);
    v6 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x23F,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v8);
LABEL_12:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
      return v6;
    }
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v14,
      (__int64)"RemoveWindowFromView");
    v14[0] = &ViewManagerInteropTraceLogging::RemoveWindowFromView::`vftable';
    ViewManagerInteropTraceLogging::RemoveWindowFromView::StartActivity(
      (ViewManagerInteropTraceLogging::RemoveWindowFromView *)v14,
      a3,
      v12);
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 13) + 88LL))(
           *((_QWORD *)this + 13),
           a3,
           v12);
    v6 = v9;
    if ( v9 >= 0 )
    {
      v9 = ViewManagerBridge::CloseServerWindow(this, a3);
      v6 = v9;
      if ( v9 >= 0 )
      {
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
          (__int64)v14,
          0);
        v6 = 0;
        goto LABEL_11;
      }
      v10 = 580LL;
    }
    else
    {
      v10 = 578LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v9);
LABEL_11:
    ViewManagerInteropTraceLogging::RemoveWindowFromView::~RemoveWindowFromView((ViewManagerInteropTraceLogging::RemoveWindowFromView *)v14);
    goto LABEL_12;
  }
  v6 = -2147417848;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x239,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
    (const char *)0x80010108LL);
  return v6;
}
