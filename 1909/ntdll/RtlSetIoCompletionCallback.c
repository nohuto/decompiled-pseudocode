/*
 * XREFs of RtlSetIoCompletionCallback @ 0x180089400
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTpRevertCapture @ 0x180030D7C (RtlpTpRevertCapture.c)
 *     RtlpTpResumeImpersonation @ 0x1800310E4 (RtlpTpResumeImpersonation.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     LdrRegisterDllNotification @ 0x180083B30 (LdrRegisterDllNotification.c)
 *     RtlpTpIoLookup @ 0x180089550 (RtlpTpIoLookup.c)
 */

__int64 __fastcall RtlSetIoCompletionCallback(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  char v7; // al
  __int64 v9; // [rsp+28h] [rbp-10h] BYREF
  HANDLE v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0LL;
  v9 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  if ( !a1 || (_DWORD)a3 )
    return 3221225485LL;
  v5 = RtlpTpRevertCapture(&v10, 0, a3);
  if ( v5 >= 0 )
  {
    if ( RtlpTpIoRegistered )
      goto LABEL_6;
    RtlAcquireSRWLockExclusive(&RtlpTpIoRegisteredLock);
    if ( RtlpTpIoRegistered )
    {
      v5 = 0;
    }
    else
    {
      v5 = LdrRegisterDllNotification(0, (__int64)RtlpTpIoDllNotification, 0LL, &RtlpTpIoDllNotificationCookie);
      v7 = RtlpTpIoRegistered;
      if ( v5 >= 0 )
        v7 = 1;
      RtlpTpIoRegistered = v7;
    }
    RtlReleaseSRWLockExclusive(&RtlpTpIoRegisteredLock);
    if ( v5 >= 0 )
    {
LABEL_6:
      v5 = RtlpTpIoLookup(&v9, a2, a1);
      if ( v5 >= 0 )
      {
        v6 = v9;
        *(_QWORD *)(v9 + 160) = NtCurrentTeb()->SubProcessTag;
        *(_GUID *)(v6 + 168) = NtCurrentTeb()->ActivityId;
        v5 = 0;
      }
    }
  }
  RtlpTpResumeImpersonation(v10);
  return (unsigned int)v5;
}
