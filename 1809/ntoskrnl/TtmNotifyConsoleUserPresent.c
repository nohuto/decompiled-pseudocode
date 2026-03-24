/*
 * XREFs of TtmNotifyConsoleUserPresent @ 0x14087FB10
 * Callers:
 *     PopNotifyConsoleUserPresent @ 0x1406DBBC4 (PopNotifyConsoleUserPresent.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionById @ 0x140761674 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1407616DC (TtmiLogError.c)
 *     TtmiResetTerminalTimeouts @ 0x14087EBA4 (TtmiResetTerminalTimeouts.c)
 *     TtmiLogConsoleUserPresent @ 0x140882F28 (TtmiLogConsoleUserPresent.c)
 */

__int64 __fastcall TtmNotifyConsoleUserPresent(unsigned int a1, unsigned int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v4 = TtmpAcquireSessionById(&v7, a1);
  v5 = v4;
  if ( v4 >= 0 )
  {
    TtmiResetTerminalTimeouts(v7, *(_QWORD *)(v7 + 32), a2, 1347765070, 1);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  else
  {
    TtmiLogError("TtmNotifyConsoleUserPresent", 3278, v4, -1);
  }
  return TtmiLogConsoleUserPresent(a1, a2, v5);
}
