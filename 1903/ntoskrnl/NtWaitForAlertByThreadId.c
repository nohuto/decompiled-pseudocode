/*
 * XREFs of NtWaitForAlertByThreadId @ 0x140686550
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForAlertByThreadId @ 0x1400BA4A0 (KeWaitForAlertByThreadId.c)
 */

NTSTATUS __cdecl NtWaitForAlertByThreadId(PVOID Address, PLARGE_INTEGER Timeout)
{
  char PreviousMode; // cl
  LONGLONG v5; // [rsp+40h] [rbp+18h] BYREF
  LONGLONG QuadPart; // [rsp+48h] [rbp+20h]

  v5 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( Timeout && PreviousMode )
  {
    if ( (unsigned __int64)Timeout >= 0x7FFFFFFF0000LL )
      Timeout = (PLARGE_INTEGER)0x7FFFFFFF0000LL;
    QuadPart = Timeout->QuadPart;
    v5 = QuadPart;
    Timeout = (PLARGE_INTEGER)&v5;
  }
  return KeWaitForAlertByThreadId(PreviousMode, Timeout, Address);
}
