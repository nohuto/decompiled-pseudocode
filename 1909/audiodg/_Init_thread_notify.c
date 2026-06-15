/*
 * XREFs of _Init_thread_notify @ 0x140017828
 * Callers:
 *     _Init_thread_footer @ 0x140017750 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hEvent )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_140085D88 ^ _security_cookie, _security_cookie & 0x3F))(&unk_140085D70);
  SetEvent(hEvent);
  return ResetEvent(hEvent);
}
