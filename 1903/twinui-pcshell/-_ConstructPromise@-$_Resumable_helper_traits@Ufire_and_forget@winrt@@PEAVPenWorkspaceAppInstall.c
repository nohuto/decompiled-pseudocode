/*
 * XREFs of ?_ConstructPromise@?$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAVPenWorkspaceAppInstallBroker@@@experimental@std@@SAXPEAX0H@Z @ 0x180096DAC
 * Callers:
 *     PenWorkspaceAppInstallBroker::QueueWhiteboardInstallInternal$_InitCoro$1 @ 0x1800955D4 (PenWorkspaceAppInstallBroker--QueueWhiteboardInstallInternal$_InitCoro$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,PenWorkspaceAppInstallBroker *>::_ConstructPromise(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  result = a3 != 0 ? 2 : 65538;
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
