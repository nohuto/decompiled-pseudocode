/*
 * XREFs of PsDispatchIumService @ 0x1403086B4
 * Callers:
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14002FA50 (MmMapLockedPagesSpecifyCache.c)
 *     EtwWriteEx @ 0x140036300 (EtwWriteEx.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     MmUnmapLockedPages @ 0x14006AD00 (MmUnmapLockedPages.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     KeWaitForAlertByThreadId @ 0x1400BA4A0 (KeWaitForAlertByThreadId.c)
 *     KeAlertThreadByThreadId @ 0x1401198BC (KeAlertThreadByThreadId.c)
 *     DbgPrintEx @ 0x1401264A0 (DbgPrintEx.c)
 *     MmLockLoadedModuleListExclusive @ 0x1401551CC (MmLockLoadedModuleListExclusive.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwTerminateProcess @ 0x1401C0650 (ZwTerminateProcess.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     DbgkPostModuleMessage @ 0x140281394 (DbgkPostModuleMessage.c)
 *     HvlpDepositPages @ 0x140285BA8 (HvlpDepositPages.c)
 *     VslAllocatePool @ 0x14028EFD8 (VslAllocatePool.c)
 *     VslFreePoolTransferObject @ 0x14028F6C0 (VslFreePoolTransferObject.c)
 *     VslHandleKsrCall @ 0x14028FA60 (VslHandleKsrCall.c)
 *     PspIumAllocatePartitionState @ 0x140309054 (PspIumAllocatePartitionState.c)
 *     PspIumAllocatePhysicalPages @ 0x140309198 (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePartitionState @ 0x1403093BC (PspIumFreePartitionState.c)
 *     PspIumFreePhysicalPages @ 0x140309498 (PspIumFreePhysicalPages.c)
 *     PspIumReplenishPartitionPages @ 0x14030962C (PspIumReplenishPartitionPages.c)
 *     PspMapView @ 0x14030983C (PspMapView.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x140309A18 (PsAdjustBasicEnclaveThreadList.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MmProtectVirtualMemory @ 0x1406040D0 (MmProtectVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x140606BC0 (MmFreeVirtualMemory.c)
 *     MmUnmapViewOfSection @ 0x14064A8C0 (MmUnmapViewOfSection.c)
 *     MmAllocateVirtualMemory @ 0x1406775D0 (MmAllocateVirtualMemory.c)
 *     PspTerminateThreadByPointer @ 0x140678480 (PspTerminateThreadByPointer.c)
 *     DbgkMapViewOfSection @ 0x140678CC0 (DbgkMapViewOfSection.c)
 *     MmMapViewOfSection @ 0x14067A6E0 (MmMapViewOfSection.c)
 *     DbgkForwardException @ 0x1406F79F8 (DbgkForwardException.c)
 *     EtwRegister @ 0x140718540 (EtwRegister.c)
 *     EtwSetInformation @ 0x140737550 (EtwSetInformation.c)
 *     EtwUnregister @ 0x140748060 (EtwUnregister.c)
 *     DbgkpSendErrorMessage @ 0x14084A7A8 (DbgkpSendErrorMessage.c)
 *     DbgkpResumeProcess @ 0x14084AFAC (DbgkpResumeProcess.c)
 *     DbgkpSuspendProcess @ 0x14084B10C (DbgkpSuspendProcess.c)
 *     MmChangeKernelCfgBitmap @ 0x140898964 (MmChangeKernelCfgBitmap.c)
 *     MmGetSectionStrongImageReference @ 0x140898EE0 (MmGetSectionStrongImageReference.c)
 *     PspIumGetPhysicalPage @ 0x1408CB438 (PspIumGetPhysicalPage.c)
 *     PspIumGetSystemData @ 0x1408CB580 (PspIumGetSystemData.c)
 *     PspIumVerifyParentSd @ 0x1408CB5B8 (PspIumVerifyParentSd.c)
 *     PsTerminateVsmEnclave @ 0x1408CCB5C (PsTerminateVsmEnclave.c)
 *     MmUpdateSlabRangeProtection @ 0x140A3D058 (MmUpdateSlabRangeProtection.c)
 */

void __fastcall PsDispatchIumService(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
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
  int v22; // esi
  _KPROCESS *v23; // r14
  _KPROCESS *v24; // rcx
  int VirtualMemory; // eax
  _KPROCESS *v26; // rcx
  int v27; // ecx
  __int64 *v28; // r9
  __int64 v29; // rax
  int v30; // ebx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  const GUID *ActivityId; // rcx
  void *v35; // r8
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v41; // rbx
  CSHORT MdlFlags; // ax
  void *v43; // rcx
  struct _MDL *v44; // rbx
  unsigned int v45; // ecx
  unsigned int v46; // ecx
  unsigned int v47; // ecx
  unsigned __int8 v48; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v50; // ecx
  unsigned int v51; // ecx
  unsigned int v52; // ecx
  unsigned int v53; // ecx
  unsigned int v54; // ecx
  unsigned int v55; // ecx
  unsigned int v56; // ecx
  unsigned __int8 v57[8]; // [rsp+60h] [rbp-1F8h] BYREF
  __int64 v58; // [rsp+68h] [rbp-1F0h] BYREF
  __int64 *v59; // [rsp+70h] [rbp-1E8h]
  __int64 v60; // [rsp+78h] [rbp-1E0h] BYREF
  __int64 v61; // [rsp+80h] [rbp-1D8h]
  __int64 v62; // [rsp+88h] [rbp-1D0h]
  __int64 v63; // [rsp+90h] [rbp-1C8h]
  ULONGLONG RegHandle; // [rsp+98h] [rbp-1C0h] BYREF
  _BYTE v65[48]; // [rsp+A0h] [rbp-1B8h] BYREF
  _BYTE v66[272]; // [rsp+D0h] [rbp-188h] BYREF
  _OWORD v67[5]; // [rsp+1E0h] [rbp-78h] BYREF
  __int64 v68; // [rsp+230h] [rbp-28h]
  int v69; // [rsp+238h] [rbp-20h]
  __int16 v70; // [rsp+23Ch] [rbp-1Ch]
  char v71; // [rsp+23Eh] [rbp-1Ah]

  v63 = a1;
  memset(v65, 0, sizeof(v65));
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  RelatedActivityId = 0LL;
  if ( *(_BYTE *)(a1 + 1) == 5 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, *(_DWORD *)(a1 + 16));
    else
      PspTerminateThreadByPointer((ULONG_PTR)KeGetCurrentThread(), 0);
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
        v45 = v5 - 29;
        if ( !v45 )
        {
          LOBYTE(v3) = *(_BYTE *)(a1 + 24);
          MmChangeKernelCfgBitmap(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), v3);
          return;
        }
        v46 = v45 - 1;
        if ( !v46 )
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
        v47 = v46 - 1;
        if ( !v47 )
        {
          PartitionState = MmUnmapViewOfSection(PsSecureSystemProcess, *(_QWORD *)(a1 + 8));
          goto LABEL_22;
        }
        if ( v47 == 1 )
        {
          if ( *(_QWORD *)(a1 + 8) )
          {
            MmLockLoadedModuleListExclusive(v57);
          }
          else
          {
            v48 = *(_BYTE *)(a1 + 16);
            ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v48 < 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
            __writecr8(v48);
          }
          return;
        }
        goto LABEL_137;
      }
      if ( v5 == 28 )
      {
        v44 = *(struct _MDL **)(a1 + 8);
        MmUnmapLockedPages(v44->MappedSystemVa, v44);
        v43 = v44;
      }
      else
      {
        v36 = v5 - 23;
        if ( !v36 )
        {
          VslHandleKsrCall(a1);
          return;
        }
        v37 = v36 - 1;
        if ( !v37 )
        {
          PartitionState = HvlpDepositPages(0, v2, *(_QWORD *)(a1 + 8) != 0LL);
          goto LABEL_22;
        }
        v38 = v37 - 1;
        if ( !v38 )
        {
          *(_DWORD *)(a1 + 8) = VslAllocatePool(
                                  *(_QWORD *)(a1 + 8),
                                  *(_DWORD *)(a1 + 16),
                                  (_QWORD *)(a1 + 16),
                                  (_QWORD *)(a1 + 24),
                                  (_QWORD *)(a1 + 32));
          return;
        }
        v39 = v38 - 1;
        if ( v39 )
        {
          if ( v39 == 1 )
          {
            PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x646C6D4Du);
            v41 = PoolWithTag;
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
                MmMapLockedPagesSpecifyCache(v41, 0, MmCached, 0LL, 0, 0x40000010u);
                MdlFlags = v41->MdlFlags;
              }
              if ( (MdlFlags & 1) != 0 )
              {
                *(_QWORD *)(a1 + 8) = 0LL;
                *(_QWORD *)(a1 + 16) = v41;
                *(_QWORD *)(a1 + 24) = v41->MappedSystemVa;
                return;
              }
              ExFreePoolWithTag(v41, 0);
            }
            v11 = 3221225626LL;
LABEL_25:
            *(_QWORD *)(a1 + 8) = v11;
            return;
          }
          goto LABEL_137;
        }
        v43 = (void *)VslFreePoolTransferObject(*(__int64 **)(a1 + 8), 0LL);
      }
      ExFreePoolWithTag(v43, 0);
      return;
    }
    if ( v5 <= 0x27 )
    {
      if ( v5 == 39 )
      {
        *(_QWORD *)(a1 + 24) = 0LL;
        if ( (unsigned __int8)PspIumReplenishPartitionPages(*(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 16)) )
          *(_QWORD *)(a1 + 24) = 1LL;
        return;
      }
      v50 = v5 - 34;
      if ( !v50 )
      {
        DbgkMapViewOfSection(*(_QWORD *)(a1 + 8));
        return;
      }
      v51 = v50 - 1;
      if ( v51 )
      {
        v52 = v51 - 1;
        if ( !v52 )
        {
          ObfDereferenceObject(*(PVOID *)(a1 + 8));
          return;
        }
        v53 = v52 - 1;
        if ( !v53 )
        {
          KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
          return;
        }
        if ( v53 != 1 )
          goto LABEL_137;
        if ( !*(_QWORD *)(a1 + 8) )
        {
          PspIumFreePartitionState(*(PVOID *)(a1 + 16));
          return;
        }
        PartitionState = PspIumAllocatePartitionState(a1);
      }
      else
      {
        PartitionState = PspMapView(a1);
      }
      goto LABEL_22;
    }
    v54 = v5 - 40;
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
    v56 = v55 - 1;
    if ( !v56 )
    {
      ExQueueWorkItem(&PspIumWorkItem, DelayedWorkQueue);
      return;
    }
    if ( v56 == 1 )
    {
      PartitionState = PsAdjustBasicEnclaveThreadList(
                         *(_QWORD *)(a1 + 8),
                         *(_QWORD *)(a1 + 16),
                         *(unsigned int *)(a1 + 24));
      goto LABEL_22;
    }
LABEL_137:
    PspTerminateThreadByPointer((ULONG_PTR)KeGetCurrentThread(), -1073741819);
    return;
  }
  if ( v5 == 22 )
  {
    PartitionState = PspIumVerifyParentSd(*(unsigned int *)(a1 + 8), v2, *(_QWORD *)(a1 + 24));
    goto LABEL_22;
  }
  if ( v5 > 0xB )
  {
    if ( v5 <= 0x11 )
    {
      if ( v5 == 17 )
      {
        memset(v66, 0, sizeof(v66));
        PartitionState = DbgkpSendErrorMessage(*(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 16), v66);
        goto LABEL_22;
      }
      v16 = v5 - 12;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( !v18 )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            v21 = *(_KPROCESS **)(a1 + 8);
            if ( Process != v21 )
            {
              KiStackAttachProcess(v21, 0, (__int64)v65);
              v21 = *(_KPROCESS **)(a1 + 8);
            }
            v22 = MmProtectVirtualMemory(
                    *(_QWORD *)(a1 + 16),
                    (_DWORD)v21,
                    (int)a1 + 24,
                    (int)a1 + 32,
                    *(_DWORD *)(a1 + 40),
                    a1 + 40);
            if ( Process != *(_KPROCESS **)(a1 + 8) )
              KiUnstackDetachProcess((struct _KTHREAD *)v65, 0);
            *(_DWORD *)(a1 + 8) = v22;
            return;
          }
          v19 = v18 - 1;
          if ( v19 )
          {
            if ( v19 == 1 )
            {
              DbgkpResumeProcess(*(_QWORD *)(a1 + 8));
              return;
            }
            goto LABEL_137;
          }
          LOBYTE(v11) = DbgkpSuspendProcess(*(_QWORD *)(a1 + 8));
          goto LABEL_24;
        }
        v23 = KeGetCurrentThread()->ApcState.Process;
        v24 = *(_KPROCESS **)(a1 + 8);
        if ( v23 != v24 )
          KiStackAttachProcess(v24, 0, (__int64)v65);
        VirtualMemory = MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, 0, 0x10000000);
      }
      else
      {
        v23 = KeGetCurrentThread()->ApcState.Process;
        v26 = *(_KPROCESS **)(a1 + 8);
        if ( v23 != v26 )
          KiStackAttachProcess(v26, 0, (__int64)v65);
        v27 = 0;
        v28 = 0LL;
        v29 = *(_QWORD *)(a1 + 48);
        if ( v29 || *(_QWORD *)(a1 + 56) )
        {
          v58 = 1LL;
          v59 = &v60;
          v61 = 0LL;
          v60 = v29;
          v62 = *(_QWORD *)(a1 + 56);
          v27 = 1;
          v28 = &v58;
        }
        VirtualMemory = MmAllocateVirtualMemory(
                          -1,
                          (int)a1 + 24,
                          (int)a1 + 32,
                          *(_DWORD *)(a1 + 40),
                          4,
                          v28,
                          v27,
                          0,
                          0x10000000,
                          0,
                          0LL);
      }
      v30 = VirtualMemory;
      if ( v23 != *(_KPROCESS **)(a1 + 8) )
        KiUnstackDetachProcess((struct _KTHREAD *)v65, 0);
      *(_DWORD *)(a1 + 8) = v30;
      return;
    }
    v31 = v5 - 18;
    if ( !v31 )
    {
      v35 = *(void **)(a1 + 24);
      if ( v35 )
        RelatedActivityId = VslIumEtwEnableCallback;
      *(_QWORD *)(a1 + 8) = EtwRegister((LPCGUID)(a1 + 8), RelatedActivityId, v35, &RegHandle);
      *(_QWORD *)(a1 + 16) = RegHandle;
      return;
    }
    v32 = v31 - 1;
    if ( !v32 )
    {
      PartitionState = EtwUnregister(*(_QWORD *)(a1 + 8));
      goto LABEL_22;
    }
    v33 = v32 - 1;
    if ( !v33 )
    {
      PartitionState = EtwSetInformation(
                         *(_QWORD *)(a1 + 8),
                         *(EVENT_INFO_CLASS *)(a1 + 16),
                         *(PVOID *)(a1 + 24),
                         *(_DWORD *)(a1 + 32));
      goto LABEL_22;
    }
    if ( v33 == 1 )
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
    goto LABEL_137;
  }
  if ( v5 == 11 )
  {
    LOBYTE(v2) = *(_BYTE *)(a1 + 24);
    PartitionState = MmGetSectionStrongImageReference(*(_QWORD *)(a1 + 8), v2, 0LL, a1 + 16);
    goto LABEL_22;
  }
  if ( v5 > 6 )
  {
    v12 = v5 - 7;
    if ( !v12 )
    {
      LOBYTE(v11) = KeAlertThreadByThreadId(*(_QWORD *)(a1 + 8));
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
      goto LABEL_137;
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
    LOBYTE(v2) = *(_BYTE *)(a1 + 16);
    LOBYTE(v11) = DbgkForwardException(*(_QWORD *)(a1 + 8), v2);
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
    goto LABEL_137;
  }
  v67[0] = *(_OWORD *)(a1 + 10);
  v67[1] = *(_OWORD *)(a1 + 26);
  v67[2] = *(_OWORD *)(a1 + 42);
  v67[3] = *(_OWORD *)(a1 + 58);
  v67[4] = *(_OWORD *)(a1 + 74);
  v68 = *(_QWORD *)(a1 + 90);
  v69 = *(_DWORD *)(a1 + 98);
  v70 = *(_WORD *)(a1 + 102);
  v71 = 0;
  DbgPrintEx(
    0,
    0,
    "IUM [VP:%u,TK:%#02x,LN:%04u] %s\n",
    *(unsigned __int16 *)(a1 + 8) >> 13,
    *(_DWORD *)(a1 + 4),
    (*(unsigned __int16 *)(a1 + 8) >> 1) & 0xFFF,
    (const char *)v67);
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    __debugbreak();
}
