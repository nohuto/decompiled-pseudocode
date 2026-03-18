/*
 * XREFs of SeOpenObjectAuditAlarmWithTransaction @ 0x14064D1D0
 * Callers:
 *     ObpCreateHandle @ 0x1405F3B50 (ObpCreateHandle.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14064D420 (CmpCheckOpenAccessOnKeyBody.c)
 *     SeOpenObjectAuditAlarm @ 0x1406BE9B0 (SeOpenObjectAuditAlarm.c)
 *     CmpCheckKeyBodyAccess @ 0x1406F85C8 (CmpCheckKeyBodyAccess.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140043EC0 (RtlCopyUnicodeString.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SeMaximumAuditMask @ 0x14031C4D0 (SeMaximumAuditMask.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SeCaptureSubjectContext @ 0x1405DE350 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 *     SepQueryNameString @ 0x140620310 (SepQueryNameString.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x1406234D0 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x1406235B0 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1408DCA48 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1408DD528 (SepAdtStagingEvent.c)
 *     SepQueryTypeString @ 0x1408DDA2C (SepQueryTypeString.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x1408DDCA0 (SepAdtClassifyObjectIntoSubCategory.c)
 *     SeExamineSacl @ 0x1408DE870 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x1408E1B2C (SeExamineGlobalSacl.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x1408E1C40 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepAuditFailed @ 0x1408E27D0 (SepAuditFailed.c)
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
  char *AuxData; // rsi
  unsigned __int8 *ClientToken; // rdi
  PACCESS_TOKEN PrimaryToken; // r14
  BOOLEAN v13; // r13
  unsigned __int8 v14; // r15
  int v15; // ebx
  char v16; // si
  SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // r11
  BOOLEAN v18; // bl
  unsigned __int8 v19; // r8
  unsigned __int8 v20; // r10
  unsigned __int8 v21; // al
  char v22; // al
  unsigned int *v23; // rcx
  __int64 *v24; // rdi
  unsigned __int16 v25; // bx
  BOOLEAN v26; // al
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // r13
  unsigned int v28; // edx
  __int16 v29; // r9
  __int16 v30; // r10
  int v31; // r8d
  ACCESS_MASK v32; // edi
  __int16 v33; // ax
  ACL *v34; // rdx
  ACL *v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int16 v38; // ax
  ACL *v39; // rdx
  __int64 v40; // rax
  __int16 v41; // ax
  char *v42; // rcx
  __int64 v43; // rax
  const UNICODE_STRING *v44; // rdx
  PVOID v45; // rcx
  int v46; // r15d
  PUNICODE_STRING v47; // r15
  UNICODE_STRING *v48; // r14
  int v49; // eax
  GUID *v50; // rax
  wchar_t *Buffer; // rcx
  wchar_t *PoolWithTag; // rax
  const UNICODE_STRING *v53; // rdx
  wchar_t *v54; // rcx
  wchar_t *v55; // rax
  int v56; // [rsp+50h] [rbp-D8h]
  BOOLEAN GenerateAudit; // [rsp+A8h] [rbp-80h] BYREF
  BOOLEAN GenerateAlarm[3]; // [rsp+A9h] [rbp-7Fh] BYREF
  unsigned __int16 v59; // [rsp+ACh] [rbp-7Ch] BYREF
  int v60; // [rsp+B0h] [rbp-78h]
  int v61; // [rsp+B4h] [rbp-74h]
  PCUNICODE_STRING SourceString; // [rsp+B8h] [rbp-70h]
  PCUNICODE_STRING v63; // [rsp+C0h] [rbp-68h] BYREF
  PVOID P; // [rsp+C8h] [rbp-60h] BYREF
  char *v65; // [rsp+D0h] [rbp-58h]
  UNICODE_STRING *v66; // [rsp+D8h] [rbp-50h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E0h] [rbp-48h] BYREF

  P = 0LL;
  v63 = 0LL;
  SourceString = 0LL;
  v66 = 0LL;
  v61 = 0;
  v60 = 999;
  v59 = 999;
  GenerateAudit = 0;
  GenerateAlarm[0] = 0;
  if ( !AccessMode )
    return;
  AuxData = (char *)AccessState->AuxData;
  ClientToken = (unsigned __int8 *)AccessState->SubjectSecurityContext.ClientToken;
  v65 = AuxData;
  if ( ClientToken )
    PrimaryToken = ClientToken;
  else
    PrimaryToken = AccessState->SubjectSecurityContext.PrimaryToken;
  v13 = AccessGranted;
  if ( !SecurityDescriptor )
    goto LABEL_20;
  v60 = 118;
  v59 = 118;
  v14 = AccessGranted == 0;
  v15 = (AccessGranted != 0 ? 3 : 0) | 0x30;
  if ( AccessGranted )
    v15 = AccessGranted != 0 ? 3 : 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !dword_140435EA8 )
    goto LABEL_32;
  if ( (v15 & dword_140435EA8) != 0 )
  {
LABEL_58:
    v60 = SepAdtClassifyObjectIntoSubCategory(Object, ObjectTypeName, v13, v14);
    v59 = v60;
    if ( (unsigned __int8)SepAdtAuditThisEventWithContext(
                            (unsigned __int16)v60,
                            v13,
                            v14,
                            &AccessState->SubjectSecurityContext) )
    {
      v32 = AccessState->RemainingDesiredAccess | AccessState->PreviouslyGrantedAccess;
      v33 = *((_WORD *)SecurityDescriptor + 1);
      if ( (v33 & 0x10) != 0 )
      {
        if ( v33 >= 0 )
        {
          v34 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
        }
        else
        {
          v36 = *((unsigned int *)SecurityDescriptor + 3);
          if ( (_DWORD)v36 )
            v34 = (ACL *)((char *)SecurityDescriptor + v36);
          else
            v34 = 0LL;
        }
        if ( v33 >= 0 )
        {
          v35 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
        }
        else
        {
          v37 = *((unsigned int *)SecurityDescriptor + 3);
          if ( (_DWORD)v37 )
            v35 = (ACL *)((char *)SecurityDescriptor + v37);
          else
            v35 = 0LL;
        }
      }
      else
      {
        v34 = 0LL;
        v35 = 0LL;
      }
      SeExamineSacl(v35, v34, PrimaryToken, v32, v13, &GenerateAudit, GenerateAlarm);
      v38 = *((_WORD *)SecurityDescriptor + 1);
      if ( (v38 & 0x10) != 0 )
      {
        if ( v38 >= 0 )
        {
          v39 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
        }
        else
        {
          v40 = *((unsigned int *)SecurityDescriptor + 3);
          if ( (_DWORD)v40 )
            v39 = (ACL *)((char *)SecurityDescriptor + v40);
          else
            v39 = 0LL;
        }
      }
      else
      {
        v39 = 0LL;
      }
      SeExamineGlobalSacl(ObjectTypeName, v39, PrimaryToken, v32, v13, &GenerateAudit, GenerateAlarm);
      v18 = GenerateAudit;
      if ( !GenerateAudit )
        goto LABEL_33;
      *GenerateOnClose = 1;
      if ( !v13 )
        goto LABEL_33;
      v41 = *((_WORD *)SecurityDescriptor + 1);
      if ( (v41 & 0x10) != 0 )
      {
        if ( v41 >= 0 )
        {
          v42 = (char *)*((_QWORD *)SecurityDescriptor + 3);
        }
        else
        {
          v43 = *((unsigned int *)SecurityDescriptor + 3);
          if ( (_DWORD)v43 )
            v42 = (char *)SecurityDescriptor + v43;
          else
            v42 = 0LL;
        }
      }
      else
      {
        v42 = 0LL;
      }
      SeMaximumAuditMask((__int64)v42, v32, (__int64)PrimaryToken, (_DWORD *)AuxData + 7);
      SeMaximumAuditMaskFromGlobalSacl(ObjectTypeName, v32, PrimaryToken, (PACCESS_MASK)AuxData + 7);
    }
LABEL_32:
    v18 = GenerateAudit;
LABEL_33:
    p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
    goto LABEL_11;
  }
  v16 = 0;
  p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
  if ( dword_140436068 )
  {
    if ( AccessState == (PACCESS_STATE)-32LL )
    {
      p_SubjectContext = &SubjectContext;
      SeCaptureSubjectContext(&SubjectContext);
      ClientToken = (unsigned __int8 *)SubjectContext.ClientToken;
      p_SubjectSecurityContext = 0LL;
    }
    else
    {
      p_SubjectContext = &AccessState->SubjectSecurityContext;
    }
    if ( ClientToken || (ClientToken = (unsigned __int8 *)p_SubjectContext->PrimaryToken) != 0LL )
    {
      if ( ClientToken[118] == 2 )
      {
        v28 = 16;
        v29 = 0;
        v30 = 0;
        do
        {
          v31 = ClientToken[((unsigned __int64)v28 >> 1) + 88] >> (4 * (v28 & 1));
          if ( (v31 & 1) != 0 )
          {
            if ( (v15 & 2) != 0 )
              goto LABEL_55;
            ++v29;
          }
          if ( (v31 & 4) != 0 )
          {
            if ( (v15 & 0x20) != 0 )
              goto LABEL_55;
            ++v30;
          }
          ++v28;
        }
        while ( v28 < 0x1E );
        if ( (v15 & 1) != 0 && v29 == 14 || (v15 & 0x10) != 0 && v30 == 14 )
LABEL_55:
          v16 = 1;
      }
    }
    else
    {
      SepAuditFailed(3221225596LL);
      p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
    }
    if ( !p_SubjectSecurityContext )
    {
      SeReleaseSubjectContext(p_SubjectContext);
      p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
    }
    v13 = AccessGranted;
    if ( v16 )
    {
      AuxData = v65;
      goto LABEL_58;
    }
  }
  v18 = GenerateAudit;
LABEL_11:
  v19 = AccessGranted == 0;
  if ( (AccessState->OriginalDesiredAccess & 0x2000000) != 0 )
    v19 = 1;
  v20 = 0;
  if ( (AccessState->OriginalDesiredAccess & 0x2000000) == 0 )
    v20 = v13;
  v21 = 0;
  while ( *((int *)AccessState->AuxData + v21 + 22) >= 0 )
  {
    if ( ++v21 >= 0x20u )
    {
      v22 = 0;
      goto LABEL_19;
    }
  }
  v22 = SepAdtAuditThisEventWithContext(0x81u, v20, v19, p_SubjectSecurityContext);
LABEL_19:
  AuxData = v65;
  v65[216] = v22;
  if ( v18 )
  {
    v25 = v60;
    v24 = (__int64 *)&AccessState->SubjectSecurityContext;
    goto LABEL_91;
  }
LABEL_20:
  if ( v13 && (v23 = *(unsigned int **)AuxData) != 0LL )
  {
    v24 = (__int64 *)&AccessState->SubjectSecurityContext;
    if ( *v23 )
    {
      if ( SepAdtAuditPrivilegeUseWithContext(v23, v13, 0, &AccessState->SubjectSecurityContext, &v59) )
      {
        v25 = v59;
        AccessState->AuditPrivileges = 1;
        goto LABEL_91;
      }
      v60 = v59;
    }
  }
  else
  {
    v24 = (__int64 *)&AccessState->SubjectSecurityContext;
  }
  v25 = v60;
  if ( GenerateAlarm[0] )
  {
LABEL_91:
    v26 = 1;
    goto LABEL_25;
  }
  v26 = 0;
LABEL_25:
  AccessState->GenerateAudit = v26;
  if ( !v26 && !AuxData[216] )
    return;
  v44 = AbsoluteObjectName;
  if ( AbsoluteObjectName && AbsoluteObjectName->Length )
    goto LABEL_99;
  v45 = Object;
  if ( Object )
  {
    v61 = SepQueryNameString((__int64)Object, &P);
    v46 = v61;
    if ( v61 < 0 )
    {
      v48 = (UNICODE_STRING *)v63;
      goto LABEL_130;
    }
    v44 = SourceString;
    if ( !P )
      goto LABEL_100;
    if ( *((_WORD *)P + 1) != (_WORD)SourceString )
      v44 = (const UNICODE_STRING *)P;
LABEL_99:
    SourceString = v44;
LABEL_100:
    v45 = Object;
    goto LABEL_101;
  }
  v44 = SourceString;
LABEL_101:
  if ( ObjectTypeName && ObjectTypeName->Length )
  {
    v47 = ObjectTypeName;
LABEL_112:
    v48 = (UNICODE_STRING *)v63;
LABEL_113:
    if ( v13 )
    {
      if ( v44 )
      {
        Buffer = AccessState->ObjectName.Buffer;
        if ( Buffer )
        {
          ExFreePoolWithTag(Buffer, 0);
          v44 = SourceString;
          *(_DWORD *)&AccessState->ObjectName.Length = 0;
        }
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v44->MaximumLength, 0x20206553u);
        AccessState->ObjectName.Buffer = PoolWithTag;
        if ( PoolWithTag )
        {
          v53 = SourceString;
          AccessState->ObjectName.MaximumLength = SourceString->MaximumLength;
          RtlCopyUnicodeString(&AccessState->ObjectName, v53);
        }
      }
      if ( v47 )
      {
        v54 = AccessState->ObjectTypeName.Buffer;
        if ( v54 )
        {
          ExFreePoolWithTag(v54, 0);
          *(_DWORD *)&AccessState->ObjectTypeName.Length = 0;
        }
        v55 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v47->MaximumLength, 0x20206553u);
        AccessState->ObjectTypeName.Buffer = v55;
        if ( v55 )
        {
          AccessState->ObjectTypeName.MaximumLength = v47->MaximumLength;
          RtlCopyUnicodeString(&AccessState->ObjectTypeName, v47);
        }
      }
      if ( TransactionId )
        *((GUID *)AuxData + 2) = *TransactionId;
    }
    else
    {
      v50 = TransactionId;
      if ( !TransactionId )
        v50 = (GUID *)(AuxData + 32);
      SepAdtOpenObjectAuditAlarm(
        v25,
        (int)&SeSubsystemName,
        0,
        (int)v47,
        (__int64)v44,
        SecurityDescriptor,
        *v24,
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
        (__int64)v50,
        (__int64)AccessState);
      LOBYTE(v56) = 0;
      SepAdtStagingEvent(
        v25,
        SourceString,
        0LL,
        v47,
        SourceString,
        *v24,
        AccessState->SubjectSecurityContext.PrimaryToken,
        AccessState->OriginalDesiredAccess,
        AccessState->PreviouslyGrantedAccess,
        v56,
        0LL,
        AccessState);
    }
    v46 = v61;
    goto LABEL_130;
  }
  if ( !v45 )
  {
    v47 = v66;
    goto LABEL_112;
  }
  v49 = SepQueryTypeString(v45, &v63);
  v48 = (UNICODE_STRING *)v63;
  v46 = v49;
  v61 = v49;
  if ( v49 >= 0 )
  {
    v47 = v66;
    v44 = SourceString;
    if ( v63 )
      v47 = (PUNICODE_STRING)v63;
    goto LABEL_113;
  }
LABEL_130:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v48 )
    ExFreePoolWithTag(v48, 0);
  if ( v46 < 0 )
    SepAuditFailed((unsigned int)v46);
}
