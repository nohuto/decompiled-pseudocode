/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a7b42df61a5d79aae0055bcaeb00adb8___::Run @ 0x1802C0770
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a7b42df61a5d79aae0055bcaeb00adb8_::operator() @ 0x1802BF0F4 (_lambda_a7b42df61a5d79aae0055bcaeb00adb8_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a7b42df61a5d79aae0055bcaeb00adb8___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_a7b42df61a5d79aae0055bcaeb00adb8_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
