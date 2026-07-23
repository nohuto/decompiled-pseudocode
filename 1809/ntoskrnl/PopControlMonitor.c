/*
 * XREFs of PopControlMonitor @ 0x1406E3630
 * Callers:
 *     PopScreenOff @ 0x1408706F8 (PopScreenOff.c)
 *     PopScreenOn @ 0x140870740 (PopScreenOn.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     PopInvokeWin32Callout @ 0x1405B1C84 (PopInvokeWin32Callout.c)
 *     TtmSessionMonitorControl @ 0x140881374 (TtmSessionMonitorControl.c)
 */

__int64 __fastcall PopControlMonitor(unsigned int *a1, unsigned int a2)
{
  _QWORD v4[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v5; // [rsp+68h] [rbp+10h] BYREF

  v5 = a2;
  if ( TtmpEnabled == 1 )
    return TtmSessionMonitorControl(a2, a1[1], *a1);
  memset(v4, 0, 0x28uLL);
  LODWORD(v4[0]) = 3;
  BYTE4(v4[0]) = 0;
  LODWORD(v4[1]) = 8;
  v4[2] = a1;
  LODWORD(v4[3]) = 0;
  v4[4] = 0LL;
  return PopInvokeWin32Callout(5u, (__int64)v4, 1u, (int *)&v5);
}
