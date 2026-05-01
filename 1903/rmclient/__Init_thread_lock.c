/*
 * XREFs of __Init_thread_lock @ 0x1000CA29
 * Callers:
 *     __Init_thread_footer @ 0x1000C9A0 (__Init_thread_footer.c)
 *     __Init_thread_header @ 0x1000C9E1 (__Init_thread_header.c)
 * Callees:
 *     <none>
 */

void _Init_thread_lock()
{
  AcquireSRWLockExclusive(&stru_100180B8);
}
