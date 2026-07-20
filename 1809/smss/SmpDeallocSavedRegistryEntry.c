/*
 * XREFs of SmpDeallocSavedRegistryEntry @ 0x1400097B8
 * Callers:
 *     SmpFreeSavedRegistryEntry @ 0x140005090 (SmpFreeSavedRegistryEntry.c)
 *     SmpConfigureSharedSessionData @ 0x140007620 (SmpConfigureSharedSessionData.c)
 *     SmpInitializeKnownDlls @ 0x1400082D0 (SmpInitializeKnownDlls.c)
 *     SmpBuildSubSystemLists @ 0x140008CB0 (SmpBuildSubSystemLists.c)
 *     SmpSaveRegistryValue_U @ 0x140009410 (SmpSaveRegistryValue_U.c)
 *     SmpInitializeDosDevices @ 0x14000962C (SmpInitializeDosDevices.c)
 *     SmpRecordNewPageFile @ 0x1400098A8 (SmpRecordNewPageFile.c)
 *     SmpProcessFileRenames @ 0x140009934 (SmpProcessFileRenames.c)
 *     SmpCreatePagingFiles @ 0x14000B0A8 (SmpCreatePagingFiles.c)
 *     SmpCleanupStalePageFiles @ 0x14000B3EC (SmpCleanupStalePageFiles.c)
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
