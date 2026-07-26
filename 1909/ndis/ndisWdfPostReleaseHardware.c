/*
 * XREFs of ndisWdfPostReleaseHardware @ 0x1C0119274
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x1C009F070 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ndisDereferenceDriver @ 0x1C00172A0 (ndisDereferenceDriver.c)
 *     ndisIsMiniportStarted @ 0x1C001B528 (ndisIsMiniportStarted.c)
 *     ndisDereferencePackage @ 0x1C001B95C (ndisDereferencePackage.c)
 *     ndisDereferenceDmaAdapter @ 0x1C009F7C8 (ndisDereferenceDmaAdapter.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C0136900 (ndisDeQueueMiniportOnDriver.c)
 */

__int64 __fastcall ndisWdfPostReleaseHardware(__int64 a1)
{
  __int64 v2; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  KeInitializeEvent(&Event, NotificationEvent, 0);
  *(_QWORD *)(a1 + 1608) = &Event;
  ndisDereferenceMiniport(a1, 0x1Eu);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  v2 = *(_QWORD *)(a1 + 504);
  *(_QWORD *)(a1 + 1608) = 0LL;
  if ( v2 && *(_DWORD *)(v2 + 72) == 1 && (*(_DWORD *)(a1 + 120) & 0x40) != 0 )
  {
    *(_QWORD *)(v2 + 80) = 0LL;
    ndisDereferenceDmaAdapter(*(PVOID *)(a1 + 504));
    *(_DWORD *)(a1 + 120) &= ~0x40u;
  }
  if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)a1) )
  {
    ndisDeQueueMiniportOnDriver(a1, *(_QWORD *)(a1 + 3760));
    ndisDereferenceDriver(*(_QWORD *)(a1 + 3760), 0, 2u);
    if ( (*(_DWORD *)(a1 + 120) & 0x20000) != 0 )
      ndisDereferencePackage((__int64)&dword_1C00E50C0);
  }
  return 0LL;
}
