/*
 * XREFs of SetRITTimer @ 0x1C011E2C0
 * Callers:
 *     zzzUpdateCursorImage @ 0x1C00ABDB0 (zzzUpdateCursorImage.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00B387C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     RawInputThread @ 0x1C00D7680 (RawInputThread.c)
 *     ?AdjustRITDelayableTimers@@YAXH@Z @ 0x1C011AF04 (-AdjustRITDelayableTimers@@YAXH@Z.c)
 *     ShowAutorunCursor @ 0x1C01CC62C (ShowAutorunCursor.c)
 *     ?TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01DBBC0 (-TabletButtonHandler@@YAXPEAUDEVICEINFO@@@Z.c)
 *     ?xxxTabletButtonTimerCallback@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01DC4D0 (-xxxTabletButtonTimerCallback@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     EditionSetAccessibilityTimer @ 0x1C0202880 (EditionSetAccessibilityTimer.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C02537A8 (-DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     InternalSetTimer @ 0x1C00AB650 (InternalSetTimer.c)
 */

__int64 __fastcall SetRITTimer(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  return InternalSetTimer(0LL, a1, a2, a3, 0, a4 != 0 ? 20 : 4);
}
