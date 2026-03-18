/*
 * XREFs of ?Present@CIndirectSwapchainRenderTarget@@UEAAJ_NI@Z @ 0x180193F40
 * Callers:
 *     ?PostPresent@CIndirectSwapchainRenderTarget@@UEAAJ_N@Z @ 0x180193EB0 (-PostPresent@CIndirectSwapchainRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801944BC (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::Present(CIndirectSwapchainRenderTarget *this)
{
  signed int v1; // eax
  __int64 v2; // rcx
  unsigned int v3; // ebx

  v1 = CIndirectSwapchainRenderTarget::ReleaseCurrentBuffer((CIndirectSwapchainRenderTarget *)((char *)this - 64));
  v3 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, v1, 0x10Fu, 0LL);
  return v3;
}
