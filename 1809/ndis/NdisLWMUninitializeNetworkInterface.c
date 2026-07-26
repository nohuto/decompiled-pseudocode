/*
 * XREFs of NdisLWMUninitializeNetworkInterface @ 0x1C00F1A90
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C00151C8 (ndisReferenceMiniportNoCheck.c)
 *     ndisLogMiniportEvent @ 0x1C0016888 (ndisLogMiniportEvent.c)
 *     ndisIsMiniportStarted @ 0x1C001A37C (ndisIsMiniportStarted.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisBugCheckEx @ 0x1C004FE18 (ndisBugCheckEx.c)
 *     ndisDereferenceDriver @ 0x1C0052A18 (ndisDereferenceDriver.c)
 *     ndisRemoveMiniportFromGlobalList @ 0x1C006432C (ndisRemoveMiniportFromGlobalList.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C00F03E4 (ndisMDeleteMiniportBlockOnRemove.c)
 *     ndisPnPRemoveDeviceEx @ 0x1C00F4F94 (ndisPnPRemoveDeviceEx.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C01159F0 (ndisDeQueueMiniportOnDriver.c)
 */

void __fastcall NdisLWMUninitializeNetworkInterface(_NDIS_MINIPORT_BLOCK *this)
{
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x93u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)this);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( (this->Flags & 0x100) == 0 )
    ndisBugCheckEx(0x29uLL, 4uLL, (ULONG_PTR)this, 0LL);
  ndisReferenceMiniportNoCheck((__int64)this, 0x6Au);
  ndisLogMiniportEvent((__int64)this, 0x23u);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  this->RemoveReadyEvent = &Event;
  ndisPnPRemoveDeviceEx(this);
  ndisDereferenceMiniport((__int64)this, 0x6Au);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  this->RemoveReadyEvent = 0LL;
  if ( ndisIsMiniportStarted(this) )
  {
    ndisDeQueueMiniportOnDriver(this, this->DriverHandle);
    ndisDereferenceDriver((__int64)this->DriverHandle, 0, 2u);
    if ( (this->Flags & 0x20000) != 0 )
    {
      MmUnlockPagableImageSection(qword_1C009F0C0);
      _InterlockedDecrement(&dword_1C009F0B0);
    }
  }
  ndisRemoveMiniportFromGlobalList(this);
  ndisMDeleteMiniportBlockOnRemove(this);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x94u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)this);
}
