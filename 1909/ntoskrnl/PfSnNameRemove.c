/*
 * XREFs of PfSnNameRemove @ 0x1400D406C
 * Callers:
 *     PfSnNameRemoveAll @ 0x14066AE00 (PfSnNameRemoveAll.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     RtlRbRemoveNode @ 0x140063910 (RtlRbRemoveNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnNameRemove(__int64 a1, _RTL_BALANCED_NODE *a2)
{
  volatile LONG *v2; // rbp
  unsigned int v5; // edi
  KIRQL v6; // al
  _RTL_RB_TREE *v7; // rcx
  KIRQL v8; // si
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rax
  _RTL_BALANCED_NODE **v12; // rcx
  unsigned __int64 v13; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v15; // rcx

  v2 = (volatile LONG *)(a1 + 576);
  v5 = 0;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 576));
  v7 = (_RTL_RB_TREE *)(a1 + 520);
  v8 = v6;
  v9 = *(_QWORD *)(a1 + 520);
  if ( (*(_BYTE *)(a1 + 528) & 1) != 0 )
  {
    if ( v9 )
      v9 ^= (unsigned __int64)v7;
    else
      v9 = 0LL;
  }
  while ( v9 )
  {
    if ( *(_QWORD *)(v9 + 24) <= (unsigned __int64)a2 )
    {
      if ( *(_QWORD *)(v9 + 24) >= (unsigned __int64)a2 )
      {
        RtlRbRemoveNode(v7, (PRTL_BALANCED_NODE)v9);
        ExReleaseSpinLockExclusiveFromDpcLevel(v2);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v8);
        v12 = (_RTL_BALANCED_NODE **)(a1 + 488);
        v13 = 0LL;
        if ( (a1 + 520 >= (unsigned __int64)(a1 + 488) ? 4 : 0) != 0 )
        {
          do
          {
            if ( *v12 == a2 )
              *v12 = 0LL;
            ++v12;
            ++v13;
          }
          while ( v13 < (a1 + 520 >= (unsigned __int64)(a1 + 488) ? 4 : 0) );
        }
        v5 = 1;
        ExFreePoolWithTag((PVOID)v9, 0);
        return v5;
      }
      v10 = *(_QWORD *)(v9 + 8);
    }
    else
    {
      v10 = *(_QWORD *)v9;
    }
    if ( (*(_BYTE *)(a1 + 528) & 1) != 0 && v10 )
      v9 ^= v10;
    else
      v9 = v10;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
  {
    v15 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v15->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v15);
  }
  __writecr8(v8);
  return v5;
}
