/*
 * XREFs of NtGetWriteWatch @ 0x14005C1F0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14003FCE0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiWalkPageTables @ 0x140048F60 (MiWalkPageTables.c)
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MiUnlockAndDereferenceVad @ 0x1400504B0 (MiUnlockAndDereferenceVad.c)
 *     MiGetVadMandatoryPageSize @ 0x140053750 (MiGetVadMandatoryPageSize.c)
 *     MiMakePteClean @ 0x14005C050 (MiMakePteClean.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400B8020 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400BEF80 (ExAllocatePoolWithQuotaTag.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFastLockLeafPageTable @ 0x1400CB770 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x1400CCBA0 (MiCheckProcessShadow.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140109950 (KeShouldYieldProcessor.c)
 *     MiUnlockVadCore @ 0x14012545C (MiUnlockVadCore.c)
 *     MiPreUnlockWorkingSetShared @ 0x140129A78 (MiPreUnlockWorkingSetShared.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiWaitForVadDeletion @ 0x1402E5678 (MiWaitForVadDeletion.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14033B104 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14033B244 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F0AB0 (ObReferenceObjectByHandleWithTag.c)
 *     ExSystemExceptionFilter @ 0x140747FD0 (ExSystemExceptionFilter.c)
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
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  _BYTE *PoolWithQuotaTag; // rcx
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rdi
  struct _KTHREAD *v21; // rsi
  __int64 v22; // r15
  _KPROCESS *v23; // rdx
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // rbx
  int v26; // ebx
  __int64 v27; // r15
  unsigned int v28; // edx
  unsigned __int64 v29; // r10
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // r9
  unsigned __int64 v33; // r12
  __int64 v34; // rdx
  unsigned __int64 VadMandatoryPageSize; // r8
  __int64 v36; // r9
  char *v37; // r13
  unsigned __int8 v38; // al
  LONG *v39; // rbx
  unsigned __int8 v40; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v43; // ett
  unsigned __int64 v44; // r8
  __int64 v45; // r13
  __int64 v46; // r14
  char *v47; // rsi
  LONG *v48; // rax
  unsigned __int64 v49; // rbx
  unsigned __int64 j; // rcx
  unsigned __int16 *AnyMultiplexedVm; // rsi
  int v52; // eax
  unsigned __int64 v53; // rbx
  unsigned __int64 v54; // rbx
  unsigned __int8 v55; // cl
  signed __int32 v56; // eax
  signed __int32 v57; // ett
  unsigned __int64 v58; // r14
  unsigned __int64 v59; // r13
  unsigned int v60; // esi
  unsigned __int64 k; // rbx
  unsigned int v62; // ecx
  __int64 v63; // rcx
  bool v64; // zf
  signed __int32 v65; // eax
  signed __int32 v66; // ett
  __int64 v67; // rdx
  int v68; // eax
  unsigned __int8 v69; // di
  volatile signed __int32 *v70; // rbx
  struct _KPRCB *v71; // rcx
  _DWORD *v72; // rdx
  unsigned __int64 v73; // rax
  char *v74; // r13
  BOOL v75; // r15d
  struct _KTHREAD *v76; // rsi
  signed __int64 v77; // rax
  struct _KTHREAD *v78; // rbx
  unsigned int SessionId; // r10d
  unsigned __int8 v80; // r12
  _KLOCK_ENTRY *v81; // rdi
  unsigned int v82; // r8d
  __int64 v83; // rcx
  __int64 v84; // rcx
  _KLOCK_ENTRY *v85; // rdx
  unsigned __int8 v86; // al
  _BYTE *v87; // rdi
  unsigned __int64 v88; // rsi
  _QWORD *v89; // rax
  _DWORD *v90; // rcx
  unsigned __int64 v91; // r10
  char v92; // al
  __int64 v93; // rax
  unsigned __int8 CurrentIrql; // cl
  int v95; // eax
  int v96; // eax
  _QWORD *v97; // rcx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // rax
  struct _KPRCB *v101; // rcx
  int v102; // eax
  struct _KPRCB *v103; // rcx
  int v104; // [rsp+40h] [rbp-AE8h]
  int v105; // [rsp+44h] [rbp-AE4h]
  unsigned __int8 v107; // [rsp+48h] [rbp-AE0h]
  __int64 v108; // [rsp+50h] [rbp-AD8h]
  __int64 i; // [rsp+50h] [rbp-AD8h]
  unsigned __int64 v110; // [rsp+60h] [rbp-AC8h]
  char v111; // [rsp+68h] [rbp-AC0h]
  _BYTE *Src; // [rsp+70h] [rbp-AB8h]
  char *v113; // [rsp+78h] [rbp-AB0h]
  __int64 v114; // [rsp+80h] [rbp-AA8h]
  int v115; // [rsp+88h] [rbp-AA0h] BYREF
  unsigned __int64 v116; // [rsp+90h] [rbp-A98h]
  unsigned __int64 v117; // [rsp+98h] [rbp-A90h]
  unsigned __int64 v118; // [rsp+A0h] [rbp-A88h]
  unsigned __int64 v119; // [rsp+A8h] [rbp-A80h]
  _QWORD *v120; // [rsp+B0h] [rbp-A78h]
  PVOID Object; // [rsp+B8h] [rbp-A70h] BYREF
  int v122; // [rsp+C0h] [rbp-A68h] BYREF
  signed __int32 v123; // [rsp+C4h] [rbp-A64h]
  signed __int32 v124; // [rsp+C8h] [rbp-A60h]
  int v125; // [rsp+CCh] [rbp-A5Ch]
  int v126; // [rsp+D0h] [rbp-A58h]
  __int64 v127; // [rsp+D8h] [rbp-A50h]
  __int64 v128; // [rsp+E0h] [rbp-A48h] BYREF
  unsigned __int64 v129; // [rsp+E8h] [rbp-A40h]
  PVOID P; // [rsp+F0h] [rbp-A38h]
  HANDLE Handle; // [rsp+F8h] [rbp-A30h]
  signed __int32 v132; // [rsp+100h] [rbp-A28h]
  unsigned int v133; // [rsp+104h] [rbp-A24h]
  signed __int32 v134; // [rsp+108h] [rbp-A20h]
  __int64 v135; // [rsp+110h] [rbp-A18h]
  void *v136; // [rsp+118h] [rbp-A10h]
  PULONG_PTR v137; // [rsp+120h] [rbp-A08h]
  PULONG v138; // [rsp+128h] [rbp-A00h]
  signed __int64 v139; // [rsp+130h] [rbp-9F8h]
  _QWORD v140[22]; // [rsp+140h] [rbp-9E8h] BYREF
  int v141; // [rsp+1F0h] [rbp-938h] BYREF
  __int16 v142; // [rsp+1F4h] [rbp-934h]
  __int16 v143; // [rsp+1F6h] [rbp-932h]
  __int64 v144; // [rsp+1F8h] [rbp-930h]
  __int64 v145; // [rsp+200h] [rbp-928h]
  __int64 v146; // [rsp+208h] [rbp-920h]
  _BYTE v147[152]; // [rsp+210h] [rbp-918h] BYREF
  _BYTE v148[48]; // [rsp+2B0h] [rbp-878h] BYREF
  _BYTE v149[2048]; // [rsp+2E0h] [rbp-848h] BYREF
  void *retaddr; // [rsp+B28h] [rbp+0h]

  v111 = Flags;
  Handle = ProcessHandle;
  v136 = UserAddressArray;
  v137 = EntriesInUserAddressArray;
  v138 = Granularity;
  memset(v148, 0, sizeof(v148));
  v143 = 0;
  memset(v147, 0, sizeof(v147));
  v144 = 20LL;
  v141 = 1;
  v142 = 0;
  v145 = 0LL;
  v146 = 0LL;
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
    v116 = v14;
    if ( !v14 )
      return -1073741581;
    if ( v14 > 0x1FFFFFFFFFFFFFFFLL )
      return -1073741581;
    ProbeForWrite(UserAddressArray, 8 * v14, 8u);
    v15 = (__int64)Granularity;
    if ( (unsigned __int64)Granularity >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v15 = *(_DWORD *)v15;
    v16 = v116;
  }
  else
  {
    v16 = *EntriesInUserAddressArray;
    v116 = *EntriesInUserAddressArray;
  }
  PoolWithQuotaTag = v149;
  Src = v149;
  if ( v16 > 0x100 )
  {
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 8 * v16, 0x63476D4Du);
    Src = PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
      return -1073741670;
  }
  v119 = 1LL;
  v114 = 0LL;
  v120 = PoolWithQuotaTag;
  P = 0LL;
  v104 = 0;
  if ( Handle == (HANDLE)-1LL )
  {
    Object = Process;
  }
  else
  {
    v26 = ObReferenceObjectByHandleWithTag(
            Handle,
            8u,
            (POBJECT_TYPE)PsProcessType,
            PreviousMode,
            0x77576D4Du,
            &Object,
            0LL);
    if ( v26 < 0 )
      goto LABEL_295;
  }
  v118 = 0LL;
  v19 = (unsigned __int64)BaseAddress + RegionSize - 1;
  if ( (unsigned __int64)BaseAddress > v19 )
  {
    v26 = -1073741582;
    goto LABEL_126;
  }
  if ( Process != Object )
  {
    KiStackAttachProcess((ULONG_PTR)Object);
    v104 = 1;
  }
  v113 = (char *)Object + 1280;
  v20 = (((unsigned __int64)BaseAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v117 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v105 = 0;
  v21 = KeGetCurrentThread();
  v22 = (__int64)v21->ApcState.Process;
  --v21->SpecialApcDisable;
  --v21->SpecialApcDisable;
  ExAcquirePushLockSharedEx(v22 + 880, 0LL);
  LOBYTE(v21[1].Queue) |= 2u;
  v23 = KeGetCurrentThread()->ApcState.Process;
  v24 = v23[2].Affinity.Bitmap[9];
  v108 = v24;
  if ( !v24 )
    goto LABEL_215;
  v25 = (unsigned __int64)BaseAddress >> 12;
  if ( (unsigned __int64)BaseAddress >> 12 < (*(unsigned int *)(v24 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 32) << 32))
    || v25 > (*(unsigned int *)(v24 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 33) << 32)) )
  {
    v24 = v23[2].Affinity.Bitmap[8];
    v108 = v24;
    if ( v24 )
    {
      do
      {
        if ( v25 > (*(unsigned int *)(v24 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 33) << 32)) )
        {
          v24 = *(_QWORD *)(v24 + 8);
        }
        else
        {
          if ( v25 >= (*(unsigned int *)(v24 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 32) << 32)) )
            break;
          v24 = *(_QWORD *)v24;
        }
        v108 = v24;
      }
      while ( v24 );
      if ( v24 )
      {
        v23[2].Affinity.Bitmap[9] = v24;
        goto LABEL_26;
      }
    }
LABEL_215:
    v26 = -1073741558;
    if ( (*(_DWORD *)(v22 + 780) & 0x20) == 0 )
      v26 = -1073741664;
    goto LABEL_217;
  }
LABEL_26:
  if ( (*(_DWORD *)(v22 + 780) & 0x20) != 0 )
  {
    v26 = -1073741558;
LABEL_217:
    v105 = v26;
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)v21, v22);
    KiLeaveGuardedRegionUnsafe((__int64)v21);
    v27 = 0LL;
    goto LABEL_32;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v24 + 36));
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)v21, v22);
  --v21->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(v24 + 40, 0LL);
  LOBYTE(v21[1].Queue) |= 0x80u;
  v64 = v21->SpecialApcDisable++ == -1;
  if ( v64 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v21->ApcState.ApcListHead[0].Flink != &v21->152 )
    KiCheckForKernelApcDelivery();
  if ( (*(_DWORD *)(v24 + 48) & 4) != 0 )
  {
    MiWaitForVadDeletion(v24);
    MiUnlockAndDereferenceVad((char *)v24);
    if ( (*(_DWORD *)(v22 + 780) & 0x20) != 0 )
    {
      v26 = -1073741558;
      goto LABEL_126;
    }
    goto LABEL_125;
  }
  if ( v25 < (*(unsigned int *)(v24 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 32) << 32))
    || v25 > (*(unsigned int *)(v24 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 33) << 32)) )
  {
    MiUnlockAndDereferenceVad((char *)v24);
    v26 = -1073741664;
    v105 = -1073741664;
    goto LABEL_213;
  }
  v26 = 0;
  v27 = v108;
LABEL_32:
  if ( v27 )
  {
    P = (PVOID)v27;
    v28 = *(_DWORD *)(v27 + 48);
    if ( (v28 & 0x300000) == 0x300000
      && v19 <= (((*(unsigned int *)(v27 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v27 + 33) << 32)) << 12) | 0xFFF) )
    {
      v29 = MiVadPageSizes[(v28 >> 18) & 3];
      v119 = v29;
      v30 = v29;
      if ( v29 < 0x200 && (v28 & 0x400000) == 0 )
      {
        v29 = 1LL;
        v119 = 1LL;
      }
      if ( v29 <= 1 )
        goto LABEL_39;
      v93 = (v29 << 12) - 1;
      if ( ((unsigned __int64)BaseAddress & v93) != 0 )
      {
        v26 = -1073741583;
      }
      else
      {
        if ( (RegionSize & v93) == 0 )
        {
LABEL_39:
          if ( (v28 & 0x500000) == 0x500000 )
          {
            v31 = 16LL;
            if ( v30 != 16 )
              v31 = 1LL;
            v110 = v31;
          }
          else
          {
            v110 = 1LL;
          }
          v32 = *(_QWORD *)(v27 + 56);
          for ( i = v32; v32; i = v32 )
          {
            if ( (*(_DWORD *)(v32 + 64) & 4) != 0 )
              break;
            v32 = *(_QWORD *)v32;
          }
          v33 = ((unsigned __int64)BaseAddress >> 12)
              - (*(unsigned int *)(v27 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v27 + 32) << 32));
          VadMandatoryPageSize = MiGetVadMandatoryPageSize(v27);
          if ( VadMandatoryPageSize != 1 )
          {
            v34 = v33 % VadMandatoryPageSize;
            v33 /= VadMandatoryPageSize;
          }
          v37 = v113;
          v38 = v113[184] & 7;
          if ( v38 >= 6u )
          {
            CurrentIrql = KeGetCurrentIrql();
            v107 = CurrentIrql;
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          }
          else
          {
            if ( v38 == 2 )
              v39 = &dword_140467200;
            else
              v39 = (LONG *)(v113 + 192);
            v40 = KeGetCurrentIrql();
            v34 = 2LL;
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v40 < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v39, v40);
            }
            else
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              if ( SchedulerAssist )
              {
                if ( CurrentPrcb->NestingLevel <= 1u )
                {
                  v95 = SchedulerAssist[5];
                  SchedulerAssist[5] = v95 + 1;
                  if ( v95 == -1 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
              _m_prefetchw(v39);
              v43 = *v39 & 0x7FFFFFFF;
              if ( v43 != _InterlockedCompareExchange(v39, v43 + 1, v43) )
              {
                v90 = CurrentPrcb->SchedulerAssist;
                if ( v90 )
                {
                  if ( CurrentPrcb->NestingLevel <= 1u )
                  {
                    v96 = v90[5] - 1;
                    v90[5] = v96;
                    if ( !v96 )
                      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                  }
                }
                ExpWaitForSpinLockSharedAndAcquire(v39, v40);
              }
            }
            if ( v39[1] )
              _InterlockedExchange(v39 + 1, 0);
            v107 = v40;
          }
          v44 = v117;
          if ( v20 <= v117 )
          {
            v45 = 0LL;
            v127 = 0LL;
            v46 = (__int64)(v117 << 25) >> 16;
            v135 = v46;
            while ( 1 )
            {
              if ( v114 )
              {
                MiFlushTbList(&v141, v34, v44, v36);
                v47 = v113;
                MiUnlockPageTableInternal(v113);
                v114 = 0LL;
              }
              else
              {
                v47 = v113;
              }
              if ( (v47[184] & 7) == 2 )
                v48 = &dword_140467200;
              else
                v48 = (LONG *)(v47 + 192);
              if ( (*v48 & 0x40000000) != 0 || KeShouldYieldProcessor() )
              {
                MiUnlockWorkingSetShared(v47, v107);
                MiLockWorkingSetShared(v47);
              }
              v128 = 0LL;
              v129 = 0LL;
              memset((char *)v140 + 2, 0, 0xA6uLL);
              v49 = (__int64)((v20 << 25) - v45) >> 16;
              LOWORD(v140[0]) = 2273;
              for ( j = v49; j >= 0xFFFFF68000000000uLL; j = (__int64)((j << 25) - v45) >> 16 )
              {
                if ( j > 0xFFFFF6FFFFFFFFFFuLL )
                  break;
              }
              if ( j < 0xFFFF800000000000uLL || j >= qword_1404675B0 && j <= qword_140465EE0 )
                AnyMultiplexedVm = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[6];
              else
                AnyMultiplexedVm = (unsigned __int16 *)MiGetAnyMultiplexedVm(1LL);
              v52 = MiFastLockLeafPageTable(AnyMultiplexedVm, (__int64)((v20 << 25) - v45) >> 16, 0LL);
              if ( v52 )
              {
                LODWORD(v128) = v52 - 1;
                v53 = ((v49 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                v129 = v53;
              }
              else
              {
                LOWORD(v140[0]) |= 4u;
                v140[1] = 0LL;
                v140[20] = &v128;
                BYTE2(v140[0]) = BYTE2(v140[0]) & 0xE3 | 4;
                v140[19] = MiGetNextPageTableTail;
                v140[2] = AnyMultiplexedVm;
                BYTE6(v140[0]) = v107;
                v140[3] = (__int64)((v20 << 25) - v45) >> 16;
                v140[4] = v46;
                MiWalkPageTables((__int16 *)v140);
                v53 = v129;
              }
              if ( v53 )
                v114 = ((v53 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              else
                v53 = v117 + 8;
              v54 = (__int64)(v53 - v20) >> 3;
              if ( v119 != 1 )
                v54 /= v119;
              v104 |= 4u;
              v55 = KeGetCurrentIrql();
              v34 = 2LL;
              __writecr8(2uLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v55 < 2u )
                _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
              v56 = *(_DWORD *)(v27 + 48);
              do
              {
                while ( (v56 & 1) != 0 )
                {
                  if ( (v56 & 2) != 0 )
                  {
                    v122 = 0;
                    do
                    {
                      KeYieldProcessorEx(&v122);
                      v56 = *(_DWORD *)(v27 + 48);
                    }
                    while ( (v56 & 1) != 0 );
                  }
                  else
                  {
                    v123 = v56 | 2;
                    v56 = _InterlockedCompareExchange((volatile signed __int32 *)(v27 + 48), v56 | 2, v56);
                  }
                }
                v123 = v56 & 0xFFFFFFFC | 1;
                v57 = v56;
                v56 = _InterlockedCompareExchange((volatile signed __int32 *)(v27 + 48), v123, v56);
                v132 = v56;
              }
              while ( v57 != v56 );
              v58 = v116;
              v36 = i;
              if ( v54 )
                break;
LABEL_79:
              v44 = v117;
              v59 = v117;
              if ( (_DWORD)v128 )
              {
                v20 = v114;
                v34 = 0x7FFFFFFFF8LL;
                v59 = ((v117 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                if ( (unsigned int)v128 > 1 )
                {
                  v98 = (unsigned int)(v128 - 1);
                  do
                  {
                    v20 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                    v59 = ((v59 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                    --v98;
                  }
                  while ( v98 );
                }
                v114 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              }
              if ( v20 <= v59 )
              {
                while ( 1 )
                {
                  v60 = 0;
                  for ( k = v20; k >= 0xFFFFF68000000000uLL; k = (__int64)((k << 25) - v127) >> 16 )
                  {
                    if ( k > 0xFFFFF6FFFFFFFFFFuLL )
                      break;
                  }
                  v62 = v104 & 0xFFFFFFFD;
                  v104 &= ~2u;
                  v34 = *(_QWORD *)(v36 + 16);
                  if ( _bittest64((const signed __int64 *)v34, v33) != 1 )
                    break;
                  v104 = v62 | 2;
                  if ( (v111 & 1) != 0 )
                  {
                    _bittestandreset64((signed __int64 *)v34, v33);
                    do
                    {
                      v92 = MI_READ_PTE_LOCK_FREE(v20);
                      if ( (v92 & 0x42) != 0 && (v92 & 1) != 0 )
                        MiMakePteClean(v20, (__int64)&v141);
                      v20 += 8LL;
                      ++v60;
                    }
                    while ( v60 < v110 );
                    v36 = i;
                    v44 = v110;
                  }
                  else
                  {
                    v44 = v110;
                  }
LABEL_91:
                  if ( (v104 & 2) != 0 )
                  {
                    v89 = v120;
                    *v120 = k;
                    v120 = v89 + 1;
                    if ( ++v118 == v58 )
                      goto LABEL_104;
                  }
                  ++v33;
                  if ( !v60 )
                    v20 += 8 * v44;
                  if ( (v20 & 0xFFF) == 0 || v20 > v59 )
                  {
                    v44 = v117;
                    goto LABEL_97;
                  }
                }
                v44 = v110;
                while ( 2 )
                {
                  v63 = *(_QWORD *)v20;
                  if ( v20 >= 0xFFFFF6FB7DBED000uLL
                    && v20 <= 0xFFFFF6FB7DBED7F8uLL
                    && (MiFlags & 0xC00000) != 0
                    && (v34 = (__int64)KeGetCurrentThread()->ApcState.Process, *(_BYTE *)(v34 + 648) != 1)
                    && (v63 & 1) != 0 )
                  {
                    if ( (v63 & 0x20) == 0 || (v64 = (v63 & 0x42) == 0, (v63 & 0x42) == 0) )
                    {
                      v34 = (__int64)KeGetCurrentThread()->ApcState.Process;
                      v99 = *(_QWORD *)(v34 + 1544);
                      if ( v99 )
                      {
                        v100 = *(_QWORD *)(v99 + 8 * ((v20 >> 3) & 0x1FF));
                        v34 = (unsigned __int8)v100;
                        LOBYTE(v99) = v63 | 0x20;
                        if ( (v100 & 0x20) == 0 )
                          v99 = *(_QWORD *)v20;
                        LOBYTE(v63) = v99;
                        if ( (v100 & 0x42) != 0 )
                          LOBYTE(v63) = v99 | 0x42;
                      }
                      v44 = v110;
                      goto LABEL_87;
                    }
                  }
                  else
                  {
LABEL_87:
                    v64 = (v63 & 0x42) == 0;
                  }
                  LOBYTE(v34) = !v64;
                  if ( !v64 && (v63 & 1) != 0 )
                  {
                    v104 |= 2u;
                    if ( (v111 & 1) != 0 )
                    {
                      MiMakePteClean(v20, (__int64)&v141);
                      v44 = v110;
                    }
                  }
                  v20 += 8LL;
                  if ( ++v60 >= v44 )
                  {
                    v58 = v116;
                    v36 = i;
                    goto LABEL_91;
                  }
                  continue;
                }
              }
LABEL_97:
              v65 = *(_DWORD *)(v27 + 48);
              do
              {
                v124 = v65;
                v133 = v65 & 0xFFFFFFFC;
                v66 = v65;
                v65 = _InterlockedCompareExchange((volatile signed __int32 *)(v27 + 48), v65 & 0xFFFFFFFC, v65);
                v134 = v65;
              }
              while ( v66 != v65 );
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
                KeGetCurrentIrql();
              __writecr8(2uLL);
              for ( v104 &= ~4u; v20 >= 0xFFFFF68000000000uLL; v20 = (__int64)((v20 << 25) - v127) >> 16 )
              {
                if ( v20 > 0xFFFFF6FFFFFFFFFFuLL )
                  break;
              }
              v20 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v45 = v127;
              v46 = v135;
              if ( v20 > v44 )
                goto LABEL_104;
            }
            v91 = v119;
            while ( 1 )
            {
              if ( _bittest64(*(const signed __int64 **)(i + 16), v33) == 1 )
              {
                if ( (v111 & 1) != 0 )
                  _bittestandreset64(*(signed __int64 **)(i + 16), v33);
                v97 = v120;
                *v120 = (__int64)((v20 << 25) - v45) >> 16;
                v120 = v97 + 1;
                if ( ++v118 == v58 )
                  break;
              }
              ++v33;
              v20 += 8 * v91;
              if ( !--v54 )
                goto LABEL_79;
            }
LABEL_104:
            v37 = v113;
          }
          MiFlushTbList(&v141, v34, v44, v36);
          if ( (v104 & 4) != 0 )
          {
            LOBYTE(v67) = 2;
            MiUnlockVadCore(v27, v67);
          }
          if ( v114 )
            MiUnlockPageTableInternal(v37);
          v125 = 0;
          if ( (v37[184] & 7u) >= 6 )
          {
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v107 < 2u )
            {
              v101 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v101->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v101);
            }
            v73 = v107;
          }
          else
          {
            v68 = *((_DWORD *)v37 + 46);
            v125 = v68;
            if ( (v68 & 0x8000000) != 0 || (v68 & 0x4000000) != 0 || (v68 & 0x10000000) != 0 )
            {
              v69 = v107;
              MiPreUnlockWorkingSetShared(v37, v107);
              LOBYTE(v68) = v37[184];
            }
            else
            {
              v69 = v107;
            }
            if ( (v68 & 7) == 2 )
              v70 = &dword_140467200;
            else
              v70 = (volatile signed __int32 *)(v37 + 192);
            MiCheckProcessShadow(v37, 1LL);
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            {
              ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v70, retaddr);
            }
            else
            {
              _InterlockedAnd(v70, 0xBFFFFFFF);
              _InterlockedDecrement(v70);
            }
            v71 = KeGetCurrentPrcb();
            v72 = v71->SchedulerAssist;
            if ( v72 )
            {
              if ( v71->NestingLevel <= 1u )
              {
                v102 = v72[5] - 1;
                v72[5] = v102;
                if ( !v102 )
                  KiRemoveSystemWorkPriorityKick(v71);
              }
            }
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v69 < 2u )
            {
              v103 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v103->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v103);
            }
            v73 = v69;
          }
          __writecr8(v73);
          v26 = 0;
          goto LABEL_126;
        }
        v26 = -1073741582;
      }
LABEL_126:
      v105 = v26;
      goto LABEL_127;
    }
LABEL_125:
    v26 = -1073741585;
    goto LABEL_126;
  }
LABEL_213:
  if ( v26 == -1073741664 )
    goto LABEL_125;
LABEL_127:
  v74 = (char *)P;
  if ( P )
  {
    v75 = _InterlockedExchangeAdd((volatile signed __int32 *)P + 9, 0xFFFFFFFF) == 1 && (*((_DWORD *)v74 + 12) & 4) != 0;
    v76 = KeGetCurrentThread();
    LOBYTE(v76[1].Queue) &= ~0x80u;
    v77 = _InterlockedExchangeAdd64((volatile signed __int64 *)v74 + 5, 0xFFFFFFFFFFFFFFFFuLL);
    v139 = v77;
    if ( (v77 & 2) != 0 && (v77 & 4) == 0 )
      ExfTryToWakePushLock(v74 + 40);
    v115 = 0;
    v78 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)(v74 + 40)) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v78->ApcState.Process);
    else
      SessionId = -1;
    --v78->SpecialApcDisable;
    v80 = ++v78->AbAllocationRegionCount;
    v81 = 0LL;
    v82 = ((char)v78->AbEntrySummary | (char)v78->AbOrphanedEntrySummary) ^ 0x3F;
    v64 = !_BitScanReverse((unsigned int *)&v83, v82);
    v126 = v83;
    if ( !v64 )
    {
      while ( 1 )
      {
        v82 &= ~(1 << v83);
        v84 = v83;
        v85 = &v78->LockEntries[v84];
        if ( (v85->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v85->LockState.0 & 1) == 0
          && (*(_QWORD *)&v85->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)(v74 + 40) & 0x7FFFFFFFFFFFFFFCLL)
          && v85->LockState.SessionId == SessionId )
        {
          v85->AcquiredByte &= ~1u;
          if ( v85->LockState.0 )
            break;
        }
        v64 = !_BitScanReverse((unsigned int *)&v83, v82);
        v126 = v83;
        if ( v64 )
          goto LABEL_141;
      }
      v81 = &v78->LockEntries[v84];
    }
LABEL_141:
    if ( v81 )
    {
      v81->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v81->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v81->TreeNode);
      v115 = v81->BoostBitmap.AllFields & 0x1FFFF;
      v81->BoostBitmap.AllFields &= 0xFFFE0000;
      v81->ThreadLocalFlags &= ~1u;
      v81->LockState.0 = 0LL;
      v86 = 1 << (((char *)v81 - (char *)v78 - 800) / 96);
      if ( v80 == 1 )
        v78->AbEntrySummary |= v86;
      else
        _InterlockedOr8((volatile signed __int8 *)&v78->AbOrphanedEntrySummary, v86);
    }
    else if ( (*((_DWORD *)&v78->0 + 1) & 0x10000) == 0 )
    {
      KeBugCheckEx(0x162u, (ULONG_PTR)v78, (ULONG_PTR)(v74 + 40), SessionId, 0LL);
    }
    --v78->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v78, (__int64)(v74 + 40), &v115);
    v64 = v78->SpecialApcDisable++ == -1;
    if ( v64 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v78->ApcState.ApcListHead[0].Flink != &v78->152 )
      KiCheckForKernelApcDelivery();
    v64 = v76->SpecialApcDisable++ == -1;
    if ( v64 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v76->ApcState.ApcListHead[0].Flink != &v76->152 )
      KiCheckForKernelApcDelivery();
    if ( v75 )
      ExFreePoolWithTag(v74, 0);
    v26 = v105;
  }
  if ( (v104 & 1) != 0 )
    KiUnstackDetachProcess(v148, 0LL);
  if ( Handle != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(Object, 0x77576D4Du);
  if ( !v26 )
  {
    v87 = Src;
    if ( v136 )
    {
      v88 = v118;
      memmove(v136, Src, 8 * v118);
      *v137 = v88;
    }
    *v138 = (_DWORD)v119 << 12;
    goto LABEL_163;
  }
LABEL_295:
  v87 = Src;
LABEL_163:
  if ( v87 != v149 )
    ExFreePoolWithTag(v87, 0);
  return v26;
}
