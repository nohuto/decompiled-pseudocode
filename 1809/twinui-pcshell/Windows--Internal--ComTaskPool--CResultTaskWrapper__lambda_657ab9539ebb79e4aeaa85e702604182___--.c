/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_657ab9539ebb79e4aeaa85e702604182___::Run @ 0x180091350
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_657ab9539ebb79e4aeaa85e702604182_::operator() @ 0x180090B9C (_lambda_657ab9539ebb79e4aeaa85e702604182_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_657ab9539ebb79e4aeaa85e702604182___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_657ab9539ebb79e4aeaa85e702604182_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
