/*
 * XREFs of PsDispatchIumService @ 0x1402EAD84
 * Callers:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MmUnmapLockedPages @ 0x140033F00 (MmUnmapLockedPages.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14005C0C0 (MmMapLockedPagesSpecifyCache.c)
 *     KeWaitForAlertByThreadId @ 0x14008B050 (KeWaitForAlertByThreadId.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     KeAlertThreadByThreadId @ 0x1400CCE2C (KeAlertThreadByThreadId.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     MmLockLoadedModuleListExclusive @ 0x1400F5E00 (MmLockLoadedModuleListExclusive.c)
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwTerminateProcess @ 0x1401B8870 (ZwTerminateProcess.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     DbgkPostModuleMessage @ 0x14026DAB4 (DbgkPostModuleMessage.c)
 *     HvlpDepositPages @ 0x140271D90 (HvlpDepositPages.c)
 *     VslAllocatePool @ 0x14027AE00 (VslAllocatePool.c)
 *     VslFreePoolTransferObject @ 0x14027B390 (VslFreePoolTransferObject.c)
 *     VslHandleKsrCall @ 0x14027B640 (VslHandleKsrCall.c)
 *     PspIumAllocatePartitionState @ 0x1402EB6F8 (PspIumAllocatePartitionState.c)
 *     PspIumAllocatePhysicalPages @ 0x1402EB83C (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePartitionState @ 0x1402EBA54 (PspIumFreePartitionState.c)
 *     PspIumFreePhysicalPages @ 0x1402EBB1C (PspIumFreePhysicalPages.c)
 *     PspIumReplenishPartitionPages @ 0x1402EBCA4 (PspIumReplenishPartitionPages.c)
 *     PspMapView @ 0x1402EBEAC (PspMapView.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MmProtectVirtualMemory @ 0x1405EEFD0 (MmProtectVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x1405F04F0 (MmFreeVirtualMemory.c)
 *     MmUnmapViewOfSection @ 0x140617D50 (MmUnmapViewOfSection.c)
 *     MmAllocateVirtualMemory @ 0x140676D60 (MmAllocateVirtualMemory.c)
 *     PspTerminateThreadByPointer @ 0x140677750 (PspTerminateThreadByPointer.c)
 *     DbgkMapViewOfSection @ 0x14067863C (DbgkMapViewOfSection.c)
 *     MmMapViewOfSection @ 0x140679D20 (MmMapViewOfSection.c)
 *     EtwRegister @ 0x1406BF7E0 (EtwRegister.c)
 *     DbgkForwardException @ 0x1406D7B7C (DbgkForwardException.c)
 *     EtwUnregister @ 0x140708610 (EtwUnregister.c)
 *     EtwSetInformation @ 0x14070D050 (EtwSetInformation.c)
 *     DbgkpSendErrorMessage @ 0x140811FCC (DbgkpSendErrorMessage.c)
 *     DbgkpResumeProcess @ 0x14081278C (DbgkpResumeProcess.c)
 *     DbgkpSuspendProcess @ 0x1408128E4 (DbgkpSuspendProcess.c)
 *     MmChangeKernelCfgBitmap @ 0x14085D1B0 (MmChangeKernelCfgBitmap.c)
 *     MmGetSectionStrongImageReference @ 0x14085D5A8 (MmGetSectionStrongImageReference.c)
 *     PspIumGetPhysicalPage @ 0x14088E140 (PspIumGetPhysicalPage.c)
 *     PspIumGetSystemData @ 0x14088E274 (PspIumGetSystemData.c)
 *     PspIumVerifyParentSd @ 0x14088E2AC (PspIumVerifyParentSd.c)
 *     PsTerminateVsmEnclave @ 0x14088F69C (PsTerminateVsmEnclave.c)
 *     MmUpdateSlabRangeProtection @ 0x1409F85B8 (MmUpdateSlabRangeProtection.c)
 */

void __fastcall PsDispatchIumService(__int64 a1, __int64 a2, __int64 a3)
{
  ETWENABLECALLBACK *RelatedActivityId; // rsi
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  int PartitionState; // eax
  __int64 v11; // rax
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  _KPROCESS *Process; // rbx
  _KPROCESS *v21; // rcx
  _KPROCESS *v22; // r14
  _KPROCESS *v23; // rcx
  int VirtualMemory; // eax
  _KPROCESS *v25; // rcx
  int v26; // ecx
  _QWORD *v27; // r9
  __int64 v28; // rax
  int v29; // ebx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  const GUID *ActivityId; // rcx
  void *v34; // r8
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v40; // rbx
  CSHORT MdlFlags; // ax
  void *v42; // rcx
  struct _MDL *v43; // rbx
  unsigned int v44; // ecx
  unsigned int v45; // ecx
  unsigned int v46; // ecx
  unsigned __int8 v47; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v49; // ecx
  unsigned int v50; // ecx
  unsigned int v51; // ecx
  unsigned int v52; // ecx
  unsigned int v53; // ecx
  unsigned int v54; // ecx
  unsigned int v55; // ecx
  unsigned __int8 v56[8]; // [rsp+60h] [rbp-208h] BYREF
  __int64 v57; // [rsp+68h] [rbp-200h]
  _QWORD v58[2]; // [rsp+70h] [rbp-1F8h] BYREF
  int v59; // [rsp+80h] [rbp-1E8h]
  ULONGLONG RegHandle; // [rsp+88h] [rbp-1E0h] BYREF
  _QWORD v61[3]; // [rsp+90h] [rbp-1D8h] BYREF
  _BYTE v62[56]; // [rsp+A8h] [rbp-1C0h] BYREF
  _BYTE v63[272]; // [rsp+E0h] [rbp-188h] BYREF
  _OWORD v64[5]; // [rsp+1F0h] [rbp-78h] BYREF
  __int64 v65; // [rsp+240h] [rbp-28h]
  int v66; // [rsp+248h] [rbp-20h]
  __int16 v67; // [rsp+24Ch] [rbp-1Ch]
  char v68; // [rsp+24Eh] [rbp-1Ah]

  v57 = a1;
  RelatedActivityId = 0LL;
  if ( *(_BYTE *)(a1 + 1) == 5 )
  {
    if ( *(_QWORD *)(a1 + 8) )
    {
      ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, *(_DWORD *)(a1 + 16));
    }
    else
    {
      LOBYTE(a3) = 1;
      PspTerminateThreadByPointer(KeGetCurrentThread(), 0LL, a3);
    }
  }
  v5 = *(unsigned __int16 *)(a1 + 2);
  if ( v5 > 0x16 )
  {
    if ( v5 <= 0x21 )
    {
      if ( v5 == 33 )
      {
        DbgkPostModuleMessage(
          *(PVOID *)(a1 + 8),
          *(PVOID *)(a1 + 16),
          *(void **)(a1 + 24),
          *(_DWORD *)(a1 + 32),
          *(_DWORD *)(a1 + 40),
          *(PRKEVENT *)(a1 + 48));
        return;
      }
      if ( v5 > 0x1C )
      {
        v44 = v5 - 29;
        if ( !v44 )
        {
          LOBYTE(a3) = *(_BYTE *)(a1 + 24);
          MmChangeKernelCfgBitmap(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), a3);
          return;
        }
        v45 = v44 - 1;
        if ( !v45 )
        {
          PartitionState = MmMapViewOfSection(
                             *(_QWORD *)(a1 + 8),
                             PsSecureSystemProcess,
                             a1 + 16,
                             0LL,
                             0LL,
                             a1 + 24,
                             a1 + 32,
                             2,
                             0x40000,
                             2);
          goto LABEL_22;
        }
        v46 = v45 - 1;
        if ( !v46 )
        {
          PartitionState = MmUnmapViewOfSection(PsSecureSystemProcess, *(_QWORD *)(a1 + 8));
          goto LABEL_22;
        }
        if ( v46 == 1 )
        {
          if ( *(_QWORD *)(a1 + 8) )
          {
            MmLockLoadedModuleListExclusive(v56);
          }
          else
          {
            v47 = *(_BYTE *)(a1 + 16);
            ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v47 < 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
            __writecr8(v47);
          }
          return;
        }
        goto LABEL_136;
      }
      if ( v5 == 28 )
      {
        v43 = *(struct _MDL **)(a1 + 8);
        MmUnmapLockedPages(v43->MappedSystemVa, v43);
        v42 = v43;
      }
      else
      {
        v35 = v5 - 23;
        if ( !v35 )
        {
          VslHandleKsrCall(a1);
          return;
        }
        v36 = v35 - 1;
        if ( !v36 )
        {
          PartitionState = HvlpDepositPages(0, a2, *(_QWORD *)(a1 + 8) != 0LL);
          goto LABEL_22;
        }
        v37 = v36 - 1;
        if ( !v37 )
        {
          *(_DWORD *)(a1 + 8) = VslAllocatePool(
                                  *(_QWORD *)(a1 + 8),
                                  *(_DWORD *)(a1 + 16),
                                  (_QWORD *)(a1 + 16),
                                  (_QWORD *)(a1 + 24),
                                  (_QWORD *)(a1 + 32));
          return;
        }
        v38 = v37 - 1;
        if ( v38 )
        {
          if ( v38 == 1 )
          {
            PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x646C6D4Du);
            v40 = PoolWithTag;
            if ( PoolWithTag )
            {
              PoolWithTag->Next = 0LL;
              *(_DWORD *)&PoolWithTag->Size = 56;
              PoolWithTag->StartVa = 0LL;
              *(_QWORD *)&PoolWithTag->ByteCount = 4096LL;
              PoolWithTag[1].Next = *(struct _MDL **)(a1 + 8);
              PoolWithTag->MdlFlags |= 2u;
              MdlFlags = PoolWithTag->MdlFlags;
              if ( (MdlFlags & 5) == 0 )
              {
                MmMapLockedPagesSpecifyCache(v40, 0, MmCached, 0LL, 0, 0x40000010u);
                MdlFlags = v40->MdlFlags;
              }
              if ( (MdlFlags & 1) != 0 )
              {
                *(_QWORD *)(a1 + 8) = 0LL;
                *(_QWORD *)(a1 + 16) = v40;
                *(_QWORD *)(a1 + 24) = v40->MappedSystemVa;
                return;
              }
              ExFreePoolWithTag(v40, 0);
            }
            v11 = 3221225626LL;
LABEL_25:
            *(_QWORD *)(a1 + 8) = v11;
            return;
          }
          goto LABEL_136;
        }
        v42 = (void *)VslFreePoolTransferObject(*(__int64 **)(a1 + 8), 0LL);
      }
      ExFreePoolWithTag(v42, 0);
      return;
    }
    if ( v5 <= 0x27 )
    {
      if ( v5 == 39 )
      {
        if ( !*(_QWORD *)(a1 + 8) )
        {
          PspIumFreePartitionState(*(PVOID *)(a1 + 16));
          return;
        }
        PartitionState = PspIumAllocatePartitionState(a1);
        goto LABEL_22;
      }
      v49 = v5 - 34;
      if ( !v49 )
      {
        DbgkMapViewOfSection(*(PVOID *)(a1 + 8));
        return;
      }
      v50 = v49 - 1;
      if ( !v50 )
      {
        PartitionState = PspMapView(a1);
        goto LABEL_22;
      }
      v51 = v50 - 1;
      if ( !v51 )
      {
        ObfDereferenceObject(*(PVOID *)(a1 + 8));
        return;
      }
      v52 = v51 - 1;
      if ( v52 )
      {
        if ( v52 == 1 )
        {
          KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
          return;
        }
        goto LABEL_136;
      }
      v59 = 0;
LABEL_48:
      *(_DWORD *)(a1 + 8) = (_DWORD)RelatedActivityId;
      return;
    }
    v53 = v5 - 40;
    if ( !v53 )
    {
      *(_QWORD *)(a1 + 24) = 0LL;
      if ( (unsigned __int8)PspIumReplenishPartitionPages(*(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 16)) )
        *(_QWORD *)(a1 + 24) = 1LL;
      return;
    }
    v54 = v53 - 1;
    if ( !v54 )
    {
      PsTerminateVsmEnclave(*(_QWORD *)(a1 + 8), 0x80000000LL);
      return;
    }
    v55 = v54 - 1;
    if ( !v55 )
    {
      MmUpdateSlabRangeProtection(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 24));
      return;
    }
    if ( v55 == 1 )
    {
      ExQueueWorkItem(&PspIumWorkItem, DelayedWorkQueue);
      return;
    }
LABEL_136:
    LOBYTE(a3) = 1;
    PspTerminateThreadByPointer(KeGetCurrentThread(), 3221225477LL, a3);
    return;
  }
  if ( v5 == 22 )
  {
    PartitionState = PspIumVerifyParentSd(*(unsigned int *)(a1 + 8), a2, *(_QWORD *)(a1 + 24));
    goto LABEL_22;
  }
  if ( v5 > 0xB )
  {
    if ( v5 <= 0x11 )
    {
      if ( v5 == 17 )
      {
        memset(v63, 0, sizeof(v63));
        PartitionState = DbgkpSendErrorMessage(*(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 16), v63);
        goto LABEL_22;
      }
      v16 = v5 - 12;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( v18 )
          {
            v19 = v18 - 1;
            if ( v19 )
            {
              if ( v19 == 1 )
              {
                DbgkpResumeProcess(*(_QWORD *)(a1 + 8));
                return;
              }
              goto LABEL_136;
            }
            LOBYTE(v11) = DbgkpSuspendProcess(*(_QWORD *)(a1 + 8));
            goto LABEL_24;
          }
          Process = KeGetCurrentThread()->ApcState.Process;
          v21 = *(_KPROCESS **)(a1 + 8);
          if ( Process != v21 )
          {
            KiStackAttachProcess(v21, 0LL, (__int64)v62);
            v21 = *(_KPROCESS **)(a1 + 8);
          }
          LODWORD(RelatedActivityId) = MmProtectVirtualMemory(
                                         *(_QWORD *)(a1 + 16),
                                         (_DWORD)v21,
                                         (int)a1 + 24,
                                         (int)a1 + 32,
                                         *(_DWORD *)(a1 + 40),
                                         a1 + 40);
          if ( Process != *(_KPROCESS **)(a1 + 8) )
            KiUnstackDetachProcess((__int64)v62, 0LL);
          goto LABEL_48;
        }
        v22 = KeGetCurrentThread()->ApcState.Process;
        v23 = *(_KPROCESS **)(a1 + 8);
        if ( v22 != v23 )
          KiStackAttachProcess(v23, 0LL, (__int64)v62);
        VirtualMemory = MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, 0, 0x10000000);
      }
      else
      {
        v22 = KeGetCurrentThread()->ApcState.Process;
        v25 = *(_KPROCESS **)(a1 + 8);
        if ( v22 != v25 )
          KiStackAttachProcess(v25, 0LL, (__int64)v62);
        v26 = 0;
        v27 = 0LL;
        v28 = *(_QWORD *)(a1 + 48);
        if ( v28 || *(_QWORD *)(a1 + 56) )
        {
          v58[0] = 1LL;
          v58[1] = v61;
          v61[1] = 0LL;
          v61[0] = v28;
          v61[2] = *(_QWORD *)(a1 + 56);
          v26 = 1;
          v27 = v58;
        }
        VirtualMemory = MmAllocateVirtualMemory(
                          -1,
                          (int)a1 + 24,
                          (int)a1 + 32,
                          *(_DWORD *)(a1 + 40),
                          4,
                          v27,
                          v26,
                          0,
                          0x10000000,
                          0,
                          0LL);
      }
      v29 = VirtualMemory;
      if ( v22 != *(_KPROCESS **)(a1 + 8) )
        KiUnstackDetachProcess((__int64)v62, 0LL);
      *(_DWORD *)(a1 + 8) = v29;
      return;
    }
    v30 = v5 - 18;
    if ( !v30 )
    {
      v34 = *(void **)(a1 + 24);
      if ( v34 )
        RelatedActivityId = VslIumEtwEnableCallback;
      *(_QWORD *)(a1 + 8) = EtwRegister((LPCGUID)(a1 + 8), RelatedActivityId, v34, &RegHandle);
      *(_QWORD *)(a1 + 16) = RegHandle;
      return;
    }
    v31 = v30 - 1;
    if ( !v31 )
    {
      PartitionState = EtwUnregister(*(_QWORD *)(a1 + 8));
      goto LABEL_22;
    }
    v32 = v31 - 1;
    if ( !v32 )
    {
      PartitionState = EtwSetInformation(
                         *(_QWORD *)(a1 + 8),
                         *(EVENT_INFO_CLASS *)(a1 + 16),
                         *(PVOID *)(a1 + 24),
                         *(_DWORD *)(a1 + 32));
      goto LABEL_22;
    }
    if ( v32 == 1 )
    {
      ActivityId = (const GUID *)(a1 + 32);
      if ( !*(_QWORD *)(a1 + 32) && !*(_QWORD *)(a1 + 40) )
        ActivityId = 0LL;
      if ( *(_QWORD *)(a1 + 48) || *(_QWORD *)(a1 + 56) )
        RelatedActivityId = (ETWENABLECALLBACK *)(a1 + 48);
      PartitionState = EtwWriteEx(
                         *(_QWORD *)(a1 + 8),
                         (PCEVENT_DESCRIPTOR)(a1 + 16),
                         0LL,
                         0,
                         ActivityId,
                         (LPCGUID)RelatedActivityId,
                         *(_DWORD *)(a1 + 64),
                         *(PEVENT_DATA_DESCRIPTOR *)(a1 + 72));
      goto LABEL_22;
    }
    goto LABEL_136;
  }
  if ( v5 == 11 )
  {
    LOBYTE(a2) = *(_BYTE *)(a1 + 24);
    PartitionState = MmGetSectionStrongImageReference(*(_QWORD *)(a1 + 8), a2, 0LL, a1 + 16);
    goto LABEL_22;
  }
  if ( v5 > 6 )
  {
    v12 = v5 - 7;
    if ( !v12 )
    {
      LOBYTE(v11) = KeAlertThreadByThreadId(*(_QWORD *)(a1 + 8), a2, a3);
      goto LABEL_24;
    }
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( !v14 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        KeLeaveCriticalRegion();
        return;
      }
      if ( v14 == 1 )
      {
        memmove(*(void **)(a1 + 8), *(const void **)(a1 + 16), *(unsigned int *)(a1 + 24));
        *(_QWORD *)(a1 + 8) = 0LL;
        return;
      }
      goto LABEL_136;
    }
    PartitionState = KeWaitForAlertByThreadId(
                       *(_BYTE *)(a1 + 8),
                       (_QWORD *)((a1 + 24) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(a1 + 16) >> 64)),
                       0LL);
LABEL_22:
    *(_QWORD *)(a1 + 8) = PartitionState;
    return;
  }
  if ( v5 == 6 )
  {
    LOBYTE(a2) = *(_BYTE *)(a1 + 16);
    LOBYTE(v11) = DbgkForwardException(*(_QWORD *)(a1 + 8), a2);
LABEL_24:
    v11 = (unsigned __int8)v11;
    goto LABEL_25;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    PartitionState = PspIumAllocatePhysicalPages(
                       *(_DWORD *)(a1 + 8),
                       *(_QWORD *)(a1 + 16),
                       *(_DWORD *)(a1 + 24),
                       (int)a1 + 16,
                       a1 + 24);
    goto LABEL_22;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    PspIumFreePhysicalPages(*(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 24), *(_QWORD *)(a1 + 8));
    return;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
      PspIumGetPhysicalPage(a1);
      return;
    }
    if ( v9 == 1 )
    {
      PspIumGetSystemData(a1);
      return;
    }
    goto LABEL_136;
  }
  v64[0] = *(_OWORD *)(a1 + 10);
  v64[1] = *(_OWORD *)(a1 + 26);
  v64[2] = *(_OWORD *)(a1 + 42);
  v64[3] = *(_OWORD *)(a1 + 58);
  v64[4] = *(_OWORD *)(a1 + 74);
  v65 = *(_QWORD *)(a1 + 90);
  v66 = *(_DWORD *)(a1 + 98);
  v67 = *(_WORD *)(a1 + 102);
  v68 = 0;
  DbgPrintEx(
    0,
    0,
    "IUM [VP:%u,TK:%#02x,LN:%04u] %s\n",
    *(unsigned __int16 *)(a1 + 8) >> 13,
    *(_DWORD *)(a1 + 4),
    (*(unsigned __int16 *)(a1 + 8) >> 1) & 0xFFF,
    (const char *)v64);
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    __debugbreak();
}
