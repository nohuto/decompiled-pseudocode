/*
 * XREFs of _Init_thread_notify @ 0x180060FC8
 * Callers:
 *     _Init_thread_footer @ 0x180060EF0 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_1801B2FA8 ^ _security_cookie, _security_cookie & 0x3F))(&unk_1801B2F90);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
