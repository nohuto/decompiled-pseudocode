/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7cb52cc91a5a866bcb2f7ec0d39eb038___::Run @ 0x18029F6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7cb52cc91a5a866bcb2f7ec0d39eb038___::Run(
        __int64 a1)
{
  return WindowEventDispatcher::RemovePendingActivation(
           (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 16) + 24LL),
           *(_QWORD *)(a1 + 32));
}
