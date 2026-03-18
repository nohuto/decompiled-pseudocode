/*
 * XREFs of SepAdtInitializeAuditingOptions @ 0x140A180E0
 * Callers:
 *     SeRmInitPhase1 @ 0x140A18010 (SeRmInitPhase1.c)
 * Callees:
 *     NtClose @ 0x1405FBB70 (NtClose.c)
 *     NtSetEvent @ 0x1406B5B00 (NtSetEvent.c)
 *     SepAdtInitializeBounds @ 0x140778A58 (SepAdtInitializeBounds.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x140778ADC (SepAdtInitializePrivilegeAuditing.c)
 *     SepAdtInitializeCrashOnFail @ 0x140778B3C (SepAdtInitializeCrashOnFail.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x140778B98 (SepAdtOpenRegAndSetupNotification.c)
 *     SepAdtOpenEtwReadyEvent @ 0x140778C20 (SepAdtOpenEtwReadyEvent.c)
 *     AdtpInitializeAuditingCommon @ 0x140778CB4 (AdtpInitializeAuditingCommon.c)
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
