/*
 * XREFs of KiProcessControlProtection @ 0x14028D9B0
 * Callers:
 *     KiControlProtectionFault @ 0x1401CDB40 (KiControlProtectionFault.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiProcessControlProtection(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  char v2; // di
  unsigned __int64 v3; // rdx
  struct _KPRCB *CurrentPrcb; // rcx

  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
  {
    KeGetCurrentIrql();
    __writecr8(1uLL);
  }
  v2 = 0;
  if ( (*(_BYTE *)(a1 + 368) & 1) != 0 )
  {
    v3 = __readmsr(0x6A7u) + 8;
    v2 = 1;
    __writemsr(0x6A7u, v3);
  }
  if ( !CurrentIrql )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(0LL);
  }
  return v2;
}
