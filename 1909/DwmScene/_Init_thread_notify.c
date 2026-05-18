/*
 * XREFs of _Init_thread_notify @ 0x180126950
 * Callers:
 *     _Init_thread_abort @ 0x180126858 (_Init_thread_abort.c)
 *     _Init_thread_footer @ 0x180126888 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_18026C458 ^ _security_cookie, _security_cookie & 0x3F))(&unk_18026C440);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
