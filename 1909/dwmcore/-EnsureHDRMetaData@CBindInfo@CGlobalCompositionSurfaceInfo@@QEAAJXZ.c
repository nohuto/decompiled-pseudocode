/*
 * XREFs of ?EnsureHDRMetaData@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x1800206B8
 * Callers:
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_REALIZATION_INFO@@@Z @ 0x1800525E0 (-CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_BUFFER_ATTRI.c)
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x180062BD4 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::EnsureHDRMetaData(
        CGlobalCompositionSurfaceInfo::CBindInfo *this)
{
  _DWORD *v1; // rdi
  int v2; // ebx
  int CompositionSurfaceHDRMetaData; // eax
  unsigned int v4; // ecx

  v1 = (_DWORD *)((char *)this + 88);
  v2 = 0;
  CompositionSurfaceHDRMetaData = NtQueryCompositionSurfaceHDRMetaData(
                                    *(_QWORD *)(*(_QWORD *)this + 32LL),
                                    (char *)this + 8,
                                    (char *)this + 88,
                                    28LL,
                                    (char *)this + 92);
  if ( CompositionSurfaceHDRMetaData < 0 )
  {
    v2 = CompositionSurfaceHDRMetaData | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, CompositionSurfaceHDRMetaData | 0x10000000, 0x6ACu, 0LL);
    if ( v2 < 0 )
      *v1 = 0;
  }
  return (unsigned int)v2;
}
