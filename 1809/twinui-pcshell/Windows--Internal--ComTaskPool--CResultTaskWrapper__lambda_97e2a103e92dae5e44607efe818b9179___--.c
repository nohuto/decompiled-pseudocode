/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_97e2a103e92dae5e44607efe818b9179___::Run @ 0x180255A40
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_97e2a103e92dae5e44607efe818b9179_::operator() @ 0x180254840 (_lambda_97e2a103e92dae5e44607efe818b9179_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_97e2a103e92dae5e44607efe818b9179___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_97e2a103e92dae5e44607efe818b9179_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
