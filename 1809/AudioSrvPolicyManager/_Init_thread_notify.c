/*
 * XREFs of _Init_thread_notify @ 0x180037DF8
 * Callers:
 *     _Init_thread_footer @ 0x180037D20 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_18004FA30 ^ _security_cookie, _security_cookie & 0x3F))(&unk_18004FA18);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
