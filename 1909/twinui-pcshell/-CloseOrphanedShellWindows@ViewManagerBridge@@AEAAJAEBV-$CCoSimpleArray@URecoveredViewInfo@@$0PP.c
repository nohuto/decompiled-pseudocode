/*
 * XREFs of ?CloseOrphanedShellWindows@ViewManagerBridge@@AEAAJAEBV?$CCoSimpleArray@URecoveredViewInfo@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@URecoveredViewInfo@@@@@@@Z @ 0x1802A4588
 * Callers:
 *     ?OnConnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z @ 0x1802A7180 (-OnConnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180017C28 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180060518 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIServerWindow@Server@Navigation@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIServerWindow@Server@Navigation@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802A2450 (--$As@UIServerWindow@Server@Navigation@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V.c)
 *     ??1CloseOrphanedShellViews@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1802A3E88 (--1CloseOrphanedShellViews@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ?CloseServerWindow@ViewManagerBridge@@UEAAJI@Z @ 0x1802A4800 (-CloseServerWindow@ViewManagerBridge@@UEAAJI@Z.c)
 *     ?StartActivity@CloseOrphanedShellViews@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x1802A9DE0 (-StartActivity@CloseOrphanedShellViews@ViewManagerInteropTraceLogging@@QEAAXXZ.c)
 */

__int64 __fastcall ViewManagerBridge::CloseOrphanedShellWindows(ViewManagerBridge *this, __int64 *a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  unsigned int v9; // esi
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, _QWORD, _QWORD); // rdi
  int v12; // eax
  int v13; // eax
  __int64 i; // rax
  __int64 v16; // rdx
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-E0h] BYREF
  __int64 v18; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v19; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v21[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B8h]
  _QWORD v23[40]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v22 = -2LL;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v23,
    (__int64)"CloseOrphanedShellViews");
  v23[0] = &ViewManagerInteropTraceLogging::CloseOrphanedShellViews::`vftable';
  ViewManagerInteropTraceLogging::CloseOrphanedShellViews::StartActivity((ViewManagerInteropTraceLogging::CloseOrphanedShellViews *)v23);
  v20 = 0LL;
  v4 = *((_QWORD *)this + 13);
  v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 56LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  v6 = v5(v4, &v20);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 902LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_17;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 48LL))(v20, &v18);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 905LL;
    goto LABEL_5;
  }
  v9 = 0;
  if ( (int)v18 <= 0 )
  {
LABEL_16:
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v23, 0);
    v7 = 0;
  }
  else
  {
    while ( 1 )
    {
      v17 = 0LL;
      v10 = v20;
      v11 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v20 + 56LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
      v12 = v11(v10, v9, &v17);
      v7 = v12;
      if ( v12 < 0 )
        break;
      v19 = 0LL;
      v13 = Microsoft::WRL::ComPtr<IUnknown>::As<Navigation::Server::IServerWindow>(&v17, &v19);
      v7 = v13;
      if ( v13 < 0 )
      {
        v16 = 913LL;
        goto LABEL_20;
      }
      v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v19 + 24LL))(v19, v21);
      v7 = v13;
      if ( v13 < 0 )
      {
        v16 = 924LL;
LABEL_20:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v13);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
        goto LABEL_22;
      }
      for ( i = *a2; i != *a2 + 16 * a2[1]; i += 16LL )
      {
        if ( *(_DWORD *)(i + 12) == v21[0] )
          goto LABEL_15;
      }
      ViewManagerBridge::CloseServerWindow(this, v21[0]);
LABEL_15:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
      if ( (int)++v9 >= (int)v18 )
        goto LABEL_16;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38E,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v12);
LABEL_22:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
  }
LABEL_17:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  ViewManagerInteropTraceLogging::CloseOrphanedShellViews::~CloseOrphanedShellViews((ViewManagerInteropTraceLogging::CloseOrphanedShellViews *)v23);
  return v7;
}
