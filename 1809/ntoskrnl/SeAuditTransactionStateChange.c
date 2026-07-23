/*
 * XREFs of SeAuditTransactionStateChange @ 0x14089EA60
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x140006800 (PsGetCurrentThreadProcess.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     SepAdtLogAuditRecord @ 0x140186F00 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x140668384 (PsGetAllocatedFullProcessImageNameEx.c)
 */

void __stdcall SeAuditTransactionStateChange(GUID *TransactionId, GUID *ResourceManagerId, ULONG NewTransactionState)
{
  __int64 v4; // r14
  GUID *v6; // rsi
  _QWORD *PrimaryToken; // rbx
  _QWORD **ClientToken; // rax
  __int64 v9; // rbx
  __int64 v10; // r15
  _KPROCESS *CurrentThreadProcess; // rax
  unsigned __int16 *p_DestinationString; // rdi
  int v13; // eax
  _KPROCESS *v14; // rax
  struct _LIST_ENTRY *Flink; // rcx
  PVOID P; // [rsp+28h] [rbp-E0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-D8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD Src[132]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v20[2]; // [rsp+488h] [rbp+380h] BYREF

  SubjectContext.ClientToken = 0LL;
  v4 = NewTransactionState;
  SubjectContext.ImpersonationLevel = 0x80000000;
  *(_OWORD *)&SubjectContext.PrimaryToken = 0LL;
  memset(Src, 0, 0x418uLL);
  P = 0LL;
  v6 = (GUID *)v20;
  LODWORD(Src[0]) = 3;
  v20[0] = 0LL;
  v20[1] = 0LL;
  LOWORD(Src[2]) = 117;
  if ( ResourceManagerId )
    v6 = ResourceManagerId;
  HIDWORD(Src[0]) = 4985;
  WORD1(Src[2]) = 8;
  if ( (_DWORD)v4 == 6 )
    WORD1(Src[2]) = 16;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  ClientToken = (_QWORD **)SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
  {
    ClientToken = (_QWORD **)SubjectContext.ClientToken;
    PrimaryToken = SubjectContext.ClientToken;
  }
  v9 = PrimaryToken[3];
  v10 = *ClientToken[19];
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  if ( (int)PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64)&P) < 0
    || (p_DestinationString = (unsigned __int16 *)P) == 0LL )
  {
    RtlInitUnicodeString(&DestinationString, L"?");
    p_DestinationString = (unsigned __int16 *)&DestinationString;
    P = &DestinationString;
  }
  v13 = *(unsigned __int8 *)(v10 + 1);
  Src[12] = v9;
  LODWORD(Src[3]) = 4;
  Src[6] = v10;
  Src[7] = 0x2000000001LL;
  HIDWORD(Src[3]) = 4 * v13 + 8;
  Src[11] = 0x800000005LL;
  Src[10] = &SeSubsystemName;
  Src[15] = 0x100000000DLL;
  Src[18] = TransactionId;
  Src[19] = 0x400000003LL;
  Src[20] = v4;
  Src[23] = 0x100000000DLL;
  Src[26] = v6;
  Src[27] = 0x80000000BLL;
  v14 = PsGetCurrentThreadProcess();
  LODWORD(Src[31]) = 2;
  Src[34] = p_DestinationString;
  LODWORD(Src[1]) = 8;
  Flink = v14[1].Header.WaitListHead.Flink;
  LODWORD(v14) = *p_DestinationString + 16;
  Src[28] = Flink;
  HIDWORD(Src[31]) = (_DWORD)v14;
  SepAdtLogAuditRecord(Src);
  SeReleaseSubjectContext(&SubjectContext);
  if ( P )
  {
    if ( P != &DestinationString )
      ExFreePoolWithTag(P, 0);
  }
}
