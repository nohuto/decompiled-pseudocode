/*
 * XREFs of SeReportSecurityEventWithSubCategory @ 0x140091D90
 * Callers:
 *     SeReportSecurityEvent @ 0x1402FFC30 (SeReportSecurityEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1407F66E0 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     SepAuditingForSubCategory @ 0x140091FF0 (SepAuditingForSubCategory.c)
 *     SepAdtLogAuditRecord @ 0x140186F00 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SepAdtAuditThisEventWithContext @ 0x1405BCA50 (SepAdtAuditThisEventWithContext.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 */

NTSTATUS __stdcall SeReportSecurityEventWithSubCategory(
        ULONG Flags,
        PUNICODE_STRING SourceName,
        PSID UserSid,
        PSE_ADT_PARAMETER_ARRAY AuditParameters,
        ULONG AuditSubcategoryId)
{
  __int64 v7; // r8
  PUNICODE_STRING v8; // r14
  unsigned __int8 *v9; // rdi
  USHORT Type; // bx
  PACCESS_TOKEN PrimaryToken; // rcx
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // r9
  ULONG AuditId; // edx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  ULONG ParameterCount; // ebx
  int Length; // eax
  unsigned __int8 CurrentIrql; // [rsp+28h] [rbp-E0h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD Src[132]; // [rsp+58h] [rbp-B0h] BYREF

  v7 = 0LL;
  v8 = SourceName;
  v9 = 0LL;
  if ( Flags )
    return -1073741811;
  if ( !SourceName )
    return -1073741811;
  if ( !SourceName->Buffer )
    return -1073741811;
  if ( !SourceName->Length )
    return -1073741811;
  if ( !AuditParameters )
    return -1073741811;
  if ( AuditSubcategoryId - 100 > 0x3B )
    return -1073741811;
  if ( AuditParameters->ParameterCount > 0x1C )
    return -1073741811;
  Type = AuditParameters->Type;
  if ( (Type & 0x18) == 0 )
    return -1073741811;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    if ( UserSid )
    {
      v9 = (unsigned __int8 *)UserSid;
    }
    else
    {
      SeCaptureSubjectContext(&SubjectContext);
      v7 = 0LL;
      PrimaryToken = SubjectContext.PrimaryToken;
      Type = AuditParameters->Type;
      if ( SubjectContext.ClientToken )
        PrimaryToken = SubjectContext.ClientToken;
      v9 = (unsigned __int8 *)**((_QWORD **)PrimaryToken + 19);
    }
    p_SubjectContext = &SubjectContext;
    if ( v9 == UserSid )
      p_SubjectContext = 0LL;
    LOBYTE(v7) = Type == 16;
    LOBYTE(SourceName) = Type == 8;
    if ( !(unsigned __int8)SepAdtAuditThisEventWithContext(AuditSubcategoryId, SourceName, v7, p_SubjectContext) )
      goto LABEL_11;
    Type = AuditParameters->Type;
    goto LABEL_21;
  }
  LOBYTE(SourceName) = Type == 8;
  if ( (unsigned __int8)SepAuditingForSubCategory(AuditSubcategoryId, SourceName) )
  {
    v9 = (unsigned __int8 *)UserSid;
    if ( !UserSid )
      v9 = (unsigned __int8 *)SeLocalSystemSid;
LABEL_21:
    memset(Src, 0, 0x418uLL);
    AuditId = AuditParameters->AuditId;
    LODWORD(Src[0]) = AuditParameters->CategoryId;
    v15 = v9[1];
    HIDWORD(Src[0]) = AuditId;
    LOWORD(Src[2]) = AuditSubcategoryId;
    WORD1(Src[2]) = Type;
    LODWORD(Src[3]) = 4;
    HIDWORD(Src[3]) = 4 * v15 + 8;
    Src[10] = &SeSubsystemName;
    Src[6] = v9;
    Src[7] = 0x2000000001LL;
    LODWORD(Src[1]) = 2;
    if ( AuditSubcategoryId == 123 )
    {
      HIDWORD(Src[2]) |= 6u;
      Length = v8->Length;
      LODWORD(Src[11]) = 1;
      v16 = 3LL;
      HIDWORD(Src[11]) = Length + 16;
      Src[14] = v8;
      LODWORD(Src[1]) = 3;
    }
    else
    {
      v16 = 2LL;
      v17 = HIDWORD(Src[2]) | 8;
      HIDWORD(Src[2]) |= 8u;
      if ( AuditId < 0x5FF )
        HIDWORD(Src[2]) = v17 | 2;
    }
    ParameterCount = AuditParameters->ParameterCount;
    memmove(&Src[4 * v16 + 3], AuditParameters->Parameters, 32LL * ParameterCount);
    LODWORD(Src[1]) += ParameterCount;
    SepAdtLogAuditRecord(Src);
  }
LABEL_11:
  if ( CurrentIrql < 2u && v9 && v9 != UserSid )
    SeReleaseSubjectContext(&SubjectContext);
  return 0;
}
