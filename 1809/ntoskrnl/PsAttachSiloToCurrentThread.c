/*
 * XREFs of PsAttachSiloToCurrentThread @ 0x14000FBD0
 * Callers:
 *     ExpTimeZoneInitSiloState @ 0x1405839E4 (ExpTimeZoneInitSiloState.c)
 *     ObpDecrementHandleCount @ 0x1405A9584 (ObpDecrementHandleCount.c)
 *     ExpWnfLookupPermanentName @ 0x1405AA92C (ExpWnfLookupPermanentName.c)
 *     EtwpLogger @ 0x1405C1430 (EtwpLogger.c)
 *     ObpIncrementHandleCountEx @ 0x1405E35F0 (ObpIncrementHandleCountEx.c)
 *     ObCloseHandleTableEntry @ 0x1405E6360 (ObCloseHandleTableEntry.c)
 *     NtSetInformationThread @ 0x1405E9EA0 (NtSetInformationThread.c)
 *     PspExitThread @ 0x1405F75E0 (PspExitThread.c)
 *     EtwpEnableGuid @ 0x140655F38 (EtwpEnableGuid.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406B38CC (SepCleanupLUIDDeviceMapDirectory.c)
 *     ExpRefreshTimeZoneInformation @ 0x140734674 (ExpRefreshTimeZoneInformation.c)
 *     SepRmCommandServerThread @ 0x1407402A0 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x1407403F4 (SepRmLsaConnectRequest.c)
 *     EtwInitializeSiloState @ 0x140741434 (EtwInitializeSiloState.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x140808B0C (VrpHandleIoctlGetVirtualRootKey.c)
 *     DbgkInitializeServerSilo @ 0x14080E338 (DbgkInitializeServerSilo.c)
 *     PspDeleteExternalServerSiloState @ 0x1408870D4 (PspDeleteExternalServerSiloState.c)
 *     PspShutdownCsrProcess @ 0x1408875F4 (PspShutdownCsrProcess.c)
 *     PspSiloInitializeIsMultiSessionSku @ 0x1408878F0 (PspSiloInitializeIsMultiSessionSku.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140887A1C (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x140887B38 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x140887C58 (PspSiloLoadApiSets.c)
 *     SeInitServerSilo @ 0x14089B7C4 (SeInitServerSilo.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1408A2838 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1408C2DE0 (EtwpTrackGuidEntryRegistrations.c)
 *     ExpTimeZoneWork @ 0x1408CD1B0 (ExpTimeZoneWork.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1408DB2A0 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     ObCreateSiloRootDirectory @ 0x140905EF0 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall PsAttachSiloToCurrentThread(struct _LIST_ENTRY *a1)
{
  struct _KTHREAD *CurrentThread; // rdx
  struct _LIST_ENTRY *result; // rax

  CurrentThread = KeGetCurrentThread();
  result = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  CurrentThread[1].WaitBlock[3].WaitListEntry.Blink = a1;
  return result;
}
