/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_fb3fa034337556d8d2ac1df059e47d1d___::Run @ 0x18005CBE0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_fb3fa034337556d8d2ac1df059e47d1d_::operator() @ 0x18005CC04 (_lambda_fb3fa034337556d8d2ac1df059e47d1d_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_fb3fa034337556d8d2ac1df059e47d1d___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_fb3fa034337556d8d2ac1df059e47d1d_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
