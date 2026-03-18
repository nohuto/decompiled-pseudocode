/*
 * XREFs of MiDecrementProtoShareCounts @ 0x1402CB708
 * Callers:
 *     MiAllocateFileExtents @ 0x14088BE80 (MiAllocateFileExtents.c)
 * Callees:
 *     MiDecrementShareCount @ 0x1400DBB10 (MiDecrementShareCount.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiDecrementProtoShareCounts(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  unsigned __int8 v4; // si
  struct _KPRCB *CurrentPrcb; // rcx

  if ( a2 )
  {
    v2 = a2;
    v3 = 48 * a1 - 0x58000000000LL;
    do
    {
      v4 = MiLockPageInline(v3);
      MiDecrementShareCount(v3);
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v4);
      v3 += 48LL;
      --v2;
    }
    while ( v2 );
  }
}
