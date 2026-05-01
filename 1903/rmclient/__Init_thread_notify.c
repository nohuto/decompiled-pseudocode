/*
 * XREFs of __Init_thread_notify @ 0x1000CA35
 * Callers:
 *     __Init_thread_footer @ 0x1000C9A0 (__Init_thread_footer.c)
 * Callees:
 *     <none>
 */

void _Init_thread_notify()
{
  WakeAllConditionVariable(&ConditionVariable);
}
