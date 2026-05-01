/*
 * XREFs of ?OnAdded@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x180232500
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005B338 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18006FCC0 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18006FD68 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006FDEC (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z @ 0x18021BEE0 (-ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z.c)
 *     ??$ViewToViewInstanceIdMapping@PEAUIShellView@Server@Navigation@@AEAI@ViewManagerInteropTraceLogging@@SAX$$QEAPEAUIShellView@Server@Navigation@@AEAI@Z @ 0x18022F358 (--$ViewToViewInstanceIdMapping@PEAUIShellView@Server@Navigation@@AEAI@ViewManagerInteropTraceLog.c)
 *     ?StartActivity@OnAdded@ViewManagerInteropTraceLogging@@QEAAXPEAX@Z @ 0x180235C70 (-StartActivity@OnAdded@ViewManagerInteropTraceLogging@@QEAAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewManagerBridge::OnAdded(
        ViewEventDispatcher **this,
        struct IMessageList *a2,
        __int64 a3,
        struct IUnknown *a4)
{
  int v6; // eax
  struct IUnknown *v7; // rbx
  struct IUnknown *v8; // rbx
  int v9; // eax
  int v10; // eax
  struct IUnknown *v11; // rbx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  struct IUnknown *v16; // [rsp+20h] [rbp-198h] BYREF
  unsigned int v17; // [rsp+28h] [rbp-190h] BYREF
  __int64 v18; // [rsp+30h] [rbp-188h] BYREF
  __int64 v19; // [rsp+38h] [rbp-180h] BYREF
  __int64 v20[2]; // [rsp+40h] [rbp-178h] BYREF
  _QWORD v21[40]; // [rsp+50h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  v20[1] = -2LL;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  try
  {
    v6 = ((__int64 (*)(void))a4->lpVtbl->QueryInterface)();
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1022LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v6);
    v7 = v16;
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v21,
      (__int64)"OnAdded");
    v21[0] = &ViewManagerInteropTraceLogging::OnAdded::`vftable';
    ViewManagerInteropTraceLogging::OnAdded::StartActivity((ViewManagerInteropTraceLogging::OnAdded *)v21, v7);
    v19 = 0LL;
    v8 = v16;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    v9 = ((__int64 (__fastcall *)(struct IUnknown *, __int64 *))v8->lpVtbl[4].AddRef)(v8, &v19);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1031LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v9);
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 56LL))(
            v19,
            (unsigned __int64)(this + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)(this - 2) >> 64));
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1032LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v10);
    v18 = 0LL;
    v11 = v16;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    v12 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v11->lpVtbl->QueryInterface)(
            v11,
            &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08,
            &v18);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1039LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v12);
    v13 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v18 + 56LL))(
            v18,
            (unsigned __int64)(this - 1) & -(__int64)(this != (ViewEventDispatcher **)16));
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1040LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v13);
    v14 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))v16->lpVtbl[6].AddRef)(v16, &v17);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1043LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v14);
    v20[0] = (__int64)v16;
    ViewManagerInteropTraceLogging::ViewToViewInstanceIdMapping<Navigation::Server::IShellView *,unsigned int &>(
      v20,
      (int *)&v17);
    ViewEventDispatcher::ViewCreated(this[8], v17, v16);
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v21, 0);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    v21[0] = &ViewManagerInteropTraceLogging::OnAdded::`vftable';
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v21);
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  }
  catch ( ... )
  {
  }
  return 0LL;
}
