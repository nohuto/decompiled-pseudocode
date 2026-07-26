/*
 * XREFs of ndisMReferenceIfBlock @ 0x1C001C65C
 * Callers:
 *     ndisIndicateInitialStateToBinding @ 0x1C0028904 (ndisIndicateInitialStateToBinding.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C002A168 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002FBB4 (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 *     ndisIfScheduleTimestampCapabilityChangeNotification @ 0x1C0067D80 (ndisIfScheduleTimestampCapabilityChangeNotification.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C009D500 (NdisIMDeInitializeDeviceInstance.c)
 *     NdisMReenumerateFailedAdapter @ 0x1C00A4670 (NdisMReenumerateFailedAdapter.c)
 *     ndisWdfDevicePowerDown @ 0x1C00A5954 (ndisWdfDevicePowerDown.c)
 *     ndisWdfDevicePowerOn @ 0x1C00A5BE0 (ndisWdfDevicePowerOn.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00A851C (ndisWmiChangeSingleInstance.c)
 *     ndisPktMonMiniportRegister @ 0x1C0106F3C (ndisPktMonMiniportRegister.c)
 *     ndisMiniportFatalError @ 0x1C0118E10 (ndisMiniportFatalError.c)
 *     ndisDevicePowerDown @ 0x1C012A1D0 (ndisDevicePowerDown.c)
 *     ndisDevicePowerOn @ 0x1C012A7C0 (ndisDevicePowerOn.c)
 *     ndisPmInitializeMiniport @ 0x1C013B4EC (ndisPmInitializeMiniport.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C0006160 (NdisReferenceWithTag.c)
 */

__int64 __fastcall ndisMReferenceIfBlock(__int64 a1, unsigned __int8 a2)
{
  __int64 v4; // rbx
  KIRQL v5; // si

  v4 = 0LL;
  v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  if ( *(_BYTE *)(a1 + 4032) )
  {
    v4 = *(_QWORD *)(a1 + 4040);
    NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v4 + 1440), a2);
    ++*(_DWORD *)(v4 + 1396);
  }
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v5);
  return v4;
}
