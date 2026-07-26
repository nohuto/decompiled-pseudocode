/*
 * XREFs of ndisWdfPostReleaseHardware @ 0x1C00F51C8
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x1C00F2320 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisIsMiniportStarted @ 0x1C001A37C (ndisIsMiniportStarted.c)
 *     ndisDereferenceDriver @ 0x1C0052A18 (ndisDereferenceDriver.c)
 *     ndisDereferenceDmaAdapter @ 0x1C0065580 (ndisDereferenceDmaAdapter.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C01159F0 (ndisDeQueueMiniportOnDriver.c)
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
    ndisDeQueueMiniportOnDriver(a1, *(_QWORD *)(a1 + 3792));
    ndisDereferenceDriver(*(_QWORD *)(a1 + 3792), 0, 2u);
    if ( (*(_DWORD *)(a1 + 120) & 0x20000) != 0 )
    {
      MmUnlockPagableImageSection(qword_1C009F0C0);
      _InterlockedDecrement(&dword_1C009F0B0);
    }
  }
  return 0LL;
}
