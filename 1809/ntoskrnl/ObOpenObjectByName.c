/*
 * XREFs of ObOpenObjectByName @ 0x1405BA290
 * Callers:
 *     CmpLinkHiveToMaster @ 0x1405B9C48 (CmpLinkHiveToMaster.c)
 *     NtOpenSemaphore @ 0x1405B9FF0 (NtOpenSemaphore.c)
 *     NtOpenMutant @ 0x1405BA0A0 (NtOpenMutant.c)
 *     NtOpenEvent @ 0x1405BA150 (NtOpenEvent.c)
 *     NtOpenDirectoryObject @ 0x1405BA200 (NtOpenDirectoryObject.c)
 *     IopLoadDriver @ 0x140680BF4 (IopLoadDriver.c)
 *     ExCreateCallback @ 0x1406CB620 (ExCreateCallback.c)
 *     NtOpenSession @ 0x1406DC370 (NtOpenSession.c)
 *     IopUnloadDriver @ 0x140709C68 (IopUnloadDriver.c)
 *     IopReferenceDriverObjectByName @ 0x14070A714 (IopReferenceDriverObjectByName.c)
 *     CmpCreatePredefined @ 0x1407340B4 (CmpCreatePredefined.c)
 *     NtOpenPartition @ 0x140762260 (NtOpenPartition.c)
 *     NtOpenRegistryTransaction @ 0x1407EA650 (NtOpenRegistryTransaction.c)
 *     CmpDoReOpenTransKey @ 0x1408087FC (CmpDoReOpenTransKey.c)
 *     NtOpenIoCompletion @ 0x14081E2E0 (NtOpenIoCompletion.c)
 *     NtOpenJobObject @ 0x14088A790 (NtOpenJobObject.c)
 *     NtOpenTimer @ 0x1408D0B90 (NtOpenTimer.c)
 *     NtOpenKeyedEvent @ 0x1408DB9F0 (NtOpenKeyedEvent.c)
 *     CmInitSystem1 @ 0x1409C4050 (CmInitSystem1.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x14004D350 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x1405E3E30 (ObOpenObjectByNameEx.c)
 */

__int64 __fastcall ObOpenObjectByName(__int64 a1, __int64 a2, char a3, __int64 a4, int a5, __int64 a6, __int64 a7)
{
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v12; // r8

  CurrentSilo = PsGetCurrentSilo();
  LOBYTE(v12) = a3;
  return ObOpenObjectByNameEx(a1, a2, v12, a4, a5, a6, CurrentSilo, a7);
}
