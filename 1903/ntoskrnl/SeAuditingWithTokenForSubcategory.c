/*
 * XREFs of SeAuditingWithTokenForSubcategory @ 0x1406730A0
 * Callers:
 *     ObDuplicateObject @ 0x1405E61D0 (ObDuplicateObject.c)
 *     PspExitThread @ 0x14060D0B8 (PspExitThread.c)
 *     ObCompleteObjectDuplication @ 0x14063FF80 (ObCompleteObjectDuplication.c)
 *     ObInitProcess @ 0x140671FD0 (ObInitProcess.c)
 *     PspInsertProcess @ 0x1406724A4 (PspInsertProcess.c)
 *     SepAdtTokenRightAdjusted @ 0x140672FB0 (SepAdtTokenRightAdjusted.c)
 *     PipClearDevNodeProblem @ 0x1406F8FDC (PipClearDevNodeProblem.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x1406F9440 (PiPnpRtlSetDeviceRegProperty.c)
 *     PiPnpRtlSetObjectProperty @ 0x140706204 (PiPnpRtlSetObjectProperty.c)
 *     PipSetDevNodeProblem @ 0x140731754 (PipSetDevNodeProblem.c)
 *     SeAssignPrimaryToken @ 0x140780318 (SeAssignPrimaryToken.c)
 *     SeExchangePrimaryToken @ 0x14078038C (SeExchangePrimaryToken.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1408DAFF0 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditingPlugAndPlayEvents @ 0x1408DE384 (SeAuditingPlugAndPlayEvents.c)
 * Callees:
 *     SepAuditingForSubCategory @ 0x1400ADFD0 (SepAuditingForSubCategory.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SeCaptureSubjectContext @ 0x1405DDBB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x1408DE4AC (SepAdtIncorporatePerUserPolicy.c)
 */

char __fastcall SeAuditingWithTokenForSubcategory(int a1, __int64 a2)
{
  char v4; // al
  int v5; // edx
  __int64 v6; // rdi
  int PrimaryToken; // r9d
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF
  char v10; // [rsp+60h] [rbp+8h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v4 = SepAuditingForSubCategory(a1, 1);
  v6 = (unsigned int)(a1 - 100);
  v10 = v4;
  if ( SepTokenPolicyCounter[v6] )
  {
    if ( a2 )
    {
      PrimaryToken = a2;
    }
    else
    {
      SeCaptureSubjectContext(&SubjectContext);
      PrimaryToken = (int)SubjectContext.PrimaryToken;
      if ( SubjectContext.ClientToken )
        PrimaryToken = (int)SubjectContext.ClientToken;
    }
    LOBYTE(v5) = 1;
    SepAdtIncorporatePerUserPolicy(v6, v5, 0, PrimaryToken, (__int64)&v10);
    if ( !a2 )
      SeReleaseSubjectContext(&SubjectContext);
  }
  return v10;
}
