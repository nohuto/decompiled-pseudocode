/*
 * XREFs of ?CreateDesktopBackgroundThumbnail@DCompThumbnailHelpers@@YAJPEAUISwitchThumbnailFactory@@PEAUIDCompThumbnail@@AEBUtagRECT@@PEBUtagSIZE@@PEAPEAU3@@Z @ 0x18036C2DC
 * Callers:
 *     ?_CreateDesktopBackgroundThumbnail@CMultitaskingViewFrameElement@@AEAAJAEBUCRect@Geometry@@PEAPEAUIDCompThumbnail@@@Z @ 0x18036D834 (-_CreateDesktopBackgroundThumbnail@CMultitaskingViewFrameElement@@AEAAJAEBUCRect@Geometry@@PEAPE.c)
 *     ?CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ @ 0x1803C87B8 (-CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@CDropFeedback@@QEAAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP_FEEDBACK_INIT_FLAGS@@@Z @ 0x1803D56C8 (-RuntimeClassInitialize@CDropFeedback@@QEAAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DCompThumbnailHelpers::CreateDesktopBackgroundThumbnail(
        DCompThumbnailHelpers *this,
        struct ISwitchThumbnailFactory *a2,
        struct IDCompThumbnail *a3,
        const struct tagRECT *a4,
        const struct tagSIZE *a5)
{
  __int64 v9; // rbx
  __int64 v10; // rdi
  DWORD SysColor; // eax
  int v12; // ebx
  __int64 v13; // rdx
  HWND ShellWindow; // rax
  HWND v15; // rsi
  __int64 v16; // rax
  __int64 (__fastcall *v17)(DCompThumbnailHelpers *, struct ISwitchThumbnailFactory *, HWND, _QWORD, const struct tagRECT *, _DWORD *, GUID *, const struct tagSIZE *); // rax
  __int64 v19; // [rsp+50h] [rbp-B0h]
  _DWORD v20[4]; // [rsp+58h] [rbp-A8h] BYREF
  struct tagRECT Rect; // [rsp+68h] [rbp-98h] BYREF
  _WORD pvParam[264]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+1E8h]

  *a5 = 0LL;
  memset_0(pvParam, 0, 0x208uLL);
  SystemParametersInfoW(0x73u, 0x104u, pvParam, 0);
  if ( pvParam[0] )
  {
    ShellWindow = GetShellWindow();
    v15 = ShellWindow;
    if ( !ShellWindow )
    {
      v12 = -2147019873;
      v13 = 255LL;
      goto LABEL_11;
    }
    Rect = 0LL;
    GetWindowRect(ShellWindow, &Rect);
    v16 = *(_QWORD *)this;
    v20[0] = *(_DWORD *)a3 - Rect.left;
    v17 = *(__int64 (__fastcall **)(DCompThumbnailHelpers *, struct ISwitchThumbnailFactory *, HWND, _QWORD, const struct tagRECT *, _DWORD *, GUID *, const struct tagSIZE *))(v16 + 64);
    v20[2] = *((_DWORD *)a3 + 2) - Rect.left;
    v20[3] = *((_DWORD *)a3 + 3) - Rect.top;
    v20[1] = *((_DWORD *)a3 + 1) - Rect.top;
    v12 = v17(this, a2, v15, 0LL, a4, v20, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, a5);
    if ( v12 < 0 )
    {
      v13 = 270LL;
      goto LABEL_11;
    }
  }
  else
  {
    if ( a4 )
    {
      v9 = *(_QWORD *)&a4->left;
    }
    else
    {
      LODWORD(v19) = *((_DWORD *)a3 + 2) - *(_DWORD *)a3;
      HIDWORD(v19) = *((_DWORD *)a3 + 3) - *((_DWORD *)a3 + 1);
      v9 = v19;
    }
    v10 = *(_QWORD *)this;
    SysColor = GetSysColor(1);
    v12 = (*(__int64 (__fastcall **)(DCompThumbnailHelpers *, struct ISwitchThumbnailFactory *, _QWORD, __int64, GUID *, const struct tagSIZE *))(v10 + 104))(
            this,
            a2,
            SysColor,
            v9,
            &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
            a5);
    if ( v12 < 0 )
    {
      v13 = 251LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"internal\\shell\\private\\inc\\DCompThumbnailFactory\\DCompThumbnailHelpers.h",
        (const char *)(unsigned int)v12);
    }
  }
  return (unsigned int)v12;
}
