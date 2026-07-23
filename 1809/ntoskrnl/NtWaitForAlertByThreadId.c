/*
 * XREFs of NtWaitForAlertByThreadId @ 0x1405FA420
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForAlertByThreadId @ 0x14008B050 (KeWaitForAlertByThreadId.c)
 */

NTSTATUS __cdecl NtWaitForAlertByThreadId(PVOID Address, PLARGE_INTEGER Timeout)
{
  char PreviousMode; // cl
  LONGLONG QuadPart; // [rsp+40h] [rbp+18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( Timeout && PreviousMode )
  {
    if ( (unsigned __int64)Timeout >= 0x7FFFFFFF0000LL )
      Timeout = (PLARGE_INTEGER)0x7FFFFFFF0000LL;
    QuadPart = Timeout->QuadPart;
    Timeout = (PLARGE_INTEGER)&QuadPart;
  }
  return KeWaitForAlertByThreadId(PreviousMode, Timeout, Address);
}
