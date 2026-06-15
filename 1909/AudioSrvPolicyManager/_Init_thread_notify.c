/*
 * XREFs of _Init_thread_notify @ 0x180035728
 * Callers:
 *     _Init_thread_footer @ 0x180035650 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_18004D9B0 ^ _security_cookie, _security_cookie & 0x3F))(&unk_18004D998);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
