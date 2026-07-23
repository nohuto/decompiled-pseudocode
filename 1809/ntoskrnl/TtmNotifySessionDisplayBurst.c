/*
 * XREFs of TtmNotifySessionDisplayBurst @ 0x140880E6C
 * Callers:
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionById @ 0x140762864 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1407628CC (TtmiLogError.c)
 *     TtmiResetTerminalTimeouts @ 0x14087FE04 (TtmiResetTerminalTimeouts.c)
 */

__int64 __fastcall TtmNotifySessionDisplayBurst(int a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  v1 = TtmpAcquireSessionById(&v4, a1);
  v2 = v1;
  if ( v1 >= 0 )
  {
    TtmiResetTerminalTimeouts(v4, *(_QWORD *)(v4 + 32), 6, 1111778643, 1);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
    return 0;
  }
  else
  {
    TtmiLogError("TtmNotifySessionDisplayBurst", 3229, v1, v1);
  }
  return v2;
}
