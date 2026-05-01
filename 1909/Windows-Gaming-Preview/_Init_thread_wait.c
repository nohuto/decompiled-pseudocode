/*
 * XREFs of _Init_thread_wait @ 0x180043270
 * Callers:
 *     _Init_thread_header @ 0x1800431A8 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( hObject )
  {
    LeaveCriticalSection(&stru_18005CA08);
    WaitForSingleObjectEx(hObject, dwMilliseconds, 0);
    EnterCriticalSection(&stru_18005CA08);
  }
  else
  {
    ((void (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                            qword_18005CA40 ^ _security_cookie,
                                                                            _security_cookie & 0x3F))(
      &unk_18005CA30,
      &stru_18005CA08,
      dwMilliseconds);
  }
}
