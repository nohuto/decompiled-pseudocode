/*
 * XREFs of ?v_SupportsBack@WindowWrapper@@EEAA_NXZ @ 0x180084510
 * Callers:
 *     __scrt_dllmain_crt_thread_attach @ 0x1800871AC (__scrt_dllmain_crt_thread_attach.c)
 *     __scrt_dllmain_crt_thread_detach @ 0x1800871DC (__scrt_dllmain_crt_thread_detach.c)
 *     __scrt_dllmain_uninitialize_critical @ 0x180087298 (__scrt_dllmain_uninitialize_critical.c)
 *     __scrt_initialize_crt @ 0x1800872B4 (__scrt_initialize_crt.c)
 *     __scrt_uninitialize_crt @ 0x1800874B0 (__scrt_uninitialize_crt.c)
 *     PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal$_InitCoro$1 @ 0x1800955D4 (PenWorkspaceAppInstallBroker--QueueWhiteboardInstallInternal$_InitCoro$1.c)
 *     PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal$_ResumeCoro$2 @ 0x180095770 (PenWorkspaceAppInstallBroker--QueueWhiteboardInstallInternal$_ResumeCoro$2.c)
 * Callees:
 *     <none>
 */

char __fastcall WindowWrapper::v_SupportsBack(WindowWrapper *this)
{
  return 1;
}
