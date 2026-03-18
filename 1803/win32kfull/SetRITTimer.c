/*
 * XREFs of SetRITTimer @ 0x1C0019A20
 * Callers:
 *     RawInputThread @ 0x1C001CA60 (RawInputThread.c)
 *     zzzUpdateCursorImage @ 0x1C001E000 (zzzUpdateCursorImage.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C006C68C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?AdjustRITDelayableTimers@@YAXH@Z @ 0x1C00BC52C (-AdjustRITDelayableTimers@@YAXH@Z.c)
 *     ShowAutorunCursor @ 0x1C019778C (ShowAutorunCursor.c)
 *     CachePTPInertiaInfo @ 0x1C01A1370 (CachePTPInertiaInfo.c)
 *     ?TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01A6650 (-TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z.c)
 *     ?xxxTabletButtonTimerCallback@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01A6BC0 (-xxxTabletButtonTimerCallback@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     EditionSetAccessibilityTimer @ 0x1C01C8660 (EditionSetAccessibilityTimer.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C02113C0 (-DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     InternalSetTimer @ 0x1C001A1B0 (InternalSetTimer.c)
 */

__int64 __fastcall SetRITTimer(int a1, int a2, int a3, int a4)
{
  return InternalSetTimer(0, a1, a2, a3, 0, a4 != 0 ? 20 : 4);
}
