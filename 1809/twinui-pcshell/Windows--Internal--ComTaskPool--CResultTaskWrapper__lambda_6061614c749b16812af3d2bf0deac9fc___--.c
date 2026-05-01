/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6061614c749b16812af3d2bf0deac9fc___::Run @ 0x1800668A0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_6061614c749b16812af3d2bf0deac9fc_::operator() @ 0x1800668C4 (_lambda_6061614c749b16812af3d2bf0deac9fc_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6061614c749b16812af3d2bf0deac9fc___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_6061614c749b16812af3d2bf0deac9fc_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 48) = result;
  return result;
}
