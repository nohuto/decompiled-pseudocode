/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f22a35c27131072633360a3ee6b26e38___::Run @ 0x18001DB40
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f22a35c27131072633360a3ee6b26e38_::operator() @ 0x18001DB64 (_lambda_f22a35c27131072633360a3ee6b26e38_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f22a35c27131072633360a3ee6b26e38___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_f22a35c27131072633360a3ee6b26e38_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
