/*
 * XREFs of TtmiAcquireCurrentSession @ 0x1408BD634
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1408BA390 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1408BA690 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x1408BA750 (TtmNotifyDeviceInput.c)
 *     TtmiSessionsRundown @ 0x1408BD7E0 (TtmiSessionsRundown.c)
 *     TtmpDispatchOpenTerminal @ 0x1408BF528 (TtmpDispatchOpenTerminal.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x1400F17F0 (PsGetProcessSessionIdEx.c)
 *     TtmpAcquireSessionById @ 0x1408BDC44 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1408C157C (TtmiLogError.c)
 */

__int64 __fastcall TtmiAcquireCurrentSession(__int64 a1)
{
  unsigned int ProcessSessionId; // eax
  unsigned int v3; // ebx

  ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  if ( ProcessSessionId == -1 )
  {
    v3 = -1073740715;
    TtmiLogError("TtmiAcquireCurrentSession");
  }
  else
  {
    return (unsigned int)TtmpAcquireSessionById(a1, ProcessSessionId);
  }
  return v3;
}
