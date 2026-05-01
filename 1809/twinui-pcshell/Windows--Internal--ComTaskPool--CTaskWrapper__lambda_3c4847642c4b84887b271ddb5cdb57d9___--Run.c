/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c4847642c4b84887b271ddb5cdb57d9___::Run @ 0x180217E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c4847642c4b84887b271ddb5cdb57d9___::Run(
        __int64 a1)
{
  return ViewEventDispatcher::RemovePendingActivation(
           (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 16) + 16LL),
           *(_QWORD *)(a1 + 32));
}
