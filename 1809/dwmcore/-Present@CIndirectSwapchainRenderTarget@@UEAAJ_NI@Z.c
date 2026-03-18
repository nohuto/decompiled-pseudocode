/*
 * XREFs of ?Present@CIndirectSwapchainRenderTarget@@UEAAJ_NI@Z @ 0x18015C310
 * Callers:
 *     ?PostPresent@CIndirectSwapchainRenderTarget@@UEAAJ_N@Z @ 0x18015C290 (-PostPresent@CIndirectSwapchainRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18015C7A0 (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::Present(CIndirectSwapchainRenderTarget *this)
{
  int v1; // eax
  __int64 v2; // rcx
  unsigned int v3; // ebx

  v1 = CIndirectSwapchainRenderTarget::ReleaseCurrentBuffer((CIndirectSwapchainRenderTarget *)((char *)this - 64));
  v3 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, v1, 0x111u);
  return v3;
}
