/*
 * XREFs of ?ProcessUpdateTargetBounds@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_UPDATETARGETBOUNDS@@@Z @ 0x180195B44
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReportSizeChangeMetaData@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180195EC4 (-ReportSizeChangeMetaData@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::ProcessUpdateTargetBounds(
        CIndirectSwapchainRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_UPDATETARGETBOUNDS *a3)
{
  unsigned int v3; // ebx
  signed int v6; // eax
  __int64 v7; // rcx

  v3 = 0;
  if ( *((_DWORD *)this + 134) == *((_DWORD *)a3 + 4) && *((_DWORD *)this + 135) == *((_DWORD *)a3 + 5)
    || (v6 = CIndirectSwapchainRenderTarget::ReportSizeChangeMetaData(this), v3 = v6, v6 >= 0) )
  {
    *((_DWORD *)this + 49) = COERCE_UNSIGNED_INT((float)*((int *)a3 + 2)) ^ _xmm;
    *((_DWORD *)this + 50) = COERCE_UNSIGNED_INT((float)*((int *)a3 + 3)) ^ _xmm;
    *((_DWORD *)this + 134) = *((_DWORD *)a3 + 4);
    *((_DWORD *)this + 135) = *((_DWORD *)a3 + 5);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x86u, 0LL);
  }
  return v3;
}
