/*
 * XREFs of _Init_thread_wait @ 0x18012CC90
 * Callers:
 *     _Init_thread_header @ 0x18012CBC8 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( hHandle )
  {
    LeaveCriticalSection(&stru_180193218);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&stru_180193218);
  }
  else
  {
    ((void (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                            qword_180193250 ^ _security_cookie,
                                                                            _security_cookie & 0x3F))(
      &unk_180193240,
      &stru_180193218,
      dwMilliseconds);
  }
}
