/*
 * XREFs of PfSnNameRemove @ 0x140126838
 * Callers:
 *     PfSnNameRemoveAll @ 0x1405F9650 (PfSnNameRemoveAll.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC4C0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC640 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x1400BDDD0 (RtlRbRemoveNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnNameRemove(__int64 a1, unsigned __int64 a2)
{
  volatile LONG *v2; // rbp
  unsigned int v5; // edi
  KIRQL v6; // si
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  int v9; // ecx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD *v13; // rcx
  unsigned __int64 v14; // rdx
  struct _KPRCB *v15; // rcx

  v2 = (volatile LONG *)(a1 + 576);
  v5 = 0;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 576));
  v7 = *(_QWORD *)(a1 + 528);
  v8 = *(_QWORD *)(a1 + 520);
  if ( (v7 & 1) != 0 )
  {
    if ( v8 )
      v8 ^= a1 + 520;
    else
      v8 = 0LL;
  }
  v9 = v7 & 1;
  while ( v8 )
  {
    v10 = *(_QWORD *)(v8 + 24);
    if ( v10 > a2 )
    {
      v11 = *(_QWORD *)v8;
    }
    else
    {
      if ( v10 >= a2 )
      {
        RtlRbRemoveNode(a1 + 520, v8);
        ExReleaseSpinLockExclusiveFromDpcLevel(v2);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v6);
        v13 = (_QWORD *)(a1 + 488);
        v14 = 0LL;
        if ( (a1 + 520 >= (unsigned __int64)(a1 + 488) ? 4 : 0) != 0 )
        {
          do
          {
            if ( *v13 == a2 )
              *v13 = 0LL;
            ++v13;
            ++v14;
          }
          while ( v14 < (a1 + 520 >= (unsigned __int64)(a1 + 488) ? 4 : 0) );
        }
        v5 = 1;
        ExFreePoolWithTag((PVOID)v8, 0);
        return v5;
      }
      v11 = *(_QWORD *)(v8 + 8);
    }
    if ( v9 && v11 )
      v8 ^= v11;
    else
      v8 = v11;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    v15 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v15->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v15);
  }
  __writecr8(v6);
  return v5;
}
