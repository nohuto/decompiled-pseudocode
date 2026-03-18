/*
 * XREFs of ExecuteMarshaledPnpRequest @ 0x1C012DE70
 * Callers:
 *     <none>
 * Callees:
 *     ?DeliverMarshaledPnPNotification@CBaseInput@@QEAAXXZ @ 0x1C01225A4 (-DeliverMarshaledPnPNotification@CBaseInput@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall ExecuteMarshaledPnpRequest(__int64 a1, __int64 a2)
{
  __int64 (__fastcall **v2)(); // rbx

  if ( (_DWORD)a1 == 8 )
  {
    v2 = s_rgSensorMap;
  }
  else
  {
    if ( (_DWORD)a1 != 16 )
      return;
    v2 = off_1C019A5C0;
  }
  if ( *((_DWORD *)v2 + 4) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  CBaseInput::DeliverMarshaledPnPNotification((CBaseInput *)v2[3]);
}
