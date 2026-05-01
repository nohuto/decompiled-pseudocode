/*
 * XREFs of ?CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KPEAUIPrivilegedPresentationOperations@@PEAUIXamlExplorerHost@@AEBU_GUID@@PEAPEAX@Z @ 0x1802D4090
 * Callers:
 *     ?CreateXamlExplorerHostWindowInBand@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KAEBU_GUID@@PEAPEAX@Z @ 0x1802D0310 (-CreateXamlExplorerHostWindowInBand@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWi.c)
 *     ?InitializeWindows@XamlExplorerHostShellComponent@@AEAAJXZ @ 0x1802D11F8 (-InitializeWindows@XamlExplorerHostShellComponent@@AEAAJXZ.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18004FD9C (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800500AC (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802CF90C (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ?Stop@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802D1FA4 (-Stop@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType.c)
 *     WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::XamlExplorerHostLaunchHandler__lambda_c8d6b8e58017b711112620b136cf3b89___ @ 0x1802D2FF0 (WindowsInternal--ComposableShell--Desktop--XamlExplorerHostLaunchHandler--XamlExplorerHostLaunch.c)
 *     ??$MakeAndInitializeOrThrow@VXamlExplorerHostWindow@@AEAPEAUIXamlExplorerHostWindowCreatedCallback@@AEAKAEAPEAUIPrivilegedPresentationOperations@@AEAPEAUIXamlExplorerHost@@@wil@@YA?AV?$ComPtr@VXamlExplorerHostWindow@@@WRL@Microsoft@@AEAPEAUIXamlExplorerHostWindowCreatedCallback@@AEAKAEAPEAUIPrivilegedPresentationOperations@@AEAPEAUIXamlExplorerHost@@@Z @ 0x1802D3290 (--$MakeAndInitializeOrThrow@VXamlExplorerHostWindow@@AEAPEAUIXamlExplorerHostWindowCreatedCallba.c)
 *     _lambda_c8d6b8e58017b711112620b136cf3b89_::_lambda_c8d6b8e58017b711112620b136cf3b89_ @ 0x1802D366C (_lambda_c8d6b8e58017b711112620b136cf3b89_--_lambda_c8d6b8e58017b711112620b136cf3b89_.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1802D36D8 (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPr_ea_1802D36D8.c)
 *     ??1CreateXamlExplorerHostWindow@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x1802D3A00 (--1CreateXamlExplorerHostWindow@XamlExplorerHostTelemetry@@QEAA@XZ.c)
 *     ?EnsureHostAppCreated@XamlExplorerHost@@QE$AAAXXZ @ 0x1802D4458 (-EnsureHostAppCreated@XamlExplorerHost@@QE$AAAXXZ.c)
 *     ?EnsureMetadataRegistered@XamlExplorerHost@@QE$AAAXXZ @ 0x1802D45C8 (-EnsureMetadataRegistered@XamlExplorerHost@@QE$AAAXXZ.c)
 *     ?Split@CreateXamlExplorerHostWindow@XamlExplorerHostTelemetry@@QEAA?AV12@XZ @ 0x1802D4B88 (-Split@CreateXamlExplorerHostWindow@XamlExplorerHostTelemetry@@QEAA-AV12@XZ.c)
 *     ?StartActivity@CreateXamlExplorerHostWindow@XamlExplorerHostTelemetry@@QEAAXXZ @ 0x1802D4C18 (-StartActivity@CreateXamlExplorerHostWindow@XamlExplorerHostTelemetry@@QEAAXXZ.c)
 *     ?CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationParameters@Xaml@UI@Windows@@PE$AAVXamlExplorerHostLaunchHandler@234@@Z @ 0x1802D7558 (-CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationP.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall XamlExplorerHost::CreateXamlExplorerHostWindowInBand(
        RTL_SRWLOCK *a1,
        struct IXamlExplorerHostWindowCreatedCallback *a2,
        __int64 a3,
        unsigned int a4,
        struct IPrivilegedPresentationOperations *a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  __int64 *v10; // rax
  struct IXamlExplorerHostWindowCreatedCallback *v11; // rbx
  _QWORD *v12; // rdi
  __int64 *v13; // rdx
  _QWORD *v14; // rdi
  int v15; // eax
  unsigned int v16; // [rsp+30h] [rbp-D0h] BYREF
  struct IXamlExplorerHostWindowCreatedCallback *v17; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD *v18; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v19; // [rsp+48h] [rbp-B8h]
  int v20; // [rsp+58h] [rbp-A8h]
  struct IPrivilegedPresentationOperations *v21; // [rsp+60h] [rbp-A0h] BYREF
  int v22[2]; // [rsp+68h] [rbp-98h] BYREF
  RTL_SRWLOCK *v23[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v24; // [rsp+80h] [rbp-80h] BYREF
  int v25; // [rsp+90h] [rbp-70h]
  __int64 v26; // [rsp+A0h] [rbp-60h]
  __int64 v27[41]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v28[40]; // [rsp+1F0h] [rbp+F0h] BYREF
  struct IXamlExplorerHostWindowCreatedCallback *v29; // [rsp+330h] [rbp+230h] BYREF
  _QWORD v30[39]; // [rsp+338h] [rbp+238h] BYREF
  _BYTE v31[320]; // [rsp+470h] [rbp+370h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+5F8h] [rbp+4F8h]

  v26 = -2LL;
  v17 = a2;
  v16 = a4;
  v21 = a5;
  *(_QWORD *)v22 = a6;
  *a8 = 0LL;
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v28,
    (__int64)"CreateXamlExplorerHostWindow");
  v28[0] = &XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow::`vftable';
  XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow::StartActivity((XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow *)v28);
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(v23, a1 + 13);
  XamlExplorerHost::EnsureMetadataRegistered(a1);
  XamlExplorerHost::EnsureHostAppCreated(a1);
  v10 = wil::MakeAndInitializeOrThrow<XamlExplorerHostWindow,IXamlExplorerHostWindowCreatedCallback * &,unsigned long &,IPrivilegedPresentationOperations * &,IXamlExplorerHost * &>(
          (__int64 *)&v18,
          &v17,
          &v16,
          &v21,
          (struct IXamlExplorerHost **)v22);
  v17 = (struct IXamlExplorerHostWindowCreatedCallback *)*v10;
  v11 = v17;
  *v10 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow::Split(v28, v31);
  v29 = v11;
  if ( v11 )
    (*(void (__fastcall **)(struct IXamlExplorerHostWindowCreatedCallback *))(*(_QWORD *)v11 + 8LL))(v11);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v30,
    (__int64)v31);
  v30[0] = &XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow::`vftable';
  *(_WORD *)((char *)&v20 + 1) = 0;
  HIBYTE(v20) = 0;
  *(_QWORD *)&v19 = *(_QWORD *)a3;
  DWORD2(v19) = *(_DWORD *)(a3 + 8) - v19;
  HIDWORD(v19) = *(_DWORD *)(a3 + 12) - DWORD1(v19);
  LOBYTE(v20) = 1;
  v12 = Platform::Details::Heap::Allocate(0x28uLL, 0x140uLL);
  v18 = v12;
  v13 = lambda_c8d6b8e58017b711112620b136cf3b89_::_lambda_c8d6b8e58017b711112620b136cf3b89_(v27, (__int64 *)&v29);
  v14 = WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::XamlExplorerHostLaunchHandler__lambda_c8d6b8e58017b711112620b136cf3b89___(
          v12,
          v13);
  v18 = v14;
  v24 = v19;
  v25 = v20;
  WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView(a1[11].Ptr, &v24, v14);
  if ( v14 )
    (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
  v15 = (**(__int64 (__fastcall ***)(struct IXamlExplorerHostWindowCreatedCallback *, GUID *, _QWORD *))v11)(
          v11,
          &GUID_a9728204_899b_46a5_9344_43e74614d24b,
          a8);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      153LL,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v15);
    __debugbreak();
  }
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v28);
  XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow::~CreateXamlExplorerHostWindow((XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow *)v30);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
  XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow::~CreateXamlExplorerHostWindow((XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow *)v31);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v23);
  XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow::~CreateXamlExplorerHostWindow((XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow *)v28);
}
