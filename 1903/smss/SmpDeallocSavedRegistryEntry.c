/*
 * XREFs of SmpDeallocSavedRegistryEntry @ 0x14000A198
 * Callers:
 *     SmpFreeSavedRegistryEntry @ 0x1400050A0 (SmpFreeSavedRegistryEntry.c)
 *     SmpConfigureSharedSessionData @ 0x140007608 (SmpConfigureSharedSessionData.c)
 *     SmpInitializeKnownDlls @ 0x1400082A0 (SmpInitializeKnownDlls.c)
 *     SmpProcessFileRenames @ 0x140008BE8 (SmpProcessFileRenames.c)
 *     SmpBuildSubSystemLists @ 0x140009680 (SmpBuildSubSystemLists.c)
 *     SmpSaveRegistryValue_U @ 0x140009DF0 (SmpSaveRegistryValue_U.c)
 *     SmpInitializeDosDevices @ 0x14000A00C (SmpInitializeDosDevices.c)
 *     SmpRecordNewPageFile @ 0x14000A288 (SmpRecordNewPageFile.c)
 *     SmpCreatePagingFiles @ 0x14000AC40 (SmpCreatePagingFiles.c)
 *     SmpCleanupStalePageFiles @ 0x14000AF84 (SmpCleanupStalePageFiles.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall SmpDeallocSavedRegistryEntry(struct _UNICODE_STRING *BaseAddress)
{
  void *v2; // r8
  BOOLEAN result; // al

  if ( BaseAddress )
  {
    RtlFreeUnicodeString(BaseAddress + 2);
    v2 = *(void **)&BaseAddress[3].Length;
    if ( v2 )
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v2);
    return RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
  }
  return result;
}
