/*
 * XREFs of SeAuditingWithTokenForSubcategory @ 0x1406787B0
 * Callers:
 *     ObDuplicateObject @ 0x1405E69A0 (ObDuplicateObject.c)
 *     PspExitThread @ 0x14060EBC8 (PspExitThread.c)
 *     ObCompleteObjectDuplication @ 0x140653AD0 (ObCompleteObjectDuplication.c)
 *     PspInsertProcess @ 0x140677BB8 (PspInsertProcess.c)
 *     SepAdtTokenRightAdjusted @ 0x1406786C0 (SepAdtTokenRightAdjusted.c)
 *     ObInitProcess @ 0x140680D70 (ObInitProcess.c)
 *     PipClearDevNodeProblem @ 0x1406FADBC (PipClearDevNodeProblem.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x1406FB220 (PiPnpRtlSetDeviceRegProperty.c)
 *     PiPnpRtlSetObjectProperty @ 0x140707FE4 (PiPnpRtlSetObjectProperty.c)
 *     PipSetDevNodeProblem @ 0x1407339B4 (PipSetDevNodeProblem.c)
 *     SeExchangePrimaryToken @ 0x14074AC24 (SeExchangePrimaryToken.c)
 *     SeAssignPrimaryToken @ 0x14074AEAC (SeAssignPrimaryToken.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1408DA8F0 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditingPlugAndPlayEvents @ 0x1408DDC84 (SeAuditingPlugAndPlayEvents.c)
 * Callees:
 *     SepAuditingForSubCategory @ 0x1400E4520 (SepAuditingForSubCategory.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SeCaptureSubjectContext @ 0x1405DE350 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x1408DDDAC (SepAdtIncorporatePerUserPolicy.c)
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
