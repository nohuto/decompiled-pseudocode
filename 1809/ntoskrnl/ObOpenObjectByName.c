/*
 * XREFs of ObOpenObjectByName @ 0x1405B9290
 * Callers:
 *     CmpLinkHiveToMaster @ 0x1405B8C48 (CmpLinkHiveToMaster.c)
 *     NtOpenSemaphore @ 0x1405B8FF0 (NtOpenSemaphore.c)
 *     NtOpenMutant @ 0x1405B90A0 (NtOpenMutant.c)
 *     NtOpenEvent @ 0x1405B9150 (NtOpenEvent.c)
 *     NtOpenDirectoryObject @ 0x1405B9200 (NtOpenDirectoryObject.c)
 *     IopLoadDriver @ 0x14067FA34 (IopLoadDriver.c)
 *     ExCreateCallback @ 0x1406CA380 (ExCreateCallback.c)
 *     NtOpenSession @ 0x1406DB0D0 (NtOpenSession.c)
 *     IopUnloadDriver @ 0x1407089C8 (IopUnloadDriver.c)
 *     IopReferenceDriverObjectByName @ 0x140709474 (IopReferenceDriverObjectByName.c)
 *     CmpCreatePredefined @ 0x140732EC4 (CmpCreatePredefined.c)
 *     NtOpenPartition @ 0x140761070 (NtOpenPartition.c)
 *     NtOpenRegistryTransaction @ 0x1407E9450 (NtOpenRegistryTransaction.c)
 *     CmpDoReOpenTransKey @ 0x1408075FC (CmpDoReOpenTransKey.c)
 *     NtOpenIoCompletion @ 0x14081D0E0 (NtOpenIoCompletion.c)
 *     NtOpenJobObject @ 0x140889530 (NtOpenJobObject.c)
 *     NtOpenTimer @ 0x1408CF8D0 (NtOpenTimer.c)
 *     NtOpenKeyedEvent @ 0x1408DA730 (NtOpenKeyedEvent.c)
 *     CmInitSystem1 @ 0x1409C3050 (CmInitSystem1.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x14004D350 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x1405E2E30 (ObOpenObjectByNameEx.c)
 */

__int64 __fastcall ObOpenObjectByName(__int64 a1, __int64 a2, char a3, __int64 a4, int a5, __int64 a6, __int64 a7)
{
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v12; // r8

  CurrentSilo = PsGetCurrentSilo();
  LOBYTE(v12) = a3;
  return ObOpenObjectByNameEx(a1, a2, v12, a4, a5, a6, CurrentSilo, a7);
}
