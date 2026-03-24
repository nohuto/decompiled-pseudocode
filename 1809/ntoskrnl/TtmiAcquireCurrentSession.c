/*
 * XREFs of TtmiAcquireCurrentSession @ 0x1408801C4
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x14087CFC0 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x14087D2C0 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x14087D380 (TtmNotifyDeviceInput.c)
 *     TtmiSessionsRundown @ 0x140880254 (TtmiSessionsRundown.c)
 *     TtmpDispatchOpenTerminal @ 0x140881EF0 (TtmpDispatchOpenTerminal.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x140003190 (PsGetProcessSessionIdEx.c)
 *     TtmpAcquireSessionById @ 0x140761674 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1407616DC (TtmiLogError.c)
 */

__int64 __fastcall TtmiAcquireCurrentSession(_QWORD *a1)
{
  int ProcessSessionId; // eax
  unsigned int v3; // ebx

  ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  if ( ProcessSessionId == -1 )
  {
    v3 = -1073740715;
    TtmiLogError("TtmiAcquireCurrentSession", 1782, -1, -1073740715);
  }
  else
  {
    return (unsigned int)TtmpAcquireSessionById(a1, ProcessSessionId);
  }
  return v3;
}
