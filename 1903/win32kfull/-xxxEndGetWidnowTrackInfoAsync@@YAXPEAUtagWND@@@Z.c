/*
 * XREFs of ?xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z @ 0x1C012D8F0
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00CFC24 (xxxProcessEventMessage.c)
 * Callees:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0093308 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z @ 0x1C012D954 (-TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

void __fastcall xxxEndGetWidnowTrackInfoAsync(struct tagWND *a1)
{
  const struct tagMINMAXINFO *v2; // r8
  _BYTE v3[40]; // [rsp+20h] [rbp-38h] BYREF

  memset(v3, 0, sizeof(v3));
  xxxInitSendValidateMinMaxInfoEx(a1, (__int64)v3, 0LL, 0);
  NotifyShell::TrackedWindowTrackingInfo(a1, (struct tagWND *)v3, v2);
}
