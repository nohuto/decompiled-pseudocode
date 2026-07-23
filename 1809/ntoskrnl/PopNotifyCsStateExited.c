/*
 * XREFs of PopNotifyCsStateExited @ 0x1408701D0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     PopInvokeWin32Callout @ 0x1405B1C84 (PopInvokeWin32Callout.c)
 *     PopBlockSessionSwitch @ 0x1406DEDD0 (PopBlockSessionSwitch.c)
 *     TtmNotifyCsStateExited @ 0x140880E00 (TtmNotifyCsStateExited.c)
 */

__int64 PopNotifyCsStateExited()
{
  _QWORD v1[6]; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v2; // [rsp+60h] [rbp+10h] BYREF

  v2 = -1;
  PopBlockSessionSwitch(1, (int *)&v2);
  if ( TtmpEnabled == 1 )
  {
    TtmNotifyCsStateExited(v2);
  }
  else
  {
    memset(v1, 0, 0x28uLL);
    BYTE4(v1[0]) = 0;
    LODWORD(v1[0]) = 5;
    LODWORD(v1[1]) = 0;
    v1[2] = 0LL;
    LODWORD(v1[3]) = 0;
    v1[4] = 0LL;
    PopInvokeWin32Callout(5u, (__int64)v1, 1u, (int *)&v2);
  }
  return PopBlockSessionSwitch(0, (int *)&v2);
}
