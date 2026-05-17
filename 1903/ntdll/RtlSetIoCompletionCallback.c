/*
 * XREFs of RtlSetIoCompletionCallback @ 0x180088D60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180030D7C @ 0x180030D7C (sub_180030D7C.c)
 *     sub_1800310E4 @ 0x1800310E4 (sub_1800310E4.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     LdrRegisterDllNotification @ 0x180083490 (LdrRegisterDllNotification.c)
 *     sub_180088EB0 @ 0x180088EB0 (sub_180088EB0.c)
 */

__int64 __fastcall RtlSetIoCompletionCallback(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  char v7; // al
  __int64 v9; // [rsp+28h] [rbp-10h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0LL;
  v9 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  if ( !a1 || (_DWORD)a3 )
    return 3221225485LL;
  v5 = sub_180030D7C(&v10, 0, a3);
  if ( v5 >= 0 )
  {
    if ( byte_1801660A0 )
      goto LABEL_6;
    RtlAcquireSRWLockExclusive(&qword_1801664C0);
    if ( byte_1801660A0 )
    {
      v5 = 0;
    }
    else
    {
      v5 = LdrRegisterDllNotification(0, (__int64)sub_180088B70, 0LL, &qword_1801664D0);
      v7 = byte_1801660A0;
      if ( v5 >= 0 )
        v7 = 1;
      byte_1801660A0 = v7;
    }
    RtlReleaseSRWLockExclusive(&qword_1801664C0);
    if ( v5 >= 0 )
    {
LABEL_6:
      v5 = sub_180088EB0(&v9, a2, a1);
      if ( v5 >= 0 )
      {
        v6 = v9;
        *(_QWORD *)(v9 + 160) = NtCurrentTeb()->SubProcessTag;
        *(struct _GUID *)(v6 + 168) = NtCurrentTeb()->ActivityId;
        v5 = 0;
      }
    }
  }
  sub_1800310E4(v10);
  return (unsigned int)v5;
}
