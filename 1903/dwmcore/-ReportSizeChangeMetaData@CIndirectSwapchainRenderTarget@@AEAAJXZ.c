/*
 * XREFs of ?ReportSizeChangeMetaData@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180195EC4
 * Callers:
 *     ?ProcessUpdateTargetBounds@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_UPDATETARGETBOUNDS@@@Z @ 0x180195B44 (-ProcessUpdateTargetBounds@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180195374 (-EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::ReportSizeChangeMetaData(CIndirectSwapchainRenderTarget *this)
{
  unsigned int v1; // ebx
  signed int v2; // eax
  __int64 v3; // rcx

  v1 = 0;
  if ( !*((_BYTE *)this + 504) )
  {
    *((_BYTE *)this + 504) = 1;
    v2 = CIndirectSwapchainRenderTarget::EnsureMetadataBuffer(this);
    v1 = v2;
    if ( v2 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x207u, 0LL);
  }
  return v1;
}
