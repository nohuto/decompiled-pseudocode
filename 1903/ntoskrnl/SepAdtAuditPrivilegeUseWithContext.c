/*
 * XREFs of SepAdtAuditPrivilegeUseWithContext @ 0x1406219B0
 * Callers:
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140621840 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1406218EC (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140687000 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1408DF360 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     SepAuditingEnabledForSubcategory @ 0x140087F20 (SepAuditingEnabledForSubcategory.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SepAdtCheckPrivilegeForSensitivity @ 0x14031DE80 (SepAdtCheckPrivilegeForSensitivity.c)
 *     SeCaptureSubjectContext @ 0x1405DDBB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     SepFilterPrivilegeAudits @ 0x1406D1C3C (SepFilterPrivilegeAudits.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x1408DE4AC (SepAdtIncorporatePerUserPolicy.c)
 *     SepAuditFailed @ 0x1408E2ED0 (SepAuditFailed.c)
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
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v9 = SepAuditingEnabledForSubcategory(130, a2, a3);
  v16 = v9;
  if ( dword_140436098 )
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
      SepAdtIncorporatePerUserPolicy(30, a2, a3, (_DWORD)ClientToken, (__int64)&v16);
      v9 = v16;
    }
    else
    {
      SepAuditFailed(3221225596LL);
    }
    if ( !a4 )
      SeReleaseSubjectContext(p_SubjectContext);
  }
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v10 = SepAuditingEnabledForSubcategory(131, a2, a3);
  v16 = v10;
  if ( dword_14043609C )
  {
    if ( a4 )
    {
      v14 = a4;
    }
    else
    {
      v14 = &SubjectContext;
      SeCaptureSubjectContext(&SubjectContext);
    }
    PrimaryToken = v14->ClientToken;
    if ( v14->ClientToken || (PrimaryToken = v14->PrimaryToken) != 0LL )
    {
      SepAdtIncorporatePerUserPolicy(31, a2, a3, (_DWORD)PrimaryToken, (__int64)&v16);
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
    *a5 = 130;
    return result;
  }
  if ( !v10 || !v18[0] )
    return 0;
  result = 1;
  *a5 = 131;
  return result;
}
