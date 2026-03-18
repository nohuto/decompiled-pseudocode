/*
 * XREFs of ?xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z @ 0x1C0124258
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0037588 (xxxProcessEventMessage.c)
 * Callees:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C001D674 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z @ 0x1C01242A8 (-TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall xxxEndGetWidnowTrackInfoAsync(struct tagWND *a1)
{
  const struct tagMINMAXINFO *v2; // r8
  _BYTE v3[40]; // [rsp+20h] [rbp-38h] BYREF

  xxxInitSendValidateMinMaxInfoEx(a1, (__int64)v3, 0LL, 0);
  NotifyShell::TrackedWindowTrackingInfo(a1, (struct tagWND *)v3, v2);
}
