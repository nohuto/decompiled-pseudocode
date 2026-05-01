/*
 * XREFs of ?GetViewClientExtensionMapPropertyAsInt@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAUHSTRING__@@PEAH@Z @ 0x180231700
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005B338 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18006FCC0 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$Value@AEAH@GetViewClientExtensionMapPropertyAsInt@ViewManagerInteropTraceLogging@@QEAAXAEAH@Z @ 0x18022F004 (--$Value@AEAH@GetViewClientExtensionMapPropertyAsInt@ViewManagerInteropTraceLogging@@QEAAXAEAH@Z.c)
 *     ??1GetViewClientExtensionMapPropertyAsInt@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18022F81C (--1GetViewClientExtensionMapPropertyAsInt@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ?StartActivity@GetViewClientExtensionMapPropertyAsInt@ViewManagerInteropTraceLogging@@QEAAXPEAXPEBG@Z @ 0x1802359B0 (-StartActivity@GetViewClientExtensionMapPropertyAsInt@ViewManagerInteropTraceLogging@@QEAAXPEAXP.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ViewManagerBridge::GetViewClientExtensionMapPropertyAsInt(
        ViewManagerBridge *this,
        struct IUnknown *a2,
        HSTRING a3,
        int *a4)
{
  int v7; // ebx
  int v8; // eax
  const unsigned __int16 *StringRawBuffer; // rbx
  void *v10; // rdi
  void *v11; // rbx
  int Stack; // eax
  __int64 v13; // rdx
  PCWSTR v14; // rax
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  int v19; // [rsp+20h] [rbp-E0h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-D8h] BYREF
  void *v21; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v24[2]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v25[24]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v26[40]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  v24[1] = -2LL;
  *a4 = 0;
  if ( !*((_BYTE *)this + 145) )
  {
    v21 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    v8 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, void **))a2->lpVtbl->QueryInterface)(
           a2,
           &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
           &v21);
    v7 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x289,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v8);
LABEL_22:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
      return (unsigned int)v7;
    }
    StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
    v10 = v21;
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v26,
      (__int64)"GetViewClientExtensionMapPropertyAsInt");
    v26[0] = &ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsInt::`vftable';
    ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsInt::StartActivity(
      (ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsInt *)v26,
      v10,
      StringRawBuffer);
    v23 = 0LL;
    v11 = v21;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    Stack = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v11 + 104LL))(v11, &v23);
    v7 = Stack;
    if ( Stack < 0 )
    {
      v13 = 654LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)Stack);
LABEL_21:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
      ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsInt::~GetViewClientExtensionMapPropertyAsInt((ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsInt *)v26);
      goto LABEL_22;
    }
    v14 = WindowsGetStringRawBuffer(a3, 0LL);
    Stack = MsgStringCreateStack(v14, 0xFFFFFFFFLL, v25, v24);
    v7 = Stack;
    if ( Stack < 0 )
    {
      v13 = 659LL;
      goto LABEL_9;
    }
    v20 = 0LL;
    v15 = v23;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v15 + 48LL))(v15, v24[0], &v20);
    if ( v7 < 0 )
    {
LABEL_20:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
      goto LABEL_21;
    }
    if ( !v20 )
    {
      v7 = -2147023728;
      goto LABEL_20;
    }
    v22 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    v16 = (**v20)(v20, &GUID_10285360_82e3_4e40_8d56_8e270c16414f, &v22);
    v7 = v16;
    if ( v16 >= 0 )
    {
      v16 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v22 + 24LL))(v22, &v19);
      v7 = v16;
      if ( v16 >= 0 )
      {
        ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsInt::Value<int &>(
          (__int64)v26,
          (__int64)&v19);
        *a4 = v19;
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v26, 0);
        v7 = 0;
        goto LABEL_19;
      }
      v17 = 669LL;
    }
    else
    {
      v17 = 666LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v16);
LABEL_19:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    goto LABEL_20;
  }
  v7 = -2147417848;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x286,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
    (const char *)0x80010108LL);
  return (unsigned int)v7;
}
