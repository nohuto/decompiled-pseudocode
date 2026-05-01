/*
 * XREFs of _Init_thread_notify @ 0x180089870
 * Callers:
 *     _Init_thread_abort @ 0x180089760 (_Init_thread_abort.c)
 *     _Init_thread_footer @ 0x180089798 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_1805C0CC8 ^ _security_cookie, _security_cookie & 0x3F))(&unk_1805C0CB0);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
