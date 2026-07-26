/*
 * XREFs of NdisMIndicateStatusEx @ 0x1C001C6F0
 * Callers:
 *     NdisFOidRequest @ 0x1C0007DB0 (NdisFOidRequest.c)
 *     ndisMOidRequest @ 0x1C0015410 (ndisMOidRequest.c)
 *     ndisOidPostPacketFilter @ 0x1C00263A0 (ndisOidPostPacketFilter.c)
 *     ndisOidPostLinkSpeed @ 0x1C006BF70 (ndisOidPostLinkSpeed.c)
 *     ndisOidPostMediaState @ 0x1C006C250 (ndisOidPostMediaState.c)
 *     ndisOidPreSetPortAuthentication @ 0x1C006E3C0 (ndisOidPreSetPortAuthentication.c)
 *     ndisIndicatePMCapabilities @ 0x1C0073040 (ndisIndicatePMCapabilities.c)
 *     ndisPMRejectAsync @ 0x1C0074FE0 (ndisPMRejectAsync.c)
 *     ndisRejectUnsupportedPMOffloads @ 0x1C0075FEC (ndisRejectUnsupportedPMOffloads.c)
 *     ndisRejectUnsupportedWoLPatterns @ 0x1C0076238 (ndisRejectUnsupportedWoLPatterns.c)
 *     ?ndisMProcessResetRequested@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0097550 (-ndisMProcessResetRequested@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     NdisMIndicateStatus @ 0x1C0098170 (NdisMIndicateStatus.c)
 *     ndisMReset @ 0x1C009B750 (ndisMReset.c)
 *     ndisMResetCompleteStage2 @ 0x1C009BB24 (ndisMResetCompleteStage2.c)
 *     ndisMResetMiniportInternal @ 0x1C009BCCC (ndisMResetMiniportInternal.c)
 *     ndisWdfDevicePowerDown @ 0x1C00A5784 (ndisWdfDevicePowerDown.c)
 *     ndisWdfDevicePowerOn @ 0x1C00A5A10 (ndisWdfDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C012A1D0 (ndisDevicePowerDown.c)
 *     ndisDevicePowerOn @ 0x1C012A7C0 (ndisDevicePowerOn.c)
 *     ndisPmInitializeMiniport @ 0x1C013B4EC (ndisPmInitializeMiniport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisMIndicateStatusEx(NDIS_HANDLE MiniportAdapterHandle, PNDIS_STATUS_INDICATION StatusIndication)
{
  __int64 v2; // r10

  v2 = (__int64)*(int *)(*((_QWORD *)MiniportAdapterHandle + 470) + 904LL) << 7;
  (*(void (__fastcall **)(_QWORD, _QWORD, NDIS_HANDLE, PNDIS_STATUS_INDICATION))((char *)g_MiniportHookDrivers + v2 + 64))(
    *(_QWORD *)((char *)g_MiniportHookDrivers + v2 + 24),
    *((_QWORD *)MiniportAdapterHandle + 659),
    MiniportAdapterHandle,
    StatusIndication);
}
