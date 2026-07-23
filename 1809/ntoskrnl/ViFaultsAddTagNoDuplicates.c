/*
 * XREFs of ViFaultsAddTagNoDuplicates @ 0x140939910
 * Callers:
 *     ViFaultsAddAllTags @ 0x140939720 (ViFaultsAddAllTags.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ViFaultsIsTagPresentInList @ 0x140939DFC (ViFaultsIsTagPresentInList.c)
 */

__int64 __fastcall ViFaultsAddTagNoDuplicates(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int64 i; // rcx
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rsi
  unsigned int v7; // ebx
  KIRQL v8; // bp
  _QWORD *v9; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v12; // [rsp+38h] [rbp+10h]

  v2 = 0;
  if ( a2 <= 4 )
  {
    for ( i = 0LL; i < 4; ++i )
    {
      if ( i < a2 )
        *((_BYTE *)&v12 + i) = *(_BYTE *)(a1 + 2 * i);
      else
        *((_BYTE *)&v12 + i) = 32;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x54466656u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      v7 = v12;
      *((_DWORD *)PoolWithTag + 4) = v12;
      v8 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
      if ( (unsigned int)ViFaultsIsTagPresentInList(v7) )
      {
        ExFreePoolWithTag(v6, 0);
      }
      else
      {
        v9 = (_QWORD *)qword_14040E278;
        ViHaveFaultTags = 1;
        if ( *(PVOID **)qword_14040E278 != &ViFaultTagsList )
          __fastfail(3u);
        *v6 = &ViFaultTagsList;
        v6[1] = v9;
        *v9 = v6;
        qword_14040E278 = (__int64)v6;
      }
      KxReleaseSpinLock(&ViFaultInjectionLock);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v8);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
