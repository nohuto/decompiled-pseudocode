/*
 * XREFs of MiUpdateLargePageSectionPfn @ 0x1402AB0AC
 * Callers:
 *     MiCreatePagingFileMap @ 0x14061FB18 (MiCreatePagingFileMap.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUpdateLargePageSectionPfn(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v6; // al
  __int64 v7; // r8
  unsigned __int8 v8; // bp
  unsigned __int64 v9; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v6 = MiLockPageInline(a1);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = v6;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = a3;
  v9 = *(_QWORD *)(a1 + 40) & 0xFE7FFFFFFFFFFFFFuLL;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 24) = v7 & 0xC000000000000000uLL | 1;
  *(_QWORD *)(a1 + 40) = v9 | 0x240000FFFFFFFFFLL;
  LOBYTE(v9) = *(_BYTE *)(a1 + 34) & 0xFE;
  *(_WORD *)(a1 + 32) = 2;
  *(_BYTE *)(a1 + 34) = v9 | 6;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v8;
  __writecr8(v8);
  return result;
}
