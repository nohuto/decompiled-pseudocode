/*
 * XREFs of SeAuditProcessCreation @ 0x14074A7A0
 * Callers:
 *     PspInsertProcess @ 0x14060A3A8 (PspInsertProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     PsQueryProcessCommandLine @ 0x14012A330 (PsQueryProcessCommandLine.c)
 *     SepAdtLogAuditRecord @ 0x140186F00 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PsReferencePrimaryToken @ 0x1405DE640 (PsReferencePrimaryToken.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 *     PsLookupProcessByProcessId @ 0x140647C40 (PsLookupProcessByProcessId.c)
 *     RtlCopySid @ 0x14064A350 (RtlCopySid.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x140668384 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SepAuditFailed @ 0x1408A59E0 (SepAuditFailed.c)
 */

void __fastcall SeAuditProcessCreation(struct _KPROCESS *BugCheckParameter1, unsigned __int16 *a2)
{
  char v2; // r14
  unsigned __int16 *PoolWithTag; // rdi
  unsigned int v4; // r13d
  struct _SINGLE_LIST_ENTRY *Next; // rbx
  int AllocatedFullProcessImageName; // esi
  PEPROCESS v8; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // r14
  int v11; // ecx
  unsigned __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdx
  bool v16; // r8
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  unsigned int NumberOfBytes[3]; // [rsp+34h] [rbp-CCh] BYREF
  PVOID v21; // [rsp+40h] [rbp-C0h] BYREF
  PEPROCESS Process; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE *v23; // [rsp+50h] [rbp-B0h]
  unsigned __int16 *v24; // [rsp+58h] [rbp-A8h]
  __int64 v25; // [rsp+60h] [rbp-A0h]
  struct _LIST_ENTRY *Flink; // [rsp+68h] [rbp-98h]
  struct _SINGLE_LIST_ENTRY *v27; // [rsp+70h] [rbp-90h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-78h] BYREF
  _QWORD Src[132]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE DestinationSid[80]; // [rsp+4D0h] [rbp+3D0h] BYREF

  Process = 0LL;
  *(_QWORD *)&NumberOfBytes[1] = 0LL;
  v2 = 0;
  v21 = 0LL;
  PoolWithTag = 0LL;
  v4 = 0;
  v24 = a2;
  v23 = DestinationSid;
  if ( !BugCheckParameter1[1].ActiveProcessors.Bitmap[15] )
    return;
  Next = BugCheckParameter1[1].SwapListEntry.Next;
  Flink = BugCheckParameter1[1].Header.WaitListHead.Flink;
  v27 = Next;
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(
                                    (__int64)BugCheckParameter1,
                                    (__int64)&NumberOfBytes[1]);
  if ( AllocatedFullProcessImageName >= 0 )
  {
    if ( PsLookupProcessByProcessId(Next, &Process) < 0 )
    {
      v4 = 1845;
    }
    else
    {
      v8 = Process;
      if ( Process[1].ActiveProcessors.Bitmap[15] )
        PsGetAllocatedFullProcessImageNameEx((__int64)Process, (__int64)&v21);
      else
        v4 = 1844;
      ObfDereferenceObjectWithTag(v8, 0x746C6644u);
    }
    v9 = PsReferencePrimaryToken(BugCheckParameter1);
    v10 = v9;
    if ( v9 )
    {
      v11 = *(_DWORD *)(v9[27] + 32LL);
      if ( (v11 & 4) != 0 )
        v12 = 1938LL;
      else
        v12 = (v11 & 2 | 0xF20uLL) >> 1;
      v13 = *((unsigned int *)v9 + 52);
      v14 = v10[3];
      v25 = v14;
      if ( (unsigned int)v13 >= *((_DWORD *)v10 + 31) )
        v23 = SeNullSid;
      else
        AllocatedFullProcessImageName = RtlCopySid(0x44u, DestinationSid, *(PSID *)(v10[19] + 16 * v13));
      ObfDereferenceObject(v10);
      if ( AllocatedFullProcessImageName >= 0 )
      {
        if ( SepRmAuditProcessCommandLine )
        {
          if ( v24 )
          {
            v2 = 0;
            PoolWithTag = v24;
            goto LABEL_16;
          }
          if ( (unsigned int)PsQueryProcessCommandLine((ULONG_PTR)BugCheckParameter1, 0LL, 0, 0, NumberOfBytes) == -1073741820 )
          {
            PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x4C436553u);
            if ( PoolWithTag )
            {
              if ( (int)PsQueryProcessCommandLine(
                          (ULONG_PTR)BugCheckParameter1,
                          (__int64)PoolWithTag,
                          NumberOfBytes[0],
                          0,
                          NumberOfBytes) >= 0 )
              {
                v2 = 1;
                goto LABEL_16;
              }
              ExFreePoolWithTag(PoolWithTag, 0);
            }
          }
          RtlInitUnicodeString(&DestinationString, &word_140767740);
          v2 = 0;
        }
        else
        {
          RtlInitUnicodeString(&DestinationString, &word_140767740);
          v2 = 0;
        }
        PoolWithTag = (unsigned __int16 *)&DestinationString;
LABEL_16:
        SeCaptureSubjectContext(&SubjectContext);
        memset(Src, 0, 0x418uLL);
        Src[0] = 0x125000000005LL;
        LODWORD(Src[2]) = 524422;
        v15 = **((_QWORD **)SubjectContext.PrimaryToken + 19);
        v16 = *((_QWORD *)SubjectContext.PrimaryToken + 3) != __PAIR64__(HIDWORD(v25), v14);
        v17 = *(unsigned __int8 *)(v15 + 1);
        Src[12] = *((_QWORD *)SubjectContext.PrimaryToken + 3);
        Src[16] = Flink;
        Src[6] = v15;
        HIDWORD(Src[3]) = 4 * v17 + 8;
        LODWORD(Src[3]) = 4;
        Src[10] = &SeSubsystemName;
        Src[22] = *(_QWORD *)&NumberOfBytes[1];
        Src[7] = 0x2000000001LL;
        v18 = (unsigned __int16)**(_WORD **)&NumberOfBytes[1] + 16;
        Src[11] = 0x800000005LL;
        HIDWORD(Src[19]) = v18;
        Src[28] = v27;
        v19 = *PoolWithTag + 16;
        Src[15] = 0x80000000BLL;
        LODWORD(Src[19]) = 2;
        Src[23] = 0x400000015LL;
        Src[24] = v12;
        Src[27] = 0x80000000BLL;
        LODWORD(Src[31]) = 34;
        HIDWORD(Src[31]) = v19;
        Src[34] = PoolWithTag;
        if ( v16 )
        {
          Src[35] = 0x800000023LL;
          Src[36] = v14;
        }
        else
        {
          LODWORD(Src[35]) = 6;
        }
        if ( v4 )
        {
          Src[40] = v4;
          Src[39] = 0x400000015LL;
        }
        else
        {
          LODWORD(Src[39]) = 2;
          Src[42] = v21;
          HIDWORD(Src[39]) = *(unsigned __int16 *)v21 + 16;
        }
        Src[46] = v23;
        LODWORD(Src[43]) = 4;
        LODWORD(Src[1]) = 11;
        HIDWORD(Src[43]) = 4 * (unsigned __int8)v23[1] + 8;
        SepAdtLogAuditRecord(Src);
        SeReleaseSubjectContext(&SubjectContext);
        goto LABEL_21;
      }
    }
    else
    {
      AllocatedFullProcessImageName = -1073741700;
    }
    v2 = 0;
  }
  SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
LABEL_21:
  if ( *(_QWORD *)&NumberOfBytes[1] )
    ExFreePoolWithTag(*(PVOID *)&NumberOfBytes[1], 0);
  if ( v21 )
    ExFreePoolWithTag(v21, 0);
  if ( v2 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
}
