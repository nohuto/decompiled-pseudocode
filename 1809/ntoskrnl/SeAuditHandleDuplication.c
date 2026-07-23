/*
 * XREFs of SeAuditHandleDuplication @ 0x14089DFCC
 * Callers:
 *     ObDuplicateObject @ 0x1405D1B70 (ObDuplicateObject.c)
 *     ObCompleteObjectDuplication @ 0x140613FA0 (ObCompleteObjectDuplication.c)
 *     ObAuditInheritedHandleProcedure @ 0x140861F00 (ObAuditInheritedHandleProcedure.c)
 * Callees:
 *     ObpIsKernelHandle @ 0x140088EC8 (ObpIsKernelHandle.c)
 *     SepAdtLogAuditRecord @ 0x140186F00 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 */

void __fastcall SeAuditHandleDuplication(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *PrimaryToken; // rsi
  _QWORD **ClientToken; // rax
  __int64 v10; // rbx
  int v11; // eax
  bool IsKernelHandle; // al
  unsigned int v13; // r10d
  unsigned int v14; // r9d
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  bool v17; // al
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned __int64 v20; // rcx
  unsigned int v21; // r9d
  unsigned int v22; // r10d
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD Src[132]; // [rsp+48h] [rbp-C0h] BYREF

  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  ClientToken = (_QWORD **)SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    ClientToken = (_QWORD **)SubjectContext.ClientToken;
  v10 = *ClientToken[19];
  memset(Src, 0, 0x418uLL);
  v11 = *(unsigned __int8 *)(v10 + 1);
  LODWORD(Src[0]) = 3;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  LODWORD(Src[2]) = 524412;
  HIDWORD(Src[3]) = 4 * v11 + 8;
  HIDWORD(Src[0]) = 4690;
  Src[10] = &SeSubsystemName;
  Src[12] = PrimaryToken[3];
  LODWORD(Src[3]) = 4;
  Src[6] = v10;
  Src[7] = 0x2000000001LL;
  Src[11] = 0x800000005LL;
  Src[15] = 0x80000000BLL;
  IsKernelHandle = ObpIsKernelHandle(a1, 0);
  Src[19] = __PAIR64__(v13, v14);
  v16 = v15 ^ 0xFFFFFFFF80000000uLL;
  LODWORD(Src[23]) = v14;
  if ( !IsKernelHandle )
    v16 = a1;
  Src[20] = *(_QWORD *)(a3 + 736);
  HIDWORD(Src[23]) = v13;
  Src[16] = v16 & 0xFFFFFFFFFFFFFFFCuLL;
  v17 = ObpIsKernelHandle(a2, 0);
  v20 = v19 ^ v18;
  Src[27] = __PAIR64__(v22, v21);
  if ( !v17 )
    v20 = a2;
  Src[28] = *(_QWORD *)(a4 + 736);
  LODWORD(Src[1]) = 7;
  Src[24] = v20 & 0xFFFFFFFFFFFFFFFCuLL;
  SepAdtLogAuditRecord(Src);
  SeReleaseSubjectContext(&SubjectContext);
}
