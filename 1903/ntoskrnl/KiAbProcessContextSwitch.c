/*
 * XREFs of KiAbProcessContextSwitch @ 0x140042670
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14000EA10 (ExpApplyPriorityBoost.c)
 *     KeSetPriorityThread @ 0x140010B30 (KeSetPriorityThread.c)
 *     KiQuantumEnd @ 0x140010F00 (KiQuantumEnd.c)
 *     KeSetBasePriorityThread @ 0x140012110 (KeSetBasePriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x140012650 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityBoost @ 0x140013D60 (KeSetPriorityBoost.c)
 *     KiFastReadyThread @ 0x14001577C (KiFastReadyThread.c)
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KiSwapThread @ 0x140040E00 (KiSwapThread.c)
 *     KeRemoveQueueEx @ 0x140044B60 (KeRemoveQueueEx.c)
 *     PsImpersonateContainerOfThread @ 0x1400471A0 (PsImpersonateContainerOfThread.c)
 *     KeClearSystemPriority @ 0x1400478B0 (KeClearSystemPriority.c)
 *     KeRemovePriQueue @ 0x140059F90 (KeRemovePriQueue.c)
 *     KiExitDispatcher @ 0x140067BE0 (KiExitDispatcher.c)
 *     KiReadyOutSwappedThreads @ 0x1400746F0 (KiReadyOutSwappedThreads.c)
 *     KeWaitForMultipleObjects @ 0x14007C530 (KeWaitForMultipleObjects.c)
 *     KiSchedulerApc @ 0x1400816F0 (KiSchedulerApc.c)
 *     KiAbApplyWakeupBoost @ 0x14009E94C (KiAbApplyWakeupBoost.c)
 *     KiBeginThreadWait @ 0x1400BA600 (KiBeginThreadWait.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400E40B8 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetSchedulingGroupRankBias @ 0x1400E86A4 (KeSetSchedulingGroupRankBias.c)
 *     KeSetLegacyAffinityThread @ 0x1400F7C30 (KeSetLegacyAffinityThread.c)
 *     KeGenericProcessorCallback @ 0x1400F820C (KeGenericProcessorCallback.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400F85B0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400F8850 (KeSetSystemGroupAffinityThread.c)
 *     KeCpuSetReportParkedProcessors @ 0x1400F9898 (KeCpuSetReportParkedProcessors.c)
 *     KeBoostPriorityThread @ 0x1401064BC (KeBoostPriorityThread.c)
 *     KeYieldExecution @ 0x140109BD0 (KeYieldExecution.c)
 *     KiExitThreadWait @ 0x14011B080 (KiExitThreadWait.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140121FCC (KiAbThreadUnboostCpuPriority.c)
 *     KeSetAffinityThread @ 0x14015A184 (KeSetAffinityThread.c)
 *     KiAbForceProcessLockEntry @ 0x14016B534 (KiAbForceProcessLockEntry.c)
 *     KeSetCpuSetsProcess @ 0x1401962BC (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x1401964C4 (KeUpdateThreadCpuSets.c)
 *     KeSetAffinityProcess @ 0x14019A6D8 (KeSetAffinityProcess.c)
 *     KxDispatchInterrupt @ 0x1401CA960 (KxDispatchInterrupt.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x1402AD014 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x1402AD280 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x1402B0040 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObReferenceObjectSafeWithTag @ 0x14003FAD0 (ObReferenceObjectSafeWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140060B90 (KiAbEntryGetLockedHeadEntry.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140065650 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiDeferredReadyThread @ 0x140068020 (KiDeferredReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x14009B990 (KiRequestSoftwareInterrupt.c)
 *     KiAbDetermineMaxWaiterPriority @ 0x14009CEF0 (KiAbDetermineMaxWaiterPriority.c)
 *     KiAbIoBoostOwners @ 0x14009DD40 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x14009DE3C (KiAbCpuBoostOwners.c)
 *     KiAbProcessThreadLocks @ 0x14009E090 (KiAbProcessThreadLocks.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x14009EFB4 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbSetMinimumThreadPriority @ 0x14009F06C (KiAbSetMinimumThreadPriority.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x14009F26C (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x14009F340 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x14009F388 (KiAbTryIncrementIoWaiterCounts.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x14009F478 (KiAbOwnerComputeCpuPriorityKey.c)
 *     IoBoostThreadIoPriority @ 0x1400E61EC (IoBoostThreadIoPriority.c)
 *     ExGetExtensionTable @ 0x1400FB6C0 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
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
