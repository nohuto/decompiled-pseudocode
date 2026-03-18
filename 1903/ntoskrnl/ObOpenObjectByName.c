/*
 * XREFs of ObOpenObjectByName @ 0x1405FDF90
 * Callers:
 *     CmOpenKey @ 0x1405FDBD0 (CmOpenKey.c)
 *     CmpLinkHiveToMaster @ 0x1406622B0 (CmpLinkHiveToMaster.c)
 *     NtOpenDirectoryObject @ 0x1406C6F00 (NtOpenDirectoryObject.c)
 *     NtOpenEvent @ 0x1406CB240 (NtOpenEvent.c)
 *     NtOpenMutant @ 0x1406D1B40 (NtOpenMutant.c)
 *     NtOpenSemaphore @ 0x1406D2F40 (NtOpenSemaphore.c)
 *     ExCreateCallback @ 0x1406E9C40 (ExCreateCallback.c)
 *     NtOpenSession @ 0x1406EC730 (NtOpenSession.c)
 *     IopLoadDriver @ 0x140709120 (IopLoadDriver.c)
 *     IopReferenceDriverObjectByName @ 0x140733DD0 (IopReferenceDriverObjectByName.c)
 *     CmpCreatePredefined @ 0x14075E4A0 (CmpCreatePredefined.c)
 *     IopUnloadDriver @ 0x140764248 (IopUnloadDriver.c)
 *     NtOpenPartition @ 0x1407881F0 (NtOpenPartition.c)
 *     NtOpenRegistryTransaction @ 0x1408240D0 (NtOpenRegistryTransaction.c)
 *     CmpDoReOpenTransKey @ 0x140840E5C (CmpDoReOpenTransKey.c)
 *     NtOpenIoCompletion @ 0x140857190 (NtOpenIoCompletion.c)
 *     NtOpenJobObject @ 0x1408C7490 (NtOpenJobObject.c)
 *     NtOpenTimer @ 0x14090D080 (NtOpenTimer.c)
 *     NtOpenKeyedEvent @ 0x1409184C0 (NtOpenKeyedEvent.c)
 *     CmInitSystem1 @ 0x140A0CCC4 (CmInitSystem1.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x140043850 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x1405F48D0 (ObOpenObjectByNameEx.c)
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
