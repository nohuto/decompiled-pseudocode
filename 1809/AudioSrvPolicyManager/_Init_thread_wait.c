/*
 * XREFs of _Init_thread_wait @ 0x180037E50
 * Callers:
 *     _Init_thread_header @ 0x180037D88 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( hHandle )
  {
    LeaveCriticalSection(&stru_18004F9F0);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&stru_18004F9F0);
  }
  else
  {
    ((void (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                            qword_18004FA28 ^ _security_cookie,
                                                                            _security_cookie & 0x3F))(
      &unk_18004FA18,
      &stru_18004F9F0,
      dwMilliseconds);
  }
}
