/*
 * XREFs of PfSnGetFileInformation @ 0x1400D4E20
 * Callers:
 *     MiCompleteProtoPteFault @ 0x14004A4B0 (MiCompleteProtoPteFault.c)
 *     PfSnLogPageFaultCommon @ 0x1400D4C84 (PfSnLogPageFaultCommon.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x1400BD5F0 (RtlRbInsertNodeEx.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnGetFileInformation(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r15d
  _RTL_BALANCED_NODE *v3; // rsi
  _RTL_BALANCED_NODE **v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 *v9; // r12
  KIRQL v10; // bp
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  int v13; // ecx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _RTL_BALANCED_NODE *PoolWithTag; // rbx
  KIRQL v18; // al
  __int64 v19; // rcx
  KIRQL v20; // bp
  unsigned __int64 v21; // rax
  int v22; // edx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  BOOLEAN v25; // r14
  struct _KPRCB *v26; // rcx
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  BOOLEAN v29; // r8
  int v30; // ecx
  unsigned __int64 v31; // rax
  struct _KPRCB *v32; // rcx
  int v33; // [rsp+58h] [rbp+10h]

  v2 = 0;
  v3 = (_RTL_BALANCED_NODE *)a2[3];
  v33 = 0;
  if ( (*(_DWORD *)(a2[1] + 52LL) & 0x10) != 0 )
    return 3221225659LL;
  v7 = (_RTL_BALANCED_NODE **)(a1 + 488);
  v8 = a1 + 520;
  if ( (unsigned __int64)v7 >= v8 )
  {
LABEL_6:
    v9 = (unsigned __int64 *)(a1 + 520);
    v10 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 576));
    v11 = *(_QWORD *)(a1 + 528);
    v12 = *(_QWORD *)(a1 + 520);
    if ( (v11 & 1) != 0 )
    {
      if ( v12 )
        v12 ^= (unsigned __int64)v9;
      else
        v12 = 0LL;
    }
    v13 = v11 & 1;
    while ( v12 )
    {
      v14 = *(_QWORD *)(v12 + 24);
      if ( v14 > (unsigned __int64)v3 )
      {
        v15 = *(_QWORD *)v12;
      }
      else
      {
        if ( v14 >= (unsigned __int64)v3 )
          break;
        v15 = *(_QWORD *)(v12 + 8);
      }
      if ( v13 && v15 )
        v12 ^= v15;
      else
        v12 = v15;
    }
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 576));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v10);
    if ( v12 )
    {
      *(_QWORD *)(a1 + 8LL * (++*(_BYTE *)(a1 + 580) & 3) + 488) = v3;
    }
    else
    {
      PoolWithTag = (_RTL_BALANCED_NODE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x6E506343u);
      if ( !PoolWithTag )
      {
        if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
          _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
        return 3221225626LL;
      }
      PoolWithTag->Children[0] = 0LL;
      PoolWithTag->Children[1] = 0LL;
      PoolWithTag->ParentValue = 0LL;
      PoolWithTag[1].Children[0] = 0LL;
      PoolWithTag[1].Children[1] = 0LL;
      PoolWithTag[1].ParentValue = 0LL;
      ObfReferenceObjectWithTag(a2, 0x746C6644u);
      PoolWithTag[1].ParentValue = (unsigned __int64)a2;
      PoolWithTag[1].Children[0] = v3;
      v18 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 576));
      v19 = *(_QWORD *)(a1 + 528);
      v20 = v18;
      v21 = *v9;
      if ( (v19 & 1) != 0 )
      {
        if ( v21 )
          v21 ^= (unsigned __int64)v9;
        else
          v21 = 0LL;
      }
      v22 = v19 & 1;
      while ( v21 )
      {
        v23 = *(_QWORD *)(v21 + 24);
        if ( v23 > (unsigned __int64)v3 )
        {
          v24 = *(_QWORD *)v21;
        }
        else
        {
          if ( v23 >= (unsigned __int64)v3 )
            goto LABEL_49;
          v24 = *(_QWORD *)(v21 + 8);
        }
        if ( v22 && v24 )
          v21 ^= v24;
        else
          v21 = v24;
      }
      if ( *(_QWORD *)(a1 + 568) )
      {
        v25 = 0;
      }
      else
      {
        v25 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 360));
        if ( !v25 )
        {
          v2 = -1073741431;
LABEL_49:
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 576));
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v20 < 2u )
          {
            v26 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v26->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v26);
          }
          __writecr8(v20);
          ObfDereferenceObject((PVOID)PoolWithTag[1].ParentValue);
          ExFreePoolWithTag(PoolWithTag, 0);
          return v2;
        }
        v33 = 1;
        *(_QWORD *)(a1 + 560) = PfSnNameQueryWorker;
        *(_QWORD *)(a1 + 568) = a1;
        *(_QWORD *)(a1 + 544) = 0LL;
      }
      PoolWithTag[1].Children[1] = *(_RTL_BALANCED_NODE **)(a1 + 536);
      *(_QWORD *)(a1 + 536) = (char *)PoolWithTag + 32;
      v27 = *(_QWORD *)(a1 + 528);
      v28 = *v9;
      if ( (v27 & 1) != 0 )
      {
        if ( v28 )
          v28 ^= (unsigned __int64)v9;
        else
          v28 = 0LL;
      }
      v29 = 0;
      v30 = v27 & 1;
      if ( v28 )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)(v28 + 24) > (unsigned __int64)v3 )
          {
            v31 = *(_QWORD *)v28;
            if ( v30 )
            {
              if ( !v31 )
                goto LABEL_73;
              v31 ^= v28;
            }
            if ( !v31 )
            {
LABEL_73:
              v29 = 0;
              break;
            }
          }
          else
          {
            v31 = *(_QWORD *)(v28 + 8);
            if ( v30 )
            {
              if ( !v31 )
                goto LABEL_67;
              v31 ^= v28;
            }
            if ( !v31 )
            {
LABEL_67:
              v29 = 1;
              break;
            }
          }
          v28 = v31;
        }
      }
      RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 520), (PRTL_BALANCED_NODE)v28, v29, PoolWithTag);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 576));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v20 < 2u )
      {
        v32 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v32->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v32);
      }
      __writecr8(v20);
      if ( v33 )
      {
        v25 = 0;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 544), DelayedWorkQueue);
      }
      *(_QWORD *)(a1 + 8LL * (++*(_BYTE *)(a1 + 580) & 3) + 488) = v3;
      if ( v25 )
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 360));
    }
    return v2;
  }
  while ( *v7 != v3 )
  {
    if ( (unsigned __int64)++v7 >= v8 )
      goto LABEL_6;
  }
  return 0LL;
}
