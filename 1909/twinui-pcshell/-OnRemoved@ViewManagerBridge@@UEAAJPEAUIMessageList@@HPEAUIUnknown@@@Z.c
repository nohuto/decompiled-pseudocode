/*
 * XREFs of ?OnRemoved@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x1802A77E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180017C28 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800180B0 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180018134 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180060518 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z @ 0x1802913A8 (-ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?StartActivity@OnRemoved@ViewManagerInteropTraceLogging@@QEAAXPEAX@Z @ 0x1802AAA90 (-StartActivity@OnRemoved@ViewManagerInteropTraceLogging@@QEAAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewManagerBridge::OnRemoved(
        ViewEventDispatcher **this,
        struct IMessageList *a2,
        __int64 a3,
        struct IUnknown *a4)
{
  __int64 (*QueryInterface)(void); // rbx
  int v6; // eax
  void *v7; // rbx
  int v8; // eax
  void *v9; // rbx
  __int64 (__fastcall *v10)(void *, __int64 *); // rdi
  int v11; // eax
  ViewEventDispatcher **v12; // rsi
  int v13; // eax
  void *v14; // rbx
  __int64 (__fastcall *v15)(void *, GUID *, __int64 *); // rdi
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  __int64 v18; // rdx
  void *v20; // [rsp+20h] [rbp-198h] BYREF
  __int64 v21; // [rsp+28h] [rbp-190h] BYREF
  __int64 v22; // [rsp+30h] [rbp-188h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-180h] BYREF
  __int64 v24; // [rsp+40h] [rbp-178h]
  _QWORD v25[40]; // [rsp+50h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  v24 = -2LL;
  v20 = 0LL;
  QueryInterface = (__int64 (*)(void))a4->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  try
  {
    v6 = QueryInterface();
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1068LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v6);
    v7 = v20;
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v25,
      (__int64)"OnRemoved");
    v25[0] = &ViewManagerInteropTraceLogging::OnRemoved::`vftable';
    ViewManagerInteropTraceLogging::OnRemoved::StartActivity((ViewManagerInteropTraceLogging::OnRemoved *)v25, v7);
    v8 = (*(__int64 (__fastcall **)(void *, unsigned int *))(*(_QWORD *)v20 + 152LL))(v20, &v23);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1073LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v8);
    ViewEventDispatcher::ViewDestroyed(this[8], v23);
    v22 = 0LL;
    v9 = v20;
    v10 = *(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v20 + 104LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    v11 = v10(v9, &v22);
    if ( v11 >= 0 )
    {
      v12 = this - 2;
      v13 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v22 + 64LL))(
              v22,
              (unsigned __int64)(this + 1) & -(__int64)(this != (ViewEventDispatcher **)16));
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x438,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v13);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x436,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v11);
      v12 = this - 2;
    }
    v21 = 0LL;
    v14 = v20;
    v15 = **(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v20;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    v16 = v15(v14, &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08, &v21);
    v17 = retaddr;
    if ( v16 >= 0 )
    {
      v16 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v21 + 64LL))(
              v21,
              (unsigned __int64)(this - 1) & -(__int64)(v12 != 0LL));
      v17 = retaddr;
      if ( v16 >= 0 )
      {
LABEL_15:
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
          (__int64)v25,
          0);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
        v25[0] = &ViewManagerInteropTraceLogging::OnRemoved::`vftable';
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v25);
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v25);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
        return 0LL;
      }
      v18 = 1086LL;
    }
    else
    {
      v18 = 1084LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v17,
      (void *)v18,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_15;
  }
  catch ( ... )
  {
  }
  return 0LL;
}
