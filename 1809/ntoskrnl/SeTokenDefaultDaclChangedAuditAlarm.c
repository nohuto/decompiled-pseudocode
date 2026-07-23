/*
 * XREFs of SeTokenDefaultDaclChangedAuditAlarm @ 0x1405BD394
 * Callers:
 *     NtSetInformationToken @ 0x1405BEAA0 (NtSetInformationToken.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SepAdtAuditThisEventWithContext @ 0x1405BCA50 (SepAdtAuditThisEventWithContext.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405CBDE0 (RtlSetDaclSecurityDescriptor.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     SeCaptureSecurityDescriptor @ 0x140631CE0 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x140632870 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 *     RtlCreateSecurityDescriptor @ 0x140651050 (RtlCreateSecurityDescriptor.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1408A0430 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepQueryTypeString @ 0x1408A0BD8 (SepQueryTypeString.c)
 *     SepIsAclEqual @ 0x1408A4DFC (SepIsAclEqual.c)
 *     SepAuditFailed @ 0x1408A59E0 (SepAuditFailed.c)
 */

void __fastcall SeTokenDefaultDaclChangedAuditAlarm(__int64 a1, __int64 a2, __int64 a3, ACL *a4, PACL Dacl)
{
  PVOID v5; // rsi
  int v8; // r15d
  __int64 v9; // rdi
  __int64 v10; // r14
  _QWORD **PrimaryToken; // r13
  int v12; // eax
  __int64 v13; // r8
  NTSTATUS v14; // ebx
  int v15; // r9d
  int v16; // r9d
  int v17; // eax
  PVOID P; // [rsp+58h] [rbp-61h] BYREF
  __int64 v19; // [rsp+60h] [rbp-59h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp-51h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+88h] [rbp-31h] BYREF
  _BYTE v22[88]; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v23; // [rsp+118h] [rbp+5Fh] BYREF
  __int64 v24; // [rsp+128h] [rbp+6Fh]

  v24 = a3;
  v5 = 0LL;
  P = 0LL;
  v8 = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(v22, 0, 0x28uLL);
  v9 = 0LL;
  v10 = 0LL;
  v23 = 0LL;
  v19 = 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = (_QWORD **)SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = (_QWORD **)SubjectContext.ClientToken;
  if ( PrimaryToken )
  {
    if ( !(unsigned __int8)SepAdtAuditThisEventWithContext(142LL, 1u, 0, &SubjectContext)
      || (unsigned __int8)SepIsAclEqual(a4, Dacl) )
    {
LABEL_5:
      SeReleaseSubjectContext(&SubjectContext);
      return;
    }
    if ( a2 )
    {
      v12 = SepQueryTypeString(a2, &P);
      v5 = P;
      v14 = v12;
      if ( v12 < 0 )
      {
LABEL_20:
        if ( v5 )
          ExFreePoolWithTag(v5, 0);
        if ( v9 )
        {
          LOBYTE(v13) = 1;
          SeReleaseSecurityDescriptor(v9, 0LL, v13);
        }
        if ( v10 )
        {
          LOBYTE(v13) = 1;
          SeReleaseSecurityDescriptor(v10, 0LL, v13);
        }
        if ( v14 < 0 )
          SepAuditFailed((unsigned int)v14);
        goto LABEL_5;
      }
      if ( P )
        v8 = (int)P;
    }
    v14 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    if ( v14 >= 0 )
    {
      v14 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, a4, 0);
      if ( v14 >= 0 )
      {
        LOBYTE(v15) = 1;
        v14 = SeCaptureSecurityDescriptor((unsigned int)SecurityDescriptor, 0, 1, v15, (__int64)&v23);
        if ( v14 < 0
          || (v14 = RtlCreateSecurityDescriptor(v22, 1u), v14 < 0)
          || (v14 = RtlSetDaclSecurityDescriptor(v22, 1u, Dacl, 0), v14 < 0) )
        {
          v9 = v23;
        }
        else
        {
          LOBYTE(v16) = 1;
          v17 = SeCaptureSecurityDescriptor((unsigned int)v22, 0, 1, v16, (__int64)&v19);
          v10 = v19;
          v14 = v17;
          v9 = v23;
          if ( v17 >= 0 )
            SepAdtSecurityDescriptorChangedAuditAlarm(
              (unsigned int)&SubjectContext,
              (unsigned int)&SeSubsystemName,
              v8,
              0,
              v24,
              *PrimaryToken[19],
              v23,
              4,
              v19);
        }
      }
    }
    goto LABEL_20;
  }
  SepAuditFailed(3221225596LL);
}
