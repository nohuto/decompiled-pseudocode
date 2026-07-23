/*
 * XREFs of SepAdtAuditPrivilegeUseWithContext @ 0x1405BC990
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140597850 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1405BC82C (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1405BC8D8 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1408A1CE0 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     SepAuditingEnabledForSubcategory @ 0x1400131C0 (SepAuditingEnabledForSubcategory.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SepAdtCheckPrivilegeForSensitivity @ 0x1402FFE20 (SepAdtCheckPrivilegeForSensitivity.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 *     SepFilterPrivilegeAudits @ 0x1406AF7E0 (SepFilterPrivilegeAudits.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x1408A0F40 (SepAdtIncorporatePerUserPolicy.c)
 *     SepAuditFailed @ 0x1408A59E0 (SepAuditFailed.c)
 */

char __fastcall SepAdtAuditPrivilegeUseWithContext(
        unsigned int *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        struct _SECURITY_SUBJECT_CONTEXT *a4,
        _WORD *a5)
{
  bool v9; // di
  bool v10; // bl
  char result; // al
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rbx
  PACCESS_TOKEN ClientToken; // r9
  struct _SECURITY_SUBJECT_CONTEXT *v14; // r15
  PACCESS_TOKEN PrimaryToken; // r9
  bool v16; // [rsp+30h] [rbp-58h] BYREF
  char v17; // [rsp+31h] [rbp-57h] BYREF
  _BYTE v18[6]; // [rsp+32h] [rbp-56h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+38h] [rbp-50h] BYREF

  v17 = 0;
  v18[0] = 0;
  v9 = SepAuditingEnabledForSubcategory(131, a2, a3);
  v16 = v9;
  if ( dword_14040E99C )
  {
    if ( a4 )
    {
      p_SubjectContext = a4;
    }
    else
    {
      p_SubjectContext = &SubjectContext;
      memset(&SubjectContext, 0, sizeof(SubjectContext));
      SeCaptureSubjectContext(&SubjectContext);
    }
    ClientToken = p_SubjectContext->ClientToken;
    if ( p_SubjectContext->ClientToken || (ClientToken = p_SubjectContext->PrimaryToken) != 0LL )
    {
      SepAdtIncorporatePerUserPolicy(31, a2, a3, (_DWORD)ClientToken, (__int64)&v16);
      v9 = v16;
    }
    else
    {
      SepAuditFailed(3221225596LL);
    }
    if ( !a4 )
      SeReleaseSubjectContext(p_SubjectContext);
  }
  v10 = SepAuditingEnabledForSubcategory(132, a2, a3);
  v16 = v10;
  if ( dword_14040E9A0 )
  {
    if ( a4 )
    {
      v14 = a4;
    }
    else
    {
      v14 = &SubjectContext;
      memset(&SubjectContext, 0, sizeof(SubjectContext));
      SeCaptureSubjectContext(&SubjectContext);
    }
    PrimaryToken = v14->ClientToken;
    if ( v14->ClientToken || (PrimaryToken = v14->PrimaryToken) != 0LL )
    {
      SepAdtIncorporatePerUserPolicy(32, a2, a3, (_DWORD)PrimaryToken, (__int64)&v16);
      v10 = v16;
    }
    else
    {
      SepAuditFailed(3221225596LL);
    }
    if ( !a4 )
      SeReleaseSubjectContext(v14);
  }
  if ( !v9 && !v10 || !(unsigned __int8)SepFilterPrivilegeAudits(0LL, a1) )
    return 0;
  if ( v9 && v10 && a1 && *a1 || (SepAdtCheckPrivilegeForSensitivity(a1, &v17, v18), v9) && v17 )
  {
    result = 1;
    *a5 = 131;
    return result;
  }
  if ( !v10 || !v18[0] )
    return 0;
  result = 1;
  *a5 = 132;
  return result;
}
