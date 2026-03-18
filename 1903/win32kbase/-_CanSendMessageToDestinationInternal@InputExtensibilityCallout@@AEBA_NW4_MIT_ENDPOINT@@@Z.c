/*
 * XREFs of ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x1C0040AB0
 * Callers:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C00409F0 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x1C0066250 (-Broadcast@InputConfig@@SAXXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall InputExtensibilityCallout::_CanSendMessageToDestinationInternal(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rsi
  char v6; // di
  __int64 v7; // rcx
  CInputThread *v9; // rdi
  int v10; // ebx

  v3 = (int)a2;
  if ( (int)a2 >= 17 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v5 = 5 * v3;
  if ( !*(_QWORD *)(a1 + 40 * v3 + 32) )
    return 0;
  v6 = 1;
  if ( !*(_QWORD *)(a1 + 24) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v7 = *(unsigned int *)(a1 + 8 * v5 + 40);
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 == 1 )
    {
      v9 = gpInputThread;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v9, 0LL);
      v10 = *((_DWORD *)v9 + 4);
      ExReleasePushLockSharedEx(v9, 0LL);
      KeLeaveCriticalRegion();
      return v10 == 2;
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, a2, a3);
    }
  }
  return v6;
}
