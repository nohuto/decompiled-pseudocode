/*
 * XREFs of MiReturnEnclavePage @ 0x1402D5040
 * Callers:
 *     MiAddPagesToEnclave @ 0x1402D2F88 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x140892BA4 (MiCopyPagesIntoEnclave.c)
 *     MiReturnReservedEnclavePages @ 0x140894548 (MiReturnReservedEnclavePages.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140A3C84C (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002B2E0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiSetPfnBlink @ 0x1400BB420 (MiSetPfnBlink.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReturnEnclavePage(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rdi
  unsigned __int8 v3; // si
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v2 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v3 = MiLockPageInline(v2);
  MiSetPfnBlink(v2, 0LL, 1);
  MiInsertPageInFreeOrZeroedList(BugCheckParameter2, 256);
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v3;
  __writecr8(v3);
  return result;
}
