/*
 * XREFs of ViFaultsAddTagNoDuplicates @ 0x14097A234
 * Callers:
 *     ViFaultsAddAllTags @ 0x14097A044 (ViFaultsAddAllTags.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ViFaultsIsTagPresentInList @ 0x14097A71C (ViFaultsIsTagPresentInList.c)
 */

__int64 __fastcall ViFaultsAddTagNoDuplicates(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int64 i; // rax
  char v5; // cl
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rsi
  unsigned int v8; // ebx
  KIRQL v9; // bp
  _QWORD *v10; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v13; // [rsp+38h] [rbp+10h]

  v2 = 0;
  if ( a2 <= 4 )
  {
    for ( i = 0LL; i < 4; ++i )
    {
      v5 = 32;
      if ( i < a2 )
        v5 = *(_BYTE *)(a1 + 2 * i);
      *((_BYTE *)&v13 + i) = v5;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x54466656u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      v8 = v13;
      *((_DWORD *)PoolWithTag + 4) = v13;
      v9 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
      if ( (unsigned int)ViFaultsIsTagPresentInList(v8) )
      {
        ExFreePoolWithTag(v7, 0);
      }
      else
      {
        v10 = (_QWORD *)qword_1404358D8;
        ViHaveFaultTags = 1;
        if ( *(PVOID **)qword_1404358D8 != &ViFaultTagsList )
          __fastfail(3u);
        *v7 = &ViFaultTagsList;
        v7[1] = v10;
        *v10 = v7;
        qword_1404358D8 = (__int64)v7;
      }
      KxReleaseSpinLock(&ViFaultInjectionLock);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v9);
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
