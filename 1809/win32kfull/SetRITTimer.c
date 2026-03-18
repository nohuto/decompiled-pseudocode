/*
 * XREFs of SetRITTimer @ 0x1C01153C0
 * Callers:
 *     zzzUpdateCursorImage @ 0x1C0017DF0 (zzzUpdateCursorImage.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00B4ADC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     RawInputThread @ 0x1C00D2920 (RawInputThread.c)
 *     ?AdjustRITDelayableTimers@@YAXH@Z @ 0x1C010FF6C (-AdjustRITDelayableTimers@@YAXH@Z.c)
 *     ShowAutorunCursor @ 0x1C01B87CC (ShowAutorunCursor.c)
 *     CachePTPInertiaInfo @ 0x1C01C2930 (CachePTPInertiaInfo.c)
 *     ?TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01C8640 (-TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z.c)
 *     ?xxxTabletButtonTimerCallback@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01C8BE0 (-xxxTabletButtonTimerCallback@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     EditionSetAccessibilityTimer @ 0x1C01EC9A0 (EditionSetAccessibilityTimer.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C023AAFC (-DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     InternalSetTimer @ 0x1C0017750 (InternalSetTimer.c)
 */

__int64 __fastcall SetRITTimer(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  return InternalSetTimer(0LL, a1, a2, a3, 0, a4 != 0 ? 20 : 4);
}
