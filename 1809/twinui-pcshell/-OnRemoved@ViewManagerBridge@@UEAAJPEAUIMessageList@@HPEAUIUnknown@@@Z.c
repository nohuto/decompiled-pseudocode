/*
 * XREFs of ?OnRemoved@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x180232F70
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005B338 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18006FCC0 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18006FD68 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006FDEC (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z @ 0x18021C46C (-ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?StartActivity@OnRemoved@ViewManagerInteropTraceLogging@@QEAAXPEAX@Z @ 0x180236058 (-StartActivity@OnRemoved@ViewManagerInteropTraceLogging@@QEAAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewManagerBridge::OnRemoved(
        ViewEventDispatcher **this,
        struct IMessageList *a2,
        __int64 a3,
        struct IUnknown *a4)
{
  int v6; // eax
  void *v7; // rbx
  int v8; // eax
  void *v9; // rbx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  ViewEventDispatcher **v12; // rdi
  __int64 v13; // rdx
  __int64 (__fastcall ***v14)(void *, GUID *, __int64 *); // rbx
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  __int64 v17; // rdx
  void *v19; // [rsp+20h] [rbp-198h] BYREF
  __int64 v20; // [rsp+28h] [rbp-190h] BYREF
  __int64 v21; // [rsp+30h] [rbp-188h] BYREF
  unsigned int v22; // [rsp+38h] [rbp-180h] BYREF
  __int64 v23; // [rsp+40h] [rbp-178h]
  _QWORD v24[40]; // [rsp+50h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  v23 = -2LL;
  v19 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
  try
  {
    v6 = ((__int64 (*)(void))a4->lpVtbl->QueryInterface)();
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1065LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v6);
    v7 = v19;
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v24,
      (__int64)"OnRemoved");
    v24[0] = &ViewManagerInteropTraceLogging::OnRemoved::`vftable';
    ViewManagerInteropTraceLogging::OnRemoved::StartActivity((ViewManagerInteropTraceLogging::OnRemoved *)v24, v7);
    v8 = (*(__int64 (__fastcall **)(void *, unsigned int *))(*(_QWORD *)v19 + 152LL))(v19, &v22);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1070LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v8);
    ViewEventDispatcher::ViewDestroyed(this[8], v22);
    v21 = 0LL;
    v9 = v19;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    v10 = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v9 + 104LL))(v9, &v21);
    v11 = retaddr;
    v12 = this - 2;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v21 + 64LL))(
              v21,
              (unsigned __int64)(this + 1) & -(__int64)(this != (ViewEventDispatcher **)16));
      v11 = retaddr;
      v12 = this - 2;
      if ( v10 >= 0 )
        goto LABEL_11;
      v13 = 1077LL;
    }
    else
    {
      v13 = 1075LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v11,
      v13,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v10);
LABEL_11:
    v20 = 0LL;
    v14 = (__int64 (__fastcall ***)(void *, GUID *, __int64 *))v19;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    v15 = (**v14)(v14, &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08, &v20);
    v16 = retaddr;
    if ( v15 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v20 + 64LL))(
              v20,
              (unsigned __int64)(this - 1) & -(__int64)(v12 != 0LL));
      v16 = retaddr;
      if ( v15 >= 0 )
      {
LABEL_16:
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v24, 0);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
        v24[0] = &ViewManagerInteropTraceLogging::OnRemoved::`vftable';
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v24);
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v24);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
        return 0LL;
      }
      v17 = 1083LL;
    }
    else
    {
      v17 = 1081LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v16,
      v17,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_16;
  }
  catch ( ... )
  {
  }
  return 0LL;
}
