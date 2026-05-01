/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_34b17e103c9e53767c239d4fd5bab5ae___::Run @ 0x18009B2E0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_34b17e103c9e53767c239d4fd5bab5ae_::operator() @ 0x18009A988 (_lambda_34b17e103c9e53767c239d4fd5bab5ae_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_34b17e103c9e53767c239d4fd5bab5ae___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_34b17e103c9e53767c239d4fd5bab5ae_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
