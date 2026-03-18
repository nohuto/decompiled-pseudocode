/*
 * XREFs of TtmNotifySessionTerminalInput @ 0x1408BDC24
 * Callers:
 *     PopPowerInformationInternal @ 0x14067E674 (PopPowerInformationInternal.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     TtmiResetTerminalTimeouts @ 0x1408BC6C8 (TtmiResetTerminalTimeouts.c)
 *     TtmpAcquireSessionById @ 0x1408BE374 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1408C1CAC (TtmiLogError.c)
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
