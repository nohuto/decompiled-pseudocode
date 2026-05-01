/*
 * XREFs of ?v_SupportsBack@WindowWrapper@@EEAA_NXZ @ 0x180081AC0
 * Callers:
 *     __scrt_dllmain_crt_thread_attach @ 0x18008451C (__scrt_dllmain_crt_thread_attach.c)
 *     __scrt_dllmain_crt_thread_detach @ 0x18008454C (__scrt_dllmain_crt_thread_detach.c)
 *     __scrt_dllmain_uninitialize_critical @ 0x180084608 (__scrt_dllmain_uninitialize_critical.c)
 *     __scrt_initialize_crt @ 0x180084624 (__scrt_initialize_crt.c)
 *     __scrt_uninitialize_crt @ 0x180084820 (__scrt_uninitialize_crt.c)
 * Callees:
 *     <none>
 */

char __fastcall WindowWrapper::v_SupportsBack(WindowWrapper *this)
{
  return 1;
}
