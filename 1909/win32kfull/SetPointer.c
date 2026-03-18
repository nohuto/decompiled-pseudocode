/*
 * XREFs of SetPointer @ 0x1C0138BE0
 * Callers:
 *     xxxMakeWindowForegroundWithState @ 0x1C001B8F4 (xxxMakeWindowForegroundWithState.c)
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 *     xxxSwitchDesktop @ 0x1C0137CE8 (xxxSwitchDesktop.c)
 *     SetMouseTrails @ 0x1C01394B4 (SetMouseTrails.c)
 *     UserResetPointer @ 0x1C01398E0 (UserResetPointer.c)
 *     zzzEnableDwmPointerSupport @ 0x1C013992C (zzzEnableDwmPointerSupport.c)
 *     xxxRemoteReconnect @ 0x1C015FF30 (xxxRemoteReconnect.c)
 *     xxxUserResetDisplayDevice @ 0x1C0161810 (xxxUserResetDisplayDevice.c)
 *     ChangeComposableCursor @ 0x1C01CC3EC (ChangeComposableCursor.c)
 *     RemoteShadowCleanup @ 0x1C0212810 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C02129E0 (RemoteShadowStart.c)
 * Callees:
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C0138C00 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 */

__int64 __fastcall SetPointer(__int64 a1)
{
  LOBYTE(a1) = (_DWORD)a1 != 0;
  return SetPointerInternal(a1, 6LL);
}
