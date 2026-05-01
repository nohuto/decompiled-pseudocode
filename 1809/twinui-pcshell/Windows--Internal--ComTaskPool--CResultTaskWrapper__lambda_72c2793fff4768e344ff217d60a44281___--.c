/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_72c2793fff4768e344ff217d60a44281___::Run @ 0x180020CF0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_72c2793fff4768e344ff217d60a44281_::operator() @ 0x180020D14 (_lambda_72c2793fff4768e344ff217d60a44281_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_72c2793fff4768e344ff217d60a44281___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_72c2793fff4768e344ff217d60a44281_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
