/*
 * XREFs of MiUpdateEnclavePfnProtection @ 0x1402D50F4
 * Callers:
 *     MiProtectEnclavePages @ 0x1402D4818 (MiProtectEnclavePages.c)
 * Callees:
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUpdateEnclavePfnProtection(__int64 a1, int a2)
{
  unsigned __int8 v4; // si
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v4 = MiLockPageInline(a1);
  *(_QWORD *)(a1 + 16) ^= (*(_DWORD *)(a1 + 16) ^ (32 * a2)) & 0x3E0;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v4;
  __writecr8(v4);
  return result;
}
