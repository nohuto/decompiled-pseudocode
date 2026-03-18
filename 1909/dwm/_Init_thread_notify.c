/*
 * XREFs of _Init_thread_notify @ 0x140003588
 * Callers:
 *     _Init_thread_footer @ 0x1400034B0 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_140010348 ^ _security_cookie, _security_cookie & 0x3F))(&unk_140010330);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
