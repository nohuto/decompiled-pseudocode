/*
 * XREFs of MiAllocateDummyPage @ 0x140A1AEB0
 * Callers:
 *     MiInitSystem @ 0x1409F0E88 (MiInitSystem.c)
 *     MiInitializeDummyPages @ 0x140A1AC5C (MiInitializeDummyPages.c)
 * Callees:
 *     MiChargeCommit @ 0x1400521D0 (MiChargeCommit.c)
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 *     MiSetPfnTbFlushStamp @ 0x1400A3F94 (MiSetPfnTbFlushStamp.c)
 *     MiChargeResident @ 0x1400A75A8 (MiChargeResident.c)
 *     MiGetPage @ 0x1400CFE40 (MiGetPage.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
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
  Page = MiGetPage((__int64)&MiSystemPartition, 0, 520LL);
  if ( Page == -1 )
    KeBugCheckEx(0x7Du, qword_14046A350, qword_14046A340, qword_14046A348, 0x102uLL);
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
