/*
 * XREFs of TtmNotifyConsoleUserPresent @ 0x1408BD6A0
 * Callers:
 *     PopNotifyConsoleUserPresent @ 0x14071E580 (PopNotifyConsoleUserPresent.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     TtmiResetTerminalTimeouts @ 0x1408BC6C8 (TtmiResetTerminalTimeouts.c)
 *     TtmpAcquireSessionById @ 0x1408BE374 (TtmpAcquireSessionById.c)
 *     TtmiLogConsoleUserPresent @ 0x1408C0CD8 (TtmiLogConsoleUserPresent.c)
 *     TtmiLogError @ 0x1408C1CAC (TtmiLogError.c)
 */

__int64 __fastcall TtmNotifyConsoleUserPresent(unsigned int a1, unsigned int a2)
{
  int v4; // ebx
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v4 = TtmpAcquireSessionById(&v6, a1);
  if ( v4 >= 0 )
  {
    TtmiResetTerminalTimeouts(v6, *(_QWORD *)(v6 + 32), a2, 1347765070, 1);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  else
  {
    TtmiLogError("TtmNotifyConsoleUserPresent");
  }
  return TtmiLogConsoleUserPresent(a1, a2, (unsigned int)v4);
}
