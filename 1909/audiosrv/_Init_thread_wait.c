/*
 * XREFs of _Init_thread_wait @ 0x180065680
 * Callers:
 *     _Init_thread_header @ 0x1800655B8 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( hHandle )
  {
    LeaveCriticalSection(&stru_1801B6FE8);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&stru_1801B6FE8);
  }
  else
  {
    ((void (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                            qword_1801B7020 ^ _security_cookie,
                                                                            _security_cookie & 0x3F))(
      &unk_1801B7010,
      &stru_1801B6FE8,
      dwMilliseconds);
  }
}
