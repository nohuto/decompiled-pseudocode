/*
 * XREFs of SeAdtRegistryValueChangedAuditAlarm @ 0x14089D854
 * Callers:
 *     CmDeleteValueKey @ 0x1405B7634 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1405CCE28 (CmSetValueKey.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x140006800 (PsGetCurrentThreadProcess.c)
 *     ObpIsKernelHandle @ 0x140088EC8 (ObpIsKernelHandle.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     SepAdtLogAuditRecord @ 0x140186F00 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14060B3C0 (SeAuditingWithTokenForSubcategory.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 *     SepQueryNameString @ 0x14065ED54 (SepQueryNameString.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x140668384 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SeExamineSacl @ 0x1408A18F0 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x1408A4B4C (SeExamineGlobalSacl.c)
 *     SepAuditFailed @ 0x1408A59E0 (SepAuditFailed.c)
 *     AdtpBuildRegistryValueString @ 0x1408F0454 (AdtpBuildRegistryValueString.c)
 *     AdtpBuildReplacementString @ 0x1408F17F0 (AdtpBuildReplacementString.c)
 */

void __fastcall SeAdtRegistryValueChangedAuditAlarm(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        unsigned __int64 a6,
        unsigned int *a7,
        int a8)
{
  unsigned __int16 *v10; // rdi
  PACCESS_TOKEN ClientToken; // r15
  PACCESS_TOKEN PrimaryToken; // r13
  PACCESS_TOKEN v13; // rdx
  __int16 v14; // ax
  void *v15; // r8
  ACL *v16; // rdx
  ACL *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int16 v20; // ax
  void *v21; // r8
  ACL *v22; // rdx
  __int64 v23; // rax
  int AllocatedFullProcessImageName; // eax
  unsigned int v25; // ebx
  unsigned int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  _KPROCESS *CurrentThreadProcess; // rax
  struct _LIST_ENTRY *Flink; // rbx
  _QWORD *v32; // rax
  __int64 v33; // rax
  _QWORD **v34; // rax
  __int64 v35; // rcx
  int v36; // eax
  bool IsKernelHandle; // al
  unsigned __int64 v38; // r8
  unsigned int v39; // r9d
  int v40; // r10d
  unsigned int v41; // r11d
  __int64 v42; // rcx
  unsigned __int64 v43; // rcx
  int v44; // eax
  BOOLEAN GenerateAudit[8]; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING v46; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING v47; // [rsp+60h] [rbp-A8h] BYREF
  PVOID v48; // [rsp+70h] [rbp-98h] BYREF
  PVOID v49; // [rsp+78h] [rbp-90h] BYREF
  __int64 v50; // [rsp+80h] [rbp-88h] BYREF
  char *v51; // [rsp+88h] [rbp-80h]
  UNICODE_STRING v52; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING v53; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-58h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD Src[132]; // [rsp+E8h] [rbp-20h] BYREF
  char v57; // [rsp+508h] [rbp+400h] BYREF
  char v58; // [rsp+528h] [rbp+420h] BYREF
  char v59; // [rsp+548h] [rbp+440h] BYREF

  memset(Src, 0, 0x418uLL);
  v49 = 0LL;
  v10 = 0LL;
  GenerateAudit[1] = 0;
  GenerateAudit[2] = 0;
  v48 = 0LL;
  *(_QWORD *)&v52.Length = 0LL;
  v52.Buffer = 0LL;
  *(_QWORD *)&v53.Length = 0LL;
  v53.Buffer = 0LL;
  *(_QWORD *)&v46.Length = 0LL;
  v46.Buffer = 0LL;
  *(_QWORD *)&v47.Length = 0LL;
  v47.Buffer = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  ClientToken = SubjectContext.ClientToken;
  PrimaryToken = SubjectContext.PrimaryToken;
  v13 = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    v13 = SubjectContext.ClientToken;
  GenerateAudit[0] = SeAuditingWithTokenForSubcategory(118, (__int64)v13);
  if ( GenerateAudit[0] )
  {
    v14 = *(_WORD *)(a2 + 2);
    v15 = PrimaryToken;
    if ( ClientToken )
      v15 = ClientToken;
    if ( (v14 & 0x10) == 0 )
    {
      v16 = 0LL;
LABEL_8:
      v17 = 0LL;
      goto LABEL_18;
    }
    if ( v14 >= 0 )
    {
      v16 = *(ACL **)(a2 + 24);
    }
    else
    {
      v18 = *(unsigned int *)(a2 + 12);
      if ( (_DWORD)v18 )
        v16 = (ACL *)(a2 + v18);
      else
        v16 = 0LL;
    }
    if ( v14 >= 0 )
    {
      v17 = *(ACL **)(a2 + 24);
    }
    else
    {
      v19 = *(unsigned int *)(a2 + 12);
      if ( !(_DWORD)v19 )
        goto LABEL_8;
      v17 = (ACL *)(a2 + v19);
    }
LABEL_18:
    SeExamineSacl(v17, v16, v15, 2u, 1u, GenerateAudit, &GenerateAudit[3]);
    RtlInitUnicodeString(&DestinationString, L"Key");
    v20 = *(_WORD *)(a2 + 2);
    v21 = PrimaryToken;
    if ( ClientToken )
      v21 = ClientToken;
    if ( (v20 & 0x10) == 0 )
      goto LABEL_21;
    if ( v20 >= 0 )
    {
      v22 = *(ACL **)(a2 + 24);
    }
    else
    {
      v23 = *(unsigned int *)(a2 + 12);
      if ( !(_DWORD)v23 )
      {
LABEL_21:
        v22 = 0LL;
        goto LABEL_26;
      }
      v22 = (ACL *)(a2 + v23);
    }
LABEL_26:
    SeExamineGlobalSacl(&DestinationString, v22, v21, 2u, 1u, GenerateAudit, &GenerateAudit[3]);
    if ( !GenerateAudit[0] )
      goto LABEL_52;
    if ( a5 )
    {
      AllocatedFullProcessImageName = SepQueryNameString(a5, &v49);
      if ( AllocatedFullProcessImageName < 0 )
        goto LABEL_43;
      if ( v49 )
        v10 = (unsigned __int16 *)v49;
    }
    v25 = 4096;
    if ( a8 )
    {
      v26 = a7[1];
      v27 = 4096LL;
      if ( v26 < 0x1000 )
        v27 = v26;
      AllocatedFullProcessImageName = AdtpBuildRegistryValueString(
                                        *a7,
                                        v27,
                                        *((_QWORD *)a7 + 1),
                                        &v52,
                                        &GenerateAudit[1]);
      if ( AllocatedFullProcessImageName < 0 )
        goto LABEL_43;
      v28 = *a7 + 1872;
      *(_DWORD *)&v46.Length = 1703936;
      v46.Buffer = (wchar_t *)&v57;
      AllocatedFullProcessImageName = AdtpBuildReplacementString(v28, &v46);
      if ( AllocatedFullProcessImageName < 0 )
        goto LABEL_43;
    }
    else
    {
      RtlInitUnicodeString(&v52, L"-");
      RtlInitUnicodeString(&v46, L"-");
    }
    if ( a8 == 2 )
    {
      RtlInitUnicodeString(&v53, L"-");
      RtlInitUnicodeString(&v47, L"-");
    }
    else
    {
      if ( a7[5] < 0x1000 )
        v25 = a7[5];
      AllocatedFullProcessImageName = AdtpBuildRegistryValueString(
                                        a7[4],
                                        v25,
                                        *((_QWORD *)a7 + 3),
                                        &v53,
                                        &GenerateAudit[2]);
      if ( AllocatedFullProcessImageName < 0 )
        goto LABEL_43;
      v29 = a7[4] + 1872;
      *(_DWORD *)&v47.Length = 1703936;
      v47.Buffer = (wchar_t *)&v58;
      AllocatedFullProcessImageName = AdtpBuildReplacementString(v29, &v47);
      if ( AllocatedFullProcessImageName < 0 )
        goto LABEL_43;
    }
    LODWORD(v50) = 1703936;
    v51 = &v59;
    AllocatedFullProcessImageName = AdtpBuildReplacementString((unsigned int)(a8 + 1904), &v50);
    if ( AllocatedFullProcessImageName >= 0 )
    {
      CurrentThreadProcess = PsGetCurrentThreadProcess();
      Flink = CurrentThreadProcess[1].Header.WaitListHead.Flink;
      AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64)&v48);
      if ( AllocatedFullProcessImageName >= 0 )
      {
        LODWORD(Src[0]) = 3;
        v32 = PrimaryToken;
        LODWORD(Src[2]) = 524406;
        if ( ClientToken )
          v32 = ClientToken;
        HIDWORD(Src[0]) = 4657;
        LODWORD(Src[3]) = 4;
        Src[7] = 0x2000000001LL;
        v33 = v32[19];
        Src[11] = 0x800000005LL;
        HIDWORD(Src[3]) = 4 * *(unsigned __int8 *)(*(_QWORD *)v33 + 1LL) + 8;
        v34 = (_QWORD **)PrimaryToken;
        if ( ClientToken )
        {
          v34 = (_QWORD **)ClientToken;
          PrimaryToken = ClientToken;
        }
        v35 = *v34[19];
        Src[10] = &SeSubsystemName;
        Src[12] = *((_QWORD *)PrimaryToken + 3);
        Src[6] = v35;
        if ( v10 )
        {
          v36 = *v10;
          LODWORD(Src[15]) = 1;
          HIDWORD(Src[15]) = v36 + 16;
          Src[18] = v10;
        }
        HIDWORD(Src[19]) = *a4 + 16;
        LODWORD(Src[19]) = 1;
        Src[22] = a4;
        Src[23] = 0x80000000BLL;
        IsKernelHandle = ObpIsKernelHandle(a6, 0);
        v43 = v42 ^ 0xFFFFFFFF80000000uLL;
        LODWORD(Src[27]) = v40;
        LODWORD(Src[31]) = v40;
        if ( !IsKernelHandle )
          v43 = v38;
        LODWORD(Src[35]) = v40;
        LODWORD(Src[39]) = v40;
        HIDWORD(Src[27]) = (unsigned __int16)v50 + 16;
        Src[24] = v43 & 0xFFFFFFFFFFFFFFFCuLL;
        Src[30] = &v50;
        Src[54] = v48;
        HIDWORD(Src[31]) = v46.Length + 16;
        Src[34] = &v46;
        LODWORD(Src[43]) = v40;
        HIDWORD(Src[35]) = v52.Length + 16;
        Src[38] = &v52;
        Src[47] = __PAIR64__(v41, v39);
        HIDWORD(Src[39]) = v47.Length + 16;
        Src[42] = &v47;
        HIDWORD(Src[43]) = v53.Length + 16;
        Src[46] = &v53;
        v44 = *(unsigned __int16 *)v48 + 16;
        Src[48] = Flink;
        HIDWORD(Src[51]) = v44;
        LODWORD(Src[51]) = 2;
        LODWORD(Src[1]) = 13;
        SepAdtLogAuditRecord(Src);
        goto LABEL_44;
      }
    }
LABEL_43:
    SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
LABEL_44:
    if ( GenerateAudit[1] )
      ExFreePoolWithTag(v52.Buffer, 0);
    if ( GenerateAudit[2] )
      ExFreePoolWithTag(v53.Buffer, 0);
    if ( v48 )
      ExFreePoolWithTag(v48, 0);
    if ( v49 )
      ExFreePoolWithTag(v49, 0);
  }
LABEL_52:
  SeReleaseSubjectContext(&SubjectContext);
}
