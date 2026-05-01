/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1e50dd1581e01d6b2d5aa75be8ea3966___::Run @ 0x18001B6C0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_1e50dd1581e01d6b2d5aa75be8ea3966_::operator() @ 0x18001B6E4 (_lambda_1e50dd1581e01d6b2d5aa75be8ea3966_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1e50dd1581e01d6b2d5aa75be8ea3966___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_1e50dd1581e01d6b2d5aa75be8ea3966_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
