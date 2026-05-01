/*
 * XREFs of ?_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z @ 0x1803C45EC
 * Callers:
 *     ?_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1803C51A4 (-_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicat.c)
 * Callees:
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180022BF4 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAU3@@Z @ 0x18004ADF0 (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 *     ?_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z @ 0x18004AEF4 (-_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180122920 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_GetEdgeUIPositionForMonitor@CDesktopPositioner@@AEAAJQEAUHMONITOR__@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1803C4FEC (-_GetEdgeUIPositionForMonitor@CDesktopPositioner@@AEAAJQEAUHMONITOR__@@PEAUtagRECT@@PEAW4EDGEUI_.c)
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
  __int64 v11; // rsi
  __int64 (__fastcall *v12)(__int64, HMONITOR, __int64 *); // rdi
  int v13; // eax
  CDesktopPositioner *v14; // rcx
  int WorkAreaFromRect; // eax
  __int64 v16; // rdx
  const char *v17; // r9
  struct IApplicationViewTitlebarConfiguration *v19; // [rsp+40h] [rbp-59h] BYREF
  __int64 v20; // [rsp+48h] [rbp-51h] BYREF
  POINT anchorPoint; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v22[8]; // [rsp+58h] [rbp-41h] BYREF
  SIZE windowSize; // [rsp+60h] [rbp-39h] BYREF
  __int64 v24; // [rsp+68h] [rbp-31h]
  RECT popupWindowPosition; // [rsp+70h] [rbp-29h] BYREF
  RECT excludeRect; // [rsp+80h] [rbp-19h] BYREF
  struct tagRECT v27; // [rsp+90h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v24 = -2LL;
  *(_QWORD *)&excludeRect.left = 0LL;
  *(_QWORD *)&excludeRect.right = 0LL;
  v8 = MonitorFromRect(lprc, 1u);
  EdgeUIPositionForMonitor = CDesktopPositioner::_GetEdgeUIPositionForMonitor(
                               this,
                               v8,
                               &excludeRect,
                               (enum EDGEUI_TRAYSTUCKPLACE *)v22);
  LastError = EdgeUIPositionForMonitor;
  if ( EdgeUIPositionForMonitor >= 0 )
  {
    anchorPoint.x = (lprc->left + lprc->right) / 2;
    anchorPoint.y = (lprc->top + lprc->bottom) / 2;
    v20 = 0LL;
    v11 = *((_QWORD *)this + 30);
    v12 = *(__int64 (__fastcall **)(__int64, HMONITOR, __int64 *))(*(_QWORD *)v11 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
    v13 = v12(v11, v8, &v20);
    LastError = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x65F,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v13);
LABEL_19:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
      return LastError;
    }
    v19 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
    WorkAreaFromRect = CDesktopPositioner::_CreateTitlebarConfiguration(v14, 0LL, &v19);
    LastError = WorkAreaFromRect;
    if ( WorkAreaFromRect >= 0 )
    {
      WorkAreaFromRect = (*(__int64 (__fastcall **)(_QWORD, struct tagSIZE, __int64, __int64, int, struct IApplicationViewTitlebarConfiguration *, SIZE *))(**((_QWORD **)this + 33) + 48LL))(
                           *((_QWORD *)this + 33),
                           a3,
                           v20,
                           1LL,
                           1,
                           v19,
                           &windowSize);
      LastError = WorkAreaFromRect;
      if ( WorkAreaFromRect >= 0 )
      {
        if ( !CalculatePopupWindowPosition(&anchorPoint, &windowSize, 0x10054u, &excludeRect, &popupWindowPosition) )
        {
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x66C,
                        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                        v17);
LABEL_18:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
          goto LABEL_19;
        }
        if ( (unsigned int)CDesktopPositioner::_FixRectForWorkArea((__int64)this, 1, &popupWindowPosition.left, 0LL, a4) == -2147024809 )
        {
          WorkAreaFromRect = CDesktopPositioner::_GetWorkAreaFromRect(this, &popupWindowPosition, &v27);
          LastError = WorkAreaFromRect;
          if ( WorkAreaFromRect < 0 )
          {
            v16 = 1653LL;
            goto LABEL_16;
          }
          popupWindowPosition.top = v27.top;
          popupWindowPosition.bottom = v27.bottom;
          WorkAreaFromRect = CDesktopPositioner::_FixRectForWorkArea(
                               (__int64)this,
                               1,
                               &popupWindowPosition.left,
                               0LL,
                               a4);
          LastError = WorkAreaFromRect;
          if ( WorkAreaFromRect < 0 )
          {
            v16 = 1658LL;
            goto LABEL_16;
          }
        }
        LastError = 0;
        goto LABEL_18;
      }
      v16 = 1639LL;
    }
    else
    {
      v16 = 1635LL;
    }
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)WorkAreaFromRect);
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x658,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)EdgeUIPositionForMonitor);
  return LastError;
}
