/*
 * XREFs of TtmNotifyConsoleUserPresent @ 0x1408BCF70
 * Callers:
 *     PopNotifyConsoleUserPresent @ 0x140720410 (PopNotifyConsoleUserPresent.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     TtmiResetTerminalTimeouts @ 0x1408BBF98 (TtmiResetTerminalTimeouts.c)
 *     TtmpAcquireSessionById @ 0x1408BDC44 (TtmpAcquireSessionById.c)
 *     TtmiLogConsoleUserPresent @ 0x1408C05A8 (TtmiLogConsoleUserPresent.c)
 *     TtmiLogError @ 0x1408C157C (TtmiLogError.c)
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
