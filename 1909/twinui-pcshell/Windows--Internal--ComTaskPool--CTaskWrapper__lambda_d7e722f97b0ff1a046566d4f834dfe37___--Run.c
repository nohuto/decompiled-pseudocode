/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d7e722f97b0ff1a046566d4f834dfe37___::Run @ 0x18007F970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d7e722f97b0ff1a046566d4f834dfe37___::Run(
        __int64 a1)
{
  return SetEvent(*(HANDLE *)(*(_QWORD *)(a1 + 24) + 40LL));
}
