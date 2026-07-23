/*
 * XREFs of KiAbProcessContextSwitch @ 0x140057DC0
 * Callers:
 *     KiAbApplyWakeupBoost @ 0x1400240DC (KiAbApplyWakeupBoost.c)
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KiSwapThread @ 0x140056210 (KiSwapThread.c)
 *     KeRemoveQueueEx @ 0x140058D60 (KeRemoveQueueEx.c)
 *     PsImpersonateContainerOfThread @ 0x14005AE90 (PsImpersonateContainerOfThread.c)
 *     KeClearSystemPriority @ 0x14005B570 (KeClearSystemPriority.c)
 *     KiBeginThreadWait @ 0x14008B1B0 (KiBeginThreadWait.c)
 *     KiFastReadyThread @ 0x1400A2B98 (KiFastReadyThread.c)
 *     KeRemovePriQueue @ 0x1400B60E0 (KeRemovePriQueue.c)
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 *     KeSetActualBasePriorityThread @ 0x1400CCFC0 (KeSetActualBasePriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1400CD3F0 (KeSetBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x1400CD8F0 (KeSetPriorityThread.c)
 *     KeSetPriorityBoost @ 0x1400CEF60 (KeSetPriorityBoost.c)
 *     KiQuantumEnd @ 0x1400D00A0 (KiQuantumEnd.c)
 *     KeYieldExecution @ 0x1400D6650 (KeYieldExecution.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400D6A04 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D6F10 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D8290 (KeRevertToUserGroupAffinityThread.c)
 *     KeGenericProcessorCallback @ 0x1400D8710 (KeGenericProcessorCallback.c)
 *     KeBoostPriorityThread @ 0x1400E3400 (KeBoostPriorityThread.c)
 *     KiSchedulerApc @ 0x1400F1850 (KiSchedulerApc.c)
 *     KiExitThreadWait @ 0x1400F9F10 (KiExitThreadWait.c)
 *     KiReadyOutSwappedThreads @ 0x14010B700 (KiReadyOutSwappedThreads.c)
 *     KeCpuSetReportParkedProcessors @ 0x140114B14 (KeCpuSetReportParkedProcessors.c)
 *     KeSetLegacyAffinityThread @ 0x140115260 (KeSetLegacyAffinityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140116498 (KeSetSchedulingGroupRankBias.c)
 *     KiAbThreadUnboostCpuPriority @ 0x14011F5C8 (KiAbThreadUnboostCpuPriority.c)
 *     KiAbForceProcessLockEntry @ 0x140166280 (KiAbForceProcessLockEntry.c)
 *     KeSetAffinityThread @ 0x14016B3B0 (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x14018C794 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x14018C98C (KeUpdateThreadCpuSets.c)
 *     KeSetAffinityProcess @ 0x1401905F4 (KeSetAffinityProcess.c)
 *     KxDispatchInterrupt @ 0x1401C4240 (KxDispatchInterrupt.c)
 *     KeRemovePriorityBoost @ 0x14028E134 (KeRemovePriorityBoost.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140296A2C (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140296C70 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x14029924C (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140005AC0 (KiRequestSoftwareInterrupt.c)
 *     KiAbProcessThreadLocks @ 0x140023C40 (KiAbProcessThreadLocks.c)
 *     KiAbSetMinimumThreadPriority @ 0x1400245F0 (KiAbSetMinimumThreadPriority.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400247E0 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x140024DA0 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x140024E74 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x140024EC0 (KiAbTryIncrementIoWaiterCounts.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140024F9C (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x140024FE4 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbCpuBoostOwners @ 0x140025190 (KiAbCpuBoostOwners.c)
 *     KiAbIoBoostOwners @ 0x140025280 (KiAbIoBoostOwners.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400514C0 (ObReferenceObjectSafeWithTag.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400BF8F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiDeferredReadyThread @ 0x1400C32D0 (KiDeferredReadyThread.c)
 *     IoBoostThreadIoPriority @ 0x1401086DC (IoBoostThreadIoPriority.c)
 *     ExGetExtensionTable @ 0x14010DC84 (ExGetExtensionTable.c)
 *     KiAbDetermineMaxWaiterPriority @ 0x140119ABC (KiAbDetermineMaxWaiterPriority.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

void __fastcall KiAbProcessContextSwitch(__int64 a1, int a2)
{
  int v2; // ebx
  struct _KPRCB *CurrentPrcb; // rsi
  int v4; // edx
  __int64 v5; // r8
  unsigned int v6; // r14d
  bool v7; // zf
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rax
  int v11; // r15d
  _RTL_RB_TREE *LockedHeadEntry; // rax
  __int64 v13; // rsi
  _QWORD *v14; // rcx
  _QWORD *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rax
  char v18; // r9
  char v19; // r12
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // r10d
  char CpuPriorityKey; // r13
  char v24; // al
  char v25; // r9
  _QWORD *v26; // rdx
  char v27; // al
  __int64 v28; // r14
  volatile signed __int16 *v29; // rdi
  _DWORD *v30; // rdi
  __int64 ExtensionTable; // rax
  signed __int32 v32[8]; // [rsp+0h] [rbp-69h] BYREF
  __int64 v33; // [rsp+40h] [rbp-29h]
  _QWORD *v34; // [rsp+48h] [rbp-21h] BYREF
  _QWORD *v35; // [rsp+50h] [rbp-19h] BYREF
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // [rsp+58h] [rbp-11h]
  struct _KPRCB *v37; // [rsp+60h] [rbp-9h]
  _QWORD v38[4]; // [rsp+68h] [rbp-1h] BYREF
  int v39; // [rsp+D0h] [rbp+67h] BYREF
  int v40; // [rsp+D8h] [rbp+6Fh]
  int v41; // [rsp+E0h] [rbp+77h] BYREF
  int v42; // [rsp+E8h] [rbp+7Fh]

  v40 = a2;
  v2 = a2;
  if ( (*(char *)(a1 + 792) | *(char *)(a1 + 1422)) == 0x3F )
    return;
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = *(char *)(a1 + 792) | *(char *)(a1 + 1422);
  v35 = 0LL;
  p_AbSelfIoBoostsList = &CurrentPrcb->AbSelfIoBoostsList;
  v34 = 0LL;
  v37 = CurrentPrcb;
  if ( v4 == 63 )
    goto LABEL_20;
  v5 = a1 + 800;
  v6 = (*(char *)(a1 + 792) | *(char *)(a1 + 1422)) ^ 0x3F;
  v33 = a1 + 800;
  v7 = !_BitScanForward((unsigned int *)&a1, v6);
  if ( v7 )
    goto LABEL_19;
  v8 = (__int64)p_AbSelfIoBoostsList;
  do
  {
    v6 &= v6 - 1;
    v9 = v5 + 96 * a1;
    v10 = *(_QWORD *)(v9 + 32);
    if ( v10 && (v10 & 2) == 0 && (v10 & 1) == 0 )
    {
      if ( *(__int64 *)(v9 + 32) >= 0 )
        goto LABEL_9;
      if ( (*(_BYTE *)(v9 + 27) & 1) == 0 )
      {
        v16 = v5 + 96 * a1;
        if ( (*(_BYTE *)(v9 + 25) & 1) == 0 )
        {
          if ( KiAbOwnerComputeCpuPriorityKey(v16) == *(_BYTE *)(v9 + 48) )
            goto LABEL_15;
LABEL_9:
          v11 = 0;
          v41 = 0;
          LockedHeadEntry = (_RTL_RB_TREE *)KiAbEntryGetLockedHeadEntry((PRTL_BALANCED_NODE)v9, 1LL, v38);
          v13 = (__int64)LockedHeadEntry;
          if ( !LockedHeadEntry )
          {
LABEL_15:
            v5 = v33;
            goto LABEL_16;
          }
          if ( (*(_BYTE *)(v9 + 25) & 1) == 0 )
          {
            if ( (_RTL_RB_TREE *)v9 != LockedHeadEntry )
              KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v9, LockedHeadEntry);
            KiAbDetermineMaxWaiterPriority(v13, &v39);
            if ( !v39 )
            {
LABEL_14:
              KxReleaseQueuedSpinLock(v38);
              goto LABEL_15;
            }
            if ( (unsigned int)KiAbSetMinimumThreadPriority(v9, (__int64)&v39, (__int64)&v35, (__int64)&v34, v8, &v41)
              && v9 != v13 )
            {
              KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v9, (_RTL_RB_TREE *)v13);
            }
            v11 = v41;
LABEL_35:
            KxReleaseQueuedSpinLock(v38);
            if ( v11 )
            {
              v30 = (_DWORD *)(v9 - 16LL * *(unsigned __int8 *)(v9 + 24));
              if ( ObReferenceObjectSafeWithTag((__int64)v30) )
              {
                if ( (v11 & 1) != 0 )
                  IoBoostThreadIoPriority(v30, 2LL, 0x80000000LL);
                if ( (v11 & 2) != 0 )
                {
                  if ( v30[452] )
                  {
                    ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
                    if ( ExtensionTable )
                    {
                      (*(void (__fastcall **)(_DWORD *))(ExtensionTable + 16))(v30);
                      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
                    }
                  }
                }
                ObDereferenceObjectDeferDeleteWithTag(v30, 0x746C6644u);
              }
            }
            goto LABEL_15;
          }
          if ( (_RTL_RB_TREE *)v9 != LockedHeadEntry )
            KiAbEntryUpdateWaiterTreePosition((PRTL_BALANCED_NODE)v9, LockedHeadEntry);
          v17 = *(_QWORD *)(v13 + 56);
          if ( v17 )
          {
            v18 = *(_BYTE *)(v17 + 48);
            LOBYTE(v39) = v18;
          }
          else
          {
            LOBYTE(v39) = 15;
            v18 = 15;
          }
          v19 = v18;
          if ( (*(_BYTE *)(v13 + 25) & 1) == 0 )
          {
            v24 = KiAbOwnerComputeCpuPriorityKey(v13);
            v19 = v25;
            if ( v24 < v25 )
            {
              LOBYTE(v39) = v24;
              v19 = v24;
            }
          }
          KiAbTryIncrementIoWaiterCounts((unsigned __int8 *)v9, v13);
          CpuPriorityKey = KiAbEntryGetCpuPriorityKey((unsigned __int8 *)v9, v20, v21);
          if ( v19 < CpuPriorityKey )
          {
            if ( v22 )
              goto LABEL_33;
          }
          else
          {
            if ( !v22 )
              goto LABEL_14;
LABEL_33:
            KiAbIoBoostOwners(v13, v22, (__int64)&v35, (__int64)&v34, v8);
          }
          KiAbCpuBoostOwners(v13, CpuPriorityKey, (__int64)&v35, (__int64)&v34, v8);
          goto LABEL_35;
        }
        v27 = *(_BYTE *)(v9 - 16LL * *(unsigned __int8 *)(v9 + 24) + 195);
        if ( v27 > 15 )
          v27 = 15;
        if ( v27 != *(_BYTE *)(v9 + 48) )
          goto LABEL_9;
      }
    }
LABEL_16:
    v7 = !_BitScanForward((unsigned int *)&a1, v6);
    v42 = a1;
  }
  while ( !v7 );
  v14 = v34;
  v2 = v40;
  if ( v34 )
  {
    v28 = (__int64)p_AbSelfIoBoostsList;
    do
    {
      v29 = (volatile signed __int16 *)(v14 - 172);
      v34 = (_QWORD *)*v14;
      *v14 = 1LL;
      _InterlockedOr(v32, 0);
      if ( *((_BYTE *)v14 - 583) )
        KiAbProcessThreadLocks((__int64)(v14 - 172), 0, 1, 0, (__int64)&v35, (__int64)&v34, v28);
      _InterlockedDecrement16(v29 + 710);
      v14 = v34;
    }
    while ( v34 );
  }
  CurrentPrcb = v37;
LABEL_19:
  v15 = v35;
  while ( v15 )
  {
    v26 = v15 - 27;
    v15 = (_QWORD *)*v15;
    KiDeferredReadyThread(CurrentPrcb, v26);
  }
LABEL_20:
  if ( v2 && CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
    KiRequestSoftwareInterrupt(CurrentPrcb, 2);
}
