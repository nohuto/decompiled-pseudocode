/*
 * XREFs of ?GetViewClientExtensionMapPropertyAsInt@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAUHSTRING__@@PEAH@Z @ 0x180286AD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18000C348 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005FB64 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$Value@AEAH@GetViewClientExtensionMapPropertyAsInt@ViewManagerInteropTraceLogging@@QEAAXAEAH@Z @ 0x1802842E0 (--$Value@AEAH@GetViewClientExtensionMapPropertyAsInt@ViewManagerInteropTraceLogging@@QEAAXAEAH@Z.c)
 *     ??1GetViewClientExtensionMapPropertyAsInt@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180284AF8 (--1GetViewClientExtensionMapPropertyAsInt@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ?StartActivity@GetViewClientExtensionMapPropertyAsInt@ViewManagerInteropTraceLogging@@QEAAXPEAXPEBG@Z @ 0x18028AF08 (-StartActivity@GetViewClientExtensionMapPropertyAsInt@ViewManagerInteropTraceLogging@@QEAAXPEAXP.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ViewManagerBridge::GetViewClientExtensionMapPropertyAsInt(
        ViewManagerBridge *this,
        struct IUnknown *a2,
        HSTRING a3,
        int *a4)
{
  int v7; // ebx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  int v9; // eax
  const unsigned __int16 *StringRawBuffer; // rbx
  void *v11; // rdi
  void *v12; // rbx
  __int64 (__fastcall *v13)(void *, __int64 *); // rdi
  int Stack; // eax
  __int64 v15; // rdx
  PCWSTR v16; // rax
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, _QWORD, _QWORD); // rdi
  __int64 (__fastcall ***v19)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v20)(_QWORD, GUID *, __int64 *); // rdi
  int v21; // eax
  __int64 v22; // rdx
  int v24; // [rsp+20h] [rbp-E0h] BYREF
  void *v25; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v26; // [rsp+30h] [rbp-D0h] BYREF
  __int64 (__fastcall ***v27)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v29[2]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v30[24]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v31[40]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  v29[1] = -2LL;
  *a4 = 0;
  if ( !*((_BYTE *)this + 145) )
  {
    v25 = 0LL;
    QueryInterface = a2->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
    v9 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, void **))QueryInterface)(
           a2,
           &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
           &v25);
    v7 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x289,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v9);
LABEL_22:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
      return (unsigned int)v7;
    }
    StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
    v11 = v25;
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v31,
      (__int64)"GetViewClientExtensionMapPropertyAsInt");
    v31[0] = &ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsInt::`vftable';
    ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsInt::StartActivity(
      (ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsInt *)v31,
      v11,
      StringRawBuffer);
    v28 = 0LL;
    v12 = v25;
    v13 = *(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v25 + 104LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
    Stack = v13(v12, &v28);
    v7 = Stack;
    if ( Stack < 0 )
    {
      v15 = 654LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)Stack);
LABEL_21:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
      ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsInt::~GetViewClientExtensionMapPropertyAsInt((ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsInt *)v31);
      goto LABEL_22;
    }
    v16 = WindowsGetStringRawBuffer(a3, 0LL);
    Stack = MsgStringCreateStack(v16, 0xFFFFFFFFLL, v30, v29);
    v7 = Stack;
    if ( Stack < 0 )
    {
      v15 = 659LL;
      goto LABEL_9;
    }
    v27 = 0LL;
    v17 = v28;
    v18 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v28 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
    v7 = v18(v17, v29[0], &v27);
    if ( v7 < 0 )
    {
LABEL_20:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
      goto LABEL_21;
    }
    v19 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v27;
    if ( !v27 )
    {
      v7 = -2147023728;
      goto LABEL_20;
    }
    v26 = 0LL;
    v20 = **v27;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    v21 = v20(v19, &GUID_10285360_82e3_4e40_8d56_8e270c16414f, &v26);
    v7 = v21;
    if ( v21 >= 0 )
    {
      v21 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v26 + 24LL))(v26, &v24);
      v7 = v21;
      if ( v21 >= 0 )
      {
        ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsInt::Value<int &>(
          (__int64)v31,
          (__int64)&v24);
        *a4 = v24;
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
          (__int64)v31,
          0);
        v7 = 0;
        goto LABEL_19;
      }
      v22 = 669LL;
    }
    else
    {
      v22 = 666LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v21);
LABEL_19:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
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
