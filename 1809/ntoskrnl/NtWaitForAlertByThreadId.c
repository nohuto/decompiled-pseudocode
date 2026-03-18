/*
 * XREFs of NtWaitForAlertByThreadId @ 0x1405F9420
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForAlertByThreadId @ 0x14008B060 (KeWaitForAlertByThreadId.c)
 */

__int64 __fastcall NtWaitForAlertByThreadId(void *a1, unsigned __int64 a2)
{
  char PreviousMode; // cl
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a2 && PreviousMode )
  {
    if ( a2 >= 0x7FFFFFFF0000LL )
      a2 = 0x7FFFFFFF0000LL;
    v5 = *(_QWORD *)a2;
    a2 = (unsigned __int64)&v5;
  }
  return KeWaitForAlertByThreadId(PreviousMode, (_QWORD *)a2, a1);
}
