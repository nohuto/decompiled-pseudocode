/*
 * XREFs of MmCanFileBeTruncated @ 0x1400DF360
 * Callers:
 *     CcPurgeCacheSection @ 0x1400DF560 (CcPurgeCacheSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiCanFileBeTruncatedInternal @ 0x1400DF3D4 (MiCanFileBeTruncatedInternal.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall MmCanFileBeTruncated(PSECTION_OBJECT_POINTERS SectionPointer, PLARGE_INTEGER NewFileSize)
{
  __int64 CanFileBeTruncatedInternal; // rax
  unsigned __int8 v3; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  LONGLONG QuadPart; // [rsp+48h] [rbp+10h]

  QuadPart = 0LL;
  if ( NewFileSize )
    QuadPart = NewFileSize->QuadPart;
  CanFileBeTruncatedInternal = MiCanFileBeTruncatedInternal(SectionPointer, (__int64)&v6);
  v3 = v6;
  if ( (_BYTE)v6 == 17 )
    return 0;
  if ( CanFileBeTruncatedInternal )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(CanFileBeTruncatedInternal + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      v3 = v6;
    }
    __writecr8(v3);
  }
  return 1;
}
