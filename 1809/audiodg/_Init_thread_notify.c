/*
 * XREFs of _Init_thread_notify @ 0x14001D5A8
 * Callers:
 *     _Init_thread_footer @ 0x14001D4D0 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hEvent )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_140088D98 ^ _security_cookie, _security_cookie & 0x3F))(&unk_140088D80);
  SetEvent(hEvent);
  return ResetEvent(hEvent);
}
