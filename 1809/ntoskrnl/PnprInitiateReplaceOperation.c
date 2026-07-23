/*
 * XREFs of PnprInitiateReplaceOperation @ 0x14057A814
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1408349E0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PnprCompleteWake @ 0x14028A15C (PnprCompleteWake.c)
 *     PnprQuiesce @ 0x14028A75C (PnprQuiesce.c)
 *     PnprSwap @ 0x14028AAC0 (PnprSwap.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     MmDuplicateMemory @ 0x14056D274 (MmDuplicateMemory.c)
 *     PnprWakeProcessors @ 0x14057BD5C (PnprWakeProcessors.c)
 *     PnprReplaceStart @ 0x140836E18 (PnprReplaceStart.c)
 */

__int64 PnprInitiateReplaceOperation()
{
  char v0; // r14
  char v1; // r15
  struct _WORK_QUEUE_ITEM *v2; // rdi
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  __int64 v4; // rdx
  int v5; // ebx
  int v6; // ecx
  int v7; // eax
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  unsigned __int8 CurrentIrql; // bp
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v22; // eax
  _QWORD v24[6]; // [rsp+30h] [rbp-48h] BYREF

  v0 = 0;
  v1 = 0;
  v2 = 0LL;
  KeInitializeEvent((PRKEVENT)(PnprContext + 20760), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(PnprContext + 20784), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(PnprContext + 20808), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(PnprContext + 20832), NotificationEvent, 0);
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) == 0 )
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x51706E50u);
    v2 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v4 = PnprContext;
      v5 = -1073741670;
      v6 = *(_DWORD *)(PnprContext + 20984);
      if ( !v6 )
        v6 = 1667;
      v7 = *(_DWORD *)(PnprContext + 20988);
      *(_DWORD *)(PnprContext + 20984) = v6;
      if ( !v7 )
        v7 = 10;
      *(_DWORD *)(v4 + 20988) = v7;
      goto LABEL_44;
    }
    PoolWithTag->List.Flink = 0LL;
    PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))PnprQuiesceWorker;
    PoolWithTag->Parameter = PoolWithTag;
    ExQueueWorkItem(PoolWithTag, CriticalWorkQueue);
  }
  v5 = PnprReplaceStart();
  if ( v5 < 0 )
  {
    v8 = PnprContext;
    v9 = *(_DWORD *)(PnprContext + 20984);
    if ( !v9 )
      v9 = 1682;
    *(_DWORD *)(PnprContext + 20984) = v9;
    v10 = *(_DWORD *)(v8 + 20988);
    if ( !v10 )
      v10 = 1;
    *(_DWORD *)(v8 + 20988) = v10;
    goto LABEL_44;
  }
  v1 = 1;
  if ( !*(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) )
    goto LABEL_25;
  if ( (*(_DWORD *)(PnprContext + 64) & 8) == 0 )
  {
    memset(v24, 0, 0x28uLL);
    v24[3] = 0LL;
    v24[0] = PnprStartMirroring;
    LODWORD(v24[4]) = 8;
    v24[1] = PnprEndMirroring;
    v24[2] = PnprMirrorPhysicalMemory;
    v5 = MmDuplicateMemory((__int64)v24);
    if ( v5 == 1073742484 )
      v5 = 0;
    goto LABEL_44;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD))(PnprContext + 20952))(*(_QWORD *)(PnprContext + 20880));
  if ( v5 < 0 )
  {
    v11 = PnprContext;
    v12 = *(_DWORD *)(PnprContext + 20984);
    if ( !v12 )
      v12 = 1750;
    *(_DWORD *)(PnprContext + 20984) = v12;
    v13 = *(_DWORD *)(v11 + 20988);
    if ( !v13 )
      v13 = 8;
    *(_DWORD *)(v11 + 20988) = v13;
  }
  else
  {
LABEL_25:
    CurrentIrql = KeGetCurrentIrql();
    v5 = PnprQuiesce();
    if ( v5 < 0 )
    {
      v18 = PnprContext;
      v19 = *(_DWORD *)(PnprContext + 20984);
      if ( !v19 )
        v19 = 1783;
      *(_DWORD *)(PnprContext + 20984) = v19;
      v20 = *(_DWORD *)(v18 + 20988);
      if ( !v20 )
        v20 = 1;
      *(_DWORD *)(v18 + 20988) = v20;
    }
    else
    {
      v0 = 1;
      v5 = PnprSwap();
      if ( v5 < 0 )
      {
        ((void (__fastcall *)(__int64, _QWORD))off_1403FF3C8[0])(3LL, *(_QWORD *)(PnprContext + 20872));
        v15 = PnprContext;
        v16 = *(_DWORD *)(PnprContext + 20984);
        if ( !v16 )
          v16 = 1773;
        *(_DWORD *)(PnprContext + 20984) = v16;
        v17 = *(_DWORD *)(v15 + 20988);
        if ( !v17 )
          v17 = 1;
        *(_DWORD *)(v15 + 20988) = v17;
      }
      PnprWakeProcessors();
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(CurrentIrql);
  }
LABEL_44:
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    if ( v0 )
      PnprCompleteWake();
  }
  else if ( v2 )
  {
    KeSetEvent((PRKEVENT)(PnprContext + 20808), 0, 0);
    KeWaitForSingleObject((PVOID)(PnprContext + 20832), Executive, 0, 0, 0LL);
  }
  if ( *(_QWORD *)(PnprContext + 20872) )
    off_1403FF3D0[0]();
  if ( v1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) )
    {
      v22 = (*(__int64 (__fastcall **)(_QWORD))(PnprContext + 20920))(*(_QWORD *)(PnprContext + 20880));
      if ( v5 >= 0 )
        return v22;
    }
  }
  return (unsigned int)v5;
}
