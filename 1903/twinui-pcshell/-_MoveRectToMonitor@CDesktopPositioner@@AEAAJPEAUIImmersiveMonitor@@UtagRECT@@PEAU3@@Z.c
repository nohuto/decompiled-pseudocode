/*
 * XREFs of ?_MoveRectToMonitor@CDesktopPositioner@@AEAAJPEAUIImmersiveMonitor@@UtagRECT@@PEAU3@@Z @ 0x1803A6158
 * Callers:
 *     ?_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@UtagRECT@@PEAU3@PEAW4TRY_POSITION_VIEW_FLAGS@@PEAPEAUIImmersiveMonitor@@@Z @ 0x18007B108 (-_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@U.c)
 * Callees:
 *     ?_GetMonitorFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180055ABC (-_GetMonitorFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?GetScaleFactorForRect@@YA?AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z @ 0x180056A0C (-GetScaleFactorForRect@@YA-AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopPositioner::_MoveRectToMonitor(
        CDesktopPositioner *this,
        struct IImmersiveMonitor *a2,
        struct tagRECT *a3,
        struct tagRECT *a4)
{
  int MonitorFromRect; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  int ScaleFactorForRect; // esi
  int v12; // edi
  int v13; // ebx
  int v14; // eax
  int v15; // edx
  int v16; // r8d
  struct IImmersiveMonitor *v18[2]; // [rsp+20h] [rbp-48h] BYREF
  struct tagRECT v19; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v20[4]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+30h]

  v18[1] = (struct IImmersiveMonitor *)-2LL;
  *a4 = *a3;
  v18[0] = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v18);
  MonitorFromRect = CDesktopPositioner::_GetMonitorFromRect(this, a3, v18);
  v9 = MonitorFromRect;
  if ( MonitorFromRect >= 0 )
  {
    MonitorFromRect = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, _DWORD *))(*(_QWORD *)v18[0] + 88LL))(
                        v18[0],
                        v20);
    v9 = MonitorFromRect;
    if ( MonitorFromRect >= 0 )
    {
      MonitorFromRect = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, struct tagRECT *))(*(_QWORD *)a2 + 88LL))(
                          a2,
                          &v19);
      v9 = MonitorFromRect;
      if ( MonitorFromRect >= 0 )
      {
        ScaleFactorForRect = GetScaleFactorForRect(a3);
        v12 = GetScaleFactorForRect(&v19);
        v13 = MulDiv(a3->left - v20[0], v12, ScaleFactorForRect);
        v14 = MulDiv(a3->top - v20[1], v12, ScaleFactorForRect);
        v15 = v13 + v19.left;
        a4->left = v13 + v19.left;
        v16 = v14 + v19.top;
        a4->top = v14 + v19.top;
        a4->right = v15 + a3->right - a3->left;
        a4->bottom = v16 + a3->bottom - a3->top;
        v9 = 0;
        goto LABEL_9;
      }
      v10 = 3352LL;
    }
    else
    {
      v10 = 3349LL;
    }
  }
  else
  {
    v10 = 3346LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)MonitorFromRect);
LABEL_9:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v18);
  return v9;
}
