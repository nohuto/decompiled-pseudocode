/*
 * XREFs of SepAdtInitializeAuditingOptions @ 0x1409C6290
 * Callers:
 *     SeRmInitPhase1 @ 0x1409C61C4 (SeRmInitPhase1.c)
 * Callees:
 *     NtClose @ 0x1405E89E0 (NtClose.c)
 *     NtSetEvent @ 0x140646270 (NtSetEvent.c)
 *     SepAdtInitializeBounds @ 0x140736AC4 (SepAdtInitializeBounds.c)
 *     SepAdtInitializeCrashOnFail @ 0x140736B48 (SepAdtInitializeCrashOnFail.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x140736BA4 (SepAdtInitializePrivilegeAuditing.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x140736CE4 (SepAdtOpenRegAndSetupNotification.c)
 *     SepAdtOpenEtwReadyEvent @ 0x14073718C (SepAdtOpenEtwReadyEvent.c)
 *     AdtpInitializeAuditingCommon @ 0x140737208 (AdtpInitializeAuditingCommon.c)
 */

int SepAdtInitializeAuditingOptions()
{
  int result; // eax
  NTSTATUS v1; // ebx
  HANDLE EventHandle; // [rsp+30h] [rbp+8h] BYREF

  EventHandle = 0LL;
  result = AdtpInitializeAuditingCommon();
  if ( result >= 0 )
  {
    result = SepAdtOpenEtwReadyEvent(&EventHandle);
    if ( result >= 0 )
    {
      v1 = NtSetEvent(EventHandle, 0LL);
      NtClose(EventHandle);
      if ( v1 >= 0 )
      {
        result = SepAdtOpenRegAndSetupNotification();
        v1 = result;
        if ( result < 0 )
          return result;
        SepAdtInitializeCrashOnFail();
        SepAdtInitializePrivilegeAuditing();
        SepAdtInitializeBounds();
      }
      return v1;
    }
  }
  return result;
}
