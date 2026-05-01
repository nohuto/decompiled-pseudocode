/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f02e9abf88fc25bb48d97069185a95ef___::Run @ 0x180250CF0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f02e9abf88fc25bb48d97069185a95ef_::operator() @ 0x18024F9E0 (_lambda_f02e9abf88fc25bb48d97069185a95ef_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f02e9abf88fc25bb48d97069185a95ef___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_f02e9abf88fc25bb48d97069185a95ef_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
