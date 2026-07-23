/*
 * XREFs of IopCreateFile @ 0x14060CAC0
 * Callers:
 *     IoCreateFile @ 0x14060B8B0 (IoCreateFile.c)
 *     IoCreateFileEx @ 0x14060C870 (IoCreateFileEx.c)
 *     NtOpenFile @ 0x14060C9C0 (NtOpenFile.c)
 *     NtCreateFile @ 0x14060CA30 (NtCreateFile.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x14004D350 (PsGetCurrentSilo.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExFreeToNPagedLookasideList @ 0x140092218 (ExFreeToNPagedLookasideList.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400B75B0 (ExAllocatePoolWithQuotaTag.c)
 *     PsGetCurrentProcess @ 0x1400F13B0 (PsGetCurrentProcess.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     FeatureServicing_43969648_EnableKey @ 0x140582E8C (FeatureServicing_43969648_EnableKey.c)
 *     ObOpenObjectByNameEx @ 0x1405E3E30 (ObOpenObjectByNameEx.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14060DFB0 (FsRtlFreeExtraCreateParameter.c)
 *     IoCheckEaBufferValidity @ 0x14060E080 (IoCheckEaBufferValidity.c)
 *     IopCloseFile @ 0x14063AB30 (IopCloseFile.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall IopCreateFile(
        HANDLE *a1,
        ACCESS_MASK a2,
        __int64 a3,
        NTSTATUS *a4,
        __int64 a5,
        int a6,
        int a7,
        unsigned int a8,
        int a9,
        char *Src,
        SIZE_T NumberOfBytes,
        int a12,
        _SLIST_ENTRY *a13,
        int a14,
        int a15,
        __int16 *a16)
{
  int v16; // esi
  char v17; // cl
  char PreviousMode; // al
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rbx
  PSLIST_ENTRY v21; // rdi
  _GENERAL_LOOKASIDE *L; // rbx
  _SLIST_ENTRY *v23; // r13
  int v24; // edx
  unsigned int v25; // ecx
  __int64 v26; // r8
  struct _KPRCB *v27; // rdx
  _GENERAL_LOOKASIDE *v28; // rcx
  struct _KPRCB *v30; // rdx
  _GENERAL_LOOKASIDE *v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  void *v34; // rbx
  PVOID PoolWithQuotaTag; // rax
  int v36; // eax
  int v37; // r14d
  NTSTATUS *v38; // r15
  unsigned __int64 v39; // rcx
  __int16 v40; // ax
  struct _KPRCB *v41; // rdx
  _GENERAL_LOOKASIDE *v42; // rcx
  char *v43; // r14
  ULONG v44; // r15d
  struct _KPRCB *v45; // rdx
  _GENERAL_LOOKASIDE *v46; // rcx
  unsigned __int64 v47; // rax
  PVOID v48; // rax
  int v49; // eax
  int v50; // ecx
  char *v51; // r15
  ULONG v52; // r14d
  PVOID PoolWithTag; // rax
  struct _KPRCB *v54; // rdx
  _GENERAL_LOOKASIDE *v55; // rcx
  size_t v56; // r8
  NTSTATUS v57; // r14d
  struct _KPRCB *v58; // rdx
  _GENERAL_LOOKASIDE *v59; // rcx
  KPROCESSOR_MODE v60; // r14
  size_t v61; // r8
  struct _KTHREAD *CurrentThread; // rax
  int v63; // r12d
  void *v64; // rcx
  __int64 v65; // r13
  int v66; // eax
  __int64 **v67; // rsi
  __int64 *v68; // rax
  __int64 v69; // rcx
  _QWORD *v70; // r15
  __int64 v71; // r14
  void (__fastcall *v72)(_QWORD *, _QWORD *); // rax
  __int64 v73; // rcx
  __int64 *v74; // rbx
  __int64 *v75; // rcx
  __int64 *v76; // rdx
  __int64 **v77; // rax
  int Next; // ebx
  int v79; // ecx
  __int64 v80; // rcx
  unsigned __int64 v81; // rcx
  __int64 v82; // rax
  void *v83; // rcx
  unsigned int v84; // [rsp+40h] [rbp-78h]
  char v85; // [rsp+4Ch] [rbp-6Ch]
  __int16 v86; // [rsp+58h] [rbp-60h]
  __int16 v87; // [rsp+5Ch] [rbp-5Ch]
  HANDLE Handle; // [rsp+60h] [rbp-58h] BYREF
  char *v89; // [rsp+68h] [rbp-50h]
  int v90; // [rsp+70h] [rbp-48h]

  v90 = a14;
  v16 = a9;
  v17 = 0;
  v89 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a14 & 0x100) == 0 )
    v17 = PreviousMode;
  v85 = v17;
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[8].P;
  ++P->TotalAllocates;
  v21 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v21 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[8].L;
    ++L->TotalAllocates;
    v21 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v21 )
    {
      ++L->AllocateMisses;
      v21 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))L->AllocateEx)(
                            (unsigned int)L->Type,
                            L->Size,
                            L->Tag);
    }
  }
  if ( !v21 )
    return 3221225626LL;
  LODWORD(v21->Next) = CurrentPrcb->Number;
  if ( !v85 && (a14 & 0x200) == 0 )
  {
    v87 = a7;
    v86 = a6;
LABEL_10:
    v23 = a13;
    goto LABEL_11;
  }
  if ( EnableFeatureServicing_43969648 == 1 || EnableFeatureServicing_43969648 && FeatureServicing_43969648_EnableKey() )
  {
    v86 = a6;
    if ( (a6 & 0xFFA50048) != 0 )
      goto LABEL_69;
    v24 = a7;
    v87 = a7;
    if ( (a7 & 0xFFFFFFF8) != 0 )
      goto LABEL_69;
    v25 = a8;
    if ( a8 > 5 )
      goto LABEL_69;
    if ( (a9 & 0xEF000000) != 0 )
      goto LABEL_69;
    v26 = a2;
    if ( (a9 & 0x30) != 0 && (a2 & 0x100000) == 0 )
      goto LABEL_69;
    if ( (a9 & 0x1000) != 0 && (a2 & 0x10000) == 0
      || (a9 & 0x30) == 0x30
      || (a9 & 0x41) == 1 && ((a9 & 0xEF5E0ACC) != 0 || a8 - 1 > 2)
      || (a9 & 0x100100) == 0x100100
      || (a9 & 0x10100) == 0x10100
      || (a9 & 0x110000) == 0x110000
      || (a9 & 8) != 0 && (a2 & 4) != 0 )
    {
      goto LABEL_69;
    }
  }
  else
  {
    v86 = a6;
    if ( (a6 & 0xFFA50048) != 0 )
      goto LABEL_69;
    v24 = a7;
    v87 = a7;
    if ( (a7 & 0xFFFFFFF8) != 0 )
      goto LABEL_69;
    v25 = a8;
    if ( a8 > 5 )
      goto LABEL_69;
    if ( (a9 & 0xFF000000) != 0 )
      goto LABEL_69;
    v26 = a2;
    if ( (a9 & 0x30) != 0 && (a2 & 0x100000) == 0 )
      goto LABEL_69;
    if ( (a9 & 0x1000) != 0 && (a2 & 0x10000) == 0
      || (a9 & 0x30) == 0x30
      || (a9 & 0x41) == 1 && ((a9 & 0xFF5E0ACC) != 0 || a8 - 1 > 2)
      || (a9 & 0x100100) == 0x100100
      || (a9 & 0x10100) == 0x10100
      || (a9 & 0x110000) == 0x110000
      || (a9 & 8) != 0 && (a2 & 4) != 0 )
    {
      goto LABEL_69;
    }
  }
  if ( IopFailZeroAccessCreate && !a2 )
  {
    v27 = KeGetCurrentPrcb();
    v28 = v27->PPLookasideList[8].P;
    ++v28->TotalFrees;
    if ( LOWORD(v28->ListHead.Alignment) < v28->Depth
      || (++v28->FreeMisses,
          v28 = v27->PPLookasideList[8].L,
          ++v28->TotalFrees,
          LOWORD(v28->ListHead.Alignment) < v28->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v28->ListHead, v21);
      return 3221225506LL;
    }
    else
    {
      ++v28->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY, struct _KPRCB *, __int64))v28->FreeEx)(v21, v27, v26);
      return 3221225506LL;
    }
  }
  if ( !a12 )
    goto LABEL_10;
  v23 = a13;
  if ( a12 == 1 )
  {
    if ( !a13
      || ((__int64)a13->Next & 0xFFFFFFFC) != 0
      || HIDWORD(a13->Next) > 1
      || *((_DWORD *)&a13->Next + 2) > 1u
      || (v24 & 4) != 0
      || v25 - 1 > 2 )
    {
      goto LABEL_69;
    }
  }
  else
  {
    if ( a12 != 2 )
      goto LABEL_11;
    if ( !a13 || (v24 & 4) != 0 || (v24 & 0xFFFFFFFD) == 0 || v25 != 2 )
      goto LABEL_69;
  }
  if ( (a9 & 0xFFFFFFCD) != 0 )
    goto LABEL_69;
LABEL_11:
  if ( !v85 )
  {
    v16 = a9 & 0x7FFFFFFF;
    if ( a9 >= 0 )
      v16 = a9;
    v50 = v90 | 0x400;
    if ( a9 >= 0 )
      v50 = v90;
    a14 = v50;
    if ( a5 )
    {
      v34 = *(void **)a5;
      if ( *(__int64 *)a5 < 0 )
        goto LABEL_69;
    }
    else
    {
      v34 = 0LL;
    }
    Handle = v34;
    if ( EnableFeatureServicing_43969648 != 1 )
    {
      if ( !EnableFeatureServicing_43969648 )
        goto LABEL_147;
      if ( !FeatureServicing_43969648_EnableKey() )
      {
        v50 = a14;
LABEL_147:
        v51 = Src;
        if ( !Src || (v52 = NumberOfBytes) == 0 )
        {
          *((_QWORD *)&v21[4].Next + 1) = 0LL;
          LODWORD(v21[5].Next) = 0;
          v37 = v50;
          v38 = a4;
          goto LABEL_174;
        }
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x61456F49u);
        *((_QWORD *)&v21[4].Next + 1) = PoolWithTag;
        if ( !PoolWithTag )
        {
LABEL_150:
          v54 = KeGetCurrentPrcb();
          v55 = v54->PPLookasideList[8].P;
          ++v55->TotalFrees;
          if ( LOWORD(v55->ListHead.Alignment) < v55->Depth
            || (++v55->FreeMisses,
                v55 = v54->PPLookasideList[8].L,
                ++v55->TotalFrees,
                LOWORD(v55->ListHead.Alignment) < v55->Depth) )
          {
            RtlpInterlockedPushEntrySList(&v55->ListHead, v21);
          }
          else
          {
            ++v55->FreeMisses;
            ((void (__fastcall *)(PSLIST_ENTRY))v55->FreeEx)(v21);
          }
          return 3221225626LL;
        }
        v56 = (unsigned int)NumberOfBytes;
LABEL_165:
        LODWORD(v21[5].Next) = v52;
        memmove(PoolWithTag, v51, v56);
        v38 = a4;
        v57 = IoCheckEaBufferValidity(*((PFILE_FULL_EA_INFORMATION *)&v21[4].Next + 1), v52, (PULONG)a4 + 2);
        v84 = v57;
        if ( v57 < 0 )
        {
          ExFreePoolWithTag(*((PVOID *)&v21[4].Next + 1), 0);
          *a4 = v57;
LABEL_167:
          v58 = KeGetCurrentPrcb();
          v59 = v58->PPLookasideList[8].P;
          ++v59->TotalFrees;
          if ( LOWORD(v59->ListHead.Alignment) < v59->Depth
            || (++v59->FreeMisses,
                v59 = v58->PPLookasideList[8].L,
                ++v59->TotalFrees,
                LOWORD(v59->ListHead.Alignment) < v59->Depth) )
          {
            RtlpInterlockedPushEntrySList(&v59->ListHead, v21);
            return v84;
          }
          else
          {
            ++v59->FreeMisses;
            ((void (__fastcall *)(PSLIST_ENTRY))v59->FreeEx)(v21);
            return v84;
          }
        }
        goto LABEL_173;
      }
    }
    if ( (v16 & 0x10000000) == 0 )
    {
      *((_QWORD *)&v21[13].Next + 1) = 0LL;
      v51 = Src;
      v89 = Src;
      v52 = NumberOfBytes;
LABEL_161:
      if ( !v51 || !v52 )
      {
LABEL_171:
        *((_QWORD *)&v21[4].Next + 1) = 0LL;
LABEL_172:
        LODWORD(v21[5].Next) = 0;
        v38 = a4;
LABEL_173:
        v37 = a14;
        goto LABEL_174;
      }
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v52, 0x61456F49u);
      *((_QWORD *)&v21[4].Next + 1) = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_150;
      v56 = v52;
      goto LABEL_165;
    }
    if ( (unsigned int)NumberOfBytes >= 0x18 )
    {
      *((_QWORD *)&v21[13].Next + 1) = *(_QWORD *)Src;
      v51 = (char *)*((_QWORD *)Src + 1);
      v89 = v51;
      v52 = *((_DWORD *)Src + 4);
      goto LABEL_161;
    }
LABEL_69:
    v30 = KeGetCurrentPrcb();
    v31 = v30->PPLookasideList[8].P;
    ++v31->TotalFrees;
    if ( LOWORD(v31->ListHead.Alignment) < v31->Depth
      || (++v31->FreeMisses,
          v31 = v30->PPLookasideList[8].L,
          ++v31->TotalFrees,
          LOWORD(v31->ListHead.Alignment) < v31->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v31->ListHead, v21);
      return 3221225485LL;
    }
    else
    {
      ++v31->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v31->FreeEx)(v21);
      return 3221225485LL;
    }
  }
  if ( EnableFeatureServicing_43969648 != 1
    && (!EnableFeatureServicing_43969648 || !FeatureServicing_43969648_EnableKey()) )
  {
    *((_QWORD *)&v21[4].Next + 1) = 0LL;
  }
  v32 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
    v32 = (__int64)a1;
  *(_QWORD *)v32 = *(_QWORD *)v32;
  v33 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
    v33 = (__int64)a4;
  *(_DWORD *)v33 = *(_DWORD *)v33;
  if ( a5 )
  {
    if ( (a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v34 = *(void **)a5;
    Handle = v34;
    if ( (__int64)v34 < 0 )
      RtlRaiseStatus(-1073741811);
  }
  else
  {
    v34 = 0LL;
    Handle = 0LL;
  }
  if ( EnableFeatureServicing_43969648 != 1
    && (!EnableFeatureServicing_43969648 || !FeatureServicing_43969648_EnableKey()) )
  {
    if ( Src && (_DWORD)NumberOfBytes )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&Src[(unsigned int)NumberOfBytes] > 0x7FFFFFFF0000LL
        || &Src[(unsigned int)NumberOfBytes] < Src )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
      PoolWithQuotaTag = ExAllocatePoolWithQuotaTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x61456F49u);
      *((_QWORD *)&v21[4].Next + 1) = PoolWithQuotaTag;
      LODWORD(v21[5].Next) = NumberOfBytes;
      memmove(PoolWithQuotaTag, Src, (unsigned int)NumberOfBytes);
      v36 = IoCheckEaBufferValidity(*((PFILE_FULL_EA_INFORMATION *)&v21[4].Next + 1), NumberOfBytes, (PULONG)a4 + 2);
      if ( v36 < 0 )
      {
        *a4 = v36;
        RtlRaiseStatus(v36);
      }
      v37 = a14;
      v38 = a4;
      goto LABEL_174;
    }
    goto LABEL_171;
  }
  if ( (a9 & 0x10000000) == 0 )
  {
    *((_QWORD *)&v21[13].Next + 1) = 0LL;
    v43 = Src;
    v89 = Src;
    v44 = NumberOfBytes;
    goto LABEL_127;
  }
  v39 = PsGetCurrentProcess()[1].ActiveProcessors.Bitmap[7];
  if ( v39 )
  {
    v40 = *(_WORD *)(v39 + 8);
    if ( v40 == 332 || v40 == 452 )
    {
      if ( (_DWORD)NumberOfBytes )
      {
        if ( ((unsigned __int8)Src & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&Src[(unsigned int)NumberOfBytes] > 0x7FFFFFFF0000LL
          || &Src[(unsigned int)NumberOfBytes] < Src )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      if ( (unsigned int)NumberOfBytes < 0x10 )
      {
        v41 = KeGetCurrentPrcb();
        v42 = v41->PPLookasideList[8].P;
        ++v42->TotalFrees;
        if ( LOWORD(v42->ListHead.Alignment) < v42->Depth
          || (++v42->FreeMisses,
              v42 = v41->PPLookasideList[8].L,
              ++v42->TotalFrees,
              LOWORD(v42->ListHead.Alignment) < v42->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v42->ListHead, v21);
        }
        else
        {
          ++v42->FreeMisses;
          ((void (__fastcall *)(PSLIST_ENTRY))v42->FreeEx)(v21);
        }
        return 3221225485LL;
      }
      *((_QWORD *)&v21[13].Next + 1) = *(_QWORD *)Src;
      v43 = (char *)*((unsigned int *)Src + 2);
      v89 = v43;
      v44 = *((_DWORD *)Src + 3);
LABEL_127:
      *((_QWORD *)&v21[4].Next + 1) = 0LL;
      if ( v43 && v44 )
      {
        if ( ((unsigned __int8)v43 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v47 = (unsigned __int64)&v43[v44];
        if ( v47 > 0x7FFFFFFF0000LL || v47 < (unsigned __int64)v43 )
          MEMORY[0x7FFFFFFF0000] = 0;
        v48 = ExAllocatePoolWithQuotaTag(NonPagedPoolNx, v44, 0x61456F49u);
        *((_QWORD *)&v21[4].Next + 1) = v48;
        LODWORD(v21[5].Next) = v44;
        memmove(v48, v43, v44);
        v49 = IoCheckEaBufferValidity(*((PFILE_FULL_EA_INFORMATION *)&v21[4].Next + 1), v44, (PULONG)a4 + 2);
        if ( v49 < 0 )
        {
          *a4 = v49;
          RtlRaiseStatus(v49);
        }
        v37 = a14;
        v38 = a4;
LABEL_174:
        LODWORD(v21->Next) = 14680072;
        LODWORD(v21[2].Next) = 0;
        *((_QWORD *)&v21[1].Next + 1) = 0LL;
        *((_QWORD *)&v21[3].Next + 1) = v34;
        if ( EnableFeatureServicing_43969648 == 1
          || EnableFeatureServicing_43969648 && FeatureServicing_43969648_EnableKey() )
        {
          v16 &= 0xFFFFFFu;
        }
        LODWORD(v21[4].Next) = v16;
        WORD2(v21[4].Next) = v86;
        HIWORD(v21[4].Next) = v87;
        *((_DWORD *)&v21[5].Next + 2) = a8;
        *((_WORD *)&v21[8].Next + 4) = 0;
        *((_BYTE *)&v21[8].Next + 10) = 0;
        HIDWORD(v21[5].Next) = v37;
        *((_QWORD *)&v21[2].Next + 1) = 0LL;
        v21[3].Next = (_SLIST_ENTRY *)a3;
        *((_DWORD *)&v21[7].Next + 2) = a12;
        v21[8].Next = v23;
        *((_DWORD *)&v21[9].Next + 2) = a15;
        v60 = v85;
        *((_BYTE *)&v21[9].Next + 12) = v85;
        v21[10].Next = 0LL;
        *((_QWORD *)&v21[10].Next + 1) = 0LL;
        v21[11].Next = 0LL;
        *((_QWORD *)&v21[11].Next + 1) = 0LL;
        LOWORD(v21[10].Next) = 40;
        v21[12].Next = (_SLIST_ENTRY *)1;
        if ( a16 )
        {
          v61 = *a16;
          if ( v61 > 0x28 )
            v61 = 40LL;
          memmove(&v21[10], a16, v61);
        }
        if ( v21[12].Next == (_SLIST_ENTRY *)1 )
          v21[12].Next = (_SLIST_ENTRY *)PsGetCurrentSilo();
        LODWORD(v21[1].Next) = 0;
        *((_QWORD *)&v21->Next + 1) = 0LL;
        CurrentThread = KeGetCurrentThread();
        ++CurrentThread->OtherOperationCount;
        __incgsdword(0x2EE4u);
        v63 = ObOpenObjectByNameEx(
                a3,
                (__int64)IoFileObjectType,
                v85,
                0LL,
                a2,
                (__int64)v21,
                (__int64)v21[12].Next,
                &Handle);
        v84 = v63;
        v64 = (void *)*((_QWORD *)&v21[4].Next + 1);
        if ( v64 )
          ExFreePoolWithTag(v64, 0);
        v65 = *((_QWORD *)&v21[10].Next + 1);
        if ( v65 )
        {
          v66 = *(_DWORD *)(v65 + 4);
          if ( (v66 & 0x3F0) != 0 )
          {
            *(_DWORD *)(v65 + 4) = v66 - 16;
            v65 = 0LL;
            *((_QWORD *)&v21[10].Next + 1) = 0LL;
          }
          else
          {
            v67 = (__int64 **)(v65 + 8);
            if ( (v66 & 1) != 0 )
            {
              v74 = *v67;
              v65 = 0LL;
              while ( v74 != (__int64 *)v67 )
              {
                v75 = v74;
                v74 = (__int64 *)*v74;
                if ( (v75[5] & 1) == 0 )
                {
                  v76 = (__int64 *)*v75;
                  v77 = (__int64 **)v75[1];
                  if ( *(__int64 **)(*v75 + 8) != v75 || *v77 != v75 )
LABEL_219:
                    __fastfail(3u);
                  *v77 = v76;
                  v76[1] = (__int64)v77;
                  v75[1] = 0LL;
                  *v75 = 0LL;
                  FsRtlFreeExtraCreateParameter(v75 + 8);
                }
              }
            }
            else
            {
              while ( 1 )
              {
                v68 = *v67;
                if ( *v67 == (__int64 *)v67 )
                  break;
                v69 = *v68;
                if ( (__int64 **)v68[1] != v67 || *(__int64 **)(v69 + 8) != v68 )
                  goto LABEL_219;
                *v67 = (__int64 *)v69;
                *(_QWORD *)(v69 + 8) = v67;
                v68[1] = 0LL;
                *v68 = 0LL;
                v70 = v68 + 8;
                v71 = 0LL;
                v72 = (void (__fastcall *)(_QWORD, _QWORD))v68[4];
                if ( v72 )
                  v72(v70, v70 - 6);
                if ( (*(_DWORD *)(v70 - 3) & 0x20) != 0 && FltMgrCallbacks )
                {
                  v71 = *(v70 - 1);
                  (*(void (__fastcall **)(__int64, _QWORD *))FltMgrCallbacks)(v71, v70);
                }
                v73 = *(v70 - 2);
                if ( v73 )
                {
                  if ( (*(_DWORD *)(v70 - 3) & 0x40) != 0 )
                  {
                    ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)v73, v70 - 9);
                  }
                  else
                  {
                    ++*(_DWORD *)(v73 + 28);
                    if ( *(_WORD *)v73 < *(_WORD *)(v73 + 16) )
                    {
                      RtlpInterlockedPushEntrySList((PSLIST_HEADER)v73, (PSLIST_ENTRY)(v70 - 9));
                    }
                    else
                    {
                      ++*(_DWORD *)(v73 + 32);
                      (*(void (__fastcall **)(_QWORD *))(v73 + 56))(v70 - 9);
                    }
                  }
                }
                else
                {
                  ExFreePoolWithTag(v70 - 9, 0);
                }
                if ( v71 )
                  (*(void (__fastcall **)(__int64))(FltMgrCallbacks + 8))(v71);
              }
              if ( (*(_DWORD *)(v65 + 4) & 4) != 0 )
              {
                ++dword_1404C76DC;
                if ( LOWORD(FsRtlEcpListLookaside.Alignment) < (unsigned __int16)word_1404C76D0 )
                {
                  RtlpInterlockedPushEntrySList(&FsRtlEcpListLookaside, (PSLIST_ENTRY)v65);
                }
                else
                {
                  ++dword_1404C76E0;
                  ((void (__fastcall *)(__int64))qword_1404C76F8)(v65);
                }
              }
              else
              {
                ExFreePoolWithTag((PVOID)v65, 0);
              }
              v38 = a4;
              v60 = v85;
              v65 = 0LL;
              *((_QWORD *)&v21[10].Next + 1) = 0LL;
            }
          }
        }
        Next = (int)v21[2].Next;
        if ( v63 >= 0 )
        {
          if ( Next == -1096154543 )
          {
            *(_DWORD *)(*((_QWORD *)&v21->Next + 1) + 80LL) |= 0x40000u;
            *(_DWORD *)(*((_QWORD *)&v21->Next + 1) + 80LL) &= ~0x2000000u;
            *a1 = Handle;
            *((_QWORD *)v38 + 1) = *((_QWORD *)&v21[1].Next + 1);
            *v38 = (NTSTATUS)v21[1].Next;
            v84 = (unsigned int)v21[1].Next;
LABEL_239:
            if ( Next == -1096154543 )
            {
              v83 = (void *)*((_QWORD *)&v21->Next + 1);
              if ( v83 )
                ObfDereferenceObject(v83);
            }
            goto LABEL_167;
          }
          ObCloseHandle(Handle, v60);
          v63 = -1073741788;
          v84 = -1073741788;
        }
        v79 = (int)v21[1].Next;
        if ( v79 >= 0 )
        {
          v80 = *((_QWORD *)&v21->Next + 1);
          if ( v80 )
          {
            if ( Next == -1096154543 )
            {
              if ( (*(_DWORD *)(v80 + 80) & 0x40000) == 0 )
                IopCloseFile(0LL, *((_QWORD *)&v21->Next + 1), 1LL);
            }
            else
            {
              if ( *(_WORD *)(v80 + 88) )
              {
                ExFreePoolWithTag(*(PVOID *)(v80 + 96), 0);
                v80 = *((_QWORD *)&v21->Next + 1);
              }
              *(_QWORD *)(v80 + 8) = v65;
              ObfDereferenceObject(*((PVOID *)&v21->Next + 1));
            }
          }
        }
        else
        {
          v63 = (int)v21[1].Next;
          v84 = v63;
          if ( (v79 & 0xC0000000) == 0x80000000 || v79 == -1073741191 )
          {
            *v38 = v79;
            *((_QWORD *)v38 + 1) = *((_QWORD *)&v21[1].Next + 1);
          }
        }
        if ( v63 == -1073741772 )
        {
          v81 = *((_QWORD *)&v21[1].Next + 1) - 2684354563LL;
          if ( v81 <= 0x16 )
          {
            v82 = 4194817LL;
            if ( _bittest64(&v82, v81) )
              v84 = -1073741184;
          }
        }
        goto LABEL_239;
      }
      goto LABEL_172;
    }
  }
  if ( (_DWORD)NumberOfBytes )
  {
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&Src[(unsigned int)NumberOfBytes] > 0x7FFFFFFF0000LL
      || &Src[(unsigned int)NumberOfBytes] < Src )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  if ( (unsigned int)NumberOfBytes >= 0x18 )
  {
    *((_QWORD *)&v21[13].Next + 1) = *(_QWORD *)Src;
    v43 = (char *)*((_QWORD *)Src + 1);
    v89 = v43;
    v44 = *((_DWORD *)Src + 4);
    goto LABEL_127;
  }
  v45 = KeGetCurrentPrcb();
  v46 = v45->PPLookasideList[8].P;
  ++v46->TotalFrees;
  if ( LOWORD(v46->ListHead.Alignment) < v46->Depth
    || (++v46->FreeMisses,
        v46 = v45->PPLookasideList[8].L,
        ++v46->TotalFrees,
        LOWORD(v46->ListHead.Alignment) < v46->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v46->ListHead, v21);
  }
  else
  {
    ++v46->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))v46->FreeEx)(v21);
  }
  return 3221225485LL;
}
