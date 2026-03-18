/*
 * XREFs of MiWriteComplete @ 0x1400DDB90
 * Callers:
 *     MiGatherMappedPages @ 0x14007B1D8 (MiGatherMappedPages.c)
 *     MiGatherPagefilePages @ 0x14014A9AC (MiGatherPagefilePages.c)
 *     MiStoreWriteModifiedCompleteApc @ 0x14015BE40 (MiStoreWriteModifiedCompleteApc.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140009B60 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x140009C6C (MiDereferenceControlAreaFile.c)
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     MmUnmapLockedPages @ 0x14006AD00 (MmUnmapLockedPages.c)
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     MiTransferSoftwarePte @ 0x1400DBA04 (MiTransferSoftwarePte.c)
 *     MiUpdatePageFileHighInPte @ 0x1400DBC30 (MiUpdatePageFileHighInPte.c)
 *     MiGetPageFileHigh @ 0x1400DE0E8 (MiGetPageFileHigh.c)
 *     MiWriteCompletePfn @ 0x1400DE110 (MiWriteCompletePfn.c)
 *     MiFreeModWriterEntry @ 0x1400DFA48 (MiFreeModWriterEntry.c)
 *     MiReleaseWriteInProgressCharges @ 0x1400DFA84 (MiReleaseWriteInProgressCharges.c)
 *     MiDecrementModifiedWriteCount @ 0x1400DFAD8 (MiDecrementModifiedWriteCount.c)
 *     MiIsRetryIoStatus @ 0x1400DFB50 (MiIsRetryIoStatus.c)
 *     MmIsWriteErrorFatal @ 0x1400DFB94 (MmIsWriteErrorFatal.c)
 *     MiReleaseControlAreaWaiters @ 0x1400E05A0 (MiReleaseControlAreaWaiters.c)
 *     ExReleaseSpinLockExclusive @ 0x14010A2A0 (ExReleaseSpinLockExclusive.c)
 *     FsRtlReleaseFileForModWrite @ 0x14011E148 (FsRtlReleaseFileForModWrite.c)
 *     CcNotifyOfMappedWriteComplete @ 0x140123ADC (CcNotifyOfMappedWriteComplete.c)
 *     KeSignalGate @ 0x1401309D0 (KeSignalGate.c)
 *     MI_PAGEFILE_WRITE @ 0x14014CE08 (MI_PAGEFILE_WRITE.c)
 *     MiStoreCheckCompleteWriteBatch @ 0x14015B92C (MiStoreCheckCompleteWriteBatch.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     MiSetDeleteOnClose @ 0x1402BA6BC (MiSetDeleteOnClose.c)
 *     MiRetardMdl @ 0x1402BFC7C (MiRetardMdl.c)
 *     MiLockPage @ 0x1402D8FA4 (MiLockPage.c)
 *     MiUnlockPage @ 0x1402D8FF8 (MiUnlockPage.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall MiWriteComplete(__int64 a1, unsigned int *a2, int a3)
{
  struct _MDL *v3; // rsi
  __int64 v5; // r15
  int v7; // r14d
  CSHORT MdlFlags; // ax
  int v9; // edi
  __int64 v10; // r13
  unsigned int v11; // edx
  __int64 v12; // rbp
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  __int64 updated; // rbp
  struct _MDL *v16; // r14
  ULONG_PTR v17; // r13
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rsi
  __int64 PageFileHigh; // rax
  struct _KEVENT *v22; // rbp
  int v23; // esi
  __int64 v24; // rax
  void *v25; // rcx
  unsigned __int8 *v26; // rdi
  int IsRetryIoStatus; // eax
  __int64 v28; // rdx
  char v29; // al
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  struct _FILE_OBJECT *v32; // rax
  unsigned __int64 v33; // rdx
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rdi
  _QWORD *v35; // rcx
  KIRQL v36; // al
  unsigned __int8 v37; // cl
  KIRQL v38; // dl
  bool v39; // zf
  KIRQL v40; // al
  unsigned __int8 v41; // cl
  int v42; // [rsp+30h] [rbp-78h]
  unsigned __int64 v43; // [rsp+38h] [rbp-70h]
  struct _MDL *v44; // [rsp+40h] [rbp-68h]
  __int64 v45; // [rsp+48h] [rbp-60h] BYREF
  __int64 v46; // [rsp+50h] [rbp-58h]
  unsigned int v47; // [rsp+B0h] [rbp+8h]
  char v48; // [rsp+B0h] [rbp+8h]
  unsigned __int64 v49; // [rsp+B0h] [rbp+8h]
  int v50; // [rsp+B8h] [rbp+10h]
  int v52; // [rsp+C8h] [rbp+20h]

  v3 = *(struct _MDL **)(a1 + 200);
  v5 = *(_QWORD *)(a1 + 192);
  v52 = *(_DWORD *)(a1 + 136);
  v7 = 0;
  v42 = 0;
  MdlFlags = v3->MdlFlags;
  v9 = 0;
  if ( (MdlFlags & 0x200) != 0 )
  {
    MiRetardMdl(v3);
    MdlFlags = v3->MdlFlags;
  }
  if ( (MdlFlags & 1) != 0 )
    MmUnmapLockedPages(v3->MappedSystemVa, v3);
  v10 = *(_QWORD *)(a1 + 160);
  v11 = *a2;
  v12 = *(_QWORD *)(a1 + 168);
  v50 = v11;
  v46 = v10;
  if ( !v10 )
  {
    v45 = MEMORY[0xFFFFF78000000014];
    MI_PAGEFILE_WRITE(a1, (unsigned int)&v45, 5, 0, v11);
    v11 = v50;
  }
  v44 = v3 + 1;
  v43 = (unsigned __int64)&v3[1] + 8 * ((v52 & 0xFFF) != 0) + 8 * (v52 >> 12);
  if ( v12 )
  {
    v32 = *(struct _FILE_OBJECT **)(a1 + 152);
    v49 = (unsigned __int64)v32;
    if ( (v12 & 1) == 0 )
    {
      CcNotifyOfMappedWriteComplete(v32->SectionObjectPointer, *(_QWORD *)(a1 + 176), (unsigned int)v52, v11);
      v32 = (struct _FILE_OBJECT *)v49;
    }
    FsRtlReleaseFileForModWrite(v32);
    MiDereferenceControlAreaFile(v10, v49);
  }
  if ( v50 < 0 )
  {
    v47 = (*(_DWORD *)(a1 + 40) >> 1) & 1;
    if ( !(unsigned int)MmIsWriteErrorFatal(v10 != 0, v47, (unsigned int)v50) )
      goto LABEL_10;
    if ( !v10 )
      KeBugCheckEx(0x7Au, 0x20uLL, v50, (ULONG_PTR)v3, 0LL);
    if ( (*(_DWORD *)(v10 + 56) & 0x10) != 0 )
      goto LABEL_11;
    if ( (unsigned int)MiIsRetryIoStatus((unsigned int)v50, v52) && v47 && v43 > (unsigned __int64)&v3[1].Size )
    {
LABEL_10:
      v9 = 1;
    }
    else
    {
      v7 = 1;
      v42 = 1;
    }
LABEL_11:
    if ( v10 )
      *(_DWORD *)(v5 + 672) = v50;
    else
      *(_DWORD *)(v5 + 668) = v50;
  }
  if ( v7 )
    MiSetDeleteOnClose(v10, 1LL);
  v13 = MiSwizzleInvalidPte(0LL);
  v14 = *(_QWORD *)(a1 + 144);
  updated = v13;
  if ( v14 )
    updated = MiTransferSoftwarePte(v13, *(_QWORD *)(a1 + 144), *(_QWORD *)(a1 + 176) >> 12);
  if ( (unsigned __int64)v44 < v43 )
  {
    v16 = v44;
    while ( v16->Next == (struct _MDL *)qword_140466848 )
    {
      if ( (*(_DWORD *)(a1 + 40) & 0x20) == 0 )
      {
        v33 = updated;
LABEL_88:
        MiReleasePageFileInfo(v5, v33, 0);
      }
LABEL_23:
      PageFileHigh = MiGetPageFileHigh(updated);
      v16 = (struct _MDL *)((char *)v16 + 8);
      updated = MiUpdatePageFileHighInPte(updated, PageFileHigh + 1);
      if ( (unsigned __int64)v16 >= v43 )
      {
        v14 = *(_QWORD *)(a1 + 144);
        v7 = v42;
        v10 = v46;
        goto LABEL_25;
      }
    }
    v17 = 48 * (__int64)v16->Next - 0x58000000000LL;
    v48 = MiLockPage(v17);
    if ( (v9 & 1) == 0 )
    {
      if ( (*(_BYTE *)(v17 + 34) & 0x10) == 0 || (*(_DWORD *)(v17 + 16) & 0x400LL) != 0 )
        v9 &= ~2u;
      else
        v9 |= 2u;
    }
    v9 &= 0xFFFFFFF3;
    if ( (*(_DWORD *)(a1 + 40) & 0x20) != 0 )
    {
      v28 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v17 + 40) >> 40) & 0x3FFLL));
      if ( (v9 & 2) == 0 && (*(_QWORD *)(v17 + 24) & 0x4000000000000000LL) == 0 )
      {
        v29 = *(_BYTE *)(v17 + 34);
        if ( *(_WORD *)(v17 + 32) > 1u )
        {
          *(_BYTE *)(v17 + 34) = v29 | 0x10;
          v9 |= 2u;
        }
        else
        {
          *(_BYTE *)(v17 + 34) = v29 & 0xF8 | 2;
          if ( *(_DWORD *)(v28 + 1272) )
            v9 |= 4u;
          else
            v9 |= 8u;
        }
      }
    }
    v18 = MiWriteCompletePfn(v17);
    LOBYTE(v19) = v48;
    v20 = v18;
    MiUnlockPage(v17, v19);
    if ( !v20 )
      goto LABEL_23;
    v33 = v20;
    goto LABEL_88;
  }
LABEL_25:
  if ( *(_DWORD *)(a1 + 140) )
  {
    v30 = *(unsigned int *)(a1 + 140);
    if ( v14 )
      MiReleaseWriteInProgressCharges(v5, v30, 0LL);
    else
      MiReleaseWriteInProgressCharges(v5, v30, 1LL);
  }
  if ( *(_QWORD *)(a1 + 144) )
  {
    if ( (*(_DWORD *)(a1 + 40) & 0x1Cu) < 8 )
      --*(_DWORD *)(v5 + 684);
    v31 = *(_QWORD **)(v5 + 904);
    if ( *v31 != v5 + 896 )
      goto LABEL_94;
    *(_QWORD *)a1 = v5 + 896;
    v22 = (struct _KEVENT *)(v5 + 912);
    *(_QWORD *)(a1 + 8) = v31;
    *v31 = a1;
    *(_QWORD *)(v5 + 904) = a1;
    if ( *(_BYTE *)(v5 + 665) != 1 )
      v22 = 0LL;
    if ( (*(_DWORD *)(a1 + 40) & 0x20) != 0 )
    {
      --*(_DWORD *)(v5 + 1164);
      if ( !*(_BYTE *)(v5 + 666) )
        MiStoreCheckCompleteWriteBatch(v5, 0xFFFFFFFFLL);
    }
  }
  else
  {
    v22 = 0LL;
  }
  if ( !v10 )
  {
    v23 = v50;
    goto LABEL_37;
  }
  if ( v7
    && (PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x70646D4Du)) != 0LL )
  {
    v23 = v50;
    PoolWithTag[1].List.Flink = (struct _LIST_ENTRY *)MiReferenceControlAreaFile(v10);
    LOBYTE(PoolWithTag[1].WorkerRoutine) = 1;
    LODWORD(PoolWithTag[1].List.Blink) = v50;
    PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))MiLdwPopupWorker;
    PoolWithTag->Parameter = PoolWithTag;
    PoolWithTag->List.Flink = 0LL;
    ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
  }
  else
  {
    v23 = v50;
  }
  v24 = MiDecrementModifiedWriteCount(v10, 0LL);
  if ( v24 )
    MiReleaseControlAreaWaiters(v24);
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 616));
  v25 = *(void **)(a1 + 200);
  if ( v25 != (void *)(a1 + 208) )
    ExFreePoolWithTag(v25, 0);
  if ( (*(_DWORD *)(a1 + 40) & 1) == 0 )
  {
    MiFreeModWriterEntry(a1, 1LL);
    goto LABEL_37;
  }
  v35 = *(_QWORD **)(v5 + 632);
  if ( *v35 != v5 + 624 )
LABEL_94:
    __fastfail(3u);
  *(_QWORD *)a1 = v5 + 624;
  *(_QWORD *)(a1 + 8) = v35;
  *v35 = a1;
  *(_QWORD *)(v5 + 632) = a1;
  if ( *(_BYTE *)(v5 + 664) == 1 )
  {
    *(_BYTE *)(v5 + 664) = 0;
    KeSignalGate(v5 + 640, 1LL);
  }
LABEL_37:
  v26 = (unsigned __int8 *)(v5 + (v10 != 0 ? 995LL : 992LL));
  if ( v23 >= 0 )
  {
    if ( v10 )
      *(_BYTE *)(v5 + 1024) = 0;
    if ( !*v26 )
      goto LABEL_42;
    v36 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 988));
    v37 = *v26;
    v38 = v36;
    if ( !*v26 )
      goto LABEL_110;
    if ( v26[2] )
    {
      if ( v37 > 1u )
      {
        v26[2] = 0;
LABEL_101:
        *v26 = 0;
      }
    }
    else
    {
      v39 = v26[1]-- == 1;
      if ( v39 )
      {
        if ( v37 <= 1u )
          goto LABEL_109;
        goto LABEL_101;
      }
    }
LABEL_110:
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 988), v38);
    goto LABEL_42;
  }
  IsRetryIoStatus = MiIsRetryIoStatus((unsigned int)v23, v52);
  if ( a3 )
  {
    if ( v7 || IsRetryIoStatus )
      goto LABEL_42;
    goto LABEL_41;
  }
  if ( v23 == -1073741740 )
  {
LABEL_41:
    *(_BYTE *)(v5 + 1024) = 1;
    goto LABEL_42;
  }
  if ( IsRetryIoStatus )
  {
    v40 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 988));
    v41 = *v26;
    v38 = v40;
    if ( !*v26 )
    {
      *(_WORD *)v26 = 4112;
      goto LABEL_110;
    }
    if ( v41 > 1u )
      *v26 = v41 >> 1;
    if ( v26[2] )
      goto LABEL_110;
    v39 = v26[1]-- == 1;
    if ( !v39 )
      goto LABEL_110;
LABEL_109:
    v26[2] = 1;
    goto LABEL_110;
  }
LABEL_42:
  if ( v22 )
    KeSetEvent(v22, 0, 0);
}
