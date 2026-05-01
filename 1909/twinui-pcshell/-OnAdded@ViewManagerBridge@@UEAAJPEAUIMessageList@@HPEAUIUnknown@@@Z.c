/*
 * XREFs of ?OnAdded@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x1802A6D50
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180017C28 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800180B0 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180018134 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180060518 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z @ 0x180290E44 (-ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z.c)
 *     ??$ViewToViewInstanceIdMapping@PEAUIShellView@Server@Navigation@@AEAI@ViewManagerInteropTraceLogging@@SAX$$QEAPEAUIShellView@Server@Navigation@@AEAI@Z @ 0x1802A3A74 (--$ViewToViewInstanceIdMapping@PEAUIShellView@Server@Navigation@@AEAI@ViewManagerInteropTraceLog.c)
 *     ?StartActivity@OnAdded@ViewManagerInteropTraceLogging@@QEAAXPEAX@Z @ 0x1802AA660 (-StartActivity@OnAdded@ViewManagerInteropTraceLogging@@QEAAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewManagerBridge::OnAdded(
        ViewEventDispatcher **this,
        struct IMessageList *a2,
        __int64 a3,
        struct IUnknown *a4)
{
  __int64 (*QueryInterface)(void); // rbx
  int v6; // eax
  struct IUnknown *v7; // rbx
  struct IUnknown *v8; // rbx
  ULONG (__stdcall *AddRef)(IUnknown *); // rdi
  int v10; // eax
  int v11; // eax
  struct IUnknown *v12; // rbx
  HRESULT (__stdcall *v13)(IUnknown *, const IID *const, void **); // rdi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  struct IUnknown *v18; // [rsp+20h] [rbp-198h] BYREF
  unsigned int v19; // [rsp+28h] [rbp-190h] BYREF
  __int64 v20; // [rsp+30h] [rbp-188h] BYREF
  __int64 v21; // [rsp+38h] [rbp-180h] BYREF
  __int64 v22[2]; // [rsp+40h] [rbp-178h] BYREF
  _QWORD v23[40]; // [rsp+50h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  v22[1] = -2LL;
  v18 = 0LL;
  QueryInterface = (__int64 (*)(void))a4->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  try
  {
    v6 = QueryInterface();
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1025LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v6);
    v7 = v18;
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v23,
      (__int64)"OnAdded");
    v23[0] = &ViewManagerInteropTraceLogging::OnAdded::`vftable';
    ViewManagerInteropTraceLogging::OnAdded::StartActivity((ViewManagerInteropTraceLogging::OnAdded *)v23, v7);
    v21 = 0LL;
    v8 = v18;
    AddRef = v18->lpVtbl[4].AddRef;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    v10 = ((__int64 (__fastcall *)(struct IUnknown *, __int64 *))AddRef)(v8, &v21);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1034LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v10);
    v11 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v21 + 56LL))(
            v21,
            (unsigned __int64)(this + 1) & -(__int64)(this != (ViewEventDispatcher **)16));
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1035LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v11);
    v20 = 0LL;
    v12 = v18;
    v13 = v18->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    v14 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v13)(
            v12,
            &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08,
            &v20);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1042LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v14);
    v15 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v20 + 56LL))(
            v20,
            (unsigned __int64)(this - 1) & -(__int64)(this != (ViewEventDispatcher **)16));
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1043LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v15);
    v16 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))v18->lpVtbl[6].AddRef)(v18, &v19);
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1046LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v16);
    v22[0] = (__int64)v18;
    ViewManagerInteropTraceLogging::ViewToViewInstanceIdMapping<Navigation::Server::IShellView *,unsigned int &>(
      v22,
      (int *)&v19);
    ViewEventDispatcher::ViewCreated(this[8], v19, v18);
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v23, 0);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    v23[0] = &ViewManagerInteropTraceLogging::OnAdded::`vftable';
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v23);
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v23);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  }
  catch ( ... )
  {
  }
  return 0LL;
}
