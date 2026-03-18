/*
 * XREFs of _Init_thread_wait @ 0x1800E94E0
 * Callers:
 *     _Init_thread_header @ 0x1800E9418 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( hHandle )
  {
    LeaveCriticalSection(&stru_180339598);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&stru_180339598);
  }
  else
  {
    ((void (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                            qword_1803395D0 ^ _security_cookie,
                                                                            _security_cookie & 0x3F))(
      &unk_1803395C0,
      &stru_180339598,
      dwMilliseconds);
  }
}
