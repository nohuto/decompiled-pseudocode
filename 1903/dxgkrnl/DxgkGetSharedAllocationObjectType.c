/*
 * XREFs of DxgkGetSharedAllocationObjectType @ 0x1C012F190
 * Callers:
 *     ?Initialize@CBufferRealization@@IEAAJ_N@Z @ 0x1C0012298 (-Initialize@CBufferRealization@@IEAAJ_N@Z.c)
 *     ?OpenDxSurfaceHandle@CBufferRealization@@QEBAJ_N0PEAPEAX@Z @ 0x1C00123FC (-OpenDxSurfaceHandle@CBufferRealization@@QEBAJ_N0PEAPEAX@Z.c)
 *     ?Create@CPoolBufferResource@@SAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@PEAPEAVCPoolBufferResourceState@@@Z @ 0x1C00634F8 (-Create@CPoolBufferResource@@SAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@PEAPEAVCPoolBufferResourc.c)
 *     ?CreateDxSharedSurfaceHandle@CPoolBufferResource@@QEAAJPEAPEAX@Z @ 0x1C006374C (-CreateDxSharedSurfaceHandle@CPoolBufferResource@@QEAAJPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

POBJECT_TYPE DxgkGetSharedAllocationObjectType()
{
  return g_pDxgkSharedAllocationObjectType;
}
