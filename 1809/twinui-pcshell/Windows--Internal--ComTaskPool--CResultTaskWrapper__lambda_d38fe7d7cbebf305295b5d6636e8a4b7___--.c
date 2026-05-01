/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d38fe7d7cbebf305295b5d6636e8a4b7___::Run @ 0x18002DB10
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_d38fe7d7cbebf305295b5d6636e8a4b7_::operator() @ 0x18002DB34 (_lambda_d38fe7d7cbebf305295b5d6636e8a4b7_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d38fe7d7cbebf305295b5d6636e8a4b7___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_d38fe7d7cbebf305295b5d6636e8a4b7_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
