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
 *     EtwpEnableGuid @ 0x140655F58 (EtwpEnableGuid.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406B38EC (SepCleanupLUIDDeviceMapDirectory.c)
 *     ExpRefreshTimeZoneInformation @ 0x140734694 (ExpRefreshTimeZoneInformation.c)
 *     SepRmCommandServerThread @ 0x1407402C0 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x140740414 (SepRmLsaConnectRequest.c)
 *     EtwInitializeSiloState @ 0x140741454 (EtwInitializeSiloState.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x140808B2C (VrpHandleIoctlGetVirtualRootKey.c)
 *     DbgkInitializeServerSilo @ 0x14080E358 (DbgkInitializeServerSilo.c)
 *     PspDeleteExternalServerSiloState @ 0x1408870F4 (PspDeleteExternalServerSiloState.c)
 *     PspShutdownCsrProcess @ 0x140887614 (PspShutdownCsrProcess.c)
 *     PspSiloInitializeIsMultiSessionSku @ 0x140887910 (PspSiloInitializeIsMultiSessionSku.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140887A3C (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x140887B58 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x140887C78 (PspSiloLoadApiSets.c)
 *     SeInitServerSilo @ 0x14089B7E4 (SeInitServerSilo.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1408A2858 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1408C2E00 (EtwpTrackGuidEntryRegistrations.c)
 *     ExpTimeZoneWork @ 0x1408CD1D0 (ExpTimeZoneWork.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1408DB2C0 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     ObCreateSiloRootDirectory @ 0x140905F10 (ObCreateSiloRootDirectory.c)
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
