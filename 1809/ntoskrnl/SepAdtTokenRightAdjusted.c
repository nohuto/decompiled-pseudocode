/*
 * XREFs of SepAdtTokenRightAdjusted @ 0x14060B2D8
 * Callers:
 *     SepAdjustPrivileges @ 0x14060AD70 (SepAdjustPrivileges.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x140006800 (PsGetCurrentThreadProcess.c)
 *     SepAdtLogAuditRecord @ 0x140186F00 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SepAdtAuditablePrivilege @ 0x1402FFC58 (SepAdtAuditablePrivilege.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14060B3C0 (SeAuditingWithTokenForSubcategory.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x140668384 (PsGetAllocatedFullProcessImageNameEx.c)
 */

void __fastcall SepAdtTokenRightAdjusted(__int64 a1, char *a2, unsigned int a3, char *a4, unsigned int a5, char a6)
{
  __int64 v8; // r12
  int *v9; // r14
  int *v10; // rsi
  _QWORD **ClientToken; // rdi
  PACCESS_TOKEN PrimaryToken; // rdx
  _KPROCESS *CurrentThreadProcess; // rax
  _QWORD *v14; // rcx
  _QWORD **v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rdi
  int *PoolWithTag; // rax
  char *v19; // rcx
  signed __int64 v20; // rdx
  __int64 v21; // r9
  int *v22; // rax
  __int64 v23; // rdx
  signed __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  PVOID P; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v32; // [rsp+28h] [rbp-D8h]
  char *v33; // [rsp+30h] [rbp-D0h]
  __int64 v34; // [rsp+38h] [rbp-C8h]
  struct _LIST_ENTRY *Flink; // [rsp+40h] [rbp-C0h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD Src[132]; // [rsp+70h] [rbp-90h] BYREF

  P = 0LL;
  v32 = a1;
  v33 = a4;
  v8 = a3;
  v9 = 0LL;
  v10 = 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  ClientToken = (_QWORD **)SubjectContext.ClientToken;
  PrimaryToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(139LL, PrimaryToken)
    && (SepAdtAuditablePrivilege(a2, v8) || SepAdtAuditablePrivilege(a4, a5)) )
  {
    memset(Src, 0, 0x418uLL);
    LODWORD(Src[1]) = 0;
    LODWORD(Src[2]) = 524427;
    Src[0] = 0x125F00000005LL;
    if ( !a6 )
      WORD1(Src[2]) = 16;
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    if ( CurrentThreadProcess[1].ActiveProcessors.Bitmap[15] )
    {
      Flink = CurrentThreadProcess[1].Header.WaitListHead.Flink;
      if ( (int)PsGetAllocatedFullProcessImageNameEx(CurrentThreadProcess, &P) >= 0 )
      {
        v14 = SubjectContext.PrimaryToken;
        v15 = (_QWORD **)SubjectContext.PrimaryToken;
        if ( ClientToken )
        {
          v15 = ClientToken;
          v14 = ClientToken;
        }
        v16 = v14[3];
        v17 = *(_QWORD *)(v32 + 24);
        v34 = *v15[19];
        if ( a5 )
        {
          PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, 12 * a5 + 20LL, 0x70416553u);
          v9 = PoolWithTag;
          if ( !PoolWithTag )
            goto LABEL_4;
          PoolWithTag[1] = 1;
          *PoolWithTag = a5;
          v19 = v33;
          v20 = (char *)PoolWithTag - v33;
          v21 = a5;
          do
          {
            *(_QWORD *)&v19[v20 + 8] = *(_QWORD *)v19;
            *(_DWORD *)&v19[v20 + 16] = *((_DWORD *)v19 + 2);
            v19 += 12;
            --v21;
          }
          while ( v21 );
        }
        if ( (_DWORD)v8 )
        {
          v22 = (int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(12 * v8) + 20LL, 0x70416553u);
          v10 = v22;
          if ( !v22 )
            goto LABEL_4;
          v22[1] = 1;
          *v22 = v8;
          v23 = v8;
          v24 = (char *)v22 - a2;
          do
          {
            *(_QWORD *)&a2[v24 + 8] = *(_QWORD *)a2;
            *(_DWORD *)&a2[v24 + 16] = *((_DWORD *)a2 + 2);
            a2 += 12;
            --v23;
          }
          while ( v23 );
        }
        Src[6] = v34;
        LODWORD(Src[3]) = 4;
        Src[7] = 0x2000000001LL;
        v25 = *(unsigned __int8 *)(v34 + 1);
        Src[11] = 0x800000005LL;
        HIDWORD(Src[3]) = 4 * v25 + 8;
        Src[10] = &SeSubsystemName;
        v26 = *(unsigned __int16 *)P + 16;
        Src[12] = v16;
        HIDWORD(Src[19]) = v26;
        Src[24] = Flink;
        Src[15] = 0x800000023LL;
        Src[16] = v17;
        LODWORD(Src[19]) = 2;
        Src[22] = P;
        Src[23] = 0x80000000BLL;
        if ( v9 )
        {
          v27 = *v9;
          LODWORD(Src[27]) = 8;
          if ( v27 )
            v28 = 12 * v27 + 8;
          else
            v28 = 8;
          HIDWORD(Src[27]) = v28;
          Src[30] = v9;
        }
        if ( v10 )
        {
          v29 = *v10;
          LODWORD(Src[31]) = 8;
          if ( v29 )
            v30 = 12 * v29 + 8;
          else
            v30 = 8;
          HIDWORD(Src[31]) = v30;
          Src[34] = v10;
        }
        LODWORD(Src[1]) = 8;
        SepAdtLogAuditRecord(Src);
      }
    }
  }
LABEL_4:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  SeReleaseSubjectContext(&SubjectContext);
}
