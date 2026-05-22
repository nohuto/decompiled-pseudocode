/*
 * XREFs of _Init_thread_notify @ 0x18012CC38
 * Callers:
 *     _Init_thread_footer @ 0x18012CB60 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_180193258 ^ _security_cookie, _security_cookie & 0x3F))(&unk_180193240);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
