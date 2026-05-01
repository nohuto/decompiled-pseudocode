/*
 * XREFs of __scrt_dllmain_crt_thread_attach @ 0x180089CF0
 * Callers:
 *     dllmain_crt_dispatch @ 0x1800891F0 (dllmain_crt_dispatch.c)
 * Callees:
 *     ?v_SupportsBack@WindowWrapper@@EEAA_NXZ @ 0x1800871D0 (-v_SupportsBack@WindowWrapper@@EEAA_NXZ.c)
 */

char __fastcall _scrt_dllmain_crt_thread_attach(WindowWrapper *a1)
{
  WindowWrapper *v1; // rcx
  WindowWrapper *v3; // rcx

  if ( !WindowWrapper::v_SupportsBack(a1) )
    return 0;
  if ( !WindowWrapper::v_SupportsBack(v1) )
  {
    WindowWrapper::v_SupportsBack(v3);
    return 0;
  }
  return 1;
}
