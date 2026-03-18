/*
 * XREFs of PsGetCurrentSilo @ 0x140043850
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140299A00 (IoRevokeHandlesForProcess.c)
 *     ObpInsertOrLocateNamedObject @ 0x1405C5D08 (ObpInsertOrLocateNamedObject.c)
 *     ObReferenceObjectByName @ 0x1405C6850 (ObReferenceObjectByName.c)
 *     CmpParseKey @ 0x1405F8510 (CmpParseKey.c)
 *     ObOpenObjectByName @ 0x1405FDF90 (ObOpenObjectByName.c)
 *     NtQueryFullAttributesFile @ 0x140616C50 (NtQueryFullAttributesFile.c)
 *     IopCreateFile @ 0x1406171A0 (IopCreateFile.c)
 *     ObQueryNameStringMode @ 0x14062A720 (ObQueryNameStringMode.c)
 *     CmCreateKey @ 0x14063B570 (CmCreateKey.c)
 *     ObReferenceObjectByNameEx @ 0x14069B140 (ObReferenceObjectByNameEx.c)
 *     NtQueryAttributesFile @ 0x1406B1910 (NtQueryAttributesFile.c)
 *     NtOpenSymbolicLinkObject @ 0x1406BB1A0 (NtOpenSymbolicLinkObject.c)
 *     NtOpenSection @ 0x1406C12D0 (NtOpenSection.c)
 *     ObpCreateSymbolicLinkName @ 0x1406E5900 (ObpCreateSymbolicLinkName.c)
 *     NtDeleteFile @ 0x1406EEC40 (NtDeleteFile.c)
 *     CmLockKeyForWrite @ 0x14073A04C (CmLockKeyForWrite.c)
 *     PsRegisterSiloMonitor @ 0x1407598D0 (PsRegisterSiloMonitor.c)
 *     VRegEnabledInJob @ 0x140841BBC (VRegEnabledInJob.c)
 *     IoQueryInformationByName @ 0x140856560 (IoQueryInformationByName.c)
 *     IopFastQueryNetworkAttributes @ 0x140856E8C (IopFastQueryNetworkAttributes.c)
 *     PsRootSiloInformation @ 0x1408C4D20 (PsRootSiloInformation.c)
 *     ObGetSiloRootDirectoryPath @ 0x14094485C (ObGetSiloRootDirectoryPath.c)
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
