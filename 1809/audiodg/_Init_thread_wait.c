/*
 * XREFs of _Init_thread_wait @ 0x14001D600
 * Callers:
 *     _Init_thread_header @ 0x14001D538 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( hEvent )
  {
    LeaveCriticalSection(&stru_140088D58);
    WaitForSingleObjectEx(hEvent, dwMilliseconds, 0);
    EnterCriticalSection(&stru_140088D58);
  }
  else
  {
    ((void (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                            qword_140088D90 ^ _security_cookie,
                                                                            _security_cookie & 0x3F))(
      &unk_140088D80,
      &stru_140088D58,
      dwMilliseconds);
  }
}
