/*
 * XREFs of NtWaitForAlertByThreadId @ 0x140686550
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForAlertByThreadId @ 0x1400BA4A0 (KeWaitForAlertByThreadId.c)
 */

__int64 __fastcall NtWaitForAlertByThreadId(void *a1, unsigned __int64 a2)
{
  char PreviousMode; // cl
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h]

  v5 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a2 && PreviousMode )
  {
    if ( a2 >= 0x7FFFFFFF0000LL )
      a2 = 0x7FFFFFFF0000LL;
    v6 = *(_QWORD *)a2;
    v5 = v6;
    a2 = (unsigned __int64)&v5;
  }
  return KeWaitForAlertByThreadId(PreviousMode, (_QWORD *)a2, a1);
}
