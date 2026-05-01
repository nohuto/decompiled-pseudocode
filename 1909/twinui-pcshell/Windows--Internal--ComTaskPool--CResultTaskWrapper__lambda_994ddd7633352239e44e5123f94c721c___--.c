/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_994ddd7633352239e44e5123f94c721c___::Run @ 0x18007BE20
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_994ddd7633352239e44e5123f94c721c_::operator() @ 0x18007BE44 (_lambda_994ddd7633352239e44e5123f94c721c_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_994ddd7633352239e44e5123f94c721c___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_994ddd7633352239e44e5123f94c721c_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
