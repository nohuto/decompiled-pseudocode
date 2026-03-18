/*
 * XREFs of IopCreateFile @ 0x140618CB0
 * Callers:
 *     IoCreateFile @ 0x140617880 (IoCreateFile.c)
 *     IoCreateFileEx @ 0x140618A60 (IoCreateFileEx.c)
 *     NtOpenFile @ 0x140618BB0 (NtOpenFile.c)
 *     NtCreateFile @ 0x140618C20 (NtCreateFile.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     PsGetCurrentSilo @ 0x140043C50 (PsGetCurrentSilo.c)
 *     ExFreeToNPagedLookasideList @ 0x140084498 (ExFreeToNPagedLookasideList.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14009EE00 (ExAllocatePoolWithQuotaTag.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CC570 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CC5B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopCloseFile @ 0x1405D8DF0 (IopCloseFile.c)
 *     ObOpenObjectByNameEx @ 0x1405F5850 (ObOpenObjectByNameEx.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140619930 (FsRtlFreeExtraCreateParameter.c)
 *     IoCheckEaBufferValidity @ 0x140619A00 (IoCheckEaBufferValidity.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall IopCreateFile(
        HANDLE *a1,
        ACCESS_MASK a2,
        __int64 a3,
        int *a4,
        HANDLE *a5,
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
  int v16; // r14d
  char v17; // cl
  char PreviousMode; // al
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rbx
  PSLIST_ENTRY v21; // rdi
  _GENERAL_LOOKASIDE *L; // rbx
  struct _KPRCB *v23; // rdx
  _GENERAL_LOOKASIDE *v24; // rcx
  _SLIST_ENTRY *v26; // r13
  struct _KPRCB *v27; // rdx
  _GENERAL_LOOKASIDE *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  HANDLE v31; // rbx
  PVOID PoolWithQuotaTag; // rax
  int v33; // eax
  int v34; // eax
  __int64 v35; // r15
  KPROCESSOR_MODE v36; // r14
  size_t v37; // r8
  struct _KTHREAD *CurrentThread; // rax
  int v39; // r12d
  void *v40; // rcx
  __int64 v41; // r13
  int v42; // eax
  PVOID PoolWithTag; // rax
  struct _KPRCB *v44; // rdx
  _GENERAL_LOOKASIDE *v45; // rcx
  NTSTATUS v46; // esi
  struct _KPRCB *v47; // rdx
  _GENERAL_LOOKASIDE *v48; // rcx
  __int64 **v49; // rsi
  __int64 *v50; // rbx
  __int64 *v51; // rcx
  __int64 *v52; // rdx
  __int64 **v53; // rax
  __int64 *v54; // rax
  __int64 v55; // rcx
  _QWORD *v56; // r14
  void (__fastcall *v57)(_QWORD *, _QWORD *); // rax
  __int64 v58; // rcx
  int Next; // ebx
  int v60; // ecx
  __int64 v61; // rcx
  unsigned __int64 v62; // rcx
  __int64 v63; // rax
  void *v64; // rcx
  unsigned int v65; // [rsp+44h] [rbp-54h]
  char v66; // [rsp+48h] [rbp-50h]
  HANDLE Handle; // [rsp+50h] [rbp-48h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+58h] [rbp-40h]
  int v73; // [rsp+108h] [rbp+70h]

  v16 = a9;
  v17 = 0;
  Handle = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a14 & 0x100) == 0 )
    v17 = PreviousMode;
  v66 = v17;
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[8].P;
  ++P->TotalAllocates;
  v21 = RtlpInterlockedPopEntrySList(&P->ListHead);
  ListEntry = v21;
  if ( !v21 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[8].L;
    ++L->TotalAllocates;
    v21 = RtlpInterlockedPopEntrySList(&L->ListHead);
    ListEntry = v21;
    if ( !v21 )
    {
      ++L->AllocateMisses;
      v21 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))L->AllocateEx)(
                            (unsigned int)L->Type,
                            L->Size,
                            L->Tag);
      ListEntry = v21;
    }
  }
  if ( !v21 )
    return 3221225626LL;
  LODWORD(v21->Next) = CurrentPrcb->Number;
  if ( !v66 && (a14 & 0x200) == 0 )
    goto LABEL_50;
  if ( (a6 & 0xFFA50048) != 0
    || (a7 & 0xFFFFFFF8) != 0
    || a8 > 5
    || (a9 & 0xFF000000) != 0
    || (a9 & 0x30) != 0 && (a2 & 0x100000) == 0
    || (a9 & 0x1000) != 0 && (a2 & 0x10000) == 0
    || (a9 & 0x30) == 0x30
    || (a9 & 0x41) == 1 && ((a9 & 0xFF5E0ACC) != 0 || a8 - 1 > 2)
    || (a9 & 0x100100) == 0x100100
    || (a9 & 0x10100) == 0x10100
    || (a9 & 0x110000) == 0x110000
    || (a9 & 8) != 0 && (a2 & 4) != 0 )
  {
    goto LABEL_41;
  }
  if ( IopFailZeroAccessCreate && !a2 )
  {
    v23 = KeGetCurrentPrcb();
    v24 = v23->PPLookasideList[8].P;
    ++v24->TotalFrees;
    if ( LOWORD(v24->ListHead.Alignment) < v24->Depth
      || (++v24->FreeMisses,
          v24 = v23->PPLookasideList[8].L,
          ++v24->TotalFrees,
          LOWORD(v24->ListHead.Alignment) < v24->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v24->ListHead, v21);
      return 3221225506LL;
    }
    else
    {
      ++v24->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v24->FreeEx)(v21);
      return 3221225506LL;
    }
  }
  if ( a12 )
  {
    v26 = a13;
    if ( a12 == 1 )
    {
      if ( !a13
        || ((__int64)a13->Next & 0xFFFFFFFC) != 0
        || HIDWORD(a13->Next) > 1
        || *((_DWORD *)&a13->Next + 2) > 1u
        || (a7 & 4) != 0
        || a8 - 1 > 2 )
      {
        goto LABEL_41;
      }
LABEL_40:
      if ( (a9 & 0xFFFFFFCD) != 0 )
        goto LABEL_41;
      goto LABEL_51;
    }
    if ( a12 == 2 )
    {
      if ( !a13 || (a7 & 4) != 0 || (a7 & 0xFFFFFFFD) == 0 || a8 != 2 )
        goto LABEL_41;
      goto LABEL_40;
    }
  }
  else
  {
LABEL_50:
    v26 = a13;
  }
LABEL_51:
  if ( v66 )
  {
    *((_QWORD *)&v21[4].Next + 1) = 0LL;
    v29 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v29 = (__int64)a1;
    *(_QWORD *)v29 = *(_QWORD *)v29;
    v30 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
      v30 = (__int64)a4;
    *(_DWORD *)v30 = *(_DWORD *)v30;
    if ( a5 )
    {
      if ( ((unsigned __int8)a5 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v31 = *a5;
      Handle = v31;
      if ( (__int64)v31 < 0 )
        RtlRaiseStatus(-1073741811);
    }
    else
    {
      v31 = 0LL;
      Handle = 0LL;
    }
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
      v33 = IoCheckEaBufferValidity(*((PFILE_FULL_EA_INFORMATION *)&v21[4].Next + 1), NumberOfBytes, (PULONG)a4 + 2);
      if ( v33 < 0 )
      {
        *a4 = v33;
        RtlRaiseStatus(v33);
      }
      v34 = a14;
      v35 = 0LL;
      goto LABEL_71;
    }
    v34 = a14;
LABEL_70:
    v35 = 0LL;
    LODWORD(v21[5].Next) = 0;
    *((_QWORD *)&v21[4].Next + 1) = 0LL;
    goto LABEL_71;
  }
  v16 = a9 & 0x7FFFFFFF;
  if ( a9 >= 0 )
    v16 = a9;
  v34 = a14 | 0x400;
  if ( a9 >= 0 )
    v34 = a14;
  v73 = v34;
  if ( !a5 )
  {
    v31 = Handle;
LABEL_90:
    if ( !Src || !(_DWORD)NumberOfBytes )
      goto LABEL_70;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x61456F49u);
    *((_QWORD *)&v21[4].Next + 1) = PoolWithTag;
    if ( PoolWithTag )
    {
      LODWORD(v21[5].Next) = NumberOfBytes;
      memmove(PoolWithTag, Src, (unsigned int)NumberOfBytes);
      v46 = IoCheckEaBufferValidity(*((PFILE_FULL_EA_INFORMATION *)&v21[4].Next + 1), NumberOfBytes, (PULONG)a4 + 2);
      v65 = v46;
      if ( v46 < 0 )
      {
        ExFreePoolWithTag(*((PVOID *)&v21[4].Next + 1), 0);
        *a4 = v46;
LABEL_100:
        v47 = KeGetCurrentPrcb();
        v48 = v47->PPLookasideList[8].P;
        ++v48->TotalFrees;
        if ( LOWORD(v48->ListHead.Alignment) < v48->Depth
          || (++v48->FreeMisses,
              v48 = v47->PPLookasideList[8].L,
              ++v48->TotalFrees,
              LOWORD(v48->ListHead.Alignment) < v48->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v48->ListHead, v21);
          return v65;
        }
        else
        {
          ++v48->FreeMisses;
          ((void (__fastcall *)(PSLIST_ENTRY))v48->FreeEx)(v21);
          return v65;
        }
      }
      v34 = v73;
      v35 = 0LL;
LABEL_71:
      LODWORD(v21->Next) = 14155784;
      LODWORD(v21[2].Next) = 0;
      *((_QWORD *)&v21[1].Next + 1) = 0LL;
      *((_QWORD *)&v21[3].Next + 1) = v31;
      LODWORD(v21[4].Next) = v16;
      WORD2(v21[4].Next) = a6;
      HIWORD(v21[4].Next) = a7;
      *((_DWORD *)&v21[5].Next + 2) = a8;
      *((_WORD *)&v21[8].Next + 4) = 0;
      *((_BYTE *)&v21[8].Next + 10) = 0;
      HIDWORD(v21[5].Next) = v34;
      *((_QWORD *)&v21[2].Next + 1) = 0LL;
      v21[3].Next = (_SLIST_ENTRY *)a3;
      *((_DWORD *)&v21[7].Next + 2) = a12;
      v21[8].Next = v26;
      *((_DWORD *)&v21[9].Next + 2) = a15;
      v36 = v66;
      *((_BYTE *)&v21[9].Next + 12) = v66;
      v21[10].Next = 0LL;
      *((_QWORD *)&v21[10].Next + 1) = 0LL;
      v21[11].Next = 0LL;
      *((_QWORD *)&v21[11].Next + 1) = 0LL;
      LOWORD(v21[10].Next) = 40;
      v21[12].Next = (_SLIST_ENTRY *)1;
      if ( a16 )
      {
        v37 = *a16;
        if ( v37 > 0x28 )
          v37 = 40LL;
        memmove(&v21[10], a16, v37);
      }
      if ( v21[12].Next == (_SLIST_ENTRY *)1 )
        v21[12].Next = (_SLIST_ENTRY *)PsGetCurrentSilo();
      LODWORD(v21[1].Next) = 0;
      *((_QWORD *)&v21->Next + 1) = 0LL;
      CurrentThread = KeGetCurrentThread();
      ++CurrentThread->OtherOperationCount;
      __incgsdword(0x2EE4u);
      v39 = ObOpenObjectByNameEx(
              a3,
              (__int64)IoFileObjectType,
              v66,
              0LL,
              a2,
              (__int64)v21,
              (__int64)v21[12].Next,
              &Handle);
      v65 = v39;
      v40 = (void *)*((_QWORD *)&v21[4].Next + 1);
      if ( v40 )
        ExFreePoolWithTag(v40, 0);
      v41 = *((_QWORD *)&v21[10].Next + 1);
      if ( v41 )
      {
        v42 = *(_DWORD *)(v41 + 4);
        if ( (v42 & 0x3F0) != 0 )
        {
          *(_DWORD *)(v41 + 4) = v42 - 16;
          *((_QWORD *)&v21[10].Next + 1) = 0LL;
        }
        else
        {
          v49 = (__int64 **)(v41 + 8);
          if ( (v42 & 1) != 0 )
          {
            v50 = *v49;
            while ( v50 != (__int64 *)v49 )
            {
              v51 = v50;
              v50 = (__int64 *)*v50;
              if ( (v51[5] & 1) == 0 )
              {
                v52 = (__int64 *)*v51;
                v53 = (__int64 **)v51[1];
                if ( *(__int64 **)(*v51 + 8) != v51 || *v53 != v51 )
                  __fastfail(3u);
                *v53 = v52;
                v52[1] = (__int64)v53;
                v51[1] = 0LL;
                *v51 = 0LL;
                FsRtlFreeExtraCreateParameter(v51 + 8);
              }
            }
          }
          else
          {
            while ( 1 )
            {
              v54 = *v49;
              if ( *v49 == (__int64 *)v49 )
                break;
              v55 = *v54;
              if ( (__int64 **)v54[1] != v49 || *(__int64 **)(v55 + 8) != v54 )
                __fastfail(3u);
              *v49 = (__int64 *)v55;
              *(_QWORD *)(v55 + 8) = v49;
              v54[1] = 0LL;
              *v54 = 0LL;
              v56 = v54 + 8;
              v57 = (void (__fastcall *)(_QWORD, _QWORD))v54[4];
              if ( v57 )
                v57(v56, v56 - 6);
              if ( (*(_DWORD *)(v56 - 3) & 0x20) != 0 && FltMgrCallbacks )
              {
                v35 = *(v56 - 1);
                (*(void (__fastcall **)(__int64, _QWORD *))FltMgrCallbacks)(v35, v56);
              }
              v58 = *(v56 - 2);
              if ( v58 )
              {
                if ( (*(_DWORD *)(v56 - 3) & 0x40) != 0 )
                {
                  ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)v58, v56 - 9);
                }
                else
                {
                  ++*(_DWORD *)(v58 + 28);
                  if ( *(_WORD *)v58 < *(_WORD *)(v58 + 16) )
                  {
                    RtlpInterlockedPushEntrySList((PSLIST_HEADER)v58, (PSLIST_ENTRY)(v56 - 9));
                  }
                  else
                  {
                    ++*(_DWORD *)(v58 + 32);
                    (*(void (__fastcall **)(_QWORD *))(v58 + 56))(v56 - 9);
                  }
                }
              }
              else
              {
                ExFreePoolWithTag(v56 - 9, 0);
              }
              if ( v35 )
                (*(void (__fastcall **)(__int64))(FltMgrCallbacks + 8))(v35);
              v35 = 0LL;
            }
            if ( (*(_DWORD *)(v41 + 4) & 4) != 0 )
            {
              ++dword_1404F29DC;
              if ( LOWORD(FsRtlEcpListLookaside.Alignment) < (unsigned __int16)word_1404F29D0 )
              {
                RtlpInterlockedPushEntrySList(&FsRtlEcpListLookaside, (PSLIST_ENTRY)v41);
              }
              else
              {
                ++dword_1404F29E0;
                ((void (__fastcall *)(__int64))qword_1404F29F8)(v41);
              }
              v36 = v66;
              *((_QWORD *)&v21[10].Next + 1) = 0LL;
            }
            else
            {
              ExFreePoolWithTag((PVOID)v41, 0);
              v36 = v66;
              *((_QWORD *)&v21[10].Next + 1) = 0LL;
            }
          }
        }
      }
      Next = (int)v21[2].Next;
      if ( v39 >= 0 )
      {
        if ( Next == -1096154543 )
        {
          *(_DWORD *)(*((_QWORD *)&v21->Next + 1) + 80LL) |= 0x40000u;
          *(_DWORD *)(*((_QWORD *)&v21->Next + 1) + 80LL) &= ~0x2000000u;
          *a1 = Handle;
          *((_QWORD *)a4 + 1) = *((_QWORD *)&v21[1].Next + 1);
          *a4 = (int)v21[1].Next;
          v65 = (unsigned int)v21[1].Next;
LABEL_157:
          if ( Next == -1096154543 )
          {
            v64 = (void *)*((_QWORD *)&v21->Next + 1);
            if ( v64 )
              ObfDereferenceObject(v64);
          }
          goto LABEL_100;
        }
        ObCloseHandle(Handle, v36);
        v39 = -1073741788;
        v65 = -1073741788;
      }
      v60 = (int)v21[1].Next;
      if ( v60 >= 0 )
      {
        v61 = *((_QWORD *)&v21->Next + 1);
        if ( v61 )
        {
          if ( Next == -1096154543 )
          {
            if ( (*(_DWORD *)(v61 + 80) & 0x40000) == 0 )
              IopCloseFile(0LL, *((struct _FILE_OBJECT **)&v21->Next + 1), 1LL, 1LL);
          }
          else
          {
            if ( *(_WORD *)(v61 + 88) )
            {
              ExFreePoolWithTag(*(PVOID *)(v61 + 96), 0);
              v61 = *((_QWORD *)&v21->Next + 1);
            }
            *(_QWORD *)(v61 + 8) = 0LL;
            ObfDereferenceObject(*((PVOID *)&v21->Next + 1));
          }
        }
      }
      else
      {
        v39 = (int)v21[1].Next;
        v65 = v39;
        if ( (v60 & 0xC0000000) == 0x80000000 || v60 == -1073741191 )
        {
          *a4 = v60;
          *((_QWORD *)a4 + 1) = *((_QWORD *)&v21[1].Next + 1);
        }
      }
      if ( v39 == -1073741772 )
      {
        v62 = *((_QWORD *)&v21[1].Next + 1) - 2684354563LL;
        if ( v62 <= 0x16 )
        {
          v63 = 4194817LL;
          if ( _bittest64(&v63, v62) )
            v65 = -1073741184;
        }
      }
      goto LABEL_157;
    }
    v44 = KeGetCurrentPrcb();
    v45 = v44->PPLookasideList[8].P;
    ++v45->TotalFrees;
    if ( LOWORD(v45->ListHead.Alignment) >= v45->Depth )
    {
      ++v45->FreeMisses;
      v45 = v44->PPLookasideList[8].L;
      ++v45->TotalFrees;
      if ( LOWORD(v45->ListHead.Alignment) >= v45->Depth )
      {
        ++v45->FreeMisses;
        ((void (__fastcall *)(PSLIST_ENTRY))v45->FreeEx)(v21);
        return 3221225626LL;
      }
    }
    RtlpInterlockedPushEntrySList(&v45->ListHead, v21);
    return 3221225626LL;
  }
  v31 = *a5;
  if ( (__int64)*a5 >= 0 )
  {
    Handle = *a5;
    goto LABEL_90;
  }
LABEL_41:
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
  }
  else
  {
    ++v28->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))v28->FreeEx)(v21);
  }
  return 3221225485LL;
}
