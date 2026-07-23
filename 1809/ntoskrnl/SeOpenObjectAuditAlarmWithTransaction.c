/*
 * XREFs of SeOpenObjectAuditAlarmWithTransaction @ 0x140597850
 * Callers:
 *     SeOpenObjectAuditAlarm @ 0x1405971B0 (SeOpenObjectAuditAlarm.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140597210 (CmpCheckOpenAccessOnKeyBody.c)
 *     ObpCreateHandle @ 0x1405E22B0 (ObpCreateHandle.c)
 *     CmpCheckKeyBodyAccess @ 0x1407F5AC0 (CmpCheckKeyBodyAccess.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1400B97D0 (RtlCopyUnicodeString.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SeMaximumAuditMask @ 0x1402FEA60 (SeMaximumAuditMask.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x1405BC990 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x1405BCA50 (SepAdtAuditThisEventWithContext.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 *     SepQueryNameString @ 0x14065ED54 (SepQueryNameString.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14089F93C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1408A06C8 (SepAdtStagingEvent.c)
 *     SepQueryTypeString @ 0x1408A0BD8 (SepQueryTypeString.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x1408A0E34 (SepAdtClassifyObjectIntoSubCategory.c)
 *     SeExamineSacl @ 0x1408A18F0 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x1408A4B4C (SeExamineGlobalSacl.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x1408A4C60 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepAuditFailed @ 0x1408A59E0 (SepAuditFailed.c)
 */

void __stdcall SeOpenObjectAuditAlarmWithTransaction(
        PUNICODE_STRING ObjectTypeName,
        PVOID Object,
        PUNICODE_STRING AbsoluteObjectName,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PACCESS_STATE AccessState,
        BOOLEAN ObjectCreated,
        BOOLEAN AccessGranted,
        KPROCESSOR_MODE AccessMode,
        GUID *TransactionId,
        PBOOLEAN GenerateOnClose)
{
  unsigned __int16 v10; // di
  PSECURITY_DESCRIPTOR v11; // r11
  PUNICODE_STRING v12; // r10
  UNICODE_STRING *v13; // r14
  _BYTE *ClientToken; // rdx
  __int64 *p_SubjectSecurityContext; // rbx
  char *AuxData; // r12
  PACCESS_TOKEN PrimaryToken; // rsi
  BOOLEAN v18; // r15
  bool v19; // r14
  int v20; // ebx
  char v21; // di
  BOOLEAN v22; // bl
  SECURITY_SUBJECT_CONTEXT *v23; // r9
  __int64 v24; // r8
  BOOLEAN v25; // r10
  unsigned __int8 v26; // al
  char v27; // al
  _DWORD *v28; // rcx
  BOOLEAN v29; // al
  char v30; // al
  SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // r15
  __int16 v32; // r10
  __int16 v33; // r11
  unsigned int i; // r8d
  int v35; // r9d
  ACCESS_MASK v36; // edi
  __int16 v37; // ax
  ACL *v38; // rdx
  ACL *v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int16 v42; // ax
  ACL *v43; // rdx
  __int64 v44; // rax
  __int16 v45; // ax
  char *v46; // rcx
  __int64 v47; // rax
  const UNICODE_STRING *v48; // rdx
  PVOID v49; // rcx
  int v50; // esi
  PUNICODE_STRING v51; // rsi
  int v52; // eax
  GUID *v53; // rax
  wchar_t *Buffer; // rcx
  wchar_t *PoolWithTag; // rax
  const UNICODE_STRING *v56; // rdx
  wchar_t *v57; // rcx
  wchar_t *v58; // rax
  int v59; // [rsp+50h] [rbp-D8h]
  BOOLEAN GenerateAudit; // [rsp+A8h] [rbp-80h] BYREF
  BOOLEAN GenerateAlarm[3]; // [rsp+A9h] [rbp-7Fh] BYREF
  __int16 v62; // [rsp+ACh] [rbp-7Ch] BYREF
  int v63; // [rsp+B0h] [rbp-78h]
  PCUNICODE_STRING SourceString; // [rsp+B8h] [rbp-70h]
  UNICODE_STRING *v65; // [rsp+C0h] [rbp-68h] BYREF
  PVOID P; // [rsp+C8h] [rbp-60h] BYREF
  UNICODE_STRING *v67; // [rsp+D0h] [rbp-58h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D8h] [rbp-50h] BYREF
  unsigned __int16 AccessModea[4]; // [rsp+180h] [rbp+58h]

  v10 = 999;
  v11 = SecurityDescriptor;
  v12 = ObjectTypeName;
  GenerateAudit = 0;
  v13 = 0LL;
  GenerateAlarm[0] = 0;
  P = 0LL;
  v65 = 0LL;
  SourceString = 0LL;
  v67 = 0LL;
  v63 = 0;
  v62 = 999;
  if ( !AccessMode )
    return;
  ClientToken = AccessState->SubjectSecurityContext.ClientToken;
  p_SubjectSecurityContext = (__int64 *)&AccessState->SubjectSecurityContext;
  AuxData = (char *)AccessState->AuxData;
  if ( ClientToken )
    PrimaryToken = AccessState->SubjectSecurityContext.ClientToken;
  else
    PrimaryToken = AccessState->SubjectSecurityContext.PrimaryToken;
  v18 = AccessGranted;
  if ( !SecurityDescriptor )
    goto LABEL_22;
  v10 = 119;
  v62 = 119;
  v19 = AccessGranted == 0;
  v20 = (AccessGranted != 0 ? 3 : 0) | 0x30;
  if ( AccessGranted )
    v20 = AccessGranted != 0 ? 3 : 0;
  if ( !dword_14040E868 )
  {
    v22 = GenerateAudit;
    goto LABEL_11;
  }
  if ( (v20 & dword_14040E868) != 0 )
  {
LABEL_58:
    v10 = SepAdtClassifyObjectIntoSubCategory(Object, v12, v18, v19);
    v62 = v10;
    AccessModea[0] = v10;
    if ( (unsigned __int8)SepAdtAuditThisEventWithContext(v10, v18, v19, &AccessState->SubjectSecurityContext) )
    {
      v36 = AccessState->RemainingDesiredAccess | AccessState->PreviouslyGrantedAccess;
      v37 = *((_WORD *)SecurityDescriptor + 1);
      if ( (v37 & 0x10) != 0 )
      {
        if ( v37 >= 0 )
        {
          v38 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
        }
        else
        {
          v40 = *((unsigned int *)SecurityDescriptor + 3);
          if ( (_DWORD)v40 )
            v38 = (ACL *)((char *)SecurityDescriptor + v40);
          else
            v38 = 0LL;
        }
        if ( v37 >= 0 )
        {
          v39 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
        }
        else
        {
          v41 = *((unsigned int *)SecurityDescriptor + 3);
          if ( (_DWORD)v41 )
            v39 = (ACL *)((char *)SecurityDescriptor + v41);
          else
            v39 = 0LL;
        }
      }
      else
      {
        v38 = 0LL;
        v39 = 0LL;
      }
      SeExamineSacl(v39, v38, PrimaryToken, v36, v18, &GenerateAudit, GenerateAlarm);
      v42 = *((_WORD *)SecurityDescriptor + 1);
      if ( (v42 & 0x10) != 0 )
      {
        if ( v42 >= 0 )
        {
          v43 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
        }
        else
        {
          v44 = *((unsigned int *)SecurityDescriptor + 3);
          if ( (_DWORD)v44 )
            v43 = (ACL *)((char *)SecurityDescriptor + v44);
          else
            v43 = 0LL;
        }
      }
      else
      {
        v43 = 0LL;
      }
      SeExamineGlobalSacl(ObjectTypeName, v43, PrimaryToken, v36, v18, &GenerateAudit, GenerateAlarm);
      v22 = GenerateAudit;
      if ( !GenerateAudit || (*GenerateOnClose = 1, !v18) )
      {
        v10 = AccessModea[0];
        goto LABEL_89;
      }
      v45 = *((_WORD *)SecurityDescriptor + 1);
      if ( (v45 & 0x10) != 0 )
      {
        if ( v45 >= 0 )
        {
          v46 = (char *)*((_QWORD *)SecurityDescriptor + 3);
        }
        else
        {
          v47 = *((unsigned int *)SecurityDescriptor + 3);
          if ( (_DWORD)v47 )
            v46 = (char *)SecurityDescriptor + v47;
          else
            v46 = 0LL;
        }
      }
      else
      {
        v46 = 0LL;
      }
      SeMaximumAuditMask((__int64)v46, v36, (__int64)PrimaryToken, (_DWORD *)AuxData + 7);
      SeMaximumAuditMaskFromGlobalSacl(ObjectTypeName, v36, PrimaryToken, (PACCESS_MASK)AuxData + 7);
      v10 = AccessModea[0];
    }
    v22 = GenerateAudit;
LABEL_89:
    v11 = SecurityDescriptor;
    goto LABEL_11;
  }
  v21 = 0;
  if ( !dword_14040EA28 )
  {
    v22 = GenerateAudit;
    v10 = 119;
LABEL_11:
    v23 = &AccessState->SubjectSecurityContext;
    goto LABEL_12;
  }
  p_SubjectContext = &AccessState->SubjectSecurityContext;
  if ( AccessState == (PACCESS_STATE)-32LL )
  {
    p_SubjectContext = &SubjectContext;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContext(&SubjectContext);
    ClientToken = SubjectContext.ClientToken;
    v11 = SecurityDescriptor;
    v12 = ObjectTypeName;
  }
  if ( ClientToken || (ClientToken = p_SubjectContext->PrimaryToken) != 0LL )
  {
    if ( ClientToken[119] != 2 )
      goto LABEL_56;
    v32 = 0;
    v33 = 0;
    for ( i = 17; i < 0x1F; ++i )
    {
      v35 = (unsigned __int8)ClientToken[((unsigned __int64)i >> 1) + 88] >> (4 * (i & 1));
      if ( (v35 & 1) != 0 )
      {
        if ( (v20 & 2) != 0 )
          goto LABEL_54;
        ++v32;
      }
      if ( (v35 & 4) != 0 )
      {
        if ( (v20 & 0x20) != 0 )
          goto LABEL_54;
        ++v33;
      }
    }
    if ( (v20 & 1) != 0 && v32 == 14 || (v20 & 0x10) != 0 && v33 == 14 )
LABEL_54:
      v21 = 1;
  }
  else
  {
    SepAuditFailed(3221225596LL);
  }
  v12 = ObjectTypeName;
  v11 = SecurityDescriptor;
LABEL_56:
  v23 = &AccessState->SubjectSecurityContext;
  if ( AccessState == (PACCESS_STATE)-32LL )
  {
    SeReleaseSubjectContext(p_SubjectContext);
    v11 = SecurityDescriptor;
    v23 = 0LL;
    v12 = ObjectTypeName;
  }
  v18 = AccessGranted;
  if ( v21 )
    goto LABEL_58;
  v22 = GenerateAudit;
  v10 = 119;
LABEL_12:
  v24 = v19;
  if ( (AccessState->OriginalDesiredAccess & 0x2000000) != 0 )
    v24 = 1LL;
  v25 = 0;
  if ( (AccessState->OriginalDesiredAccess & 0x2000000) == 0 )
    v25 = v18;
  v26 = 0;
  while ( *((int *)AccessState->AuxData + v26 + 22) >= 0 )
  {
    if ( ++v26 >= 0x20u )
    {
      v27 = 0;
      goto LABEL_20;
    }
  }
  v27 = SepAdtAuditThisEventWithContext(130LL, v25, v24, v23);
  v11 = SecurityDescriptor;
LABEL_20:
  AuxData[216] = v27;
  if ( v22 )
    goto LABEL_92;
  v13 = v65;
  p_SubjectSecurityContext = (__int64 *)&AccessState->SubjectSecurityContext;
LABEL_22:
  if ( v18 )
  {
    v28 = *(_DWORD **)AuxData;
    if ( *(_QWORD *)AuxData )
    {
      if ( *v28 )
      {
        v30 = SepAdtAuditPrivilegeUseWithContext((_DWORD)v28, v18, 0, (_DWORD)p_SubjectSecurityContext, (__int64)&v62);
        v10 = v62;
        v11 = SecurityDescriptor;
        if ( v30 )
        {
          AccessState->AuditPrivileges = 1;
          goto LABEL_92;
        }
      }
    }
  }
  if ( GenerateAlarm[0] )
  {
LABEL_92:
    v13 = v65;
    p_SubjectSecurityContext = (__int64 *)&AccessState->SubjectSecurityContext;
    v29 = 1;
    goto LABEL_27;
  }
  v29 = 0;
LABEL_27:
  AccessState->GenerateAudit = v29;
  if ( !v29 && !AuxData[216] )
    return;
  v48 = AbsoluteObjectName;
  if ( AbsoluteObjectName && AbsoluteObjectName->Length )
  {
    SourceString = AbsoluteObjectName;
LABEL_96:
    v49 = Object;
    goto LABEL_104;
  }
  v49 = Object;
  if ( Object )
  {
    v63 = SepQueryNameString(Object, &P);
    v50 = v63;
    if ( v63 < 0 )
      goto LABEL_130;
    v48 = SourceString;
    v11 = SecurityDescriptor;
    if ( P )
    {
      if ( *((_WORD *)P + 1) != (_WORD)SourceString )
        v48 = (const UNICODE_STRING *)P;
      v49 = Object;
      SourceString = v48;
      goto LABEL_104;
    }
    goto LABEL_96;
  }
  v48 = SourceString;
LABEL_104:
  if ( ObjectTypeName && ObjectTypeName->Length )
  {
    v51 = ObjectTypeName;
LABEL_113:
    if ( v18 )
    {
      if ( v48 )
      {
        Buffer = AccessState->ObjectName.Buffer;
        if ( Buffer )
        {
          ExFreePoolWithTag(Buffer, 0);
          v48 = SourceString;
          *(_DWORD *)&AccessState->ObjectName.Length = 0;
        }
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v48->MaximumLength, 0x20206553u);
        AccessState->ObjectName.Buffer = PoolWithTag;
        if ( PoolWithTag )
        {
          v56 = SourceString;
          AccessState->ObjectName.MaximumLength = SourceString->MaximumLength;
          RtlCopyUnicodeString(&AccessState->ObjectName, v56);
        }
      }
      if ( v51 )
      {
        v57 = AccessState->ObjectTypeName.Buffer;
        if ( v57 )
        {
          ExFreePoolWithTag(v57, 0);
          *(_DWORD *)&AccessState->ObjectTypeName.Length = 0;
        }
        v58 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v51->MaximumLength, 0x20206553u);
        AccessState->ObjectTypeName.Buffer = v58;
        if ( v58 )
        {
          AccessState->ObjectTypeName.MaximumLength = v51->MaximumLength;
          RtlCopyUnicodeString(&AccessState->ObjectTypeName, v51);
        }
      }
      if ( TransactionId )
        *((GUID *)AuxData + 2) = *TransactionId;
    }
    else
    {
      v53 = TransactionId;
      if ( !TransactionId )
        v53 = (GUID *)(AuxData + 32);
      SepAdtOpenObjectAuditAlarm(
        v10,
        (int)&SeSubsystemName,
        0,
        (int)v51,
        (__int64)v48,
        v11,
        *p_SubjectSecurityContext,
        (__int64)AccessState->SubjectSecurityContext.PrimaryToken,
        AccessState->OriginalDesiredAccess,
        AccessState->PreviouslyGrantedAccess,
        *(_QWORD *)AuxData,
        0,
        (__int64)AccessState->SubjectSecurityContext.ProcessAuditId,
        2,
        0LL,
        0,
        0LL,
        (__int64)v53,
        (__int64)AccessState);
      LOBYTE(v59) = 0;
      SepAdtStagingEvent(
        v10,
        SourceString,
        0LL,
        v51,
        SourceString,
        *p_SubjectSecurityContext,
        AccessState->SubjectSecurityContext.PrimaryToken,
        AccessState->OriginalDesiredAccess,
        AccessState->PreviouslyGrantedAccess,
        v59,
        0LL,
        AccessState);
    }
    v50 = v63;
    goto LABEL_130;
  }
  if ( !v49 )
  {
    v51 = v67;
    goto LABEL_113;
  }
  v52 = SepQueryTypeString(v49, &v65);
  v13 = v65;
  v50 = v52;
  v63 = v52;
  if ( v52 >= 0 )
  {
    v51 = v67;
    v11 = SecurityDescriptor;
    v48 = SourceString;
    if ( v65 )
      v51 = v65;
    goto LABEL_113;
  }
LABEL_130:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  if ( v50 < 0 )
    SepAuditFailed((unsigned int)v50);
}
