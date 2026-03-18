/*
 * XREFs of SetPointer @ 0x1C0082DE0
 * Callers:
 *     xxxMakeWindowForegroundWithState @ 0x1C001B1CC (xxxMakeWindowForegroundWithState.c)
 *     zzzEnableDwmPointerSupport @ 0x1C0081918 (zzzEnableDwmPointerSupport.c)
 *     UserResetPointer @ 0x1C0081A80 (UserResetPointer.c)
 *     SetMouseTrails @ 0x1C0081ACC (SetMouseTrails.c)
 *     xxxSwitchDesktop @ 0x1C0081EE8 (xxxSwitchDesktop.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00BA614 (xxxSystemParametersInfoWorker.c)
 *     xxxRemoteReconnect @ 0x1C015EF70 (xxxRemoteReconnect.c)
 *     xxxUserResetDisplayDevice @ 0x1C0160850 (xxxUserResetDisplayDevice.c)
 *     ChangeComposableCursor @ 0x1C01CC57C (ChangeComposableCursor.c)
 *     RemoteShadowCleanup @ 0x1C0212D50 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C0212F20 (RemoteShadowStart.c)
 * Callees:
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C0082E00 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 */

__int64 __fastcall SetPointer(__int64 a1)
{
  LOBYTE(a1) = (_DWORD)a1 != 0;
  return SetPointerInternal(a1, 6LL);
}
