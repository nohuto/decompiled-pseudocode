/*
 * XREFs of ?GetScaleFactorForRect@@YA?AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z @ 0x1800572D0
 * Callers:
 *     ?_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z @ 0x1800570A0 (-_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z.c)
 *     ?DragCompleted@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagPOINT@@@Z @ 0x18033CAC0 (-DragCompleted@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagPOINT@@@Z.c)
 *     ?PresentationChangedForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x18033E360 (-PresentationChangedForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetScaleFactorForRect(const struct tagRECT *a1)
{
  HMONITOR v1; // rax
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 100;
  v1 = MonitorFromRect(a1, 0);
  if ( v1 )
    GetScaleFactorForMonitor(v1, &v3);
  return v3;
}
