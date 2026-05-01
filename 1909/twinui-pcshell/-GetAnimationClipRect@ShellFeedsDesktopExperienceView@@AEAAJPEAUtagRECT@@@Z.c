/*
 * XREFs of ?GetAnimationClipRect@ShellFeedsDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x18009C8CC
 * Callers:
 *     ?OnViewCloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009E0D4 (-OnViewCloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewUncloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009EA9C (-OnViewUncloaking@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     ?EnsureInputHostManager@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x18009C6A8 (-EnsureInputHostManager@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180122920 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall ShellFeedsDesktopExperienceView::GetAnimationClipRect(
        ShellFeedsDesktopExperienceView *this,
        LPRECT lprcDst)
{
  float v2; // xmm0_4
  float v4; // xmm1_4
  LONG v6; // eax
  float v7; // xmm0_4
  LONG v8; // eax
  float v9; // xmm1_4
  HMONITOR v10; // rax
  HMONITOR v11; // rbx
  const char *v12; // r9
  int v14; // ebx
  __int64 v15; // rdx
  int v16; // eax
  int v17; // [rsp+20h] [rbp-60h] BYREF
  RECT rc; // [rsp+28h] [rbp-58h] BYREF
  RECT v19; // [rsp+38h] [rbp-48h] BYREF
  struct tagMONITORINFO mi; // [rsp+48h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v2 = *((float *)this + 34);
  v4 = *((float *)this + 35);
  v6 = (int)v2;
  v7 = v2 + *((float *)this + 36);
  rc.left = v6;
  v8 = (int)v4;
  v9 = v4 + *((float *)this + 37);
  rc.top = v8;
  rc.right = (int)v7;
  rc.bottom = (int)v9;
  v10 = MonitorFromRect(&rc, 1u);
  mi.cbSize = 40;
  v11 = v10;
  memset_0(&mi.rcMonitor, 0, 0x24uLL);
  if ( !GetMonitorInfoW(v11, &mi) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x4C1,
             (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
             v12);
  if ( !CopyRect(lprcDst, &mi.rcWork) )
  {
    v14 = -2147467259;
    v15 = 1218LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
      (const char *)(unsigned int)v14);
    return (unsigned int)v14;
  }
  v19 = 0LL;
  v14 = ShellFeedsDesktopExperienceView::EnsureInputHostManager(this);
  if ( v14 < 0 )
  {
    v15 = 1222LL;
    goto LABEL_5;
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD, RECT *, int *))(**((_QWORD **)this + 12) + 40LL))(
          *((_QWORD *)this + 12),
          &v19,
          &v17);
  if ( v16 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4C7,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
      (const char *)(unsigned int)v16);
  if ( !IsRectEmpty(&v19) && lprcDst->bottom > v19.top && ((v17 - 1) & 0xFFFFFFFD) == 0 )
    lprcDst->bottom = v19.top;
  return 0LL;
}
