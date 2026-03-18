/*
 * XREFs of SeAuditHardLinkCreationWithTransaction @ 0x1408DB280
 * Callers:
 *     SeAuditHardLinkCreation @ 0x1408DB260 (SeAuditHardLinkCreation.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x14012D67C (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SeCaptureSubjectContext @ 0x1405DE350 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 */

void __stdcall SeAuditHardLinkCreationWithTransaction(
        PUNICODE_STRING FileName,
        PUNICODE_STRING LinkName,
        BOOLEAN bSuccess,
        GUID *TransactionId)
{
  GUID *v8; // rsi
  _QWORD *PrimaryToken; // r8
  _QWORD *ClientToken; // rax
  _QWORD *v11; // rax
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD Src[132]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v14[2]; // [rsp+468h] [rbp+360h] BYREF

  SubjectContext.ClientToken = 0LL;
  SubjectContext.ImpersonationLevel = 0x80000000;
  memset(&SubjectContext.ImpersonationLevel + 1, 0, 20);
  memset(Src, 0, 0x418uLL);
  Src[0] = 0x123800000003LL;
  v14[0] = 0LL;
  v14[1] = 0LL;
  v8 = (GUID *)v14;
  if ( TransactionId )
    v8 = TransactionId;
  LODWORD(Src[2]) = 524404;
  if ( !bSuccess )
    WORD1(Src[2]) = 16;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  ClientToken = SubjectContext.PrimaryToken;
  LODWORD(Src[3]) = 4;
  if ( SubjectContext.ClientToken )
    ClientToken = SubjectContext.ClientToken;
  LODWORD(Src[7]) = 1;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  HIDWORD(Src[7]) = 32;
  Src[11] = 0x800000005LL;
  LODWORD(Src[15]) = 2;
  v11 = (_QWORD *)ClientToken[19];
  LODWORD(Src[19]) = 2;
  Src[18] = FileName;
  Src[6] = *v11;
  Src[22] = LinkName;
  Src[23] = 0x100000000DLL;
  LODWORD(v11) = *(unsigned __int8 *)(Src[6] + 1LL);
  Src[26] = v8;
  LODWORD(Src[1]) = 6;
  HIDWORD(Src[3]) = 4 * (_DWORD)v11 + 8;
  Src[10] = &SeSubsystemName;
  Src[12] = PrimaryToken[3];
  HIDWORD(Src[15]) = FileName->Length + 16;
  HIDWORD(Src[19]) = LinkName->Length + 16;
  SepAdtLogAuditRecord(Src);
  SeReleaseSubjectContext(&SubjectContext);
}
