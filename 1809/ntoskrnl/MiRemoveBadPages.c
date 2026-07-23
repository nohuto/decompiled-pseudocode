/*
 * XREFs of MiRemoveBadPages @ 0x1402A6F5C
 * Callers:
 *     MmRemovePhysicalMemory @ 0x14084EB60 (MmRemovePhysicalMemory.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnBadPagesToBadList @ 0x1402A719C (MiReturnBadPagesToBadList.c)
 *     MiUnlinkPageFromBadList @ 0x1402BFFF0 (MiUnlinkPageFromBadList.c)
 */

__int64 __fastcall MiRemoveBadPages(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  unsigned int v5; // edi
  unsigned __int64 v6; // r14
  __int64 v7; // rbx
  _QWORD *i; // r15
  unsigned __int8 v9; // bp
  struct _KPRCB *v10; // rcx
  struct _KPRCB *v11; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = a1;
  if ( (MiFlags & 0x8000000) == 0 )
    return 3221225474LL;
  v5 = 0;
  v6 = 0LL;
  v7 = 48 * a1 - 0x58000000000LL;
  if ( a2 )
  {
    for ( i = (_QWORD *)(48 * a1 - 0x57FFFFFFFD8LL); ; i += 6 )
    {
      if ( v3 > 0xFFFFFFFFFLL || (*i & 0x20000000000000LL) == 0 )
        goto LABEL_29;
      v9 = MiLockPageInline(v7);
      if ( (*(_QWORD *)(v7 + 40) & 0x10000000000000LL) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(v9);
LABEL_29:
        v5 = -1073741585;
        goto LABEL_30;
      }
      if ( (*(_BYTE *)(v7 + 34) & 7) != 5 || (*(_QWORD *)(v7 + 8) | 0x8000000000000000uLL) != 0xFFFFFFFFFFFFFFFCuLL )
        break;
      MiUnlinkPageFromBadList(v7, 0LL);
      *(_QWORD *)(v7 + 24) |= 0x4000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
      {
        v10 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v10->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v10);
      }
      __writecr8(v9);
      ++v6;
      ++v3;
      v7 += 48LL;
      if ( v6 >= a2 )
        return v5;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
    {
      v11 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v11->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v11);
    }
    __writecr8(v9);
    v5 = -1073740682;
LABEL_30:
    if ( v6 )
      MiReturnBadPagesToBadList(v3 - v6, v6);
  }
  return v5;
}
