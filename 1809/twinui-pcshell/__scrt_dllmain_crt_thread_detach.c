/*
 * XREFs of __scrt_dllmain_crt_thread_detach @ 0x18008454C
 * Callers:
 *     dllmain_crt_dispatch @ 0x180083BC0 (dllmain_crt_dispatch.c)
 * Callees:
 *     ?v_SupportsBack@WindowWrapper@@EEAA_NXZ @ 0x180081AC0 (-v_SupportsBack@WindowWrapper@@EEAA_NXZ.c)
 */

char __fastcall _scrt_dllmain_crt_thread_detach(WindowWrapper *a1)
{
  WindowWrapper *v1; // rcx

  WindowWrapper::v_SupportsBack(a1);
  WindowWrapper::v_SupportsBack(v1);
  return 1;
}
