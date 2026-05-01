/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_3c155e4ac450cd421934cdbd238facd8___::Run @ 0x18024ABB0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_3c155e4ac450cd421934cdbd238facd8_::operator() @ 0x180248CCC (_lambda_3c155e4ac450cd421934cdbd238facd8_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_3c155e4ac450cd421934cdbd238facd8___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_3c155e4ac450cd421934cdbd238facd8_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
