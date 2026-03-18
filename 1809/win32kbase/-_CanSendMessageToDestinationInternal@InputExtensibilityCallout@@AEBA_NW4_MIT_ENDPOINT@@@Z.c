/*
 * XREFs of ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x1C00365D4
 * Callers:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0036514 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x1C003C578 (-Broadcast@InputConfig@@SAXXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall InputExtensibilityCallout::_CanSendMessageToDestinationInternal(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rsi
  __int64 v6; // rax
  bool v7; // di
  int v8; // ecx
  __int64 v10; // rdi
  int v11; // ebx

  v3 = (int)a2;
  if ( (int)a2 >= 11 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v5 = 5 * v3;
  v6 = *(_QWORD *)(a1 + 40 * v3 + 48);
  v7 = v6 != 0;
  LOBYTE(a2) = v6 != 0;
  if ( v6 )
  {
    if ( !*(_QWORD *)(a1 + 40) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v8 = *(_DWORD *)(a1 + 8 * v5 + 56);
    LOBYTE(a2) = v7;
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        v10 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(v10, 0LL);
        v11 = *(_DWORD *)(v10 + 16);
        ExReleasePushLockSharedEx(v10, 0LL);
        KeLeaveCriticalRegion();
        LOBYTE(a2) = v11 == 2;
      }
      else
      {
        MicrosoftTelemetryAssertTriggeredMsgKM("Did you introduce new SendMessageWhen value, but did not update code?");
        LOBYTE(a2) = v7;
      }
    }
  }
  return a2;
}
