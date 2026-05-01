/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ea27fc5d667820da3627d864690b6295___::Run @ 0x180075220
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_ea27fc5d667820da3627d864690b6295_::operator() @ 0x180075244 (_lambda_ea27fc5d667820da3627d864690b6295_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ea27fc5d667820da3627d864690b6295___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_ea27fc5d667820da3627d864690b6295_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
