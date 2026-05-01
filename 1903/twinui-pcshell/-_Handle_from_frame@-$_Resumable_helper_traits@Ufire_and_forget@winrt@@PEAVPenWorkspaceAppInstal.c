/*
 * XREFs of ?_Handle_from_frame@?$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAVPenWorkspaceAppInstallBroker@@@experimental@std@@SA?AU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVPenWorkspaceAppInstallBroker@@@experimental@std@@@23@PEAX@Z @ 0x18000F7C4
 * Callers:
 *     ?GetAppIdFromProcessId@CallerIdentity@@YAJKPEAPEAG@Z @ 0x18000F7D4 (-GetAppIdFromProcessId@CallerIdentity@@YAJKPEAPEAG@Z.c)
 *     PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal$_InitCoro$1 @ 0x1800955D4 (PenWorkspaceAppInstallBroker--QueueWhiteboardInstallInternal$_InitCoro$1.c)
 *     PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal$_ResumeCoro$2 @ 0x180095770 (PenWorkspaceAppInstallBroker--QueueWhiteboardInstallInternal$_ResumeCoro$2.c)
 *     ?GetPackageSidFromProcess@CallerIdentity@@YAJKPEAPEAX@Z @ 0x180408184 (-GetPackageSidFromProcess@CallerIdentity@@YAJKPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,PenWorkspaceAppInstallBroker *>::_Handle_from_frame(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  return a1;
}
