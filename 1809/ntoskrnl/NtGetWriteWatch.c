/*
 * XREFs of NtGetWriteWatch @ 0x140086AC0
 * Callers:
 *     <none>
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFastLockLeafPageTable @ 0x140045BC0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x140046A70 (MiCheckProcessShadow.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400531B0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiWalkPageTables @ 0x14006E930 (MiWalkPageTables.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiUnlockAndDereferenceVad @ 0x140074540 (MiUnlockAndDereferenceVad.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 *     MiCaptureDirtyBitToPfn @ 0x140087900 (MiCaptureDirtyBitToPfn.c)
 *     MiWriteValidPteNewProtection @ 0x140087960 (MiWriteValidPteNewProtection.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400B75B0 (ExAllocatePoolWithQuotaTag.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400E7820 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KeShouldYieldProcessor @ 0x1400F9D60 (KeShouldYieldProcessor.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiUnlockVadCore @ 0x140125838 (MiUnlockVadCore.c)
 *     MiPreUnlockWorkingSetShared @ 0x140130D18 (MiPreUnlockWorkingSetShared.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiWaitForVadDeletion @ 0x1402CB340 (MiWaitForVadDeletion.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14031C354 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14031C494 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1406726C0 (ObReferenceObjectByHandleWithTag.c)
 *     ExSystemExceptionFilter @ 0x1406E3A10 (ExSystemExceptionFilter.c)
 */

NTSTATUS __stdcall NtGetWriteWatch(
        HANDLE ProcessHandle,
        ULONG Flags,
        PVOID BaseAddress,
        SIZE_T RegionSize,
        PVOID *UserAddressArray,
        PULONG_PTR EntriesInUserAddressArray,
        PULONG Granularity)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rdi
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  _BYTE *PoolWithQuotaTag; // rcx
  int v19; // ebx
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rdi
  struct _KTHREAD *v23; // r14
  __int64 Address; // r15
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r9
  bool v28; // zf
  int v29; // r12d
  __int64 v30; // r8
  __int64 v31; // rdx
  unsigned __int64 v32; // rsi
  __int64 v33; // r14
  unsigned __int8 v34; // al
  LONG *v35; // r14
  unsigned __int8 v36; // r12
  struct _KPRCB *CurrentPrcb; // r13
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v39; // ett
  unsigned __int64 v40; // r13
  LONG *v41; // rax
  unsigned __int64 v42; // r14
  unsigned __int64 j; // rcx
  char *AnyMultiplexedVm; // r12
  int v45; // eax
  __int64 v46; // r8
  __int64 v47; // rdx
  unsigned __int64 v48; // r14
  unsigned __int8 v49; // cl
  signed __int32 v50; // eax
  signed __int32 v51; // ett
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  int v55; // eax
  volatile signed __int32 *v56; // rsi
  struct _KPRCB *v57; // rcx
  _DWORD *v58; // rdx
  char v59; // al
  unsigned __int8 v60; // di
  char *v61; // rdi
  BOOL v62; // r12d
  struct _KTHREAD *v63; // r14
  unsigned __int64 v64; // r15
  struct _KTHREAD *v65; // rdi
  __int64 v66; // rdx
  unsigned int SessionId; // r10d
  BOOL v68; // r13d
  __int64 v69; // rsi
  unsigned int v70; // r8d
  __int64 v71; // rcx
  unsigned __int8 v72; // r11
  __int64 v73; // rcx
  _BYTE *v74; // rbx
  unsigned __int64 v75; // rdi
  __int64 *v76; // rcx
  unsigned __int64 v77; // r14
  __int64 v78; // r9
  __int64 v79; // rdx
  __int64 v80; // r8
  struct _KEVENT *v81; // r12
  unsigned __int64 v82; // rax
  _DWORD *v83; // rcx
  unsigned __int8 CurrentIrql; // cl
  int v85; // eax
  int v86; // eax
  __int64 *v87; // rcx
  unsigned __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rdx
  struct _KPRCB *v91; // rcx
  int v92; // eax
  int v93; // [rsp+40h] [rbp-AA8h]
  unsigned __int8 v94; // [rsp+48h] [rbp-AA0h]
  __int64 i; // [rsp+50h] [rbp-A98h]
  __int64 v96; // [rsp+58h] [rbp-A90h]
  char v97; // [rsp+60h] [rbp-A88h]
  int v98; // [rsp+64h] [rbp-A84h] BYREF
  void *Src; // [rsp+68h] [rbp-A80h]
  __int64 v100; // [rsp+70h] [rbp-A78h]
  __int64 v101; // [rsp+78h] [rbp-A70h]
  unsigned __int64 v102; // [rsp+80h] [rbp-A68h]
  __int64 *v103; // [rsp+88h] [rbp-A60h]
  unsigned __int64 v104; // [rsp+90h] [rbp-A58h]
  PVOID Object; // [rsp+98h] [rbp-A50h] BYREF
  int v106; // [rsp+A0h] [rbp-A48h] BYREF
  int v107; // [rsp+A4h] [rbp-A44h] BYREF
  int v108; // [rsp+A8h] [rbp-A40h]
  PVOID P; // [rsp+B0h] [rbp-A38h]
  unsigned __int64 v110; // [rsp+B8h] [rbp-A30h]
  __int64 v111; // [rsp+C0h] [rbp-A28h] BYREF
  unsigned __int64 v112; // [rsp+C8h] [rbp-A20h]
  __int64 v113; // [rsp+D0h] [rbp-A18h] BYREF
  HANDLE v114; // [rsp+D8h] [rbp-A10h]
  void *v115; // [rsp+E0h] [rbp-A08h]
  PULONG_PTR v116; // [rsp+E8h] [rbp-A00h]
  PULONG v117; // [rsp+F0h] [rbp-9F8h]
  _QWORD v118[22]; // [rsp+100h] [rbp-9E8h] BYREF
  int v119; // [rsp+1B0h] [rbp-938h] BYREF
  __int16 v120; // [rsp+1B4h] [rbp-934h]
  __int64 v121; // [rsp+1B8h] [rbp-930h]
  __int64 v122; // [rsp+1C0h] [rbp-928h]
  __int64 v123; // [rsp+1C8h] [rbp-920h]
  _BYTE v124[48]; // [rsp+270h] [rbp-878h] BYREF
  _BYTE v125[2048]; // [rsp+2A0h] [rbp-848h] BYREF
  void *retaddr; // [rsp+AE8h] [rbp+0h]

  v97 = Flags;
  v114 = ProcessHandle;
  v115 = UserAddressArray;
  v116 = EntriesInUserAddressArray;
  v117 = Granularity;
  v121 = 20LL;
  v119 = 1;
  v120 = 0;
  v122 = 0LL;
  v123 = 0LL;
  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741584;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)BaseAddress > 0x7FFFFFFEFFFFLL )
      return -1073741583;
    if ( 0x7FFFFFFF0000LL - (__int64)BaseAddress < RegionSize )
      return -1073741582;
    v13 = (__int64)EntriesInUserAddressArray;
    if ( (unsigned __int64)EntriesInUserAddressArray >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v13 = *(_QWORD *)v13;
    v14 = *EntriesInUserAddressArray;
    v104 = v14;
    if ( !v14 )
      return -1073741581;
    if ( v14 > 0x1FFFFFFFFFFFFFFFLL )
      return -1073741581;
    ProbeForWrite(UserAddressArray, 8 * v14, 8u);
    v15 = (__int64)Granularity;
    if ( (unsigned __int64)Granularity >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v15 = *(_DWORD *)v15;
    v16 = v104;
  }
  else
  {
    v16 = *EntriesInUserAddressArray;
    v104 = *EntriesInUserAddressArray;
  }
  PoolWithQuotaTag = v125;
  Src = v125;
  if ( v16 > 0x100 )
  {
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 8 * v16, 0x63476D4Du);
    Src = PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
      return -1073741670;
  }
  v100 = 0LL;
  v103 = (__int64 *)PoolWithQuotaTag;
  P = 0LL;
  v19 = 0;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    Object = Process;
  }
  else
  {
    v29 = ObReferenceObjectByHandleWithTag(
            ProcessHandle,
            8u,
            (POBJECT_TYPE)PsProcessType,
            PreviousMode,
            0x77576D4Du,
            &Object,
            0LL);
    if ( v29 < 0 )
      goto LABEL_246;
  }
  v102 = 0LL;
  v20 = (unsigned __int64)BaseAddress + RegionSize - 1;
  if ( (unsigned __int64)BaseAddress > v20 )
  {
    v29 = -1073741582;
    goto LABEL_243;
  }
  if ( Process != Object )
  {
    KiStackAttachProcess((_KPROCESS *)Object, 0LL, (__int64)v124);
    v19 = 1;
  }
  v101 = (__int64)Object + 1280;
  v21 = (unsigned __int64)BaseAddress >> 12;
  v22 = (((unsigned __int64)BaseAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v110 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v93 = 0;
  v23 = KeGetCurrentThread();
  v96 = (__int64)v23->ApcState.Process;
  --v23->SpecialApcDisable;
  --v23->SpecialApcDisable;
  ExAcquirePushLockSharedEx(v96 + 872, 0LL);
  LOBYTE(v23[1].Queue) |= 2u;
  Address = MiLocateAddress(BaseAddress);
  v25 = *(_DWORD *)(v96 + 772);
  if ( !Address )
  {
    v29 = -1073741558;
    if ( (v25 & 0x20) == 0 )
      v29 = -1073741664;
    goto LABEL_168;
  }
  if ( (v25 & 0x20) != 0 )
  {
    v29 = -1073741558;
LABEL_168:
    v93 = v29;
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)v23, v96);
    KiLeaveGuardedRegionUnsafe((__int64)v23);
    v30 = 0LL;
    Address = 0LL;
    goto LABEL_30;
  }
  _InterlockedIncrement((volatile signed __int32 *)(Address + 36));
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)v23, v96);
  --v23->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(Address + 40, 0LL);
  LOBYTE(v23[1].Queue) |= 0x80u;
  v28 = v23->SpecialApcDisable++ == -1;
  if ( v28 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v23->ApcState.ApcListHead[0].Flink != &v23->152 )
    KiCheckForKernelApcDelivery(v26);
  if ( (*(_DWORD *)(Address + 48) & 0x20000000) == 0 )
  {
    if ( v21 < (*(unsigned int *)(Address + 24) | ((unsigned __int64)*(unsigned __int8 *)(Address + 32) << 32))
      || v21 > (*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) )
    {
      MiUnlockAndDereferenceVad((char *)Address);
      v29 = -1073741664;
      v93 = -1073741664;
      goto LABEL_241;
    }
    v29 = 0;
    v30 = 0LL;
LABEL_30:
    if ( Address )
    {
      P = (PVOID)Address;
      if ( (*(_DWORD *)(Address + 48) & 7) == 4
        && v20 <= (((*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) << 12) | 0xFFF) )
      {
        v31 = *(_QWORD *)(Address + 56);
        for ( i = v31; v31; i = v31 )
        {
          if ( (*(_DWORD *)(v31 + 64) & 4) != 0 )
            break;
          v31 = *(_QWORD *)v31;
        }
        v32 = v21 - (*(unsigned int *)(Address + 24) | ((unsigned __int64)*(unsigned __int8 *)(Address + 32) << 32));
        v33 = v101;
        v34 = *(_BYTE *)(v101 + 184) & 7;
        if ( v34 >= 6u )
        {
          CurrentIrql = KeGetCurrentIrql();
          v94 = CurrentIrql;
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        }
        else
        {
          if ( v34 == 2 )
            v35 = &dword_14043C7C0;
          else
            v35 = (LONG *)(v101 + 192);
          v36 = KeGetCurrentIrql();
          v27 = 2LL;
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v36 < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v35, v36);
          }
          else
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            if ( SchedulerAssist )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v85 = SchedulerAssist[5];
                SchedulerAssist[5] = v85 + 1;
                if ( v85 == -1 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            _m_prefetchw(v35);
            v39 = *v35 & 0x7FFFFFFF;
            if ( v39 != _InterlockedCompareExchange(v35, v39 + 1, v39) )
            {
              v83 = CurrentPrcb->SchedulerAssist;
              if ( v83 )
              {
                if ( CurrentPrcb->NestingLevel <= 1u )
                {
                  v86 = v83[5] - 1;
                  v83[5] = v86;
                  if ( !v86 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
              ExpWaitForSpinLockSharedAndAcquire(v35, v36);
            }
          }
          if ( v35[1] )
            _InterlockedExchange(v35 + 1, 0);
          v94 = v36;
          v33 = v101;
        }
        v40 = v110;
        if ( v22 <= v110 )
        {
          v110 = (__int64)(v110 << 25) >> 16;
          while ( 1 )
          {
            if ( v100 )
            {
              MiFlushTbList(&v119, v31, v30, v27);
              MiUnlockPageTableInternal(v33, v100);
              v100 = 0LL;
            }
            if ( (*(_BYTE *)(v33 + 184) & 7) == 2 )
              v41 = &dword_14043C7C0;
            else
              v41 = (LONG *)(v33 + 192);
            if ( (*v41 & 0x40000000) != 0 || KeShouldYieldProcessor() )
            {
              MiUnlockWorkingSetShared(v33, v94);
              MiLockWorkingSetShared(v33);
            }
            v111 = 0LL;
            v112 = 0LL;
            memset(v118, 0, sizeof(v118));
            v42 = (__int64)(v22 << 25) >> 16;
            LODWORD(v118[0]) = 2273;
            for ( j = v42; j >= 0xFFFFF68000000000uLL; j = (__int64)(j << 25) >> 16 )
            {
              if ( j > 0xFFFFF6FFFFFFFFFFuLL )
                break;
            }
            if ( j < 0xFFFF800000000000uLL || j >= qword_14043CB80 && j <= qword_14043B5F0 )
              AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
            else
              AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
            v45 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v42, 0);
            if ( v45 )
            {
              LODWORD(v111) = v45 - 1;
              v47 = 0xFFFFF68000000000uLL;
              v48 = ((v42 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v112 = v48;
            }
            else
            {
              LODWORD(v118[0]) |= 4u;
              v118[2] = 0LL;
              v118[21] = &v111;
              BYTE2(v118[1]) = 1;
              v118[20] = MiGetNextPageTableTail;
              v118[3] = AnyMultiplexedVm;
              BYTE4(v118[0]) = v94;
              v118[4] = (__int64)(v22 << 25) >> 16;
              v118[5] = v110;
              MiWalkPageTables((int *)v118);
              v48 = v112;
              v47 = 0xFFFFF68000000000uLL;
            }
            if ( v48 )
              v100 = ((v48 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            else
              v48 = v40 + 8;
            v19 |= 8u;
            v49 = KeGetCurrentIrql();
            v27 = 2LL;
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v49 < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
            v50 = *(_DWORD *)(Address + 48);
            do
            {
              while ( v50 < 0 )
              {
                if ( (v50 & 0x40000000) != 0 )
                {
                  v106 = 0;
                  do
                  {
                    KeYieldProcessorEx(&v106, v47, v46);
                    v50 = *(_DWORD *)(Address + 48);
                  }
                  while ( v50 < 0 );
                }
                else
                {
                  v50 = _InterlockedCompareExchange((volatile signed __int32 *)(Address + 48), v50 | 0x40000000, v50);
                }
              }
              v51 = v50;
              v50 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)(Address + 48),
                      v50 & 0x3FFFFFFF | 0x80000000,
                      v50);
            }
            while ( v51 != v50 );
            v31 = i;
            v30 = 0LL;
            if ( v22 != v48 )
              break;
LABEL_65:
            if ( v22 <= v40 )
            {
              do
              {
                v27 = *(_QWORD *)v22;
                if ( v22 >= 0xFFFFF6FB7DBED000uLL
                  && v22 <= 0xFFFFF6FB7DBED7F8uLL
                  && (MiFlags & 0xC00000) != 0
                  && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                  && (v27 & 1) != 0
                  && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
                {
                  v88 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
                  if ( v88 )
                  {
                    v89 = *(_QWORD *)(v88 + 8 * ((v22 >> 3) & 0x1FF));
                    v90 = v27 | 0x20;
                    if ( (v89 & 0x20) == 0 )
                      v90 = *(_QWORD *)v22;
                    v27 = v90;
                    if ( (v89 & 0x42) != 0 )
                      v27 = v90 | 0x42;
                  }
                  v31 = i;
                }
                v113 = v27;
                v19 &= 0xFFFFFFF9;
                if ( _bittest64(*(const signed __int64 **)(v31 + 16), v32) == 1 )
                {
                  v19 |= 4u;
                  if ( (v97 & 1) != 0 )
                  {
                    _bittestandreset64(*(signed __int64 **)(v31 + 16), v32);
                    if ( (v27 & 1) != 0 && (v27 & 0x42) != 0 )
LABEL_135:
                      v19 |= 2u;
                  }
                }
                else if ( (v27 & 1) != 0 && (v27 & 0x42) != 0 )
                {
                  v19 |= 4u;
                  if ( (v97 & 1) != 0 )
                    goto LABEL_135;
                }
                if ( (v19 & 2) != 0 )
                {
                  v77 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v113) >> 12) & 0xFFFFFFFFFLL)
                      - 0x58000000000LL;
                  MiWriteValidPteNewProtection(v22, v78 & 0xFFFFFFFFFFFFFFBDuLL);
                  MiInsertTbFlushEntry(&v119, (__int64)(v22 << 25) >> 16, 1LL);
                  v81 = 0LL;
                  v107 = 0;
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(v77 + 24), 0x3FuLL) )
                  {
                    do
                      KeYieldProcessorEx(&v107, v79, v80);
                    while ( *(__int64 *)(v77 + 24) < 0 );
                  }
                  v82 = MiCaptureDirtyBitToPfn(v77);
                  if ( v82 )
                    v81 = *(struct _KEVENT **)(qword_14043B808 + 8 * ((*(_QWORD *)(v77 + 40) >> 40) & 0x3FFLL));
                  _InterlockedAnd64((volatile signed __int64 *)(v77 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  if ( v82 )
                    MiReleasePageFileInfo(v81, v82, 1);
                  v30 = 0LL;
                  v31 = i;
                }
                if ( (v19 & 4) != 0 )
                {
                  v76 = v103;
                  *v103 = (__int64)(v22 << 25) >> 16;
                  v103 = v76 + 1;
                  if ( ++v102 == v104 )
                    goto LABEL_76;
                }
                ++v32;
                v22 += 8LL;
              }
              while ( (v22 & 0xFFF) != 0 && v22 <= v40 );
            }
            _InterlockedAnd((volatile signed __int32 *)(Address + 48), 0x3FFFFFFFu);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
              KeGetCurrentIrql();
            __writecr8(2uLL);
            v19 &= ~8u;
            v33 = v101;
            if ( v22 > v40 )
              goto LABEL_76;
          }
          while ( 1 )
          {
            if ( _bittest64(*(const signed __int64 **)(i + 16), v32) == 1 )
            {
              if ( (v97 & 1) != 0 )
                _bittestandreset64(*(signed __int64 **)(i + 16), v32);
              v87 = v103;
              *v103 = (__int64)(v22 << 25) >> 16;
              v103 = v87 + 1;
              if ( ++v102 == v104 )
                break;
            }
            ++v32;
            v22 += 8LL;
            if ( v22 == v48 )
              goto LABEL_65;
          }
        }
LABEL_76:
        MiFlushTbList(&v119, v31, v30, v27);
        if ( (v19 & 8) != 0 )
        {
          LOBYTE(v52) = 2;
          MiUnlockVadCore(Address, v52, v53);
        }
        if ( v100 )
          MiUnlockPageTableInternal(v101, v100);
        if ( (*(_BYTE *)(v101 + 184) & 7u) >= 6 )
        {
          v59 = KiIrqlFlags;
          if ( !KiIrqlFlags )
          {
LABEL_90:
            v60 = v94;
LABEL_91:
            __writecr8(v60);
            v29 = 0;
            v93 = 0;
            goto LABEL_92;
          }
        }
        else
        {
          v55 = *(_DWORD *)(v101 + 184);
          if ( (v55 & 0x8000000) != 0 || (v55 & 0x4000000) != 0 || (v55 & 0x10000000) != 0 )
          {
            MiPreUnlockWorkingSetShared(v101, v94);
            LOBYTE(v55) = *(_BYTE *)(v101 + 184);
          }
          if ( (v55 & 7) == 2 )
            v56 = &dword_14043C7C0;
          else
            v56 = (volatile signed __int32 *)(v101 + 192);
          MiCheckProcessShadow(v101, 1u, v53, v54);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v56, retaddr);
          }
          else
          {
            _InterlockedAnd(v56, 0xBFFFFFFF);
            _InterlockedDecrement(v56);
          }
          v57 = KeGetCurrentPrcb();
          v58 = v57->SchedulerAssist;
          if ( v58 )
          {
            if ( v57->NestingLevel <= 1u )
            {
              v92 = v58[5] - 1;
              v58[5] = v92;
              if ( !v92 )
                KiRemoveSystemWorkPriorityKick(v57);
            }
          }
          v59 = KiIrqlFlags;
          if ( !KiIrqlFlags )
            goto LABEL_90;
        }
        v60 = v94;
        if ( (v59 & 1) != 0 && KeGetCurrentIrql() >= 2u && v94 < 2u )
        {
          v91 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v91->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v91);
        }
        goto LABEL_91;
      }
      goto LABEL_242;
    }
LABEL_241:
    if ( v29 != -1073741664 )
      goto LABEL_92;
    goto LABEL_242;
  }
  MiWaitForVadDeletion(Address);
  MiUnlockAndDereferenceVad((char *)Address);
  if ( (*(_DWORD *)(v96 + 772) & 0x20) == 0 )
  {
LABEL_242:
    v29 = -1073741585;
    goto LABEL_243;
  }
  v29 = -1073741558;
LABEL_243:
  v93 = v29;
LABEL_92:
  v61 = (char *)P;
  if ( P )
  {
    v62 = _InterlockedExchangeAdd((volatile signed __int32 *)P + 9, 0xFFFFFFFF) == 1
       && (*((_DWORD *)v61 + 12) & 0x20000000) != 0;
    v63 = KeGetCurrentThread();
    LOBYTE(v63[1].Queue) &= ~0x80u;
    v64 = (unsigned __int64)(v61 + 40);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v61 + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v61 + 40);
    v98 = 0;
    v65 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v64) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v65->ApcState.Process);
    else
      SessionId = -1;
    --v65->SpecialApcDisable;
    v68 = ++v65->AbAllocationRegionCount == 1;
    v69 = 0LL;
    v70 = ((char)v65->AbEntrySummary | (char)v65->AbOrphanedEntrySummary) ^ 0x3F;
    v28 = !_BitScanReverse((unsigned int *)&v71, v70);
    v108 = v71;
    if ( !v28 )
    {
      while ( 1 )
      {
        v70 &= ~(1 << v71);
        v66 = (__int64)&v65->LockEntries[v71];
        if ( (*(_BYTE *)(v66 + 26) & 1) != 0
          && (*(_DWORD *)(v66 + 32) & 1) == 0
          && (*(_QWORD *)(v66 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v64 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v66 + 40) == SessionId )
        {
          *(_BYTE *)(v66 + 26) &= ~1u;
          if ( *(_QWORD *)(v66 + 32) )
            break;
        }
        v28 = !_BitScanReverse((unsigned int *)&v71, v70);
        v108 = v71;
        if ( v28 )
          goto LABEL_107;
      }
      v69 = (__int64)&v65->LockEntries[v71];
    }
LABEL_107:
    if ( v69 )
    {
      *(_BYTE *)(v69 + 32) |= 2u;
      if ( *(__int64 *)(v69 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v69, v66);
      v98 = 0;
      v98 = *(_DWORD *)(v69 + 88) & 0x1FFFF;
      *(_DWORD *)(v69 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v69 + 25) &= ~1u;
      *(_QWORD *)(v69 + 32) = 0LL;
      v72 = 1 << ((v69 - (__int64)v65 - 800) / 96);
      if ( v68 )
        v65->AbEntrySummary |= v72;
      else
        _InterlockedOr8((volatile signed __int8 *)&v65->AbOrphanedEntrySummary, v72);
    }
    else if ( (*((_DWORD *)&v65->0 + 1) & 0x10000) == 0 )
    {
      KeBugCheckEx(0x162u, (ULONG_PTR)v65, v64, SessionId, 0LL);
    }
    --v65->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v65, v64, (__int64)&v98);
    v28 = v65->SpecialApcDisable++ == -1;
    if ( v28 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v65->ApcState.ApcListHead[0].Flink != &v65->152 )
      KiCheckForKernelApcDelivery(v73);
    v28 = v63->SpecialApcDisable++ == -1;
    if ( v28 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v63->ApcState.ApcListHead[0].Flink != &v63->152 )
      KiCheckForKernelApcDelivery(v73);
    if ( v62 )
      ExFreePoolWithTag(P, 0);
    v29 = v93;
  }
  if ( (v19 & 1) != 0 )
    KiUnstackDetachProcess((__int64)v124, 0LL);
  if ( v114 != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(Object, 0x77576D4Du);
  if ( !v29 )
  {
    v74 = Src;
    if ( v115 )
    {
      v75 = v102;
      memmove(v115, Src, 8 * v102);
      *v116 = v75;
    }
    *v117 = 4096;
    goto LABEL_129;
  }
LABEL_246:
  v74 = Src;
LABEL_129:
  if ( v74 != v125 )
    ExFreePoolWithTag(v74, 0);
  return v29;
}
