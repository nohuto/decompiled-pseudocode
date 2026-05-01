/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c3b823257698a8a46ce2aa70921db56d___::Run @ 0x18001E5E0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_c3b823257698a8a46ce2aa70921db56d_::operator() @ 0x18001E6B0 (_lambda_c3b823257698a8a46ce2aa70921db56d_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c3b823257698a8a46ce2aa70921db56d___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_c3b823257698a8a46ce2aa70921db56d_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
