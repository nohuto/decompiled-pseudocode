/*
 * XREFs of MiGatherMappedPages @ 0x14007E6A0
 * Callers:
 *     MiMappedPageWriter @ 0x1401808E0 (MiMappedPageWriter.c)
 * Callees:
 *     MiMarkPfnVerified @ 0x14000F960 (MiMarkPfnVerified.c)
 *     FsRtlReleaseFileForModWrite @ 0x14001AF98 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14001B150 (FsRtlAcquireFileForModWriteEx.c)
 *     MiDereferenceControlAreaFile @ 0x14001CA78 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x14001CBB0 (MiReferenceControlAreaFile.c)
 *     MiWriteComplete @ 0x140021DE0 (MiWriteComplete.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiStartingOffset @ 0x140031170 (MiStartingOffset.c)
 *     MiControlAreaUsingExtents @ 0x1400321B0 (MiControlAreaUsingExtents.c)
 *     MiInsertPageInList @ 0x140039FD0 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     CcNotifyOfMappedWrite @ 0x14007D950 (CcNotifyOfMappedWrite.c)
 *     MiBuildMappedCluster @ 0x14007FF70 (MiBuildMappedCluster.c)
 *     MiClearPfnImageVerified @ 0x140082944 (MiClearPfnImageVerified.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     IoDiskIoAttributionDereference @ 0x1401058D4 (IoDiskIoAttributionDereference.c)
 *     MiDereferenceControlAreaPfnList @ 0x140119E9C (MiDereferenceControlAreaPfnList.c)
 *     MiReferencePageForModifiedWrite @ 0x14011BC04 (MiReferencePageForModifiedWrite.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     IoAsynchronousPageWrite @ 0x1401350E4 (IoAsynchronousPageWrite.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFlushFileOnlyMdl @ 0x1402B605C (MiFlushFileOnlyMdl.c)
 */

__int64 __fastcall MiGatherMappedPages(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // edi
  _QWORD *v6; // rax
  int v7; // esi
  __int64 v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rsi
  unsigned __int8 v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rbp
  int v15; // eax
  __int64 v16; // rax
  struct _FILE_OBJECT *v17; // r14
  __int64 SectionObjectPointer; // rax
  unsigned int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rsi
  unsigned __int64 v22; // rax
  int v23; // edx
  __int64 v24; // rdi
  __int64 v25; // rax
  struct _ERESOURCE **v26; // rsi
  unsigned int v27; // edx
  int v28; // r12d
  int v29; // eax
  int v30; // eax
  int v31; // edi
  PEX_SPIN_LOCK v32; // rsi
  unsigned __int8 v33; // bl
  __int16 v35; // dx
  int v36; // eax
  unsigned __int64 v37; // rcx
  int v38; // edx
  __int64 v39; // rcx
  __int64 v40; // r8
  KIRQL v41; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  char v47; // r9
  struct _KPRCB *v48; // rcx
  struct _KPRCB *v49; // rcx
  int v50; // r8d
  int v51; // eax
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *v53; // rcx
  struct _KPRCB *v54; // rcx
  __int64 v55; // [rsp+60h] [rbp-68h]
  __int64 v56; // [rsp+68h] [rbp-60h] BYREF
  __int64 v57; // [rsp+70h] [rbp-58h] BYREF
  __int64 v58; // [rsp+78h] [rbp-50h]
  unsigned __int64 v59; // [rsp+80h] [rbp-48h] BYREF
  unsigned int v60; // [rsp+D8h] [rbp+10h]
  PEX_SPIN_LOCK SpinLock; // [rsp+E8h] [rbp+20h]

  v4 = a2;
  if ( a2 >= 0x10 )
  {
    v4 = 0;
    v6 = (_QWORD *)(a1 + 3408);
    while ( *v6 == 0xFFFFFFFFFLL )
    {
      if ( v6[5] != 0xFFFFFFFFFLL )
      {
        ++v4;
        break;
      }
      if ( v6[10] != 0xFFFFFFFFFLL )
      {
        v4 += 2;
        break;
      }
      if ( v6[15] != 0xFFFFFFFFFLL )
      {
        v4 += 3;
        break;
      }
      v6 += 20;
      v4 += 4;
      if ( v4 >= 0x10 )
        break;
    }
    if ( v4 == 16 )
      return 0LL;
  }
  v7 = 0;
  if ( *(_BYTE *)(a1 + 987) )
  {
    v41 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 980));
    if ( *(_BYTE *)(a1 + 989) )
    {
      *(_BYTE *)(a1 + 989) = 0;
      v7 = 1;
      *(_BYTE *)(a1 + 987) = 0;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 980));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v41 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v41);
  }
  if ( *(_BYTE *)(a1 + 1016) == 1 || v7 )
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
  v8 = 40LL * v4;
  v9 = *(_QWORD *)(v8 + a1 + 3408);
  if ( v9 == 0xFFFFFFFFFLL )
    return 0LL;
  while ( 1 )
  {
    v10 = 48 * v9 - 0x58000000000LL;
    v11 = MiLockPageInline(v10);
    if ( v9 == *(_QWORD *)(v8 + a1 + 3408) )
      break;
LABEL_38:
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || v11 >= 2u )
      goto LABEL_39;
LABEL_91:
    v48 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v48->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v48);
LABEL_39:
    __writecr8(v11);
    v9 = *(_QWORD *)(v8 + a1 + 3408);
    if ( v9 == 0xFFFFFFFFFLL )
      return 0LL;
  }
  v12 = *(_QWORD *)(v10 + 16);
  if ( qword_14043B180 && (v12 & 0x10) == 0 )
    v12 &= ~qword_14043B180;
  v13 = v12 >> 16;
  v14 = *(_QWORD *)v13;
  v15 = *(_DWORD *)(*(_QWORD *)v13 + 56LL);
  if ( (v15 & 0x20) != 0 )
  {
    MiUnlinkPageFromList(v10, 0);
    v56 = MI_READ_PTE_LOCK_FREE(v10 + 16);
    v43 = (unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v56) >> 5;
    if ( ((*(_QWORD *)(v10 + 40) >> 54) & 7) == 3 )
    {
      MiClearPfnImageVerified(v10);
      if ( (MiFlags & 0x10000) != 0 && (v43 & 2) != 0 && (*(_DWORD *)(v14 + 92) & 0x180000) != 0 )
        MiMarkPfnVerified(v10, 32 * ((MiFlags & 0x20000) == 0) + 6);
    }
    v56 = MiSwizzleInvalidPte(32 * (v43 & 0x1F));
    if ( MiPteInShadowRange(v10 + 16) )
    {
      if ( (unsigned int)MiPteHasShadow(v45, v44) )
      {
        if ( !HIBYTE(word_14043B26C) && (v47 & 1) != 0 )
          v44 |= 0x8000000000000000uLL;
        *(_QWORD *)(v10 + 16) = v44;
        MiWritePteShadow(v10 + 16);
        goto LABEL_86;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
        && (v47 & 1) != 0 )
      {
        v44 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)(v10 + 16) = v44;
LABEL_86:
    MiDereferenceControlAreaPfnList(v14, 0LL, v46, 3LL);
    v35 = 8;
    goto LABEL_37;
  }
  if ( (v15 & 8) != 0 )
  {
    MiUnlinkPageFromList(v10, 0);
    v35 = 16;
LABEL_37:
    MiInsertPageInList(v10, v35);
    goto LABEL_38;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v14 + 72));
  if ( (*(_DWORD *)(v14 + 56) & 8) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 72));
    MiUnlinkPageFromList(v10, 0);
    MiInsertPageInList(v10, 16);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || v11 >= 2u )
      goto LABEL_39;
    goto LABEL_91;
  }
  v16 = *(_QWORD *)(v14 + 120);
  ++*(_DWORD *)(v14 + 76);
  SpinLock = (PEX_SPIN_LOCK)(8 * v16);
  if ( 8 * v16 && _InterlockedIncrement64((volatile signed __int64 *)(8 * v16 + 32)) <= 1 )
    __fastfail(0xEu);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 72));
  MiReferencePageForModifiedWrite(v10);
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
  {
    v49 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v49->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v49);
  }
  __writecr8(v11);
  v17 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v14);
  SectionObjectPointer = (__int64)v17->SectionObjectPointer;
  v58 = SectionObjectPointer;
  if ( *(_BYTE *)(a1 + 987) )
    v19 = 0;
  else
    v19 = CcNotifyOfMappedWrite(SectionObjectPointer, 0LL, 0);
  v20 = MiBuildMappedCluster(v10, a3 + 208, v19);
  *(_QWORD *)(a3 + 200) = v20;
  v21 = v20;
  *(_QWORD *)(a3 + 160) = v14;
  v55 = v20;
  v22 = MiStartingOffset(
          (__int64 *)v13,
          *(_QWORD *)(48LL * *(_QWORD *)(v20 + 48) - 0x58000000000LL + 8) | 0x8000000000000000uLL,
          0xFFFFFFFF);
  v23 = *(_DWORD *)(a3 + 40);
  v24 = v22;
  v59 = v22;
  LODWORD(v22) = *(_DWORD *)(v21 + 40);
  *(_DWORD *)(a3 + 136) = v22;
  v60 = (unsigned int)v22 >> 12;
  *(_DWORD *)(a3 + 140) = ((unsigned int)v22 >> 12) - 1;
  v25 = *(unsigned int *)(v21 + 40);
  v26 = (struct _ERESOURCE **)(a3 + 168);
  *(_QWORD *)(a3 + 168) = 0LL;
  v57 = v24 + v25;
  if ( (v17->DeviceObject->Characteristics & 0x10) != 0 )
    v27 = v23 | 2;
  else
    v27 = v23 & 0xFFFFFFFD;
  *(_DWORD *)(a3 + 40) = v27;
  v28 = 0;
  v29 = *(_DWORD *)(v14 + 56);
  if ( (v29 & 4) != 0 )
  {
    MiDereferenceControlAreaFile(v14, (unsigned __int64)v17);
    v32 = SpinLock;
    v31 = -1073741740;
    v28 = 1;
    goto LABEL_31;
  }
  if ( (v29 & 0x10) != 0 )
  {
    MiDereferenceControlAreaFile(v14, (unsigned __int64)v17);
    v32 = SpinLock;
    v31 = -1073741672;
    v28 = 1;
    goto LABEL_31;
  }
  *(_QWORD *)(a3 + 152) = v17;
  if ( (int)FsRtlAcquireFileForModWriteEx(v17, &v57, (struct _ERESOURCE **)(a3 + 168)) < 0 )
  {
    v31 = -1073741740;
    MiDereferenceControlAreaFile(v14, (unsigned __int64)v17);
    *v26 = 0LL;
    v32 = SpinLock;
LABEL_44:
    if ( (v31 & 0xC0000000) == 0xC0000000 )
      goto LABEL_31;
    goto LABEL_33;
  }
  v30 = CcNotifyOfMappedWrite(v58, v24, *(_DWORD *)(v55 + 40));
  if ( v30 )
  {
    if ( v30 == 1 )
      *v26 = (struct _ERESOURCE *)((unsigned __int64)*v26 | 1);
    *(_QWORD *)(a3 + 176) = v24;
    v36 = *(_DWORD *)(a1 + 672);
    v37 = *(_QWORD *)(a1 + 7296);
    if ( v36 )
    {
      v50 = v36 - 1;
      if ( v37 >= 0x420 )
        v50 = 0;
      *(_DWORD *)(a1 + 672) = v50;
    }
    else if ( v37 < 0x120 )
    {
      v51 = 32;
      if ( v37 >= 0xA0 )
        v51 = 8;
      *(_DWORD *)(a1 + 672) = v51;
    }
    __incgsdword(0x2EB4u);
    __addgsdword(0x2EB0u, v60);
    if ( MiControlAreaUsingExtents(v14) )
    {
      MiFlushFileOnlyMdl(v39, v55, v40, a3 + 16);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      MiWriteComplete(a3, (int *)(a3 + 16), 0);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v53 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v53->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v53);
      }
      __writecr8(CurrentIrql);
      v32 = SpinLock;
      goto LABEL_33;
    }
    v32 = SpinLock;
    v31 = IoAsynchronousPageWrite(
            (_DWORD)v17,
            v55,
            (unsigned int)&v59,
            (unsigned int)MiWriteComplete,
            a3,
            v38,
            0,
            0,
            (__int64)SpinLock,
            a3 + 16,
            a3 + 32);
    goto LABEL_44;
  }
  FsRtlReleaseFileForModWrite(v17, *v26);
  MiDereferenceControlAreaFile(v14, (unsigned __int64)v17);
  *v26 = 0LL;
  v31 = -1073741740;
  v32 = SpinLock;
  v28 = 1;
LABEL_31:
  *(_QWORD *)(a3 + 24) = 0LL;
  *(_DWORD *)(a3 + 16) = v31;
  v33 = KeGetCurrentIrql();
  __writecr8(1uLL);
  MiWriteComplete(a3, (int *)(a3 + 16), v28);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v33 < 2u )
  {
    v54 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v54->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v54);
  }
  __writecr8(v33);
LABEL_33:
  if ( v32 )
    IoDiskIoAttributionDereference(v32);
  return 1LL;
}
