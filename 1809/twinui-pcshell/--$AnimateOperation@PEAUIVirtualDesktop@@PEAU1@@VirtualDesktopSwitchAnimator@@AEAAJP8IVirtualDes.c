/*
 * XREFs of ??$AnimateOperation@PEAUIVirtualDesktop@@PEAU1@@VirtualDesktopSwitchAnimator@@AEAAJP8IVirtualDesktopManagerPrivate@@EAAJPEAUIVirtualDesktop@@0@Z0W4VirtualDesktopSwitchDirection@@00@Z @ 0x18038BD24
 * Callers:
 *     ?RemoveCurrentDesktop@VirtualDesktopSwitchAnimator@@UEAAJPEAUIVirtualDesktop@@0W4VirtualDesktopSwitchDirection@@@Z @ 0x18038C040 (-RemoveCurrentDesktop@VirtualDesktopSwitchAnimator@@UEAAJPEAUIVirtualDesktop@@0W4VirtualDesktopS.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??_9IVirtualDesktopManagerPrivate@@$BBAI@AA @ 0x1800AA5AC (--_9IVirtualDesktopManagerPrivate@@$BBAI@AA.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopSwitchAnimator::AnimateOperation<IVirtualDesktop *,IVirtualDesktop *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  int v7; // eax
  HWND ShellWindow; // rax
  int v9; // eax
  __int64 v10; // rbx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rbx
  int v15; // eax
  unsigned int v16; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF
  __int64 v20; // [rsp+58h] [rbp+10h] BYREF

  v20 = a2;
  v7 = DwmpBeginTransitionRequestWithGUID(90LL, &unk_180484D58);
  v19 = 0LL;
  if ( v7 >= 0 )
  {
    ShellWindow = GetShellWindow();
    v9 = DwmpTransitionWindow(ShellWindow, 76 - (unsigned int)(a4 != 0));
    if ( v9 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        44LL,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopswitchanimator.cpp",
        (const char *)(unsigned int)v9);
      goto LABEL_10;
    }
    DwmFlush();
    v20 = 0LL;
    v10 = *(_QWORD *)(a1 + 16);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 224LL))(v10, &v20);
    v12 = retaddr;
    if ( v11 >= 0 )
    {
      v14 = *(_QWORD *)(a1 + 24);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v14 + 40LL))(
              v14,
              v20,
              a3,
              &v19);
      v12 = retaddr;
      if ( v11 >= 0 )
      {
LABEL_9:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
        goto LABEL_10;
      }
      v13 = 52LL;
    }
    else
    {
      v13 = 50LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v12,
      v13,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopswitchanimator.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_9;
  }
LABEL_10:
  v15 =  IVirtualDesktopManagerPrivate::`vcall'{264,{flat}}(*(_QWORD *)(a1 + 16));
  v16 = v15;
  if ( v15 >= 0 )
  {
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 24LL))(v19);
    v16 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopswitchanimator.cpp",
      (const char *)(unsigned int)v15);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  return v16;
}
