/*
 * XREFs of MiWriteComplete @ 0x140021DE0
 * Callers:
 *     MiGatherMappedPages @ 0x14007E6A0 (MiGatherMappedPages.c)
 *     MiGatherPagefilePages @ 0x14014F0E0 (MiGatherPagefilePages.c)
 *     MiStoreWriteModifiedCompleteApc @ 0x1401581E0 (MiStoreWriteModifiedCompleteApc.c)
 * Callees:
 *     FsRtlReleaseFileForModWrite @ 0x14001AF98 (FsRtlReleaseFileForModWrite.c)
 *     MiDereferenceControlAreaFile @ 0x14001CA78 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x14001CBB0 (MiReferenceControlAreaFile.c)
 *     MiReleaseControlAreaWaiters @ 0x14001E3A8 (MiReleaseControlAreaWaiters.c)
 *     MiWriteCompletePfn @ 0x14001E770 (MiWriteCompletePfn.c)
 *     MiFreeModWriterEntry @ 0x140022C88 (MiFreeModWriterEntry.c)
 *     MiReleaseWriteInProgressCharges @ 0x140022CC4 (MiReleaseWriteInProgressCharges.c)
 *     MiDecrementModifiedWriteCount @ 0x140022DA0 (MiDecrementModifiedWriteCount.c)
 *     MiIsRetryIoStatus @ 0x140022E18 (MiIsRetryIoStatus.c)
 *     MmIsWriteErrorFatal @ 0x140022E5C (MmIsWriteErrorFatal.c)
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MmUnmapLockedPages @ 0x140033F00 (MmUnmapLockedPages.c)
 *     MiUpdatePageFileHighInPte @ 0x14003D770 (MiUpdatePageFileHighInPte.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MiTransferSoftwarePte @ 0x140081D88 (MiTransferSoftwarePte.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     KeSignalGate @ 0x140127780 (KeSignalGate.c)
 *     CcNotifyOfMappedWriteComplete @ 0x140138DF8 (CcNotifyOfMappedWriteComplete.c)
 *     MI_PAGEFILE_WRITE @ 0x14014FA90 (MI_PAGEFILE_WRITE.c)
 *     MiStoreCheckCompleteWriteBatch @ 0x1401760F8 (MiStoreCheckCompleteWriteBatch.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiSetDeleteOnClose @ 0x1402A34FC (MiSetDeleteOnClose.c)
 *     MiRetardMdl @ 0x1402A85DC (MiRetardMdl.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

int __fastcall MiWriteComplete(__int64 a1, int *a2, int a3)
{
  struct _MDL *v3; // r13
  __int64 v5; // r8
  int v7; // r15d
  CSHORT MdlFlags; // ax
  int v9; // esi
  int v10; // edx
  unsigned __int64 v11; // rbx
  struct _MDL *v12; // rdi
  __int64 v13; // rbx
  _BOOL8 v14; // rcx
  unsigned int v15; // ebx
  unsigned __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rbx
  unsigned __int64 v20; // r15
  ULONG_PTR v21; // r13
  __int64 v22; // rdi
  unsigned __int64 v23; // rdx
  __int64 updated; // rax
  struct _KEVENT *v25; // r13
  _QWORD *v26; // rax
  void *v27; // rcx
  __int64 v28; // rax
  unsigned __int8 *v29; // rbx
  __int64 v30; // rdx
  char v31; // al
  unsigned __int64 v32; // rdx
  __int64 v33; // rdx
  struct _FILE_OBJECT *v34; // rax
  _QWORD *v35; // rcx
  struct _KEVENT *v36; // rbx
  CSHORT *p_Size; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rbx
  _QWORD *v40; // rcx
  volatile LONG *v41; // rsi
  KIRQL v42; // al
  unsigned __int8 v43; // cl
  KIRQL v44; // di
  bool v45; // zf
  KIRQL v46; // al
  unsigned __int8 v47; // cl
  struct _KPRCB *v48; // rcx
  int v50; // [rsp+30h] [rbp-68h]
  __int64 v51; // [rsp+38h] [rbp-60h]
  __int64 v52; // [rsp+40h] [rbp-58h]
  unsigned __int64 v53; // [rsp+48h] [rbp-50h]
  struct _MDL *v54; // [rsp+50h] [rbp-48h]
  __int64 v55; // [rsp+58h] [rbp-40h] BYREF
  struct _MDL **v56; // [rsp+A0h] [rbp+8h]
  unsigned __int8 v57; // [rsp+A0h] [rbp+8h]
  int v58; // [rsp+A8h] [rbp+10h]
  unsigned int v60; // [rsp+B8h] [rbp+20h]

  v3 = *(struct _MDL **)(a1 + 200);
  v5 = *(unsigned int *)(a1 + 136);
  v51 = *(_QWORD *)(a1 + 192);
  v7 = 0;
  v50 = 0;
  MdlFlags = v3->MdlFlags;
  v9 = 0;
  v60 = *(_DWORD *)(a1 + 136);
  if ( (MdlFlags & 0x200) != 0 )
  {
    MiRetardMdl(v3);
    MdlFlags = v3->MdlFlags;
    v5 = v60;
  }
  if ( (MdlFlags & 1) != 0 )
  {
    MmUnmapLockedPages(v3->MappedSystemVa, v3);
    v5 = v60;
  }
  v10 = *a2;
  v11 = *(_QWORD *)(a1 + 168);
  v58 = v10;
  v52 = *(_QWORD *)(a1 + 160);
  if ( !v52 )
  {
    v55 = MEMORY[0xFFFFF78000000014];
    MI_PAGEFILE_WRITE(a1, (unsigned int)&v55, 5, 0, v10);
    v10 = v58;
    v5 = v60;
  }
  v12 = v3 + 1;
  v54 = v3 + 1;
  v56 = &v3[1].Next + ((v5 & 0xFFF) != 0) + ((int)v5 >> 12);
  if ( v11 )
  {
    v34 = *(struct _FILE_OBJECT **)(a1 + 152);
    v53 = (unsigned __int64)v34;
    if ( (v11 & 1) != 0 )
    {
      v11 &= ~1uLL;
    }
    else
    {
      CcNotifyOfMappedWriteComplete(v34->SectionObjectPointer, *(_QWORD *)(a1 + 176), v5, (unsigned int)v10);
      v34 = (struct _FILE_OBJECT *)v53;
    }
    FsRtlReleaseFileForModWrite(v34, (struct _ERESOURCE *)v11);
    v13 = v52;
    MiDereferenceControlAreaFile(v52, v53);
    v10 = v58;
  }
  else
  {
    v13 = v52;
  }
  if ( v10 >= 0 )
  {
    v16 = (unsigned __int64)v56;
    goto LABEL_15;
  }
  v14 = v13 != 0;
  v15 = (*(_DWORD *)(a1 + 40) >> 1) & 1;
  if ( !(unsigned int)MmIsWriteErrorFatal(v14, v15, (unsigned int)v10) )
  {
    v9 = 1;
LABEL_12:
    v16 = (unsigned __int64)v56;
    goto LABEL_13;
  }
  if ( !v52 )
    KeBugCheckEx(0x7Au, 0x20uLL, v58, (ULONG_PTR)v3, 0LL);
  if ( (*(_DWORD *)(v52 + 56) & 0x10) != 0 )
    goto LABEL_12;
  if ( (unsigned int)MiIsRetryIoStatus((unsigned int)v58, (int)v60) && v15 )
  {
    p_Size = &v3[1].Size;
    v16 = (unsigned __int64)v56;
    if ( v56 > (struct _MDL **)p_Size )
    {
      v9 = 1;
      goto LABEL_13;
    }
  }
  else
  {
    v16 = (unsigned __int64)v56;
  }
  v7 = 1;
  v50 = 1;
LABEL_13:
  v13 = v52;
  if ( v52 )
    *(_DWORD *)(v51 + 664) = v58;
  else
    *(_DWORD *)(v51 + 660) = v58;
LABEL_15:
  if ( v7 )
    MiSetDeleteOnClose(v13, 1LL);
  v17 = MiSwizzleInvalidPte(0LL);
  v18 = *(_QWORD *)(a1 + 144);
  v19 = v17;
  if ( v18 )
    v19 = MiTransferSoftwarePte(v17, v18, *(_QWORD *)(a1 + 176) >> 12, 1LL);
  if ( (unsigned __int64)v12 < v16 )
  {
    v20 = (unsigned __int64)v56;
    do
    {
      if ( v12->Next == (struct _MDL *)qword_14043BE88 )
      {
        if ( (*(_DWORD *)(a1 + 40) & 0x20) == 0 )
          MiReleasePageFileInfo(v51, v19, 0LL);
        v32 = v19;
        if ( qword_14043B180 && (v19 & 0x10) == 0 )
          v32 = v19 & ~qword_14043B180;
        updated = MiUpdatePageFileHighInPte(v19, HIDWORD(v32) + 1);
      }
      else
      {
        v21 = 48 * (__int64)v12->Next - 0x58000000000LL;
        v57 = MiLockPageInline(v21);
        if ( (v9 & 1) == 0 )
        {
          if ( (*(_BYTE *)(v21 + 34) & 0x10) == 0 || (*(_DWORD *)(v21 + 16) & 0x400LL) != 0 )
            v9 &= ~2u;
          else
            v9 |= 2u;
        }
        v9 &= 0xFFFFFFF3;
        if ( (*(_DWORD *)(a1 + 40) & 0x20) != 0 )
        {
          v30 = *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(v21 + 40) >> 40) & 0x3FFLL));
          if ( (v9 & 2) == 0 && (*(_QWORD *)(v21 + 24) & 0x4000000000000000LL) == 0 )
          {
            v31 = *(_BYTE *)(v21 + 34);
            if ( *(_WORD *)(v21 + 32) > 1u )
            {
              *(_BYTE *)(v21 + 34) = v31 | 0x10;
              v9 |= 2u;
            }
            else
            {
              *(_BYTE *)(v21 + 34) = v31 & 0xF8 | 2;
              if ( *(_DWORD *)(v30 + 1272) )
                v9 |= 4u;
              else
                v9 |= 8u;
            }
          }
        }
        v22 = MiWriteCompletePfn(v21, v9);
        _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v57 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v57);
        if ( v22 )
          MiReleasePageFileInfo(v51, v22, 0LL);
        v23 = v19;
        if ( qword_14043B180 && (v19 & 0x10) == 0 )
          v23 = v19 & ~qword_14043B180;
        updated = MiUpdatePageFileHighInPte(v19, HIDWORD(v23) + 1);
        v12 = v54;
      }
      v12 = (struct _MDL *)((char *)v12 + 8);
      v54 = v12;
      v19 = updated;
    }
    while ( (unsigned __int64)v12 < v20 );
    v7 = v50;
  }
  if ( *(_DWORD *)(a1 + 140) )
  {
    v33 = *(unsigned int *)(a1 + 140);
    if ( *(_QWORD *)(a1 + 144) )
      MiReleaseWriteInProgressCharges(v51, v33, 0LL);
    else
      MiReleaseWriteInProgressCharges(v51, v33, 1LL);
  }
  if ( *(_QWORD *)(a1 + 144) )
  {
    if ( (*(_DWORD *)(a1 + 40) & 0x1Cu) < 8 )
      --*(_DWORD *)(v51 + 676);
    v35 = *(_QWORD **)(v51 + 896);
    if ( *v35 != v51 + 888 )
      goto LABEL_112;
    *(_QWORD *)a1 = v51 + 888;
    v36 = (struct _KEVENT *)(v51 + 904);
    *(_QWORD *)(a1 + 8) = v35;
    *v35 = a1;
    *(_QWORD *)(v51 + 896) = a1;
    if ( *(_BYTE *)(v51 + 657) != 1 )
      v36 = 0LL;
    v25 = v36;
    if ( (*(_DWORD *)(a1 + 40) & 0x20) != 0 )
    {
      --*(_DWORD *)(v51 + 1164);
      if ( !*(_BYTE *)(v51 + 658) )
        MiStoreCheckCompleteWriteBatch(v51);
    }
  }
  else
  {
    v25 = 0LL;
  }
  if ( v52 )
  {
    if ( v7 )
    {
      PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x70646D4Du);
      if ( PoolWithTag )
      {
        PoolWithTag[1].List.Flink = (struct _LIST_ENTRY *)MiReferenceControlAreaFile(v52);
        LODWORD(PoolWithTag[1].List.Blink) = v58;
        LOBYTE(PoolWithTag[1].WorkerRoutine) = 1;
        PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))MiLdwPopupWorker;
        PoolWithTag->Parameter = PoolWithTag;
        PoolWithTag->List.Flink = 0LL;
        ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
      }
    }
    v26 = (_QWORD *)MiDecrementModifiedWriteCount(v52, 0LL);
    if ( v26 )
      MiReleaseControlAreaWaiters(v26);
    _InterlockedDecrement((volatile signed __int32 *)(v51 + 608));
    v27 = *(void **)(a1 + 200);
    if ( v27 != (void *)(a1 + 208) )
      ExFreePoolWithTag(v27, 0);
    if ( (*(_DWORD *)(a1 + 40) & 1) == 0 )
    {
      MiFreeModWriterEntry(a1, 1LL);
LABEL_44:
      v28 = 987LL;
      goto LABEL_45;
    }
    v40 = *(_QWORD **)(v51 + 624);
    if ( *v40 == v51 + 616 )
    {
      *(_QWORD *)a1 = v51 + 616;
      *(_QWORD *)(a1 + 8) = v40;
      *v40 = a1;
      *(_QWORD *)(v51 + 624) = a1;
      if ( *(_BYTE *)(v51 + 656) == 1 )
      {
        *(_BYTE *)(v51 + 656) = 0;
        KeSignalGate(v51 + 632, 1LL);
      }
      goto LABEL_44;
    }
LABEL_112:
    __fastfail(3u);
  }
  v28 = 984LL;
LABEL_45:
  v29 = (unsigned __int8 *)(v28 + v51);
  if ( v58 >= 0 )
  {
    if ( v52 )
      *(_BYTE *)(v51 + 1016) = 0;
    if ( !*v29 )
      goto LABEL_50;
    v41 = (volatile LONG *)(v51 + 980);
    v42 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v51 + 980));
    v43 = *v29;
    v44 = v42;
    if ( !*v29 )
      goto LABEL_128;
    if ( v29[2] )
    {
      if ( v43 > 1u )
      {
        v29[2] = 0;
        *v29 = 0;
      }
      goto LABEL_128;
    }
    v45 = v29[1]-- == 1;
    if ( !v45 )
    {
LABEL_128:
      ExReleaseSpinLockExclusiveFromDpcLevel(v41);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v44 < 2u )
      {
        v48 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v48->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v48);
      }
      LODWORD(v28) = v44;
      __writecr8(v44);
      goto LABEL_50;
    }
    if ( v43 > 1u )
    {
      *v29 = 0;
      goto LABEL_128;
    }
LABEL_127:
    v29[2] = 1;
    goto LABEL_128;
  }
  LODWORD(v28) = MiIsRetryIoStatus((unsigned int)v58, (int)v60);
  if ( a3 )
  {
    if ( !v7 && !(_DWORD)v28 )
      goto LABEL_49;
    goto LABEL_50;
  }
  if ( v58 == -1073741740 )
  {
LABEL_49:
    *(_BYTE *)(v51 + 1016) = 1;
    goto LABEL_50;
  }
  if ( (_DWORD)v28 )
  {
    v41 = (volatile LONG *)(v51 + 980);
    v46 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v51 + 980));
    v47 = *v29;
    v44 = v46;
    if ( !*v29 )
    {
      *(_WORD *)v29 = 4112;
      goto LABEL_128;
    }
    if ( v47 > 1u )
      *v29 = v47 >> 1;
    if ( v29[2] )
      goto LABEL_128;
    v45 = v29[1]-- == 1;
    if ( !v45 )
      goto LABEL_128;
    goto LABEL_127;
  }
LABEL_50:
  if ( v25 )
    LODWORD(v28) = KeSetEvent(v25, 0, 0);
  return v28;
}
