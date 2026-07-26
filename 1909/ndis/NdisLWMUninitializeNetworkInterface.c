/*
 * XREFs of NdisLWMUninitializeNetworkInterface @ 0x1C009DD90
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisDereferenceDriver @ 0x1C00172A0 (ndisDereferenceDriver.c)
 *     ndisLogMiniportEvent @ 0x1C0019E70 (ndisLogMiniportEvent.c)
 *     ndisIsMiniportStarted @ 0x1C001B528 (ndisIsMiniportStarted.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001BC9C (ndisReferenceMiniportNoCheck.c)
 *     ndisBugCheckEx @ 0x1C007E5C0 (ndisBugCheckEx.c)
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C009A390 (ndisMDeleteMiniportBlockOnRemove.c)
 *     ndisRemoveMiniportFromGlobalList @ 0x1C009C350 (ndisRemoveMiniportFromGlobalList.c)
 *     ndisPnPRemoveDeviceEx @ 0x1C00A527C (ndisPnPRemoveDeviceEx.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C0136900 (ndisDeQueueMiniportOnDriver.c)
 */

void __fastcall NdisLWMUninitializeNetworkInterface(ULONG_PTR a1)
{
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      149,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      a1);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( (*(_DWORD *)(a1 + 120) & 0x100) == 0 )
    ndisBugCheckEx(0x29uLL, 4uLL, a1, 0LL);
  ndisReferenceMiniportNoCheck(a1, 0x6Au);
  ndisLogMiniportEvent(a1, 0x23u);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  *(_QWORD *)(a1 + 1608) = &Event;
  ndisPnPRemoveDeviceEx(a1);
  ndisDereferenceMiniport(a1, 0x6Au);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  *(_QWORD *)(a1 + 1608) = 0LL;
  if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)a1) )
  {
    ndisDeQueueMiniportOnDriver(a1, *(_QWORD *)(a1 + 3760));
    ndisDereferenceDriver(*(_QWORD *)(a1 + 3760), 0, 2u);
    if ( (*(_DWORD *)(a1 + 120) & 0x20000) != 0 )
    {
      MmUnlockPagableImageSection(qword_1C00E50D0);
      _InterlockedDecrement(&dword_1C00E50C0);
    }
  }
  ndisRemoveMiniportFromGlobalList((struct _NDIS_MINIPORT_BLOCK *)a1);
  ndisMDeleteMiniportBlockOnRemove(a1);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      150,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      a1);
}
