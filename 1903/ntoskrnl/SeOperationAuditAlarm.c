/*
 * XREFs of SeOperationAuditAlarm @ 0x1408DC494
 * Callers:
 *     ObpAuditObjectAccess @ 0x14089DE24 (ObpAuditObjectAccess.c)
 * Callees:
 *     ObpIsKernelHandle @ 0x1400828B0 (ObpIsKernelHandle.c)
 *     PsGetCurrentThreadProcess @ 0x14012AA90 (PsGetCurrentThreadProcess.c)
 *     SepAdtLogAuditRecord @ 0x14012CBAC (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x14031DD24 (SepCheckAndCopySelfRelativeSD.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SepSecurityDescriptorStrictLength @ 0x1405B4C04 (SepSecurityDescriptorStrictLength.c)
 *     SeCaptureSubjectContext @ 0x1405DDBB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     SepQueryNameString @ 0x14061E7F4 (SepQueryNameString.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x140658AA4 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x1408DE3A0 (SepAdtClassifyObjectIntoSubCategory.c)
 *     SepAuditFailed @ 0x1408E2ED0 (SepAuditFailed.c)
 */

void __fastcall SeOperationAuditAlarm(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int16 *a4,
        unsigned int a5,
        int a6,
        void *a7)
{
  PVOID v7; // rbx
  __int64 v11; // r8
  unsigned __int16 v12; // r14
  _KPROCESS *CurrentThreadProcess; // rax
  struct _LIST_ENTRY *Flink; // r13
  int AllocatedFullProcessImageName; // esi
  _QWORD **PrimaryToken; // rax
  int v17; // eax
  __int64 v18; // rax
  int v19; // eax
  int v20; // eax
  unsigned int v21; // r8d
  unsigned int v22; // r9d
  int v23; // r10d
  unsigned int v24; // r11d
  int v25; // eax
  int v26; // eax
  int v27; // eax
  _BYTE v28[8]; // [rsp+20h] [rbp-E0h] BYREF
  PVOID P; // [rsp+28h] [rbp-D8h] BYREF
  PVOID v30; // [rsp+30h] [rbp-D0h] BYREF
  PVOID v31; // [rsp+38h] [rbp-C8h] BYREF
  ULONG v32; // [rsp+40h] [rbp-C0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD Src[132]; // [rsp+70h] [rbp-90h] BYREF

  v7 = a7;
  P = a7;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  LOBYTE(v11) = 1;
  v30 = 0LL;
  v31 = 0LL;
  v28[0] = 0;
  v12 = SepAdtClassifyObjectIntoSubCategory(a2, a4, v11, 0LL);
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  Flink = CurrentThreadProcess[1].Header.WaitListHead.Flink;
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64)&v30);
  if ( AllocatedFullProcessImageName < 0 )
  {
LABEL_24:
    SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
    goto LABEL_25;
  }
  memset(Src, 0, 0x418uLL);
  Src[0] = 0x123700000003LL;
  WORD1(Src[2]) = 8;
  LOWORD(Src[2]) = v12;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = (_QWORD **)SubjectContext.PrimaryToken;
  LODWORD(Src[3]) = 4;
  if ( SubjectContext.ClientToken )
    PrimaryToken = (_QWORD **)SubjectContext.ClientToken;
  Src[10] = &SeSubsystemName;
  Src[11] = 0x800000005LL;
  Src[6] = *PrimaryToken[19];
  v17 = *(unsigned __int8 *)(Src[6] + 1LL);
  Src[7] = 0x2000000001LL;
  HIDWORD(Src[3]) = 4 * v17 + 8;
  if ( SubjectContext.ClientToken )
    v18 = *((_QWORD *)SubjectContext.ClientToken + 3);
  else
    v18 = *((_QWORD *)SubjectContext.PrimaryToken + 3);
  Src[12] = v18;
  v19 = *a4 + 16;
  Src[15] = 0x2000000001LL;
  LODWORD(Src[19]) = 1;
  HIDWORD(Src[19]) = v19;
  Src[18] = &SeSubsystemName;
  Src[22] = a4;
  SepQueryNameString(a2, &v31);
  if ( v31 )
  {
    if ( v12 == 116 || (LODWORD(Src[23]) = 1, v12 == 128) )
      LODWORD(Src[23]) = 2;
    v20 = *(unsigned __int16 *)v31;
    Src[26] = v31;
    HIDWORD(Src[23]) = v20 + 16;
  }
  Src[27] = 0x80000000BLL;
  if ( ObpIsKernelHandle(a3, 0) )
    a3 ^= 0xFFFFFFFF80000000uLL;
  Src[33] = 4LL;
  Src[32] = a5;
  Src[36] = a5;
  Src[46] = v30;
  v25 = *(unsigned __int16 *)v30 + 16;
  Src[28] = a3 & 0xFFFFFFFFFFFFFFFCuLL;
  Src[31] = 0x400000007LL;
  Src[35] = 0x40000000ALL;
  Src[39] = __PAIR64__(v21, v22);
  Src[40] = Flink;
  Src[43] = __PAIR64__(v25, v24);
  if ( v12 != v23 && v12 - v23 != 12 || !a7 )
    goto LABEL_19;
  v26 = SepCheckAndCopySelfRelativeSD((__int16 *)a7, &P, &v32, v28);
  v7 = P;
  AllocatedFullProcessImageName = v26;
  if ( v26 >= 0 )
  {
    LODWORD(Src[47]) = 31;
    v27 = SepSecurityDescriptorStrictLength((__int64)P);
    Src[49] = 0LL;
    HIDWORD(Src[47]) = v27;
    Src[50] = v7;
    Src[48] = 32LL;
LABEL_19:
    LODWORD(Src[1]) = 12;
    SepAdtLogAuditRecord(Src);
    SeReleaseSubjectContext(&SubjectContext);
  }
  if ( v28[0] && v7 )
    ExFreePoolWithTag(v7, 0);
  if ( AllocatedFullProcessImageName < 0 )
    goto LABEL_24;
LABEL_25:
  if ( v30 )
    ExFreePoolWithTag(v30, 0);
  if ( v31 )
    ExFreePoolWithTag(v31, 0);
}
