/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_585f166517ad6215030a8574fdaaae07___::Run @ 0x180065000
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_585f166517ad6215030a8574fdaaae07_::operator() @ 0x180065024 (_lambda_585f166517ad6215030a8574fdaaae07_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_585f166517ad6215030a8574fdaaae07___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_585f166517ad6215030a8574fdaaae07_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
