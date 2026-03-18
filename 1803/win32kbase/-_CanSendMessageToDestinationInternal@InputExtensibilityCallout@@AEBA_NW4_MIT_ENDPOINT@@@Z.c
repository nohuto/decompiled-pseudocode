/*
 * XREFs of ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x1C0056A38
 * Callers:
 *     Broadcast @ 0x1C0053ABC (Broadcast.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0056990 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall InputExtensibilityCallout::_CanSendMessageToDestinationInternal(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rsi
  __int64 v5; // rax
  bool v6; // di
  __int64 v7; // rcx
  CInputThread *v9; // rdi
  int v10; // ebx

  v2 = (int)a2;
  if ( (int)a2 >= 10 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v4 = 5 * v2;
  v5 = *(_QWORD *)(a1 + 40 * v2 + 48);
  v6 = v5 != 0;
  LOBYTE(a2) = v5 != 0;
  if ( v5 )
  {
    if ( !*(_QWORD *)(a1 + 40) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
    v7 = *(unsigned int *)(a1 + 8 * v4 + 56);
    LOBYTE(a2) = v6;
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
        LOBYTE(a2) = v10 == 2;
      }
      else
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, a2);
        LOBYTE(a2) = v6;
      }
    }
  }
  return a2;
}
