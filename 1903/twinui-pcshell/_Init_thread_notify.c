/*
 * XREFs of _Init_thread_notify @ 0x180086E60
 * Callers:
 *     _Init_thread_abort @ 0x180086D50 (_Init_thread_abort.c)
 *     _Init_thread_footer @ 0x180086D88 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_180598958 ^ _security_cookie, _security_cookie & 0x3F))(&unk_180598940);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
