/*
 * XREFs of MiReleaseInPageRefs @ 0x14010DA44
 * Callers:
 *     MiInvalidateCollidedIos @ 0x14010D7FC (MiInvalidateCollidedIos.c)
 * Callees:
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiDereferenceControlAreaPfnList @ 0x14010A450 (MiDereferenceControlAreaPfnList.c)
 *     MiLockAndDecrementShareCount @ 0x14010DC9C (MiLockAndDecrementShareCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiReleaseInPageRefs(__int64 a1)
{
  unsigned __int8 v2; // di
  __int64 v3; // r8
  __int64 v4; // rcx
  char result; // al
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v7; // rcx

  MiLockAndDecrementShareCount(48 * (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 0LL);
  v2 = MiLockPageInline(a1);
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  if ( (_bittest64((const signed __int64 *)(a1 + 40), 0x39u) & ((*(_QWORD *)(a1 + 16) & 0x400LL) != 0)) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v2);
    v4 = *(_QWORD *)(a1 + 16);
    if ( qword_140465B00 )
    {
      if ( (v4 & 0x10) == 0 )
        v4 &= ~qword_140465B00;
    }
    return MiDereferenceControlAreaPfnList(*(_QWORD *)(v4 >> 16), v4 >> 16, v3, 3);
  }
  else
  {
    *(_QWORD *)(a1 + 16) &= 0xFFFFFFFFFFFFFFF9uLL;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
    {
      v7 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v7->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v7);
    }
    result = v2;
    __writecr8(v2);
  }
  return result;
}
