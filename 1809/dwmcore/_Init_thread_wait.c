/*
 * XREFs of _Init_thread_wait @ 0x1800EC150
 * Callers:
 *     _Init_thread_header @ 0x1800EC088 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( hHandle )
  {
    LeaveCriticalSection(&stru_180307CF8);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&stru_180307CF8);
  }
  else
  {
    ((void (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                            qword_180307D30 ^ _security_cookie,
                                                                            _security_cookie & 0x3F))(
      &unk_180307D20,
      &stru_180307CF8,
      dwMilliseconds);
  }
}
