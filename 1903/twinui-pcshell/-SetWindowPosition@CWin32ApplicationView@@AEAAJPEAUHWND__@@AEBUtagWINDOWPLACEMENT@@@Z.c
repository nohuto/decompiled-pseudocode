/*
 * XREFs of ?SetWindowPosition@CWin32ApplicationView@@AEAAJPEAUHWND__@@AEBUtagWINDOWPLACEMENT@@@Z @ 0x18015C1F0
 * Callers:
 *     ?SetPosition@CWin32ApplicationView@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x18015BD90 (-SetPosition@CWin32ApplicationView@@UEAAJPEAUIApplicationViewPosition@@@Z.c)
 * Callees:
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18001A7A8 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001C8D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Deta.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::SetWindowPosition(
        CWin32ApplicationView *this,
        HWND a2,
        const struct tagWINDOWPLACEMENT *a3)
{
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // ebx
  const char *v10; // r9
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  CWin32ApplicationView *v13; // [rsp+50h] [rbp+20h] BYREF
  CWin32ApplicationView *v14; // [rsp+60h] [rbp+30h] BYREF
  __int64 v15; // [rsp+68h] [rbp+38h] BYREF

  v13 = this;
  if ( a3->showCmd == 3 )
  {
    v13 = 0LL;
    GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v14);
    v5 = (volatile signed __int32 *)v14;
    if ( v14 )
    {
      v6 = *((_QWORD *)v14 + 6);
      v7 = *(_QWORD *)(v6 + 776);
      if ( v7 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 8LL))(*(_QWORD *)(v6 + 776));
      v15 = 0LL;
      v14 = v13;
      v13 = (CWin32ApplicationView *)v7;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release(v5);
    }
    v8 = (*(__int64 (__fastcall **)(CWin32ApplicationView *, HWND))(*(_QWORD *)v13 + 40LL))(v13, a2);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3CE,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v8);
      return (unsigned int)v8;
    }
    return 0LL;
  }
  if ( SetWindowPlacement(a2, a3) )
    return 0LL;
  if ( GetLastError() != 5 )
  {
    v11 = 1002LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v11,
             (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
             v10);
  }
  if ( a3->showCmd == 1 || a3->showCmd == 4 )
    goto LABEL_18;
  if ( a3->showCmd != 6 )
  {
    if ( a3->showCmd != 9 )
    {
      v11 = 995LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v11,
               (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
               v10);
    }
LABEL_18:
    if ( !PostMessageW(a2, 0x112u, 0xF120uLL, 0LL) )
    {
      v11 = 992LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v11,
               (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
               v10);
    }
    return 0LL;
  }
  if ( !PostMessageW(a2, 0x112u, 0xF020uLL, 0LL) )
  {
    v11 = 987LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v11,
             (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
             v10);
  }
  return 0LL;
}
