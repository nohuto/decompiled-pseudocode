/*
 * XREFs of PsGetCurrentSilo @ 0x14004D350
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1402845C0 (IoRevokeHandlesForProcess.c)
 *     CmCreateKey @ 0x1405B5A60 (CmCreateKey.c)
 *     ObOpenObjectByName @ 0x1405B9290 (ObOpenObjectByName.c)
 *     ObpInsertOrLocateNamedObject @ 0x1405C85A8 (ObpInsertOrLocateNamedObject.c)
 *     ObReferenceObjectByName @ 0x1405C8DA0 (ObReferenceObjectByName.c)
 *     CmOpenKey @ 0x1405E0EA0 (CmOpenKey.c)
 *     NtQueryFullAttributesFile @ 0x14060B590 (NtQueryFullAttributesFile.c)
 *     IopCreateFile @ 0x14060BAC0 (IopCreateFile.c)
 *     NtQueryAttributesFile @ 0x14060CC30 (NtQueryAttributesFile.c)
 *     ObReferenceObjectByNameEx @ 0x14061145C (ObReferenceObjectByNameEx.c)
 *     CmpParseKey @ 0x140641370 (CmpParseKey.c)
 *     ObQueryNameStringMode @ 0x140660F70 (ObQueryNameStringMode.c)
 *     CmLockKeyForWrite @ 0x14068E380 (CmLockKeyForWrite.c)
 *     NtOpenSymbolicLinkObject @ 0x140691BD0 (NtOpenSymbolicLinkObject.c)
 *     NtOpenSection @ 0x14069C020 (NtOpenSection.c)
 *     ObpCreateSymbolicLinkName @ 0x1406C4460 (ObpCreateSymbolicLinkName.c)
 *     NtDeleteFile @ 0x14070F110 (NtDeleteFile.c)
 *     PsRegisterSiloMonitor @ 0x140728850 (PsRegisterSiloMonitor.c)
 *     VRegEnabledInJob @ 0x14080831C (VRegEnabledInJob.c)
 *     IoQueryInformationByName @ 0x14081C560 (IoQueryInformationByName.c)
 *     IopFastQueryNetworkAttributes @ 0x14081CE14 (IopFastQueryNetworkAttributes.c)
 *     PsRootSiloInformation @ 0x140886980 (PsRootSiloInformation.c)
 *     ObGetSiloRootDirectoryPath @ 0x140906238 (ObGetSiloRootDirectoryPath.c)
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
