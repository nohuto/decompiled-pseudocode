/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c08d9591f4b1250f6a4493efbda50858___::Run @ 0x18007C650
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_c08d9591f4b1250f6a4493efbda50858_::operator() @ 0x18007C674 (_lambda_c08d9591f4b1250f6a4493efbda50858_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c08d9591f4b1250f6a4493efbda50858___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_c08d9591f4b1250f6a4493efbda50858_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
