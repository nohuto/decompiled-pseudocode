/*
 * XREFs of PsGetCurrentSilo @ 0x14004D350
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1402848B0 (IoRevokeHandlesForProcess.c)
 *     CmCreateKey @ 0x1405B6A60 (CmCreateKey.c)
 *     ObOpenObjectByName @ 0x1405BA290 (ObOpenObjectByName.c)
 *     ObpInsertOrLocateNamedObject @ 0x1405C95A8 (ObpInsertOrLocateNamedObject.c)
 *     ObReferenceObjectByName @ 0x1405C9DA0 (ObReferenceObjectByName.c)
 *     CmOpenKey @ 0x1405E1EA0 (CmOpenKey.c)
 *     NtQueryFullAttributesFile @ 0x14060C590 (NtQueryFullAttributesFile.c)
 *     IopCreateFile @ 0x14060CAC0 (IopCreateFile.c)
 *     NtQueryAttributesFile @ 0x14060DC30 (NtQueryAttributesFile.c)
 *     ObReferenceObjectByNameEx @ 0x14061245C (ObReferenceObjectByNameEx.c)
 *     CmpParseKey @ 0x140642370 (CmpParseKey.c)
 *     ObQueryNameStringMode @ 0x140662110 (ObQueryNameStringMode.c)
 *     CmLockKeyForWrite @ 0x14068F520 (CmLockKeyForWrite.c)
 *     NtOpenSymbolicLinkObject @ 0x140692D70 (NtOpenSymbolicLinkObject.c)
 *     NtOpenSection @ 0x14069D1C0 (NtOpenSection.c)
 *     ObpCreateSymbolicLinkName @ 0x1406C56E0 (ObpCreateSymbolicLinkName.c)
 *     NtDeleteFile @ 0x140710390 (NtDeleteFile.c)
 *     PsRegisterSiloMonitor @ 0x140729A20 (PsRegisterSiloMonitor.c)
 *     VRegEnabledInJob @ 0x1408094FC (VRegEnabledInJob.c)
 *     IoQueryInformationByName @ 0x14081D740 (IoQueryInformationByName.c)
 *     IopFastQueryNetworkAttributes @ 0x14081DFF4 (IopFastQueryNetworkAttributes.c)
 *     PsRootSiloInformation @ 0x140887BC0 (PsRootSiloInformation.c)
 *     ObGetSiloRootDirectoryPath @ 0x1409074D8 (ObGetSiloRootDirectoryPath.c)
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
