/*
 * XREFs of MiGatherMappedPages @ 0x14007B1D8
 * Callers:
 *     MiMappedPageWriter @ 0x14018C6A0 (MiMappedPageWriter.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140009B60 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x140009C6C (MiDereferenceControlAreaFile.c)
 *     MiInsertPageInList @ 0x1400262A0 (MiInsertPageInList.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiControlAreaUsingExtents @ 0x14006ED70 (MiControlAreaUsingExtents.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400700C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 *     CcNotifyOfMappedWrite @ 0x14007B6BC (CcNotifyOfMappedWrite.c)
 *     MiMarkPfnVerified @ 0x140098744 (MiMarkPfnVerified.c)
 *     MiBuildMappedCluster @ 0x1400A2B5C (MiBuildMappedCluster.c)
 *     MiReferencePageForModifiedWrite @ 0x1400A469C (MiReferencePageForModifiedWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlinkPageFromList @ 0x1400D3400 (MiUnlinkPageFromList.c)
 *     MiStartingOffset @ 0x1400D8C50 (MiStartingOffset.c)
 *     MiClearPfnImageVerified @ 0x1400DBB6C (MiClearPfnImageVerified.c)
 *     MiWriteComplete @ 0x1400DDB90 (MiWriteComplete.c)
 *     IoDiskIoAttributionDereference @ 0x1400E73A8 (IoDiskIoAttributionDereference.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiDereferenceControlAreaPfnList @ 0x14010A450 (MiDereferenceControlAreaPfnList.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14011DBF8 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForModWrite @ 0x14011E148 (FsRtlReleaseFileForModWrite.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     IoAsynchronousPageWrite @ 0x140137438 (IoAsynchronousPageWrite.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFlushFileOnlyMdl @ 0x1402CC0F8 (MiFlushFileOnlyMdl.c)
 */

__int64 __fastcall MiGatherMappedPages(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // edi
  _QWORD *v6; // rax
  int v7; // esi
  __int64 v8; // rax
  __int64 v9; // rdi
  ULONG_PTR v10; // rsi
  unsigned __int8 v11; // r15
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rbp
  int v15; // eax
  __int64 v16; // r12
  __int64 v17; // r12
  struct _FILE_OBJECT *v18; // r15
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  unsigned int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  int v24; // edx
  __int64 v25; // rdi
  __int64 v26; // rax
  _QWORD *v27; // rsi
  unsigned int v28; // edx
  int v29; // eax
  int v30; // eax
  unsigned int v31; // eax
  int v32; // edi
  unsigned __int8 CurrentIrql; // di
  unsigned int v35; // edx
  int v36; // ecx
  unsigned __int64 v37; // rax
  int v38; // edx
  __int64 v39; // rcx
  __int64 v40; // r8
  volatile LONG *v41; // rbp
  KIRQL v42; // r15
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  int v48; // r9d
  int v49; // r10d
  struct _KPRCB *v50; // rcx
  struct _KPRCB *v51; // rcx
  int v52; // ecx
  unsigned __int8 v53; // si
  struct _KPRCB *v54; // rcx
  struct _KPRCB *v55; // rcx
  __int64 v56; // [rsp+60h] [rbp-68h]
  __int64 v57; // [rsp+68h] [rbp-60h] BYREF
  __int64 v58; // [rsp+70h] [rbp-58h]
  __int64 v59; // [rsp+78h] [rbp-50h] BYREF
  PSECTION_OBJECT_POINTERS v60; // [rsp+80h] [rbp-48h]
  unsigned int v61; // [rsp+D8h] [rbp+10h]
  __int64 v62; // [rsp+E8h] [rbp+20h]

  v58 = 0LL;
  v4 = a2;
  v59 = 0LL;
  if ( a2 >= 0x10 )
  {
    v4 = 0;
    v6 = (_QWORD *)(a1 + 3408);
    do
    {
      if ( *v6 != 0xFFFFFFFFFLL )
        break;
      ++v4;
      v6 += 5;
    }
    while ( v4 < 0x10 );
    if ( v4 == 16 )
      return 0LL;
  }
  v7 = 0;
  if ( *(_BYTE *)(a1 + 995) )
  {
    v41 = (volatile LONG *)(a1 + 988);
    v42 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 988));
    if ( *(_BYTE *)(a1 + 997) )
    {
      *(_BYTE *)(a1 + 997) = 0;
      v7 = 1;
      *(_BYTE *)(a1 + 995) = 0;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v41);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v42 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v42);
  }
  if ( *(_BYTE *)(a1 + 1024) == 1 )
    v7 = 1;
  if ( v7 )
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
  v8 = 5LL * v4;
  v9 = *(_QWORD *)(a1 + 40LL * v4 + 3408);
  v62 = v8;
  if ( v9 == 0xFFFFFFFFFLL )
    return 0LL;
  while ( 1 )
  {
    v10 = 48 * v9 - 0x58000000000LL;
    v11 = MiLockPageInline(v10);
    if ( v9 != *(_QWORD *)(a1 + 8 * v62 + 3408) )
      goto LABEL_37;
    v12 = *(_QWORD *)(v10 + 16);
    if ( qword_140465B00 && (v12 & 0x10) == 0 )
      v12 &= ~qword_140465B00;
    v13 = v12 >> 16;
    v14 = *(_QWORD *)v13;
    v15 = *(_DWORD *)(*(_QWORD *)v13 + 56LL);
    if ( (v15 & 0x20) != 0 )
    {
      MiUnlinkPageFromList(v10);
      v57 = MI_READ_PTE_LOCK_FREE(v10 + 16);
      v44 = (unsigned __int64)MI_READ_PTE_LOCK_FREE(&v57) >> 5;
      if ( ((*(_QWORD *)(v10 + 40) >> 54) & 7) == 3 )
      {
        MiClearPfnImageVerified(v10);
        if ( (MiFlags & 0x10000) != 0 && (v44 & 2) != 0 && (*(_DWORD *)(v14 + 92) & 0xC0000) != 0 )
          MiMarkPfnVerified(v10);
      }
      v57 = MiSwizzleInvalidPte(32 * (v44 & 0x1F));
      if ( !MiPteInShadowRange(v10 + 16) )
        goto LABEL_73;
      if ( (unsigned int)MiPteHasShadow(v46) )
      {
        v48 = v49;
        if ( HIBYTE(word_140465BEC) )
          goto LABEL_73;
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
      {
LABEL_73:
        *(_QWORD *)(v10 + 16) = v45;
        if ( v48 )
          MiWritePteShadow(v10 + 16, v45);
        MiDereferenceControlAreaPfnList(v14, 0LL, v47, 3LL);
        v35 = 8;
        goto LABEL_36;
      }
      if ( ((unsigned __int8)v47 & (unsigned __int8)v49) != 0 )
        v45 |= 0x8000000000000000uLL;
      goto LABEL_73;
    }
    if ( (v15 & 8) == 0 )
      break;
LABEL_35:
    MiUnlinkPageFromList(v10);
    v35 = 16;
LABEL_36:
    MiInsertPageInList(v10, v35);
LABEL_37:
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
    {
      v50 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v50->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v50);
    }
    __writecr8(v11);
    v9 = *(_QWORD *)(a1 + 8 * v62 + 3408);
    if ( v9 == 0xFFFFFFFFFLL )
      return 0LL;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v14 + 72));
  if ( (*(_DWORD *)(v14 + 56) & 8) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 72));
    goto LABEL_35;
  }
  v16 = *(_QWORD *)(v14 + 120);
  ++*(_DWORD *)(v14 + 76);
  v17 = 8 * v16;
  if ( v17 && _InterlockedIncrement64((volatile signed __int64 *)(v17 + 32)) <= 1 )
    __fastfail(0xEu);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 72));
  MiReferencePageForModifiedWrite(v10);
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
  {
    v51 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v51->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v51);
  }
  __writecr8(v11);
  v18 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v14);
  SectionObjectPointer = v18->SectionObjectPointer;
  v60 = SectionObjectPointer;
  if ( *(_BYTE *)(a1 + 995) )
    v20 = 0;
  else
    v20 = CcNotifyOfMappedWrite(SectionObjectPointer, 0LL, 0LL);
  v21 = MiBuildMappedCluster(v10, a3 + 208, v20);
  *(_QWORD *)(a3 + 200) = v21;
  v22 = v21;
  *(_QWORD *)(a3 + 160) = v14;
  v56 = v21;
  v23 = MiStartingOffset(
          v13,
          *(_QWORD *)(48LL * *(_QWORD *)(v21 + 48) - 0x58000000000LL + 8) | 0x8000000000000000uLL,
          0xFFFFFFFFLL);
  v24 = *(_DWORD *)(a3 + 40);
  v25 = v23;
  v59 = v23;
  LODWORD(v23) = *(_DWORD *)(v22 + 40);
  *(_DWORD *)(a3 + 136) = v23;
  v61 = (unsigned int)v23 >> 12;
  *(_DWORD *)(a3 + 140) = ((unsigned int)v23 >> 12) - 1;
  v26 = *(unsigned int *)(v22 + 40);
  v27 = (_QWORD *)(a3 + 168);
  *(_QWORD *)(a3 + 168) = 0LL;
  v58 = v25 + v26;
  if ( (v18->DeviceObject->Characteristics & 0x10) != 0 )
    v28 = v24 | 2;
  else
    v28 = v24 & 0xFFFFFFFD;
  *(_DWORD *)(a3 + 40) = v28;
  v29 = *(_DWORD *)(v14 + 56);
  if ( (v29 & 4) != 0 )
  {
    MiDereferenceControlAreaFile(v14, (unsigned __int64)v18);
    v32 = -1073741740;
    v31 = 1;
    goto LABEL_30;
  }
  if ( (v29 & 0x10) != 0 )
  {
    MiDereferenceControlAreaFile(v14, (unsigned __int64)v18);
    v32 = -1073741672;
    v31 = 1;
    goto LABEL_30;
  }
  *(_QWORD *)(a3 + 152) = v18;
  if ( (int)FsRtlAcquireFileForModWriteEx(v18) < 0 )
  {
    v32 = -1073741740;
    MiDereferenceControlAreaFile(v14, (unsigned __int64)v18);
    *v27 = 0LL;
  }
  else
  {
    v30 = CcNotifyOfMappedWrite(v60, v25, *(unsigned int *)(v56 + 40));
    if ( !v30 )
    {
      FsRtlReleaseFileForModWrite(v18);
      MiDereferenceControlAreaFile(v14, (unsigned __int64)v18);
      *v27 = 0LL;
      v31 = 1;
      v32 = -1073741740;
LABEL_30:
      *(_QWORD *)(a3 + 24) = 0LL;
      *(_DWORD *)(a3 + 16) = v32;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      MiWriteComplete(a3, a3 + 16, v31);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v55 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v55->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v55);
      }
      __writecr8(CurrentIrql);
      goto LABEL_32;
    }
    if ( v30 == 1 )
      *v27 |= 1uLL;
    *(_QWORD *)(a3 + 176) = v25;
    v36 = *(_DWORD *)(a1 + 680);
    v37 = *(_QWORD *)(a1 + 8064);
    if ( v36 )
    {
      v52 = v36 - 1;
      if ( v37 >= 0x420 )
        v52 = 0;
      *(_DWORD *)(a1 + 680) = v52;
    }
    else if ( v37 < 0x120 )
    {
      *(_DWORD *)(a1 + 680) = v37 < 0xA0 ? 32 : 8;
    }
    __incgsdword(0x2EB4u);
    __addgsdword(0x2EB0u, v61);
    if ( MiControlAreaUsingExtents(v14) )
    {
      MiFlushFileOnlyMdl(v39, v56, v40, a3 + 16);
      v53 = KeGetCurrentIrql();
      __writecr8(1uLL);
      MiWriteComplete(a3, a3 + 16, 0LL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v53 < 2u )
      {
        v54 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v54->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v54);
      }
      __writecr8(v53);
      goto LABEL_32;
    }
    v32 = IoAsynchronousPageWrite(
            (_DWORD)v18,
            v56,
            (unsigned int)&v59,
            (unsigned int)MiWriteComplete,
            a3,
            v38,
            0,
            0,
            v17,
            a3 + 16,
            a3 + 32);
  }
  if ( (v32 & 0xC0000000) == 0xC0000000 )
  {
    v31 = 0;
    goto LABEL_30;
  }
LABEL_32:
  if ( v17 )
    IoDiskIoAttributionDereference(v17);
  return 1LL;
}
