/*
 * XREFs of _Init_thread_wait @ 0x140017880
 * Callers:
 *     _Init_thread_header @ 0x1400177B8 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( hEvent )
  {
    LeaveCriticalSection(&stru_140085D48);
    WaitForSingleObjectEx(hEvent, dwMilliseconds, 0);
    EnterCriticalSection(&stru_140085D48);
  }
  else
  {
    ((void (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                            qword_140085D80 ^ _security_cookie,
                                                                            _security_cookie & 0x3F))(
      &unk_140085D70,
      &stru_140085D48,
      dwMilliseconds);
  }
}
