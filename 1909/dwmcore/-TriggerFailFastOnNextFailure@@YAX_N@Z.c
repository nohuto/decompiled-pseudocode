/*
 * XREFs of ?TriggerFailFastOnNextFailure@@YAX_N@Z @ 0x180159C88
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800716E0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall TriggerFailFastOnNextFailure(char a1)
{
  DWORD CurrentThreadId; // eax

  CurrentThreadId = 0;
  if ( a1 )
    CurrentThreadId = GetCurrentThreadId();
  g_dwFailFastForThreadId = CurrentThreadId;
}
