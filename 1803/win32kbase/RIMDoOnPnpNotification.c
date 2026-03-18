/*
 * XREFs of RIMDoOnPnpNotification @ 0x1C00FAC6C
 * Callers:
 *     RIMOnPnpNotification @ 0x1C00E34B0 (RIMOnPnpNotification.c)
 *     RIMDiscoverSpecificDevice @ 0x1C00F9FF8 (RIMDiscoverSpecificDevice.c)
 *     RIMDeviceClassNotify @ 0x1C00FA2A0 (RIMDeviceClassNotify.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     RIMEndAllActiveContacts @ 0x1C00585B0 (RIMEndAllActiveContacts.c)
 *     WPP_RECORDER_SF_q @ 0x1C00739CC (WPP_RECORDER_SF_q.c)
 *     RIMFreeDev @ 0x1C00F78F4 (RIMFreeDev.c)
 *     rimDoRimDevChange @ 0x1C00FC564 (rimDoRimDevChange.c)
 *     rimOnPnpArrived @ 0x1C00FCE28 (rimOnPnpArrived.c)
 *     rimOnPnpQueryRemove @ 0x1C00FD3E8 (rimOnPnpQueryRemove.c)
 *     rimOnPnpRemoveCancelled @ 0x1C00FD4A8 (rimOnPnpRemoveCancelled.c)
 *     rimOnPnpRemoveComplete @ 0x1C00FD584 (rimOnPnpRemoveComplete.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDoOnPnpNotification(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  int v7; // ebp
  int v8; // esi
  int v9; // esi
  int v11; // eax

  if ( (*(_DWORD *)(a2 + 184) & 0x1000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( *(_QWORD *)(a1 + 32) != PsGetCurrentProcess(a1) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
  v6 = *(_DWORD *)(a2 + 184);
  v7 = 0;
  v8 = 1;
  if ( (v6 & 1) != 0 )
  {
    v9 = rimOnPnpArrived(a1, a2, -1LL);
    if ( v9 >= 0 )
      rimDoRimDevChange(a1, a2, 2LL);
    return (unsigned int)v9;
  }
  else
  {
    if ( (v6 & 2) != 0 )
    {
      rimOnPnpQueryRemove(a1, a2);
      v6 = *(_DWORD *)(a2 + 184);
    }
    if ( (v6 & 4) != 0 )
    {
      rimOnPnpRemoveCancelled(a1, a2);
      *(_DWORD *)(a2 + 184) |= 1u;
      rimOnPnpArrived(a1, a2, -1LL);
      v6 = *(_DWORD *)(a2 + 184);
    }
    if ( (v6 & 8) != 0 )
    {
      v7 = rimOnPnpRemoveComplete(a1, a2);
      if ( v7 >= 0 )
      {
        RIMLockExclusive(a1 + 552);
        if ( (*(_DWORD *)(a2 + 200) & 0x80u) != 0 )
          RIMEndAllActiveContacts(a1, *(_QWORD *)(a2 + 480), 0LL);
        v11 = *(_DWORD *)(a2 + 184);
        if ( (v11 & 0x1000) == 0
          && (v11 & 0x20) == 0
          && *(_BYTE *)(a2 + 48) != 3
          && ((v11 & 0x40000000) != 0 || *(_QWORD *)(a2 + 192) || v11 < 0 || (*(_DWORD *)(a2 + 188) & 1) != 0) )
        {
          *(_DWORD *)(a2 + 200) |= 1u;
          WPP_RECORDER_SF_q(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            0x15u,
            0x21u,
            (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids,
            a2);
          v8 = 0;
        }
        *(_QWORD *)(a1 + 560) = 0LL;
        ExReleasePushLockExclusiveEx(a1 + 552, 0LL);
        KeLeaveCriticalRegion();
        if ( v8 )
        {
          rimDoRimDevChange(a1, a2, 3LL);
          RIMFreeDev(a1, a2);
        }
      }
    }
    return (unsigned int)v7;
  }
}
