/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e5434191a426e1e6c5461e9f90ae0298___::Run @ 0x1802AF510
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_e5434191a426e1e6c5461e9f90ae0298_::operator() @ 0x1802AE2C4 (_lambda_e5434191a426e1e6c5461e9f90ae0298_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e5434191a426e1e6c5461e9f90ae0298___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_e5434191a426e1e6c5461e9f90ae0298_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 56) = result;
  return result;
}
