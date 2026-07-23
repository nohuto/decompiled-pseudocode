/*
 * XREFs of KiAbProcessContextSwitch @ 0x1400423B0
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14000EC40 (ExpApplyPriorityBoost.c)
 *     KeSetPriorityThread @ 0x140010D60 (KeSetPriorityThread.c)
 *     KiQuantumEnd @ 0x140011130 (KiQuantumEnd.c)
 *     KeSetBasePriorityThread @ 0x140012340 (KeSetBasePriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x140012880 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityBoost @ 0x140013F90 (KeSetPriorityBoost.c)
 *     KiFastReadyThread @ 0x140015B60 (KiFastReadyThread.c)
 *     KeDelayExecutionThread @ 0x14003AEC0 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KiSwapThread @ 0x140040B40 (KiSwapThread.c)
 *     KeRemoveQueueEx @ 0x140044C00 (KeRemoveQueueEx.c)
 *     PsImpersonateContainerOfThread @ 0x140047240 (PsImpersonateContainerOfThread.c)
 *     KeClearSystemPriority @ 0x140047950 (KeClearSystemPriority.c)
 *     KeRemovePriQueue @ 0x14005A030 (KeRemovePriQueue.c)
 *     KiExitDispatcher @ 0x140067E50 (KiExitDispatcher.c)
 *     KiReadyOutSwappedThreads @ 0x140074960 (KiReadyOutSwappedThreads.c)
 *     KeWaitForMultipleObjects @ 0x14007C930 (KeWaitForMultipleObjects.c)
 *     KiSchedulerApc @ 0x140081AF0 (KiSchedulerApc.c)
 *     KiBeginThreadWait @ 0x14009A470 (KiBeginThreadWait.c)
 *     KiAbApplyWakeupBoost @ 0x1400C678C (KiAbApplyWakeupBoost.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400E9064 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetLegacyAffinityThread @ 0x1400FB6D0 (KeSetLegacyAffinityThread.c)
 *     KeGenericProcessorCallback @ 0x1400FBCAC (KeGenericProcessorCallback.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400FC050 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400FC2F0 (KeSetSystemGroupAffinityThread.c)
 *     KeYieldExecution @ 0x140108D60 (KeYieldExecution.c)
 *     KeSetSchedulingGroupRankBias @ 0x14011531C (KeSetSchedulingGroupRankBias.c)
 *     KeBoostPriorityThread @ 0x140118790 (KeBoostPriorityThread.c)
 *     KiExitThreadWait @ 0x1401194B0 (KiExitThreadWait.c)
 *     KeCpuSetReportParkedProcessors @ 0x14011EED0 (KeCpuSetReportParkedProcessors.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140122E1C (KiAbThreadUnboostCpuPriority.c)
 *     KeSetAffinityThread @ 0x14015A824 (KeSetAffinityThread.c)
 *     KiAbForceProcessLockEntry @ 0x14016BC24 (KiAbForceProcessLockEntry.c)
 *     KeSetCpuSetsProcess @ 0x140196A9C (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x140196CA4 (KeUpdateThreadCpuSets.c)
 *     KeSetAffinityProcess @ 0x14019AD38 (KeSetAffinityProcess.c)
 *     KxDispatchInterrupt @ 0x1401CB4E0 (KxDispatchInterrupt.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x1402ACD74 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x1402ACFE0 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x1402AFDA0 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObReferenceObjectSafeWithTag @ 0x14003F810 (ObReferenceObjectSafeWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140060C30 (KiAbEntryGetLockedHeadEntry.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400656F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiDeferredReadyThread @ 0x140068290 (KiDeferredReadyThread.c)
 *     KiAbIoBoostOwners @ 0x1400C5B84 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x1400C5C80 (KiAbCpuBoostOwners.c)
 *     KiAbProcessThreadLocks @ 0x1400C5ED0 (KiAbProcessThreadLocks.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x1400C6DF0 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbSetMinimumThreadPriority @ 0x1400C6EA8 (KiAbSetMinimumThreadPriority.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x1400C70A8 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x1400C717C (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x1400C71C4 (KiAbTryIncrementIoWaiterCounts.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x1400C72B4 (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiAbDetermineMaxWaiterPriority @ 0x1400C7640 (KiAbDetermineMaxWaiterPriority.c)
 *     IoBoostThreadIoPriority @ 0x1400EB18C (IoBoostThreadIoPriority.c)
 *     KiRequestSoftwareInterrupt @ 0x1400EF410 (KiRequestSoftwareInterrupt.c)
 *     ExGetExtensionTable @ 0x1400FD850 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

void __fastcall KiAbProcessContextSwitch(__int64 a1, int a2)
{
  unsigned int v2; // eax
  __int64 v4; // r9
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v6; // rdx
  __int64 p_AbSelfIoBoostsList; // r12
  __int64 v8; // r8
  unsigned int v9; // esi
  bool v10; // zf
  __int64 v11; // rdi
  __int64 v12; // rax
  int v13; // r15d
  __int64 LockedHeadEntry; // rax
  __int64 v15; // r8
  __int64 v16; // r14
  _QWORD *i; // rcx
  _QWORD *v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rax
  char v21; // r12
  int v22; // r10d
  unsigned __int8 CpuPriorityKey; // r13
  char v24; // al
  char v25; // r9
  _QWORD *v26; // rdx
  char v27; // al
  volatile signed __int16 *v28; // rdi
  _DWORD *v29; // rdi
  __int64 ExtensionTable; // rax
  signed __int32 v32[8]; // [rsp+0h] [rbp-69h] BYREF
  _QWORD *v33; // [rsp+40h] [rbp-29h] BYREF
  __int64 v34; // [rsp+48h] [rbp-21h]
  _QWORD *v35; // [rsp+50h] [rbp-19h] BYREF
  _SINGLE_LIST_ENTRY *v36; // [rsp+58h] [rbp-11h]
  struct _KPRCB *v37; // [rsp+60h] [rbp-9h]
  __int64 v38; // [rsp+68h] [rbp-1h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp+Fh] BYREF
  int v40; // [rsp+D0h] [rbp+67h] BYREF
  int v41; // [rsp+E0h] [rbp+77h] BYREF
  int v42; // [rsp+E8h] [rbp+7Fh]

  v2 = *(char *)(a1 + 792);
  v4 = v2;
  if ( (v2 | *(char *)(a1 + 1422)) == 0x3F )
    return;
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = *(char *)(a1 + 792) | (unsigned int)*(char *)(a1 + 1422);
  v35 = 0LL;
  v33 = 0LL;
  p_AbSelfIoBoostsList = (__int64)&CurrentPrcb->AbSelfIoBoostsList;
  v36 = &CurrentPrcb->AbSelfIoBoostsList;
  v37 = CurrentPrcb;
  if ( (_DWORD)v6 == 63 )
    goto LABEL_19;
  v8 = a1 + 800;
  v9 = (*(char *)(a1 + 792) | *(char *)(a1 + 1422)) ^ 0x3F;
  v34 = a1 + 800;
  v10 = !_BitScanForward((unsigned int *)&a1, v9);
  if ( v10 )
    goto LABEL_18;
  do
  {
    v9 &= v9 - 1;
    v11 = v8 + 96 * a1;
    v12 = *(_QWORD *)(v11 + 32);
    v38 = v12;
    if ( v12 && (v12 & 2) == 0 && (v12 & 1) == 0 )
    {
      if ( *(__int64 *)(v11 + 32) >= 0 )
        goto LABEL_8;
      if ( (*(_BYTE *)(v11 + 27) & 1) == 0 )
      {
        v19 = v8 + 96 * a1;
        if ( (*(_BYTE *)(v11 + 25) & 1) == 0 )
        {
          if ( (unsigned __int8)KiAbOwnerComputeCpuPriorityKey(v19, v6, v8, v4) == *(_BYTE *)(v11 + 48) )
            goto LABEL_14;
LABEL_8:
          v13 = 0;
          memset(&LockHandle, 0, sizeof(LockHandle));
          v40 = 0;
          v41 = 0;
          LockedHeadEntry = KiAbEntryGetLockedHeadEntry((PRTL_BALANCED_NODE)v11);
          v16 = LockedHeadEntry;
          if ( !LockedHeadEntry )
          {
LABEL_14:
            v8 = v34;
            goto LABEL_15;
          }
          if ( (*(_BYTE *)(v11 + 25) & 1) == 0 )
          {
            if ( v11 != LockedHeadEntry )
              KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v11);
            KiAbDetermineMaxWaiterPriority(v16, &v40);
            if ( !v40 )
            {
LABEL_13:
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              goto LABEL_14;
            }
            if ( (unsigned int)KiAbSetMinimumThreadPriority(
                                 v11,
                                 (unsigned int)&v40,
                                 (unsigned int)&v35,
                                 (unsigned int)&v33,
                                 p_AbSelfIoBoostsList,
                                 (__int64)&v41)
              && v11 != v16 )
            {
              KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v11);
            }
            v13 = v41;
LABEL_34:
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            if ( v13 )
            {
              v29 = (_DWORD *)(v11 - 16LL * *(unsigned __int8 *)(v11 + 24));
              if ( ObReferenceObjectSafeWithTag((__int64)v29) )
              {
                if ( (v13 & 1) != 0 )
                  IoBoostThreadIoPriority(v29, 2LL, 0x80000000LL);
                if ( (v13 & 2) != 0 )
                {
                  if ( v29[456] )
                  {
                    ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
                    if ( ExtensionTable )
                    {
                      (*(void (__fastcall **)(_DWORD *))(ExtensionTable + 16))(v29);
                      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
                    }
                  }
                }
                ObDereferenceObjectDeferDeleteWithTag(v29, 0x746C6644u);
              }
            }
            goto LABEL_14;
          }
          if ( v11 != LockedHeadEntry )
            KiAbEntryUpdateWaiterTreePosition((PRTL_BALANCED_NODE)v11);
          v20 = *(_QWORD *)(v16 + 56);
          if ( v20 )
            v4 = *(unsigned __int8 *)(v20 + 48);
          else
            LOBYTE(v4) = 15;
          v21 = v4;
          if ( (*(_BYTE *)(v16 + 25) & 1) == 0 )
          {
            v24 = KiAbOwnerComputeCpuPriorityKey(v16, v6, v15, v4);
            v21 = v25;
            if ( v24 < v25 )
              v21 = v24;
          }
          KiAbTryIncrementIoWaiterCounts(v11, v16);
          CpuPriorityKey = KiAbEntryGetCpuPriorityKey(v11);
          if ( v21 < (char)CpuPriorityKey )
          {
            if ( v22 )
              goto LABEL_32;
            p_AbSelfIoBoostsList = (__int64)v36;
          }
          else
          {
            if ( !v22 )
            {
              p_AbSelfIoBoostsList = (__int64)v36;
              goto LABEL_13;
            }
LABEL_32:
            p_AbSelfIoBoostsList = (__int64)v36;
            KiAbIoBoostOwners(v16, v22, (unsigned int)&v35, (unsigned int)&v33, (__int64)v36);
          }
          KiAbCpuBoostOwners(v16, CpuPriorityKey, (unsigned int)&v35, (unsigned int)&v33, p_AbSelfIoBoostsList);
          goto LABEL_34;
        }
        v27 = *(_BYTE *)(v11 - 16LL * *(unsigned __int8 *)(v11 + 24) + 195);
        if ( v27 > 15 )
          v27 = 15;
        if ( v27 != *(_BYTE *)(v11 + 48) )
          goto LABEL_8;
      }
    }
LABEL_15:
    v10 = !_BitScanForward((unsigned int *)&a1, v9);
    v42 = a1;
  }
  while ( !v10 );
  for ( i = v33; v33; i = v33 )
  {
    v28 = (volatile signed __int16 *)(i - 172);
    v33 = (_QWORD *)*i;
    *i = 1LL;
    _InterlockedOr(v32, 0);
    if ( *((_BYTE *)i - 583) )
      KiAbProcessThreadLocks((_DWORD)i - 1376, 0, 1, 0, (__int64)&v35, (__int64)&v33, p_AbSelfIoBoostsList);
    _InterlockedDecrement16(v28 + 710);
  }
  CurrentPrcb = v37;
LABEL_18:
  v18 = v35;
  while ( v18 )
  {
    v26 = v18 - 27;
    v18 = (_QWORD *)*v18;
    KiDeferredReadyThread(CurrentPrcb, v26);
  }
LABEL_19:
  if ( a2 && CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
  {
    LOBYTE(v6) = 2;
    KiRequestSoftwareInterrupt(CurrentPrcb, v6);
  }
}
