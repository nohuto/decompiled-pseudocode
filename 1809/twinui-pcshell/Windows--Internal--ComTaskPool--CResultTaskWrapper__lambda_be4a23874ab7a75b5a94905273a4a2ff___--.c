/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_be4a23874ab7a75b5a94905273a4a2ff___::Run @ 0x18001EF70
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_be4a23874ab7a75b5a94905273a4a2ff_::operator() @ 0x18001EF94 (_lambda_be4a23874ab7a75b5a94905273a4a2ff_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_be4a23874ab7a75b5a94905273a4a2ff___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_be4a23874ab7a75b5a94905273a4a2ff_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
