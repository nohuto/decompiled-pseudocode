/*
 * XREFs of PopNotifyCsStateExited @ 0x1408ABBB0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PopInvokeWin32Callout @ 0x1406A2EE4 (PopInvokeWin32Callout.c)
 *     PopBlockSessionSwitch @ 0x140729830 (PopBlockSessionSwitch.c)
 *     TtmNotifyLowPowerStateExited @ 0x1408BD730 (TtmNotifyLowPowerStateExited.c)
 */

ULONG PopNotifyCsStateExited()
{
  _QWORD v1[6]; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v2; // [rsp+60h] [rbp+10h] BYREF

  memset(v1, 0, 0x28uLL);
  v2 = -1;
  PopBlockSessionSwitch(1, &v2);
  if ( TtmpEnabled == 1 )
  {
    TtmNotifyLowPowerStateExited(v2);
  }
  else
  {
    v1[0] = 5LL;
    memset(&v1[1], 0, 32);
    PopInvokeWin32Callout(5, (__int64)v1, 1, (int *)&v2);
  }
  return PopBlockSessionSwitch(0, &v2);
}
