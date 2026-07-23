/*
 * XREFs of MiReleaseInPageRefs @ 0x140118018
 * Callers:
 *     MiInvalidateCollidedIos @ 0x140117DB8 (MiInvalidateCollidedIos.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiLockAndDecrementShareCount @ 0x140118118 (MiLockAndDecrementShareCount.c)
 *     MiDereferenceControlAreaPfnList @ 0x140119E9C (MiDereferenceControlAreaPfnList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReleaseInPageRefs(__int64 a1)
{
  unsigned __int8 v2; // al
  __int64 v3; // r8
  unsigned __int8 v4; // di
  __int64 v5; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v8; // rcx

  MiLockAndDecrementShareCount(48 * (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 0LL);
  v2 = MiLockPageInline(a1);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = v2;
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  if ( (_bittest64((const signed __int64 *)(a1 + 40), 0x39u) & ((v3 & 0x400) != 0)) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v4);
    v5 = *(_QWORD *)(a1 + 16);
    if ( qword_14043B180 )
    {
      if ( (v5 & 0x10) == 0 )
        v5 &= ~qword_14043B180;
    }
    return MiDereferenceControlAreaPfnList(*(_QWORD *)(v5 >> 16), v5 >> 16, v3, 3LL);
  }
  else
  {
    *(_QWORD *)(a1 + 16) = v3 & 0xFFFFFFFFFFFFFFF9uLL;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
    {
      v8 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v8->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v8);
    }
    result = v4;
    __writecr8(v4);
  }
  return result;
}
