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

NTSTATUS __cdecl RtlSetIoCompletionCallback(HANDLE FileHandle, APC_CALLBACK_FUNCTION CompletionProc, ULONG Flags)
{
  int v5; // ebx
  __int64 v6; // rdx
  char v7; // al
  __int64 v9; // [rsp+28h] [rbp-10h] BYREF
  HANDLE v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0LL;
  v9 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return -1073741823;
  if ( !FileHandle || Flags )
    return -1073741811;
  v5 = sub_180030D7C(&v10, 0);
  if ( v5 >= 0 )
  {
    if ( byte_1801660A0 )
      goto LABEL_6;
    RtlAcquireSRWLockExclusive(&stru_1801664C0);
    if ( byte_1801660A0 )
    {
      v5 = 0;
    }
    else
    {
      v5 = LdrRegisterDllNotification(0, (PLDR_DLL_NOTIFICATION_FUNCTION)NotificationFunction, 0LL, &Cookie);
      v7 = byte_1801660A0;
      if ( v5 >= 0 )
        v7 = 1;
      byte_1801660A0 = v7;
    }
    RtlReleaseSRWLockExclusive(&stru_1801664C0);
    if ( v5 >= 0 )
    {
LABEL_6:
      v5 = sub_180088EB0(&v9, CompletionProc, FileHandle);
      if ( v5 >= 0 )
      {
        v6 = v9;
        *(_QWORD *)(v9 + 160) = NtCurrentTeb()->SubProcessTag;
        *(GUID *)(v6 + 168) = NtCurrentTeb()->ActivityId;
        v5 = 0;
      }
    }
  }
  sub_1800310E4(v10);
  return v5;
}
