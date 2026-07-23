/*
 * XREFs of MmGetPageBadStatus @ 0x1402A74EC
 * Callers:
 *     WheapPfaMemoryCheck @ 0x1408DDD78 (WheapPfaMemoryCheck.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmGetPageBadStatus(_QWORD *a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rbx
  unsigned int v3; // edi
  unsigned __int8 v4; // si
  struct _KPRCB *CurrentPrcb; // rcx

  v1 = *a1 >> 12;
  if ( v1 > 0xFFFFFFFFFLL || (*(_QWORD *)(48 * v1 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
    return 3221225711LL;
  v2 = 48 * v1 - 0x58000000000LL;
  v3 = 0;
  v4 = MiLockPageInline(v2);
  if ( (*(_BYTE *)(v2 + 35) & 0x40) != 0 )
  {
    if ( (*(_QWORD *)(v2 + 8) | 0x8000000000000000uLL) != 0xFFFFFFFFFFFFFFFCuLL
      || (v3 = -1073740023, (*(_BYTE *)(v2 + 34) & 7) != 5) )
    {
      v3 = 259;
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v4);
  return v3;
}
