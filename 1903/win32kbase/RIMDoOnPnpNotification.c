/*
 * XREFs of RIMDoOnPnpNotification @ 0x1C00A5F4C
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C006AB90 (RIMDeviceClassNotify.c)
 *     RIMOnPnpNotification @ 0x1C006B250 (RIMOnPnpNotification.c)
 *     RIMDiscoverSpecificDevice @ 0x1C01508B8 (RIMDiscoverSpecificDevice.c)
 *     RIMVirtDeviceClassNotify @ 0x1C0150F54 (RIMVirtDeviceClassNotify.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C0038944 (WPP_RECORDER_SF_q.c)
 *     rimOnPnpArrived @ 0x1C00690B0 (rimOnPnpArrived.c)
 *     rimOnPnpRemoveComplete @ 0x1C0069434 (rimOnPnpRemoveComplete.c)
 *     rimDoRimDevChange @ 0x1C0069B2C (rimDoRimDevChange.c)
 *     RIMEndAllActiveContacts @ 0x1C013EDA0 (RIMEndAllActiveContacts.c)
 *     RIMFreeDev @ 0x1C014DE64 (RIMFreeDev.c)
 *     rimOnPnpQueryRemove @ 0x1C0152114 (rimOnPnpQueryRemove.c)
 *     rimOnPnpRemoveCancelled @ 0x1C0152234 (rimOnPnpRemoveCancelled.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDoOnPnpNotification(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // eax
  int v9; // ebp
  int v10; // esi
  int v11; // esi
  int v13; // edx
  int v14; // eax

  if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( a1[4] != PsGetCurrentProcess(a1, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  v8 = *(_DWORD *)(a2 + 184);
  v9 = 0;
  v10 = 1;
  if ( (v8 & 1) != 0 )
  {
    v11 = rimOnPnpArrived(a1, a2, (void *)0xFFFFFFFFFFFFFFFFLL);
    if ( v11 >= 0 )
      rimDoRimDevChange((__int64)a1, a2, 2LL);
    return (unsigned int)v11;
  }
  else
  {
    if ( (v8 & 2) != 0 )
    {
      rimOnPnpQueryRemove(a1, a2);
      v8 = *(_DWORD *)(a2 + 184);
    }
    if ( (v8 & 4) != 0 )
    {
      rimOnPnpRemoveCancelled(a1, a2);
      *(_DWORD *)(a2 + 184) |= 1u;
      rimOnPnpArrived(a1, a2, (void *)0xFFFFFFFFFFFFFFFFLL);
      v8 = *(_DWORD *)(a2 + 184);
    }
    if ( (v8 & 8) != 0 )
    {
      v9 = rimOnPnpRemoveComplete((__int64)a1, a2, v7);
      if ( v9 >= 0 )
      {
        RIMLockExclusive((__int64)(a1 + 71));
        if ( (*(_DWORD *)(a2 + 200) & 0x80u) != 0 )
          RIMEndAllActiveContacts(a1, *(_QWORD *)(a2 + 480), 0LL);
        v14 = *(_DWORD *)(a2 + 184);
        if ( (v14 & 0x2000) == 0
          && (v14 & 0x20) == 0
          && *(_BYTE *)(a2 + 48) != 3
          && ((v14 & 0x40000000) != 0 || *(_QWORD *)(a2 + 192) || v14 < 0 || (*(_DWORD *)(a2 + 188) & 1) != 0) )
        {
          *(_DWORD *)(a2 + 200) |= 1u;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v13) = 4;
            WPP_RECORDER_SF_q(
              (_DWORD)gRimLog,
              v13,
              1,
              38,
              (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids,
              a2);
          }
          v10 = 0;
        }
        a1[72] = 0LL;
        ExReleasePushLockExclusiveEx(a1 + 71, 0LL);
        KeLeaveCriticalRegion();
        if ( v10 )
        {
          rimDoRimDevChange((__int64)a1, a2, 3LL);
          RIMFreeDev(a1, a2);
        }
      }
    }
    return (unsigned int)v9;
  }
}
