/*
 * XREFs of ??$ReleaseInterfaceNoNULL@VIAdvancedDirectFlipBitmapRealization@@@@YAXPEAVIAdvancedDirectFlipBitmapRealization@@@Z @ 0x18015F804
 * Callers:
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x18003C618 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM.c)
 *     ?UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x1800EC234 (-UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ReleaseInterfaceNoNULL<IAdvancedDirectFlipBitmapRealization>(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return result;
}
