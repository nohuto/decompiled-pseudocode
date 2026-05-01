/*
 * XREFs of __Init_thread_wait @ 0x1000CA4D
 * Callers:
 *     __Init_thread_header @ 0x1000C9E1 (__Init_thread_header.c)
 * Callees:
 *     <none>
 */

BOOL _Init_thread_wait()
{
  return SleepConditionVariableSRW(&ConditionVariable, &stru_100180B8, 0xFFFFFFFF, 0);
}
