/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_adb4202210a1cd7d97551f2a3dbe735b___::Run @ 0x180076A30
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_adb4202210a1cd7d97551f2a3dbe735b_::operator() @ 0x180076A54 (_lambda_adb4202210a1cd7d97551f2a3dbe735b_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_adb4202210a1cd7d97551f2a3dbe735b___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_adb4202210a1cd7d97551f2a3dbe735b_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
