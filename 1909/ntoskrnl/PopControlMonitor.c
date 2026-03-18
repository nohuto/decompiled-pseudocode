/*
 * XREFs of PopControlMonitor @ 0x14072ADE0
 * Callers:
 *     PopScreenOff @ 0x1408AB93C (PopScreenOff.c)
 *     PopScreenOn @ 0x1408AB98C (PopScreenOn.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopInvokeWin32Callout @ 0x14067098C (PopInvokeWin32Callout.c)
 *     TtmSessionMonitorControl @ 0x1408BD584 (TtmSessionMonitorControl.c)
 */

__int64 __fastcall PopControlMonitor(unsigned int *a1, unsigned int a2)
{
  _QWORD v5[6]; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v6; // [rsp+68h] [rbp+18h] BYREF

  v6 = a2;
  memset(v5, 0, 0x28uLL);
  if ( TtmpEnabled == 1 )
    return TtmSessionMonitorControl(a2, a1[1], *a1);
  v5[1] = 8LL;
  v5[0] = 3LL;
  v5[3] = 0LL;
  v5[2] = a1;
  v5[4] = 0LL;
  return PopInvokeWin32Callout(5, (__int64)v5, 1, (int *)&v6);
}
