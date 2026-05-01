/*
 * XREFs of ?CloseOrphanedShellWindows@ViewManagerBridge@@AEAAJAEBV?$CCoSimpleArray@URecoveredViewInfo@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@URecoveredViewInfo@@@@@@@Z @ 0x18022FE5C
 * Callers:
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
 *     ??1CloseOrphanedShellViews@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18022F76C (--1CloseOrphanedShellViews@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ?CloseServerWindow@ViewManagerBridge@@UEAAJI@Z @ 0x1802300A0 (-CloseServerWindow@ViewManagerBridge@@UEAAJI@Z.c)
 *     ?StartActivity@CloseOrphanedShellViews@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x180235484 (-StartActivity@CloseOrphanedShellViews@ViewManagerInteropTraceLogging@@QEAAXXZ.c)
 */

__int64 __fastcall ViewManagerBridge::CloseOrphanedShellWindows(ViewManagerBridge *this, __int64 *a2)
{
  __int64 v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  unsigned int v8; // edi
  __int64 v9; // rbx
  int v10; // eax
  int v11; // eax
  __int64 i; // rax
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v16; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v17; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v19[4]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v20[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v20,
    (__int64)"CloseOrphanedShellViews");
  v20[0] = &ViewManagerInteropTraceLogging::CloseOrphanedShellViews::`vftable';
  ViewManagerInteropTraceLogging::CloseOrphanedShellViews::StartActivity((ViewManagerInteropTraceLogging::CloseOrphanedShellViews *)v20);
  v17 = 0LL;
  v4 = *((_QWORD *)this + 13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 56LL))(v4, &v17);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 899LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_17;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v17 + 48LL))(v17, &v15);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 902LL;
    goto LABEL_5;
  }
  v8 = 0;
  if ( v15 <= 0 )
  {
LABEL_16:
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v20, 0);
    v6 = 0;
  }
  else
  {
    while ( 1 )
    {
      v16 = 0LL;
      v9 = v17;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v9 + 56LL))(v9, v8, &v16);
      v6 = v10;
      if ( v10 < 0 )
        break;
      v18 = 0LL;
      v11 = Microsoft::WRL::ComPtr<IUnknown>::As<Navigation::Server::IServerWindow>(&v16, &v18);
      v6 = v11;
      if ( v11 < 0 )
      {
        v14 = 910LL;
        goto LABEL_20;
      }
      v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v18 + 24LL))(v18, v19);
      v6 = v11;
      if ( v11 < 0 )
      {
        v14 = 921LL;
LABEL_20:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v11);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
        goto LABEL_22;
      }
      for ( i = *a2; i != *a2 + 16 * a2[1]; i += 16LL )
      {
        if ( *(_DWORD *)(i + 12) == v19[0] )
          goto LABEL_15;
      }
      ViewManagerBridge::CloseServerWindow(this, v19[0]);
LABEL_15:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
      if ( (int)++v8 >= v15 )
        goto LABEL_16;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38B,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v10);
LABEL_22:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  }
LABEL_17:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  ViewManagerInteropTraceLogging::CloseOrphanedShellViews::~CloseOrphanedShellViews((ViewManagerInteropTraceLogging::CloseOrphanedShellViews *)v20);
  return v6;
}
