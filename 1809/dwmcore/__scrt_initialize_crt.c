/*
 * XREFs of __scrt_initialize_crt @ 0x1800EBBF0
 * Callers:
 *     dllmain_crt_process_attach @ 0x1800ED398 (dllmain_crt_process_attach.c)
 * Callees:
 *     ?ShouldClearRenderTarget@CMagnifierRenderTarget@@MEBA_NXZ @ 0x1800EB290 (-ShouldClearRenderTarget@CMagnifierRenderTarget@@MEBA_NXZ.c)
 *     __isa_available_init @ 0x1800EC340 (__isa_available_init.c)
 */

char __fastcall _scrt_initialize_crt(int a1)
{
  char v1; // al
  CMagnifierRenderTarget *v2; // rcx
  CMagnifierRenderTarget *v3; // rcx

  v1 = byte_180307CF1;
  if ( !a1 )
    v1 = 1;
  byte_180307CF1 = v1;
  _isa_available_init();
  if ( !CMagnifierRenderTarget::ShouldClearRenderTarget(v2) )
    return 0;
  if ( !CMagnifierRenderTarget::ShouldClearRenderTarget(v3) )
  {
    CMagnifierRenderTarget::ShouldClearRenderTarget(0LL);
    return 0;
  }
  return 1;
}
