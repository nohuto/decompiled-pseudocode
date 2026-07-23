/*
 * XREFs of MiIoSpaceRunIsConstant @ 0x1400E5D10
 * Callers:
 *     MiFillSystemPtes @ 0x14005C300 (MiFillSystemPtes.c)
 * Callees:
 *     MiIoSpaceIsConstant @ 0x1400E6430 (MiIoSpaceIsConstant.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiIoSpaceRunIsConstant(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // zf
  __int64 v4; // rdx
  unsigned __int8 CurrentIrql; // di
  __int64 IsConstant; // rbx
  __int64 v7; // r10
  __int64 *v8; // r11
  __int64 v10; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = a2 == 0;
  v4 = 1LL;
  if ( v3 )
    v4 = a3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  IsConstant = MiIoSpaceIsConstant(a1, v4);
  if ( IsConstant && v8 )
  {
    while ( --v7 )
    {
      v10 = *v8;
      if ( ((unsigned __int64)*v8 > 0xFFFFFFFFFLL || (*(_QWORD *)(48 * v10 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0)
        && IsConstant != MiIoSpaceIsConstant(v10, 1LL) )
      {
        IsConstant = 0LL;
        break;
      }
      ++v8;
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  return IsConstant;
}
