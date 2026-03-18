/*
 * XREFs of SeTokenDefaultDaclChangedAuditAlarm @ 0x14061FFDC
 * Callers:
 *     NtSetInformationToken @ 0x140673100 (NtSetInformationToken.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1405B4998 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D5A50 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405D5A90 (RtlSetDaclSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x1405DCB50 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x1405DDAA0 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x1405DDBB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x140621A90 (SepAdtAuditThisEventWithContext.c)
 *     SepQueryTypeString @ 0x1408DE12C (SepQueryTypeString.c)
 *     SepAuditFailed @ 0x1408E2ED0 (SepAuditFailed.c)
 *     SepIsAclEqual @ 0x1408E2F9C (SepIsAclEqual.c)
 */

void __fastcall SeTokenDefaultDaclChangedAuditAlarm(__int64 a1, __int64 a2, unsigned __int64 a3, ACL *a4, PACL Dacl)
{
  PVOID v7; // rsi
  unsigned __int16 *v8; // r15
  void *v9; // rdi
  void *v10; // r14
  __int64 v11; // rdx
  _QWORD **PrimaryToken; // r13
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  PVOID P; // [rsp+58h] [rbp-61h] BYREF
  void *v17; // [rsp+60h] [rbp-59h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp-51h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+88h] [rbp-31h] BYREF
  _BYTE v20[88]; // [rsp+B0h] [rbp-9h] BYREF
  void *v21; // [rsp+118h] [rbp+5Fh] BYREF
  unsigned __int64 v22; // [rsp+128h] [rbp+6Fh]

  v22 = a3;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v7 = 0LL;
  P = 0LL;
  v8 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(v20, 0, 0x28uLL);
  v9 = 0LL;
  v10 = 0LL;
  v21 = 0LL;
  v17 = 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = (_QWORD **)SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = (_QWORD **)SubjectContext.ClientToken;
  if ( PrimaryToken )
  {
    LOBYTE(v11) = 1;
    if ( !(unsigned __int8)SepAdtAuditThisEventWithContext(141LL, v11, 0LL, &SubjectContext)
      || (unsigned __int8)SepIsAclEqual(a4, Dacl) )
    {
LABEL_5:
      SeReleaseSubjectContext(&SubjectContext);
      return;
    }
    if ( a2 )
    {
      v13 = SepQueryTypeString(a2, &P);
      v7 = P;
      v14 = v13;
      if ( v13 < 0 )
      {
LABEL_20:
        if ( v7 )
          ExFreePoolWithTag(v7, 0);
        if ( v9 )
          SeReleaseSecurityDescriptor(v9, 0, 1);
        if ( v10 )
          SeReleaseSecurityDescriptor(v10, 0, 1);
        if ( v14 < 0 )
          SepAuditFailed((unsigned int)v14);
        goto LABEL_5;
      }
      if ( P )
        v8 = (unsigned __int16 *)P;
    }
    v14 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    if ( v14 >= 0 )
    {
      v14 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, a4, 0);
      if ( v14 >= 0 )
      {
        v14 = SeCaptureSecurityDescriptor((__int64)SecurityDescriptor, 0, PagedPool, 1, &v21);
        if ( v14 < 0
          || (v14 = RtlCreateSecurityDescriptor(v20, 1u), v14 < 0)
          || (v14 = RtlSetDaclSecurityDescriptor(v20, 1u, Dacl, 0), v14 < 0) )
        {
          v9 = v21;
        }
        else
        {
          v15 = SeCaptureSecurityDescriptor((__int64)v20, 0, PagedPool, 1, &v17);
          v10 = v17;
          v14 = v15;
          v9 = v21;
          if ( v15 >= 0 )
            SepAdtSecurityDescriptorChangedAuditAlarm(
              (__int64 *)&SubjectContext,
              (unsigned __int16 *)&SeSubsystemName,
              v8,
              0LL,
              v22,
              *PrimaryToken[19],
              (__int64)v21,
              4u,
              (__int64)v17);
        }
      }
    }
    goto LABEL_20;
  }
  SepAuditFailed(3221225596LL);
}
