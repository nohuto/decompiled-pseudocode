/*
 * XREFs of PsGetCurrentSilo @ 0x140043C50
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140299760 (IoRevokeHandlesForProcess.c)
 *     ObpInsertOrLocateNamedObject @ 0x1405C6208 (ObpInsertOrLocateNamedObject.c)
 *     ObReferenceObjectByName @ 0x1405C6D50 (ObReferenceObjectByName.c)
 *     CmpParseKey @ 0x1405F9560 (CmpParseKey.c)
 *     ObOpenObjectByName @ 0x1405FF9C0 (ObOpenObjectByName.c)
 *     NtQueryFullAttributesFile @ 0x140618760 (NtQueryFullAttributesFile.c)
 *     IopCreateFile @ 0x140618CB0 (IopCreateFile.c)
 *     ObQueryNameStringMode @ 0x14062E570 (ObQueryNameStringMode.c)
 *     CmCreateKey @ 0x14063E600 (CmCreateKey.c)
 *     NtQueryAttributesFile @ 0x1406B48B0 (NtQueryAttributesFile.c)
 *     NtOpenSymbolicLinkObject @ 0x1406B6850 (NtOpenSymbolicLinkObject.c)
 *     ObReferenceObjectByNameEx @ 0x1406BA0F8 (ObReferenceObjectByNameEx.c)
 *     NtOpenSection @ 0x1406C0210 (NtOpenSection.c)
 *     ObpCreateSymbolicLinkName @ 0x1406E67F0 (ObpCreateSymbolicLinkName.c)
 *     NtDeleteFile @ 0x1406F0760 (NtDeleteFile.c)
 *     CmLockKeyForWrite @ 0x14073C2DC (CmLockKeyForWrite.c)
 *     PsRegisterSiloMonitor @ 0x14075E160 (PsRegisterSiloMonitor.c)
 *     VRegEnabledInJob @ 0x14084121C (VRegEnabledInJob.c)
 *     IoQueryInformationByName @ 0x140855C60 (IoQueryInformationByName.c)
 *     IopFastQueryNetworkAttributes @ 0x14085658C (IopFastQueryNetworkAttributes.c)
 *     PsRootSiloInformation @ 0x1408C45F0 (PsRootSiloInformation.c)
 *     ObGetSiloRootDirectoryPath @ 0x1409442CC (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *PsGetCurrentSilo()
{
  struct _KTHREAD *CurrentThread; // rcx
  struct _LIST_ENTRY *result; // rax

  CurrentThread = KeGetCurrentThread();
  result = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  if ( result == (struct _LIST_ENTRY *)-3LL )
  {
    for ( result = (struct _LIST_ENTRY *)CurrentThread->Process[1].Affinity.Bitmap[16]; result; result = result[67].Flink )
    {
      if ( ((__int64)result[81].Blink & 0x40000000) != 0 )
        break;
    }
  }
  return result;
}
