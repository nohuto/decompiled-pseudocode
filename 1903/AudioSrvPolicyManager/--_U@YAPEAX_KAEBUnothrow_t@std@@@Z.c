/*
 * XREFs of ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180034B98
 * Callers:
 *     ?RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z @ 0x1800241D0 (-RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z.c)
 *     ?RecalculateVolume@AudioStateMonitorManager@@QEAAJXZ @ 0x18002D154 (-RecalculateVolume@AudioStateMonitorManager@@QEAAJXZ.c)
 *     ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x18002E8A8 (-GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z.c)
 *     ?SetSidOnSACL@@YAKPEAXPEAU_ACL@@PEAPEAU1@PEAK@Z @ 0x180031B64 (-SetSidOnSACL@@YAKPEAXPEAU_ACL@@PEAPEAU1@PEAK@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180032200 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x180032704 (-SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LPVOID __fastcall operator new[](SIZE_T a1, const struct std::nothrow_t *a2)
{
  return operator new(a1, a2);
}
