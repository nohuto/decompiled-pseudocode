/*
 * XREFs of _Init_thread_notify @ 0x1800841C8
 * Callers:
 *     _Init_thread_footer @ 0x1800840F0 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_18050E868 ^ _security_cookie, _security_cookie & 0x3F))(&unk_18050E850);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
