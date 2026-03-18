/*
 * XREFs of _Init_thread_notify @ 0x1800E9488
 * Callers:
 *     _Init_thread_footer @ 0x1800E93B0 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_1803395D8 ^ _security_cookie, _security_cookie & 0x3F))(&unk_1803395C0);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
