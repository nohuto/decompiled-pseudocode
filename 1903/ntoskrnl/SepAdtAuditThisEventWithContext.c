/*
 * XREFs of SepAdtAuditThisEventWithContext @ 0x140621A90
 * Callers:
 *     SeAuditingAnyFileEventsWithContextEx @ 0x140087EB0 (SeAuditingAnyFileEventsWithContextEx.c)
 *     SeReportSecurityEventWithSubCategory @ 0x1400ADD60 (SeReportSecurityEventWithSubCategory.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140155C04 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SeAuditingFileEventsWithContextEx @ 0x14031DDE0 (SeAuditingFileEventsWithContextEx.c)
 *     SeObjectReferenceAuditAlarm @ 0x1405C89A8 (SeObjectReferenceAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14061FB18 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14061FFDC (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140620540 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x1406217BC (SepAdtAuditObjectAccessWithContext.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140687000 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeAuditingHardLinkEventsWithContext @ 0x1406EFE00 (SeAuditingHardLinkEventsWithContext.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x140788D10 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1408DC7D0 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1408DD148 (SepAdtOpenObjectAuditAlarm.c)
 *     SeAuditingFileOrGlobalEvents @ 0x1408DE240 (SeAuditingFileOrGlobalEvents.c)
 * Callees:
 *     SepAuditingEnabledForSubcategory @ 0x140087F20 (SepAuditingEnabledForSubcategory.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SeCaptureSubjectContext @ 0x1405DDBB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x140621B20 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x1408DE4AC (SepAdtIncorporatePerUserPolicy.c)
 *     SepAuditFailed @ 0x1408E2ED0 (SepAuditFailed.c)
 */

__int64 __fastcall SepAdtAuditThisEventWithContext(
        unsigned int a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        struct _SECURITY_SUBJECT_CONTEXT *a4)
{
  int v8; // ecx
  __int64 v9; // rbx
  bool v10; // di
  __int64 v12; // rdx
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // r15
  PACCESS_TOKEN ClientToken; // r9
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-38h] BYREF
  bool v16; // [rsp+70h] [rbp+8h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v8 = a1;
  if ( a1 <= 8 )
  {
    v12 = (a2 != 0) | 0x10u;
    if ( !a3 )
      v12 = a2 != 0;
    return SepAdtAuditThisEventByCategoryWithContext(a1, v12, a4);
  }
  else
  {
    v9 = a1 - 100;
    v16 = SepAuditingEnabledForSubcategory(v8, a2, a3);
    v10 = v16;
    if ( SepTokenPolicyCounter[v9] )
    {
      if ( a4 )
      {
        p_SubjectContext = a4;
      }
      else
      {
        p_SubjectContext = &SubjectContext;
        SeCaptureSubjectContext(&SubjectContext);
      }
      ClientToken = p_SubjectContext->ClientToken;
      if ( p_SubjectContext->ClientToken || (ClientToken = p_SubjectContext->PrimaryToken) != 0LL )
      {
        SepAdtIncorporatePerUserPolicy(v9, a2, a3, (_DWORD)ClientToken, (__int64)&v16);
        v10 = v16;
      }
      else
      {
        SepAuditFailed(3221225596LL);
      }
      if ( !a4 )
        SeReleaseSubjectContext(p_SubjectContext);
    }
    return v10;
  }
}
