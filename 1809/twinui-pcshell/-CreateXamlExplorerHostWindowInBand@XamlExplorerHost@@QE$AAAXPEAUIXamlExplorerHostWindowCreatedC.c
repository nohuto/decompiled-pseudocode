/*
 * XREFs of ?CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KPEAUIPrivilegedPresentationOperations@@PEAUIXamlExplorerHost@@AEBU_GUID@@PEAPEAX@Z @ 0x18025C530
 * Callers:
 *     ?CreateXamlExplorerHostWindowInBand@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KAEBU_GUID@@PEAPEAX@Z @ 0x18025A060 (-CreateXamlExplorerHostWindowInBand@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWi.c)
 *     ?InitializeWindows@XamlExplorerHostShellComponent@@AEAAJXZ @ 0x18025AB08 (-InitializeWindows@XamlExplorerHostShellComponent@@AEAAJXZ.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18000EC50 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000EF5C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::XamlExplorerHostLaunchHandler__lambda_35cad84803900765f6a0ef5d09433fc4___ @ 0x18025B824 (WindowsInternal--ComposableShell--Desktop--XamlExplorerHostLaunchHandler--XamlExplorerHostLaunch.c)
 *     ??$MakeAndInitializeOrThrow@VXamlExplorerHostWindow@@AEAPEAUIXamlExplorerHostWindowCreatedCallback@@AEAKAEAPEAUIPrivilegedPresentationOperations@@AEAPEAUIXamlExplorerHost@@@wil@@YA?AV?$ComPtr@VXamlExplorerHostWindow@@@WRL@Microsoft@@AEAPEAUIXamlExplorerHostWindowCreatedCallback@@AEAKAEAPEAUIPrivilegedPresentationOperations@@AEAPEAUIXamlExplorerHost@@@Z @ 0x18025BA8C (--$MakeAndInitializeOrThrow@VXamlExplorerHostWindow@@AEAPEAUIXamlExplorerHostWindowCreatedCallba.c)
 *     ?EnsureHostAppCreated@XamlExplorerHost@@QE$AAAXXZ @ 0x18025C7F8 (-EnsureHostAppCreated@XamlExplorerHost@@QE$AAAXXZ.c)
 *     ?EnsureMetadataRegistered@XamlExplorerHost@@QE$AAAXXZ @ 0x18025C968 (-EnsureMetadataRegistered@XamlExplorerHost@@QE$AAAXXZ.c)
 *     ?CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationParameters@Xaml@UI@Windows@@PE$AAVXamlExplorerHostLaunchHandler@234@@Z @ 0x18025F5A8 (-CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationP.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall XamlExplorerHost::CreateXamlExplorerHostWindowInBand(
        RTL_SRWLOCK *a1,
        struct IXamlExplorerHostWindowCreatedCallback *a2,
        __int64 a3,
        unsigned int a4,
        struct IPrivilegedPresentationOperations *a5,
        struct IXamlExplorerHost *a6,
        RTL_SRWLOCK *a7,
        _QWORD *a8)
{
  _QWORD *v10; // r14
  __int64 *v11; // rax
  __int64 v12; // rbx
  _QWORD *v13; // rdi
  _QWORD *v14; // rdi
  int v15; // eax
  __int128 v16; // [rsp+40h] [rbp-40h]
  __int128 v17; // [rsp+60h] [rbp-20h] BYREF
  int v18; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  __int64 v20; // [rsp+B0h] [rbp+30h] BYREF
  struct IXamlExplorerHostWindowCreatedCallback *v21; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v22; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v23; // [rsp+C8h] [rbp+48h] BYREF

  v23 = a4;
  v21 = a2;
  v10 = a8;
  *a8 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&a7, a1 + 13);
  XamlExplorerHost::EnsureMetadataRegistered(a1);
  XamlExplorerHost::EnsureHostAppCreated(a1);
  v11 = wil::MakeAndInitializeOrThrow<XamlExplorerHostWindow,IXamlExplorerHostWindowCreatedCallback * &,unsigned long &,IPrivilegedPresentationOperations * &,IXamlExplorerHost * &>(
          (__int64 *)&a8,
          &v21,
          &v23,
          &a5,
          &a6);
  v22 = *v11;
  v12 = v22;
  *v11 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a8);
  v20 = v12;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  *(_QWORD *)&v16 = *(_QWORD *)a3;
  DWORD2(v16) = *(_DWORD *)(a3 + 8) - *(_QWORD *)a3;
  HIDWORD(v16) = *(_DWORD *)(a3 + 12) - HIDWORD(*(_QWORD *)a3);
  v13 = Platform::Details::Heap::Allocate(0x28uLL, 0x140uLL);
  a8 = (_QWORD *)v12;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  v14 = WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::XamlExplorerHostLaunchHandler__lambda_35cad84803900765f6a0ef5d09433fc4___(
          v13,
          (__int64 *)&a8);
  v17 = v16;
  v18 = 1;
  WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView(a1[11].Ptr, &v17, v14);
  if ( v14 )
    (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
  v15 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v12)(
          v12,
          &GUID_a9728204_899b_46a5_9344_43e74614d24b,
          v10);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      150LL,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v15);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&a7);
}
