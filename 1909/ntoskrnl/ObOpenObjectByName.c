/*
 * XREFs of ObOpenObjectByName @ 0x1405FF9C0
 * Callers:
 *     CmOpenKey @ 0x1405FF600 (CmOpenKey.c)
 *     CmpLinkHiveToMaster @ 0x14068C808 (CmpLinkHiveToMaster.c)
 *     NtOpenDirectoryObject @ 0x1406C57E0 (NtOpenDirectoryObject.c)
 *     NtOpenEvent @ 0x1406C9FF0 (NtOpenEvent.c)
 *     NtOpenMutant @ 0x1406D0DB0 (NtOpenMutant.c)
 *     NtOpenSemaphore @ 0x1406D22A0 (NtOpenSemaphore.c)
 *     ExCreateCallback @ 0x1406EAE20 (ExCreateCallback.c)
 *     NtOpenSession @ 0x1406ED8F0 (NtOpenSession.c)
 *     IopLoadDriver @ 0x14070AF00 (IopLoadDriver.c)
 *     IopReferenceDriverObjectByName @ 0x140736030 (IopReferenceDriverObjectByName.c)
 *     CmpCreatePredefined @ 0x140762DA0 (CmpCreatePredefined.c)
 *     IopUnloadDriver @ 0x140768D48 (IopUnloadDriver.c)
 *     NtOpenPartition @ 0x14078A650 (NtOpenPartition.c)
 *     NtOpenRegistryTransaction @ 0x1408237D0 (NtOpenRegistryTransaction.c)
 *     CmpDoReOpenTransKey @ 0x1408404BC (CmpDoReOpenTransKey.c)
 *     NtOpenIoCompletion @ 0x140856890 (NtOpenIoCompletion.c)
 *     NtOpenJobObject @ 0x1408C6D70 (NtOpenJobObject.c)
 *     NtOpenTimer @ 0x14090CAE0 (NtOpenTimer.c)
 *     NtOpenKeyedEvent @ 0x140917F20 (NtOpenKeyedEvent.c)
 *     CmInitSystem1 @ 0x140A0D1F0 (CmInitSystem1.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x140043C50 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x1405F5850 (ObOpenObjectByNameEx.c)
 */

__int64 __fastcall ObOpenObjectByName(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        ACCESS_MASK a5,
        __int64 a6,
        _QWORD *a7)
{
  struct _LIST_ENTRY *CurrentSilo; // rax

  CurrentSilo = PsGetCurrentSilo();
  return ObOpenObjectByNameEx(a1, a2, a3, a4, a5, a6, (__int64)CurrentSilo, a7);
}
