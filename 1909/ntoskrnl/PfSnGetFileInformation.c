/*
 * XREFs of PfSnGetFileInformation @ 0x1400D20B0
 * Callers:
 *     MiCompleteProtoPteFault @ 0x1400B0350 (MiCompleteProtoPteFault.c)
 *     PfSnLogPageFaultCommon @ 0x1400D1F14 (PfSnLogPageFaultCommon.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockShared @ 0x140061A20 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x140064630 (RtlRbInsertNodeEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnGetFileInformation(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // esi
  _RTL_BALANCED_NODE *v3; // rbx
  BOOLEAN v4; // r15
  int v7; // r12d
  _RTL_BALANCED_NODE **v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 *v10; // r13
  __int64 v11; // rcx
  unsigned __int64 v12; // r14
  int v14; // ecx
  KIRQL v15; // al
  unsigned __int64 v16; // rax
  char *PoolWithTag; // rax
  char *v18; // r14
  KIRQL v19; // al
  __int64 v20; // rdx
  KIRQL v21; // bp
  unsigned __int64 v22; // rcx
  int v23; // edx
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  BOOLEAN v27; // r8
  int v28; // ecx
  unsigned __int64 v29; // rax
  unsigned __int8 CurrentIrql; // al
  bool v31; // cf
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v33; // rcx
  struct _KPRCB *v34; // rcx
  KIRQL v35; // [rsp+68h] [rbp+10h]

  v2 = 0;
  v3 = (_RTL_BALANCED_NODE *)a2[3];
  v4 = 0;
  v7 = 0;
  if ( (*(_DWORD *)(a2[1] + 52LL) & 0x10) != 0 )
    return 3221225659LL;
  v8 = (_RTL_BALANCED_NODE **)(a1 + 488);
  v9 = a1 + 520;
  if ( (unsigned __int64)v8 >= v9 )
  {
LABEL_5:
    v10 = (unsigned __int64 *)(a1 + 520);
    v35 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 576));
    v11 = *(_QWORD *)(a1 + 528);
    v12 = *(_QWORD *)(a1 + 520);
    if ( (v11 & 1) != 0 )
    {
      if ( v12 )
        v12 ^= (unsigned __int64)v10;
      else
        v12 = 0LL;
    }
    v14 = v11 & 1;
    while ( v12 )
    {
      if ( *(_QWORD *)(v12 + 24) > (unsigned __int64)v3 )
      {
        v16 = *(_QWORD *)v12;
        if ( v14 && v16 )
        {
          v12 ^= v16;
          continue;
        }
      }
      else
      {
        if ( *(_QWORD *)(v12 + 24) >= (unsigned __int64)v3 )
          break;
        v16 = *(_QWORD *)(v12 + 8);
        if ( v14 && v16 )
        {
          v12 ^= v16;
          continue;
        }
      }
      v12 = v16;
    }
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 576));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v31 = CurrentIrql < 2u;
      v15 = v35;
      if ( v31 || v35 >= 2u )
        goto LABEL_15;
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    v15 = v35;
LABEL_15:
    __writecr8(v15);
    if ( v12 )
    {
      *(_QWORD *)(a1 + 8LL * (++*(_BYTE *)(a1 + 580) & 3) + 488) = v3;
      return 0LL;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x6E506343u);
    v18 = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
        _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
      return 3221225626LL;
    }
    memset(PoolWithTag, 0, 0x30uLL);
    ObfReferenceObjectWithTag(a2, 0x746C6644u);
    *((_QWORD *)v18 + 5) = a2;
    *((_QWORD *)v18 + 3) = v3;
    v19 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 576));
    v20 = *(_QWORD *)(a1 + 528);
    v21 = v19;
    v22 = *v10;
    if ( (v20 & 1) != 0 )
    {
      if ( v22 )
        v22 ^= (unsigned __int64)v10;
      else
        v22 = 0LL;
    }
    v23 = v20 & 1;
    if ( !v22 )
    {
LABEL_37:
      if ( !*(_QWORD *)(a1 + 568) )
      {
        v4 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 360));
        if ( !v4 )
        {
          v2 = -1073741431;
LABEL_32:
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 576));
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v21 < 2u )
          {
            v33 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v33->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v33);
          }
          __writecr8(v21);
          ObfDereferenceObject(*((PVOID *)v18 + 5));
          ExFreePoolWithTag(v18, 0);
          return v2;
        }
        *(_QWORD *)(a1 + 568) = a1;
        *(_QWORD *)(a1 + 560) = PfSnNameQueryWorker;
        v7 = 1;
        *(_QWORD *)(a1 + 544) = 0LL;
      }
      *((_QWORD *)v18 + 4) = *(_QWORD *)(a1 + 536);
      *(_QWORD *)(a1 + 536) = v18 + 32;
      v25 = *(_QWORD *)(a1 + 528);
      v26 = *v10;
      if ( (v25 & 1) != 0 )
      {
        if ( v26 )
          v26 ^= (unsigned __int64)v10;
        else
          v26 = 0LL;
      }
      v27 = 0;
      v28 = v25 & 1;
      if ( v26 )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)(v26 + 24) > (unsigned __int64)v3 )
          {
            v29 = *(_QWORD *)v26;
            if ( v28 )
            {
              if ( !v29 )
                goto LABEL_59;
              v29 ^= v26;
            }
            if ( !v29 )
            {
LABEL_59:
              v27 = 0;
              break;
            }
          }
          else
          {
            v29 = *(_QWORD *)(v26 + 8);
            if ( v28 )
            {
              if ( !v29 )
                goto LABEL_60;
              v29 ^= v26;
            }
            if ( !v29 )
            {
LABEL_60:
              v27 = 1;
              break;
            }
          }
          v26 = v29;
        }
      }
      RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 520), (PRTL_BALANCED_NODE)v26, v27, (PRTL_BALANCED_NODE)v18);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 576));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v21 < 2u )
      {
        v34 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v34->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v34);
      }
      __writecr8(v21);
      if ( v7 )
      {
        v4 = 0;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 544), DelayedWorkQueue);
      }
      *(_QWORD *)(a1 + 8LL * (++*(_BYTE *)(a1 + 580) & 3) + 488) = v3;
      if ( v4 )
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 360));
      return 0LL;
    }
    while ( 1 )
    {
      if ( *(_QWORD *)(v22 + 24) > (unsigned __int64)v3 )
      {
        v24 = *(_QWORD *)v22;
        if ( v23 && v24 )
        {
          v22 ^= v24;
          goto LABEL_36;
        }
      }
      else
      {
        if ( *(_QWORD *)(v22 + 24) >= (unsigned __int64)v3 )
          goto LABEL_32;
        v24 = *(_QWORD *)(v22 + 8);
        if ( v23 && v24 )
        {
          v22 ^= v24;
          goto LABEL_36;
        }
      }
      v22 = v24;
LABEL_36:
      if ( !v22 )
        goto LABEL_37;
    }
  }
  while ( *v8 != v3 )
  {
    if ( (unsigned __int64)++v8 >= v9 )
      goto LABEL_5;
  }
  return 0LL;
}
