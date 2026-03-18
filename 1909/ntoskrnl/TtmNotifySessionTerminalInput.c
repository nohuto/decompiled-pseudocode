/*
 * XREFs of TtmNotifySessionTerminalInput @ 0x1408BD4F4
 * Callers:
 *     PopPowerInformationInternal @ 0x14069B7B4 (PopPowerInformationInternal.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     TtmiResetTerminalTimeouts @ 0x1408BBF98 (TtmiResetTerminalTimeouts.c)
 *     TtmpAcquireSessionById @ 0x1408BDC44 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1408C157C (TtmiLogError.c)
 */

void __fastcall TtmNotifySessionTerminalInput(unsigned int a1, int a2, char a3)
{
  __int64 i; // rdx
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  if ( (int)TtmpAcquireSessionById(&v6, a1) >= 0 )
  {
    for ( i = *(_QWORD *)(v6 + 40); i != v6 + 40; i = *(_QWORD *)i )
    {
      if ( *(_DWORD *)(i + 28) == a2 )
      {
        TtmiResetTerminalTimeouts(v6, i, 4, 1950962771, a3);
        break;
      }
    }
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  else
  {
    TtmiLogError("TtmNotifySessionTerminalInput");
  }
}
