/*
 * XREFs of _WaitForCompletion_Windows::Foundation::IAsyncOperationWithProgressCompletedHandler_Windows::Management::Deployment::DeploymentResult___Windows::Management::Deployment::DeploymentProgress__Windows::Foundation::IAsyncOperationWithProgress_Windows::Management::Deployment::DeploymentResult___Windows::Management::Deployment::DeploymentProgress____::_2_::FTMEventDelegate::Invoke @ 0x1800150C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WaitForCompletion_Windows::Foundation::IAsyncOperationWithProgressCompletedHandler_Windows::Management::Deployment::DeploymentResult___Windows::Management::Deployment::DeploymentProgress__Windows::Foundation::IAsyncOperationWithProgress_Windows::Management::Deployment::DeploymentResult___Windows::Management::Deployment::DeploymentProgress____::_2_::FTMEventDelegate::Invoke(
        __int64 a1,
        __int64 a2,
        int a3)
{
  *(_DWORD *)(a1 + 48) = a3;
  SetEvent(*(HANDLE *)(a1 + 56));
  return 0LL;
}
