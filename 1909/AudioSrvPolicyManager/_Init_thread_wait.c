/*
 * XREFs of _Init_thread_wait @ 0x180035780
 * Callers:
 *     _Init_thread_header @ 0x1800356B8 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( hHandle )
  {
    LeaveCriticalSection(&stru_18004D970);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&stru_18004D970);
  }
  else
  {
    ((void (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                            qword_18004D9A8 ^ _security_cookie,
                                                                            _security_cookie & 0x3F))(
      &unk_18004D998,
      &stru_18004D970,
      dwMilliseconds);
  }
}
