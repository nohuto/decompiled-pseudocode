/*
 * XREFs of DxgkGetSharedAllocationObjectType @ 0x1C0132A00
 * Callers:
 *     ?Initialize@CBufferRealization@@IEAAJ_N@Z @ 0x1C0012A38 (-Initialize@CBufferRealization@@IEAAJ_N@Z.c)
 *     ?OpenDxSurfaceHandle@CBufferRealization@@QEBAJ_N0PEAPEAX@Z @ 0x1C0012B9C (-OpenDxSurfaceHandle@CBufferRealization@@QEBAJ_N0PEAPEAX@Z.c)
 *     ?Create@CPoolBufferResource@@SAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@PEAPEAVCPoolBufferResourceState@@@Z @ 0x1C0063538 (-Create@CPoolBufferResource@@SAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@PEAPEAVCPoolBufferResourc.c)
 *     ?CreateDxSharedSurfaceHandle@CPoolBufferResource@@QEAAJPEAPEAX@Z @ 0x1C006378C (-CreateDxSharedSurfaceHandle@CPoolBufferResource@@QEAAJPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

POBJECT_TYPE DxgkGetSharedAllocationObjectType()
{
  return g_pDxgkSharedAllocationObjectType;
}
