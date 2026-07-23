/*
 * XREFs of MiAllocateDummyPage @ 0x1409BA930
 * Callers:
 *     MiInitializeDummyPages @ 0x1409BA6DC (MiInitializeDummyPages.c)
 *     MiInitSystem @ 0x1409BD5A8 (MiInitSystem.c)
 * Callees:
 *     MiSetPfnTbFlushStamp @ 0x1400296A4 (MiSetPfnTbFlushStamp.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiChargeResident @ 0x14002DF50 (MiChargeResident.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 MiAllocateDummyPage()
{
  __int64 Page; // rax
  __int64 v1; // rbx
  unsigned __int8 v2; // di
  __int64 v3; // rax
  char v4; // cl
  struct _KPRCB *CurrentPrcb; // rcx

  MiChargeResident(&MiSystemPartition, 1uLL, 0LL);
  MiChargeCommit((__int64)&MiSystemPartition, 1uLL, 1u);
  Page = MiGetPage((__int64)&MiSystemPartition, 0, 0x208u);
  if ( Page == -1 )
    KeBugCheckEx(0x7Du, qword_14043F5D0, qword_14043F5C0, qword_14043F5C8, 0x102uLL);
  v1 = 48 * Page - 0x58000000000LL;
  MiSetPfnTbFlushStamp(v1, 0, 0);
  *(_QWORD *)(v1 + 8) = 0xFFFFF68000000000uLL;
  v2 = MiLockPageInline(v1);
  v3 = MiSwizzleInvalidPte(128LL);
  v4 = *(_BYTE *)(v1 + 34);
  *(_QWORD *)(v1 + 16) = v3;
  v4 |= 7u;
  *(_WORD *)(v1 + 32) = 2;
  *(_BYTE *)(v1 + 34) = v4;
  *(_BYTE *)(v1 + 34) = v4 | 0x20;
  *(_BYTE *)(v1 + 34) |= 8u;
  *(_QWORD *)(v1 + 40) = *(_QWORD *)(v1 + 40) & 0xFDFFFFF000000000uLL | 0xFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v2);
  return v1;
}
