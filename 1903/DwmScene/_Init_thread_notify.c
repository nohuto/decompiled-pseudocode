/*
 * XREFs of _Init_thread_notify @ 0x180126840
 * Callers:
 *     _Init_thread_abort @ 0x180126748 (_Init_thread_abort.c)
 *     _Init_thread_footer @ 0x180126778 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_18026B458 ^ _security_cookie, _security_cookie & 0x3F))(&unk_18026B440);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
