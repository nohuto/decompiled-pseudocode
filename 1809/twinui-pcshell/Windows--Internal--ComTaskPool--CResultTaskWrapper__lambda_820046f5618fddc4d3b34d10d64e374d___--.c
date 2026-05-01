/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_820046f5618fddc4d3b34d10d64e374d___::Run @ 0x18024DBD0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_820046f5618fddc4d3b34d10d64e374d_::operator() @ 0x18024D700 (_lambda_820046f5618fddc4d3b34d10d64e374d_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_820046f5618fddc4d3b34d10d64e374d___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_820046f5618fddc4d3b34d10d64e374d_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
