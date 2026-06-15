/*
 * XREFs of _Init_thread_notify @ 0x180064638
 * Callers:
 *     _Init_thread_footer @ 0x180064560 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_1801B8028 ^ _security_cookie, _security_cookie & 0x3F))(&unk_1801B8010);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
