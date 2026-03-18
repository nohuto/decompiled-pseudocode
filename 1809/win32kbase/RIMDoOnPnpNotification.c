/*
 * XREFs of RIMDoOnPnpNotification @ 0x1C009206C
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C004EC60 (RIMDeviceClassNotify.c)
 *     RIMOnPnpNotification @ 0x1C004FE90 (RIMOnPnpNotification.c)
 *     RIMDiscoverSpecificDevice @ 0x1C01242A4 (RIMDiscoverSpecificDevice.c)
 *     RIMVirtDeviceClassNotify @ 0x1C01248AC (RIMVirtDeviceClassNotify.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     rimOnPnpArrived @ 0x1C004D7FC (rimOnPnpArrived.c)
 *     rimOnPnpRemoveComplete @ 0x1C004DB18 (rimOnPnpRemoveComplete.c)
 *     rimDoRimDevChange @ 0x1C004E4B0 (rimDoRimDevChange.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F724 (WPP_RECORDER_SF_q.c)
 *     RIMEndAllActiveContacts @ 0x1C0116560 (RIMEndAllActiveContacts.c)
 *     RIMFreeDev @ 0x1C0121F30 (RIMFreeDev.c)
 *     rimOnPnpQueryRemove @ 0x1C0125AD8 (rimOnPnpQueryRemove.c)
 *     rimOnPnpRemoveCancelled @ 0x1C0125BAC (rimOnPnpRemoveCancelled.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  int v13; // eax

  if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( a1[4] != PsGetCurrentProcess(a1) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  v8 = *(_DWORD *)(a2 + 184);
  v9 = 0;
  v10 = 1;
  if ( (v8 & 1) != 0 )
  {
    v11 = rimOnPnpArrived(a1, a2, (void *)0xFFFFFFFFFFFFFFFFLL);
    if ( v11 >= 0 )
      rimDoRimDevChange((__int64)a1, a2, 2u);
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
        v13 = *(_DWORD *)(a2 + 184);
        if ( (v13 & 0x2000) == 0
          && (v13 & 0x20) == 0
          && *(_BYTE *)(a2 + 48) != 3
          && ((v13 & 0x40000000) != 0 || *(_QWORD *)(a2 + 192) || v13 < 0 || (*(_DWORD *)(a2 + 188) & 1) != 0) )
        {
          *(_DWORD *)(a2 + 200) |= 1u;
          WPP_RECORDER_SF_q(gRimLog, 3u, 0x16u, 0x26u, (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids, a2);
          v10 = 0;
        }
        a1[72] = 0LL;
        ExReleasePushLockExclusiveEx(a1 + 71, 0LL);
        KeLeaveCriticalRegion();
        if ( v10 )
        {
          rimDoRimDevChange((__int64)a1, a2, 3u);
          RIMFreeDev(a1, a2);
        }
      }
    }
    return (unsigned int)v9;
  }
}
