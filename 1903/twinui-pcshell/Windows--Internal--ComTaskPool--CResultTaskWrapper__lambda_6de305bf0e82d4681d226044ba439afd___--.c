/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6de305bf0e82d4681d226044ba439afd___::Run @ 0x180071010
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_6de305bf0e82d4681d226044ba439afd_::operator() @ 0x180071034 (_lambda_6de305bf0e82d4681d226044ba439afd_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6de305bf0e82d4681d226044ba439afd___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_6de305bf0e82d4681d226044ba439afd_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
