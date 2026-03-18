/*
 * XREFs of ExecuteMarshaledPnpRequest @ 0x1C00A50B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DeliverMarshaledPnPNotification@CBaseInput@@QEAAXXZ @ 0x1C00A50FC (-DeliverMarshaledPnPNotification@CBaseInput@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

void __fastcall ExecuteMarshaledPnpRequest(int a1)
{
  int v1; // eax
  CBaseInput **v2; // rbx

  if ( a1 == 8 )
  {
    v1 = dword_1C01C3010[0];
    v2 = &qword_1C01C3018;
  }
  else
  {
    if ( a1 != 16 )
      return;
    v1 = dword_1C01C3040;
    v2 = (CBaseInput **)&unk_1C01C3048;
  }
  if ( v1 != 1 )
    MicrosoftTelemetryAssertTriggeredMsgKM("Why did we marshal if sensor already runs on Master Input Thread?");
  CBaseInput::DeliverMarshaledPnPNotification(*v2);
}
