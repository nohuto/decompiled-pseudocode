/*
 * XREFs of NdisMIndicateStatusEx @ 0x1C001C6F0
 * Callers:
 *     NdisFOidRequest @ 0x1C0007DB0 (NdisFOidRequest.c)
 *     ndisMOidRequest @ 0x1C0015410 (ndisMOidRequest.c)
 *     ndisOidPostPacketFilter @ 0x1C0026390 (ndisOidPostPacketFilter.c)
 *     ndisOidPostLinkSpeed @ 0x1C006C140 (ndisOidPostLinkSpeed.c)
 *     ndisOidPostMediaState @ 0x1C006C420 (ndisOidPostMediaState.c)
 *     ndisOidPreSetPortAuthentication @ 0x1C006E590 (ndisOidPreSetPortAuthentication.c)
 *     ndisIndicatePMCapabilities @ 0x1C0073210 (ndisIndicatePMCapabilities.c)
 *     ndisPMRejectAsync @ 0x1C00751B0 (ndisPMRejectAsync.c)
 *     ndisRejectUnsupportedPMOffloads @ 0x1C00761BC (ndisRejectUnsupportedPMOffloads.c)
 *     ndisRejectUnsupportedWoLPatterns @ 0x1C0076408 (ndisRejectUnsupportedWoLPatterns.c)
 *     ?ndisMProcessResetRequested@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0097720 (-ndisMProcessResetRequested@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     NdisMIndicateStatus @ 0x1C0098340 (NdisMIndicateStatus.c)
 *     ndisMReset @ 0x1C009B920 (ndisMReset.c)
 *     ndisMResetCompleteStage2 @ 0x1C009BCF4 (ndisMResetCompleteStage2.c)
 *     ndisMResetMiniportInternal @ 0x1C009BE9C (ndisMResetMiniportInternal.c)
 *     ndisWdfDevicePowerDown @ 0x1C00A5954 (ndisWdfDevicePowerDown.c)
 *     ndisWdfDevicePowerOn @ 0x1C00A5BE0 (ndisWdfDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C012A1D0 (ndisDevicePowerDown.c)
 *     ndisDevicePowerOn @ 0x1C012A7C0 (ndisDevicePowerOn.c)
 *     ndisPmInitializeMiniport @ 0x1C013B4EC (ndisPmInitializeMiniport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
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
