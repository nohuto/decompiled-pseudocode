/*
 * XREFs of xxxEndGetWidnowTrackInfoAsync @ 0x1C0062DC4
 * Callers:
 *     xxxProcessEventMessage @ 0x1C003C798 (xxxProcessEventMessage.c)
 * Callees:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0036384 (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxNotifyShellTrackedWindowTrackingInfo @ 0x1C0062C7C (xxxNotifyShellTrackedWindowTrackingInfo.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall xxxEndGetWidnowTrackInfoAsync(struct tagWND *a1)
{
  _BYTE v3[40]; // [rsp+20h] [rbp-38h] BYREF

  xxxInitSendValidateMinMaxInfoEx(a1, (__int64)v3, 0LL, 0);
  return xxxNotifyShellTrackedWindowTrackingInfo(a1, (__int64)v3);
}
