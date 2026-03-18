/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CIndirectSwapchainRenderTarget@@UEAAXXZ @ 0x18015C8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x18015CC80 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 */

void __fastcall CIndirectSwapchainRenderTarget::ReleaseResourcesForDisplayChange(CIndirectSwapchainRenderTarget *this)
{
  char *v1; // rbx

  v1 = (char *)this - 64;
  CIndirectSwapchainRenderTarget::Unregister((CIndirectSwapchainRenderTarget *)((char *)this - 64));
  (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 224LL))(v1);
}
