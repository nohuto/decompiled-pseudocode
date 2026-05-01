/*
 * XREFs of _Init_thread_wait @ 0x1800898C8
 * Callers:
 *     _Init_thread_header @ 0x180089800 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( hHandle )
  {
    LeaveCriticalSection(&stru_1805C0C88);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&stru_1805C0C88);
  }
  else
  {
    ((void (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                            qword_1805C0CC0 ^ _security_cookie,
                                                                            _security_cookie & 0x3F))(
      &unk_1805C0CB0,
      &stru_1805C0C88,
      dwMilliseconds);
  }
}
