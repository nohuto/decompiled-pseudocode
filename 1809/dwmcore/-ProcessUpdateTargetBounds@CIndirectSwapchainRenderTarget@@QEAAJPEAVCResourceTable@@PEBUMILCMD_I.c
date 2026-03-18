/*
 * XREFs of ?ProcessUpdateTargetBounds@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_UPDATETARGETBOUNDS@@@Z @ 0x18015C6F0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReportSizeChangeMetaData@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18015CA50 (-ReportSizeChangeMetaData@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::ProcessUpdateTargetBounds(
        CIndirectSwapchainRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_INDIRECTSWAPCHAINRENDERTARGET_UPDATETARGETBOUNDS *a3)
{
  unsigned int v3; // ebx
  int v6; // eax
  __int64 v7; // rcx

  v3 = 0;
  if ( *((_DWORD *)this + 136) == *((_DWORD *)a3 + 4) && *((_DWORD *)this + 137) == *((_DWORD *)a3 + 5)
    || (v6 = CIndirectSwapchainRenderTarget::ReportSizeChangeMetaData(this), v3 = v6, v6 >= 0) )
  {
    *((_DWORD *)this + 49) = COERCE_UNSIGNED_INT((float)*((int *)a3 + 2)) ^ _xmm;
    *((_DWORD *)this + 50) = COERCE_UNSIGNED_INT((float)*((int *)a3 + 3)) ^ _xmm;
    *((_DWORD *)this + 136) = *((_DWORD *)a3 + 4);
    *((_DWORD *)this + 137) = *((_DWORD *)a3 + 5);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x88u);
  }
  return v3;
}
