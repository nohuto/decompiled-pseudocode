/*
 * XREFs of _Init_thread_notify @ 0x18002CDE8
 * Callers:
 *     _Init_thread_footer @ 0x18002CD10 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_1801E0AB0 ^ _security_cookie, _security_cookie & 0x3F))(&unk_1801E0A98);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
