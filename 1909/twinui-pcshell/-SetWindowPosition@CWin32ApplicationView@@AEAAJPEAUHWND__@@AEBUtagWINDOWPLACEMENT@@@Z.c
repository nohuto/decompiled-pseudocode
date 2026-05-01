/*
 * XREFs of ?SetWindowPosition@CWin32ApplicationView@@AEAAJPEAUHWND__@@AEBUtagWINDOWPLACEMENT@@@Z @ 0x18017B4A0
 * Callers:
 *     ?SetPosition@CWin32ApplicationView@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x18017B040 (-SetPosition@CWin32ApplicationView@@UEAAJPEAUIApplicationViewPosition@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIAppTransitionTargetManager@@UITaggableTarget@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003E8F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainInterface.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18003E9AC (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180122920 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::SetWindowPosition(
        CWin32ApplicationView *this,
        HWND a2,
        const struct tagWINDOWPLACEMENT *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  volatile int *v8; // rdx
  int v9; // ebx
  const char *v11; // r9
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  CWin32ApplicationView *v14; // [rsp+50h] [rbp+20h] BYREF
  CWin32ApplicationView *v15; // [rsp+60h] [rbp+30h] BYREF
  __int64 v16; // [rsp+68h] [rbp+38h] BYREF

  v14 = this;
  if ( a3->showCmd == 3 )
  {
    v14 = 0LL;
    GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v15);
    v5 = (__int64)v15;
    if ( v15 )
    {
      v6 = *((_QWORD *)v15 + 6);
      v7 = *(_QWORD *)(v6 + 776);
      if ( v7 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 8LL))(*(_QWORD *)(v6 + 776));
      v16 = 0LL;
      v15 = v14;
      v14 = (CWin32ApplicationView *)v7;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IAppTransitionTargetManager,ITaggableTarget,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,CWRLObjectWithSite>::Release(
        v5,
        v8);
    }
    v9 = (*(__int64 (__fastcall **)(CWin32ApplicationView *, HWND))(*(_QWORD *)v14 + 40LL))(v14, a2);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3CE,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v9);
      return (unsigned int)v9;
    }
    return 0LL;
  }
  if ( SetWindowPlacement(a2, a3) )
    return 0LL;
  if ( GetLastError() != 5 )
  {
    v12 = 1002LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v12,
             (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
             v11);
  }
  if ( a3->showCmd == 1 || a3->showCmd == 4 )
    goto LABEL_18;
  if ( a3->showCmd != 6 )
  {
    if ( a3->showCmd != 9 )
    {
      v12 = 995LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v12,
               (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
               v11);
    }
LABEL_18:
    if ( !PostMessageW(a2, 0x112u, 0xF120uLL, 0LL) )
    {
      v12 = 992LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v12,
               (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
               v11);
    }
    return 0LL;
  }
  if ( !PostMessageW(a2, 0x112u, 0xF020uLL, 0LL) )
  {
    v12 = 987LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v12,
             (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
             v11);
  }
  return 0LL;
}
