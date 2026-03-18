/*
 * XREFs of SeAuditingWithTokenForSubcategory @ 0x14060A3C0
 * Callers:
 *     ObDuplicateObject @ 0x1405D0B70 (ObDuplicateObject.c)
 *     PspExitThread @ 0x1405F75E0 (PspExitThread.c)
 *     ObInitProcess @ 0x1406092E4 (ObInitProcess.c)
 *     PspInsertProcess @ 0x1406093A8 (PspInsertProcess.c)
 *     SepAdtTokenRightAdjusted @ 0x14060A2D8 (SepAdtTokenRightAdjusted.c)
 *     ObCompleteObjectDuplication @ 0x140612FA0 (ObCompleteObjectDuplication.c)
 *     PiPnpRtlSetObjectProperty @ 0x1406E5270 (PiPnpRtlSetObjectProperty.c)
 *     PipProcessStartPhase3 @ 0x1406EAB38 (PipProcessStartPhase3.c)
 *     PipSetDevNodeProblem @ 0x1406EF580 (PipSetDevNodeProblem.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x1406F696C (PiPnpRtlSetDeviceRegProperty.c)
 *     PipClearDevNodeProblem @ 0x1406F6CF8 (PipClearDevNodeProblem.c)
 *     SeAssignPrimaryToken @ 0x140748B44 (SeAssignPrimaryToken.c)
 *     SeExchangePrimaryToken @ 0x140748BB8 (SeExchangePrimaryToken.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14089C614 (SeAdtRegistryValueChangedAuditAlarm.c)
 * Callees:
 *     SepAuditingForSubCategory @ 0x1400920B0 (SepAuditingForSubCategory.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     SeReleaseSubjectContext @ 0x1405E1240 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140631A80 (SeCaptureSubjectContext.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x14089FD00 (SepAdtIncorporatePerUserPolicy.c)
 */

char __fastcall SeAuditingWithTokenForSubcategory(int a1, __int64 a2)
{
  __int64 v3; // rdi
  int v4; // edx
  int PrimaryToken; // r9d
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF
  char v8; // [rsp+60h] [rbp+8h] BYREF

  v3 = (unsigned int)(a1 - 100);
  v8 = SepAuditingForSubCategory(a1, 1);
  if ( SepTokenPolicyCounter[v3] )
  {
    if ( a2 )
    {
      PrimaryToken = a2;
    }
    else
    {
      memset(&SubjectContext, 0, sizeof(SubjectContext));
      SeCaptureSubjectContext(&SubjectContext);
      PrimaryToken = (int)SubjectContext.PrimaryToken;
      if ( SubjectContext.ClientToken )
        PrimaryToken = (int)SubjectContext.ClientToken;
    }
    LOBYTE(v4) = 1;
    SepAdtIncorporatePerUserPolicy(v3, v4, 0, PrimaryToken, (__int64)&v8);
    if ( !a2 )
      SeReleaseSubjectContext(&SubjectContext);
  }
  return v8;
}
