/*
 * XREFs of PopDeepSleepInitialize @ 0x140A074DC
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 (*__fastcall PopDeepSleepInitialize(int a1))()
{
  __int64 (*result)(); // rax

  if ( a1 )
  {
    if ( a1 == 3 && !byte_140443B94 )
      PopDeepSleepDisengageReasonMask |= 2u;
  }
  else
  {
    result = PopDeepSleepEvaluateCallback;
    PopDeepSleepDisengageReasonMask = 65;
    PopDeepSleepEvaluateWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopDeepSleepEvaluateCallback;
    PopDeepSleepEvaluateWorkItem.Parameter = 0LL;
    PopDeepSleepEvaluateWorkItem.List.Flink = 0LL;
  }
  return result;
}
