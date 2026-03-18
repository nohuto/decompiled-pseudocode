/*
 * XREFs of __scrt_uninitialize_crt @ 0x1800E83DC
 * Callers:
 *     dllmain_crt_process_detach @ 0x1800E8608 (dllmain_crt_process_detach.c)
 * Callees:
 *     ?ShouldClearRenderTarget@CMagnifierRenderTarget@@MEBA_NXZ @ 0x1800DE330 (-ShouldClearRenderTarget@CMagnifierRenderTarget@@MEBA_NXZ.c)
 */

char __fastcall _scrt_uninitialize_crt(CMagnifierRenderTarget *a1, char a2)
{
  char v2; // bl
  CMagnifierRenderTarget *v3; // rcx

  v2 = (char)a1;
  if ( !byte_180339561 || !a2 )
  {
    CMagnifierRenderTarget::ShouldClearRenderTarget(a1);
    LOBYTE(v3) = v2;
    CMagnifierRenderTarget::ShouldClearRenderTarget(v3);
  }
  return 1;
}
