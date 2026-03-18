/*
 * XREFs of PsAttachSiloToCurrentThread @ 0x14008D080
 * Callers:
 *     NtSetInformationThread @ 0x1405F1400 (NtSetInformationThread.c)
 *     ObpIncrementHandleCountEx @ 0x1405F5FC0 (ObpIncrementHandleCountEx.c)
 *     ObCloseHandleTableEntry @ 0x1405F65C0 (ObCloseHandleTableEntry.c)
 *     PspExitThread @ 0x14060EBC8 (PspExitThread.c)
 *     ObpDecrementHandleCount @ 0x14063F2E4 (ObpDecrementHandleCount.c)
 *     ExpWnfLookupPermanentName @ 0x14063F6C4 (ExpWnfLookupPermanentName.c)
 *     EtwpEnableGuid @ 0x140691558 (EtwpEnableGuid.c)
 *     EtwpLogger @ 0x1406ACDA0 (EtwpLogger.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406D76C4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1406E8918 (EtwpUpdateFileInfoDriverRegistration.c)
 *     SepRmCommandServerThread @ 0x1407683E0 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x14076854C (SepRmLsaConnectRequest.c)
 *     EtwInitializeSiloState @ 0x14076FE4C (EtwInitializeSiloState.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x140841AC0 (VrpHandleIoctlGetVirtualRootKey.c)
 *     DbgkInitializeServerSilo @ 0x140847298 (DbgkInitializeServerSilo.c)
 *     PspDeleteExternalServerSiloState @ 0x1408C4D74 (PspDeleteExternalServerSiloState.c)
 *     PspShutdownCsrProcess @ 0x1408C5264 (PspShutdownCsrProcess.c)
 *     PspSiloInitializeIsMultiSessionSku @ 0x1408C558C (PspSiloInitializeIsMultiSessionSku.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1408C56C4 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x1408C57F4 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x1408C5914 (PspSiloLoadApiSets.c)
 *     SeInitServerSilo @ 0x1408D9844 (SeInitServerSilo.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1408E0A5C (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1408FF944 (EtwpTrackGuidEntryRegistrations.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x140918AB0 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     ObCreateSiloRootDirectory @ 0x140943F90 (ObCreateSiloRootDirectory.c)
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
