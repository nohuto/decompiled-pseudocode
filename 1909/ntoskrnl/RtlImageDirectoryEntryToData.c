/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x1400E8950
 * Callers:
 *     MiInitializeWowPeb @ 0x140674EDC (MiInitializeWowPeb.c)
 *     LdrpAccessResourceData @ 0x14067540C (LdrpAccessResourceData.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1406754E8 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpSearchResourceSection_U @ 0x140675740 (LdrpSearchResourceSection_U.c)
 *     MmCreatePeb @ 0x1406800CC (MmCreatePeb.c)
 *     RtlFindExportedRoutineByName @ 0x140680C80 (RtlFindExportedRoutineByName.c)
 *     NtSetSystemInformation @ 0x1406A6650 (NtSetSystemInformation.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1406D4770 (MiCaptureRetpolineRelocationTables.c)
 *     EtwpFindDebugId @ 0x1406DB62C (EtwpFindDebugId.c)
 *     MmLoadSystemImageEx @ 0x14070F890 (MmLoadSystemImageEx.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x1407107C0 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140710B3C (LdrImageDirectoryEntryToLoadConfig.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x140710BB4 (MiProcessKernelCfgImageLoadConfig.c)
 *     MiResolveImageReferences @ 0x140710C00 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x140711098 (MiSnapThunk.c)
 *     MiCacheImageSymbols @ 0x140711948 (MiCacheImageSymbols.c)
 *     MiMarkKernelImageCfgBits @ 0x140748A78 (MiMarkKernelImageCfgBits.c)
 *     KsepPatchDriverImportsTable @ 0x140882F4C (KsepPatchDriverImportsTable.c)
 *     MiSnapUnresolvedImport @ 0x14088A660 (MiSnapUnresolvedImport.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x140898044 (MiMarkKernelCfgAddressTakenImports.c)
 *     LdrEnumResources @ 0x1408CE790 (LdrEnumResources.c)
 *     LdrRelocateImageWithBias @ 0x1408D7A54 (LdrRelocateImageWithBias.c)
 *     RtlFindHotPatchInformation @ 0x1408D810C (RtlFindHotPatchInformation.c)
 *     AslpFileQueryExportName @ 0x14092AD20 (AslpFileQueryExportName.c)
 *     ViThunkSnapSharedExportByName @ 0x140960284 (ViThunkSnapSharedExportByName.c)
 *     ViXdvDriverLoadImage @ 0x140966AD4 (ViXdvDriverLoadImage.c)
 *     VfThunkApplyDriverAddedThunks @ 0x140976078 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkApplyMandatoryThunksCurrentSession @ 0x1409763F4 (ViThunkApplyMandatoryThunksCurrentSession.c)
 *     ViThunkApplyThunksCurrentSession @ 0x14097647C (ViThunkApplyThunksCurrentSession.c)
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400E8980 (RtlpImageDirectoryEntryToDataEx.c)
 */

PVOID __stdcall RtlImageDirectoryEntryToData(PVOID BaseAddress, BOOLEAN MappedAsImage, USHORT Directory, PULONG Size)
{
  int v4; // eax
  void *v5; // rcx
  __int64 v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = RtlpImageDirectoryEntryToDataEx(BaseAddress, (__int64)v7);
  v5 = (void *)v7[0];
  if ( v4 < 0 )
    return 0LL;
  return v5;
}
