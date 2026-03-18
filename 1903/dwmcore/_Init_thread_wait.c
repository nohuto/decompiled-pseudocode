/*
 * XREFs of _Init_thread_wait @ 0x1800E8630
 * Callers:
 *     _Init_thread_header @ 0x1800E8568 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( hHandle )
  {
    LeaveCriticalSection(&stru_18033C498);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&stru_18033C498);
  }
  else
  {
    ((void (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                            qword_18033C4D0 ^ _security_cookie,
                                                                            _security_cookie & 0x3F))(
      &unk_18033C4C0,
      &stru_18033C498,
      dwMilliseconds);
  }
}
