/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_dd3f6d7ea91d00747dcff202126691de___::Run @ 0x18001E7C0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_dd3f6d7ea91d00747dcff202126691de_::operator() @ 0x18001E8CC (_lambda_dd3f6d7ea91d00747dcff202126691de_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_dd3f6d7ea91d00747dcff202126691de___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_dd3f6d7ea91d00747dcff202126691de_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
