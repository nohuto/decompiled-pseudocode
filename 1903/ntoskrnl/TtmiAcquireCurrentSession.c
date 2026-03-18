/*
 * XREFs of TtmiAcquireCurrentSession @ 0x1408BDD64
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1408BAAC0 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1408BADC0 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x1408BAE80 (TtmNotifyDeviceInput.c)
 *     TtmiSessionsRundown @ 0x1408BDF10 (TtmiSessionsRundown.c)
 *     TtmpDispatchOpenTerminal @ 0x1408BFC58 (TtmpDispatchOpenTerminal.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x1400EE790 (PsGetProcessSessionIdEx.c)
 *     TtmpAcquireSessionById @ 0x1408BE374 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1408C1CAC (TtmiLogError.c)
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
