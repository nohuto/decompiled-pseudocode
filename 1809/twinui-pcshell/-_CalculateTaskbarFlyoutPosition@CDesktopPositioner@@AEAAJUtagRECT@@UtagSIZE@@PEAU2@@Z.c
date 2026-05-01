/*
 * XREFs of ?_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z @ 0x18033FDEC
 * Callers:
 *     ?_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180340D88 (-_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicat.c)
 * Callees:
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180028B94 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z @ 0x1800574F8 (-_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAU3@@Z @ 0x180340894 (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 *     ?_GetEdgeUIPositionForMonitor@CDesktopPositioner@@AEAAJQEAUHMONITOR__@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x180340BD0 (-_GetEdgeUIPositionForMonitor@CDesktopPositioner@@AEAAJQEAUHMONITOR__@@PEAUtagRECT@@PEAW4EDGEUI_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDesktopPositioner::_CalculateTaskbarFlyoutPosition(
        CDesktopPositioner *this,
        LPCRECT lprc,
        struct tagSIZE a3,
        struct tagRECT *a4)
{
  HMONITOR v8; // r12
  int EdgeUIPositionForMonitor; // eax
  unsigned int LastError; // edi
  __int64 v11; // rdi
  int v12; // eax
  CDesktopPositioner *v13; // rcx
  int WorkAreaFromRect; // eax
  __int64 v15; // rdx
  const char *v16; // r9
  struct IApplicationViewTitlebarConfiguration *v18; // [rsp+40h] [rbp-59h] BYREF
  __int64 v19; // [rsp+48h] [rbp-51h] BYREF
  POINT anchorPoint; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v21[8]; // [rsp+58h] [rbp-41h] BYREF
  SIZE windowSize; // [rsp+60h] [rbp-39h] BYREF
  __int64 v23; // [rsp+68h] [rbp-31h]
  RECT popupWindowPosition; // [rsp+70h] [rbp-29h] BYREF
  RECT excludeRect; // [rsp+80h] [rbp-19h] BYREF
  struct tagRECT v26; // [rsp+90h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v23 = -2LL;
  *(_QWORD *)&excludeRect.left = 0LL;
  *(_QWORD *)&excludeRect.right = 0LL;
  v8 = MonitorFromRect(lprc, 1u);
  EdgeUIPositionForMonitor = CDesktopPositioner::_GetEdgeUIPositionForMonitor(
                               this,
                               v8,
                               &excludeRect,
                               (enum EDGEUI_TRAYSTUCKPLACE *)v21);
  LastError = EdgeUIPositionForMonitor;
  if ( EdgeUIPositionForMonitor >= 0 )
  {
    anchorPoint.x = (lprc->left + lprc->right) / 2;
    anchorPoint.y = (lprc->top + lprc->bottom) / 2;
    v19 = 0LL;
    v11 = *((_QWORD *)this + 30);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    v12 = (*(__int64 (__fastcall **)(__int64, HMONITOR, __int64 *))(*(_QWORD *)v11 + 48LL))(v11, v8, &v19);
    LastError = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x66F,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v12);
LABEL_17:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      return LastError;
    }
    v18 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    WorkAreaFromRect = CDesktopPositioner::_CreateTitlebarConfiguration(v13, 0LL, &v18);
    LastError = WorkAreaFromRect;
    if ( WorkAreaFromRect < 0 )
    {
      v15 = 1651LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)WorkAreaFromRect);
      goto LABEL_16;
    }
    (*(void (__fastcall **)(_QWORD, struct tagSIZE, __int64, __int64, int, struct IApplicationViewTitlebarConfiguration *, SIZE *))(**((_QWORD **)this + 33) + 48LL))(
      *((_QWORD *)this + 33),
      a3,
      v19,
      1LL,
      1,
      v18,
      &windowSize);
    if ( !CalculatePopupWindowPosition(&anchorPoint, &windowSize, 0x10054u, &excludeRect, &popupWindowPosition) )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x67C,
                    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                    v16);
LABEL_16:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
      goto LABEL_17;
    }
    if ( (unsigned int)CDesktopPositioner::_FixRectForWorkArea(this, 1LL, &popupWindowPosition, 0LL, a4) == -2147024809 )
    {
      WorkAreaFromRect = CDesktopPositioner::_GetWorkAreaFromRect(this, &popupWindowPosition, &v26);
      LastError = WorkAreaFromRect;
      if ( WorkAreaFromRect < 0 )
      {
        v15 = 1669LL;
        goto LABEL_14;
      }
      popupWindowPosition.top = v26.top;
      popupWindowPosition.bottom = v26.bottom;
      WorkAreaFromRect = CDesktopPositioner::_FixRectForWorkArea(this, 1LL, &popupWindowPosition, 0LL, a4);
      LastError = WorkAreaFromRect;
      if ( WorkAreaFromRect < 0 )
      {
        v15 = 1674LL;
        goto LABEL_14;
      }
    }
    LastError = 0;
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x668,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)EdgeUIPositionForMonitor);
  return LastError;
}
