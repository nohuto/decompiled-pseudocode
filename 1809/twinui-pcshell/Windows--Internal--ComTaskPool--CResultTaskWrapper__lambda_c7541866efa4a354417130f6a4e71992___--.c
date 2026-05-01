/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c7541866efa4a354417130f6a4e71992___::Run @ 0x18006E2F0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_c7541866efa4a354417130f6a4e71992_::operator() @ 0x18006E314 (_lambda_c7541866efa4a354417130f6a4e71992_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c7541866efa4a354417130f6a4e71992___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_c7541866efa4a354417130f6a4e71992_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
