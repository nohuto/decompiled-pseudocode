/*
 * XREFs of SepAdtInitializeAuditingOptions @ 0x140A17C20
 * Callers:
 *     SeRmInitPhase1 @ 0x140A17B50 (SeRmInitPhase1.c)
 * Callees:
 *     NtClose @ 0x1405FAB20 (NtClose.c)
 *     NtSetEvent @ 0x1406B2B60 (NtSetEvent.c)
 *     SepAdtInitializeBounds @ 0x140775478 (SepAdtInitializeBounds.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x1407754FC (SepAdtInitializePrivilegeAuditing.c)
 *     SepAdtInitializeCrashOnFail @ 0x14077555C (SepAdtInitializeCrashOnFail.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x1407755B8 (SepAdtOpenRegAndSetupNotification.c)
 *     SepAdtOpenEtwReadyEvent @ 0x140775640 (SepAdtOpenEtwReadyEvent.c)
 *     AdtpInitializeAuditingCommon @ 0x1407756D4 (AdtpInitializeAuditingCommon.c)
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
