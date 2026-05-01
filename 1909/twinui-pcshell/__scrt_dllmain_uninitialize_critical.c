/*
 * XREFs of __scrt_dllmain_uninitialize_critical @ 0x180089DDC
 * Callers:
 *     dllmain_crt_process_detach @ 0x180089368 (dllmain_crt_process_detach.c)
 * Callees:
 *     ?v_SupportsBack@WindowWrapper@@EEAA_NXZ @ 0x1800871D0 (-v_SupportsBack@WindowWrapper@@EEAA_NXZ.c)
 */

char _scrt_dllmain_uninitialize_critical()
{
  WindowWrapper *v0; // rcx

  WindowWrapper::v_SupportsBack(0LL);
  return WindowWrapper::v_SupportsBack(v0);
}
