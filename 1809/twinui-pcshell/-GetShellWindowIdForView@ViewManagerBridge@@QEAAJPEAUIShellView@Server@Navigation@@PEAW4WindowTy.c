/*
 * XREFs of ?GetShellWindowIdForView@ViewManagerBridge@@QEAAJPEAUIShellView@Server@Navigation@@PEAW4WindowType@4@PEAI@Z @ 0x180231030
 * Callers:
 *     _lambda_7d6b9a4e32c168b2e51ca46a812f2e25_::operator() @ 0x1802124E8 (_lambda_7d6b9a4e32c168b2e51ca46a812f2e25_--operator().c)
 *     ?OnConnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z @ 0x180232920 (-OnConnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005B338 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18006FCC0 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIServerWindow@Server@Navigation@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIServerWindow@Server@Navigation@@@WRL@Microsoft@@@Details@12@@Z @ 0x18022DD28 (--$As@UIServerWindow@Server@Navigation@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V.c)
 *     ??$WindowId@AEAI@GetShellWindowIdForView@ViewManagerInteropTraceLogging@@QEAAXAEAI@Z @ 0x18022F490 (--$WindowId@AEAI@GetShellWindowIdForView@ViewManagerInteropTraceLogging@@QEAAXAEAI@Z.c)
 *     ??1GetShellWindowIdForView@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18022F7C4 (--1GetShellWindowIdForView@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ?StartActivity@GetShellWindowIdForView@ViewManagerInteropTraceLogging@@QEAAXPEAX@Z @ 0x1802356FC (-StartActivity@GetShellWindowIdForView@ViewManagerInteropTraceLogging@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall ViewManagerBridge::GetShellWindowIdForView(
        ViewManagerBridge *this,
        struct IShellView *a2,
        enum Navigation::WindowType *a3,
        unsigned int *a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  unsigned int v10; // edi
  __int64 v11; // rbx
  int v12; // eax
  int v13; // eax
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v17; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v21[3]; // [rsp+44h] [rbp-BCh] BYREF
  _QWORD v22[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  *a4 = 0;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v22,
    (__int64)"GetShellWindowIdForView");
  v22[0] = &ViewManagerInteropTraceLogging::GetShellWindowIdForView::`vftable';
  ViewManagerInteropTraceLogging::GetShellWindowIdForView::StartActivity(
    (ViewManagerInteropTraceLogging::GetShellWindowIdForView *)v22,
    a2);
  v19 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  v7 = ((__int64 (__fastcall *)(struct IShellView *, __int64 *))a2->lpVtbl[1].ContextSensitiveHelp)(a2, &v19);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 854LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_16;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 48LL))(v19, &v16);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 857LL;
    goto LABEL_5;
  }
  v10 = 0;
  if ( v16 <= 0 )
  {
LABEL_15:
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v22, 0);
    v8 = 0;
  }
  else
  {
    while ( 1 )
    {
      v18 = 0LL;
      v11 = v19;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v11 + 56LL))(v11, v10, &v18);
      v8 = v12;
      if ( v12 < 0 )
        break;
      v17 = 0LL;
      v13 = Microsoft::WRL::ComPtr<IUnknown>::As<Navigation::Server::IServerWindow>(&v18, &v17);
      v8 = v13;
      if ( v13 < 0 )
      {
        v15 = 865LL;
        goto LABEL_20;
      }
      v13 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v17 + 88LL))(v17, &v20);
      v8 = v13;
      if ( v13 < 0 )
      {
        v15 = 868LL;
        goto LABEL_20;
      }
      if ( !a3 || *(_DWORD *)a3 == v20 )
      {
        v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v17 + 24LL))(v17, v21);
        v8 = v13;
        if ( v13 < 0 )
        {
          v15 = 875LL;
LABEL_20:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v15,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
            (const char *)(unsigned int)v13);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
          goto LABEL_22;
        }
        *a4 = v21[0];
        ViewManagerInteropTraceLogging::GetShellWindowIdForView::WindowId<unsigned int &>((__int64)v22, (int *)a4);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
      if ( (int)++v10 >= v16 )
        goto LABEL_15;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35E,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v12);
LABEL_22:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
  }
LABEL_16:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  ViewManagerInteropTraceLogging::GetShellWindowIdForView::~GetShellWindowIdForView((ViewManagerInteropTraceLogging::GetShellWindowIdForView *)v22);
  return v8;
}
