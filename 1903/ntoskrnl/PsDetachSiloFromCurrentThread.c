/*
 * XREFs of PsDetachSiloFromCurrentThread @ 0x14008BD60
 * Callers:
 *     ObpIncrementHandleCountEx @ 0x1405F5040 (ObpIncrementHandleCountEx.c)
 *     ObCloseHandleTableEntry @ 0x1405F5640 (ObCloseHandleTableEntry.c)
 *     ObpDecrementHandleCount @ 0x14063C254 (ObpDecrementHandleCount.c)
 *     ExpWnfLookupPermanentName @ 0x14063C614 (ExpWnfLookupPermanentName.c)
 *     EtwpEnableGuid @ 0x140664144 (EtwpEnableGuid.c)
 *     EtwpLogger @ 0x1406B76B0 (EtwpLogger.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406D78E4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1406E7818 (EtwpUpdateFileInfoDriverRegistration.c)
 *     SepRmCommandServerThread @ 0x1407639D0 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x140763B3C (SepRmLsaConnectRequest.c)
 *     EtwInitializeSiloState @ 0x14076CFF8 (EtwInitializeSiloState.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x140842460 (VrpHandleIoctlGetVirtualRootKey.c)
 *     DbgkInitializeServerSilo @ 0x140847B90 (DbgkInitializeServerSilo.c)
 *     PspDeleteExternalServerSiloState @ 0x1408C5494 (PspDeleteExternalServerSiloState.c)
 *     PspShutdownCsrProcess @ 0x1408C5984 (PspShutdownCsrProcess.c)
 *     PspSiloInitializeIsMultiSessionSku @ 0x1408C5CAC (PspSiloInitializeIsMultiSessionSku.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1408C5DE4 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x1408C5F14 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x1408C6034 (PspSiloLoadApiSets.c)
 *     SeInitServerSilo @ 0x1408D9F44 (SeInitServerSilo.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1408E115C (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1408FFFE4 (EtwpTrackGuidEntryRegistrations.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x140919050 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     ObCreateSiloRootDirectory @ 0x140944520 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall PsDetachSiloFromCurrentThread(struct _LIST_ENTRY *a1)
{
  struct _KTHREAD *result; // rax

  result = KeGetCurrentThread();
  result[1].WaitBlock[3].WaitListEntry.Blink = a1;
  return result;
}
