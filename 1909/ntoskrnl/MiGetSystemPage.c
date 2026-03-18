/*
 * XREFs of MiGetSystemPage @ 0x140091EBC
 * Callers:
 *     MiGetPageForHeader @ 0x140091D8C (MiGetPageForHeader.c)
 *     MiMapNewSession @ 0x14074270C (MiMapNewSession.c)
 * Callees:
 *     MiGetPage @ 0x1400AFCC0 (MiGetPage.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiWaitForFreePage @ 0x1402E5760 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiGetSystemPage(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int32 v3; // edi
  __int64 Page; // rax
  __int64 v5; // rbx
  unsigned __int8 v6; // di
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = a1;
  v3 = *(_DWORD *)(a2 + 8) & _InterlockedExchangeAdd(*(volatile signed __int32 **)a2, 1u) | *(_DWORD *)(a2 + 12);
  while ( 1 )
  {
    Page = MiGetPage(a1, v3, 770LL);
    if ( Page != -1 )
      break;
    if ( KeGetCurrentIrql() == 2 )
      return 0LL;
    MiWaitForFreePage(v2);
    a1 = v2;
  }
  v5 = 48 * Page - 0x58000000000LL;
  v6 = MiLockPageInline(v5);
  *(_QWORD *)(v5 + 24) &= 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v6);
  return v5;
}
