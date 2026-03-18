/*
 * XREFs of ?xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z @ 0x1C01373D8
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00712F4 (xxxProcessEventMessage.c)
 * Callees:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0034030 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z @ 0x1C0137270 (-TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

void __fastcall xxxEndGetWidnowTrackInfoAsync(struct tagWND *this)
{
  const struct tagMINMAXINFO *v2; // r8
  _BYTE v3[40]; // [rsp+20h] [rbp-38h] BYREF

  memset(v3, 0, sizeof(v3));
  xxxInitSendValidateMinMaxInfoEx(this, (__int64)v3, 0LL, 0);
  NotifyShell::TrackedWindowTrackingInfo(this, (struct tagWND *)v3, v2);
}
