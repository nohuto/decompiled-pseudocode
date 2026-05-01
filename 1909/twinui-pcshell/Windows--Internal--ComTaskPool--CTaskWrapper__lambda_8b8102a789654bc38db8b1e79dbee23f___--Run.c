/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8b8102a789654bc38db8b1e79dbee23f___::Run @ 0x18028D6A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8b8102a789654bc38db8b1e79dbee23f___::Run(
        __int64 a1)
{
  ViewEventDispatcher::ActivationCompleted(*(RTL_SRWLOCK **)(a1 + 16), *(_QWORD *)(a1 + 32));
}
