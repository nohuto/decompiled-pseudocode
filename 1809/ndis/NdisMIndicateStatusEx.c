/*
 * XREFs of NdisMIndicateStatusEx @ 0x1C001B340
 * Callers:
 *     NdisFOidRequest @ 0x1C000B090 (NdisFOidRequest.c)
 *     ndisMOidRequest @ 0x1C0016B50 (ndisMOidRequest.c)
 *     ndisOidPostPacketFilter @ 0x1C001AB30 (ndisOidPostPacketFilter.c)
 *     ndisOidPostLinkSpeed @ 0x1C0046960 (ndisOidPostLinkSpeed.c)
 *     ndisOidPostMediaState @ 0x1C0046BB0 (ndisOidPostMediaState.c)
 *     ndisOidPreSetPortAuthentication @ 0x1C0047C60 (ndisOidPreSetPortAuthentication.c)
 *     NdisMIndicateStatus @ 0x1C0060B30 (NdisMIndicateStatus.c)
 *     ndisMProcessResetRequested @ 0x1C00635E8 (ndisMProcessResetRequested.c)
 *     ndisMReset @ 0x1C0063990 (ndisMReset.c)
 *     ndisMResetCompleteStage2 @ 0x1C0063DD4 (ndisMResetCompleteStage2.c)
 *     ndisMResetMiniportInternal @ 0x1C0063F8C (ndisMResetMiniportInternal.c)
 *     ndisIndicatePMCapabilities @ 0x1C00E66C4 (ndisIndicatePMCapabilities.c)
 *     ndisPMRejectAsync @ 0x1C00E7520 (ndisPMRejectAsync.c)
 *     ndisRejectUnsupportedPMOffloads @ 0x1C00E7E44 (ndisRejectUnsupportedPMOffloads.c)
 *     ndisRejectUnsupportedWoLPatterns @ 0x1C00E8044 (ndisRejectUnsupportedWoLPatterns.c)
 *     ndisDevicePowerOn @ 0x1C010A1E0 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C010ABF0 (ndisDevicePowerDown.c)
 *     ndisPmInitializeMiniport @ 0x1C0119DD8 (ndisPmInitializeMiniport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisMIndicateStatusEx(NDIS_HANDLE MiniportAdapterHandle, PNDIS_STATUS_INDICATION StatusIndication)
{
  __int64 v2; // r10

  v2 = (__int64)*(int *)(*((_QWORD *)MiniportAdapterHandle + 474) + 904LL) << 7;
  (*(void (__fastcall **)(_QWORD, _QWORD, NDIS_HANDLE, PNDIS_STATUS_INDICATION))((char *)g_MiniportHookDrivers + v2 + 64))(
    *(_QWORD *)((char *)g_MiniportHookDrivers + v2 + 24),
    *((_QWORD *)MiniportAdapterHandle + 664),
    MiniportAdapterHandle,
    StatusIndication);
}
