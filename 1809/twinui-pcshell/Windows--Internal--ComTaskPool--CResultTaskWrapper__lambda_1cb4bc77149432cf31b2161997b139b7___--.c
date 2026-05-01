/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1cb4bc77149432cf31b2161997b139b7___::Run @ 0x180250B40
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_1cb4bc77149432cf31b2161997b139b7_::operator() @ 0x18024F3E8 (_lambda_1cb4bc77149432cf31b2161997b139b7_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1cb4bc77149432cf31b2161997b139b7___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_1cb4bc77149432cf31b2161997b139b7_::operator()((unsigned int **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
