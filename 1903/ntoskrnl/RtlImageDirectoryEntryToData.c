/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x1400AFB30
 * Callers:
 *     MmCreatePeb @ 0x14067A018 (MmCreatePeb.c)
 *     RtlFindExportedRoutineByName @ 0x14067ABD0 (RtlFindExportedRoutineByName.c)
 *     NtSetSystemInformation @ 0x1406A6DC0 (NtSetSystemInformation.c)
 *     LdrpAccessResourceData @ 0x1406C599C (LdrpAccessResourceData.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1406C5A78 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpSearchResourceSection_U @ 0x1406C5CD0 (LdrpSearchResourceSection_U.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1406D5090 (MiCaptureRetpolineRelocationTables.c)
 *     EtwpFindDebugId @ 0x1406DAD10 (EtwpFindDebugId.c)
 *     MiInitializeWowPeb @ 0x1406E3BE0 (MiInitializeWowPeb.c)
 *     MmLoadSystemImageEx @ 0x14070DAB0 (MmLoadSystemImageEx.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x14070E9E0 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x14070ED5C (LdrImageDirectoryEntryToLoadConfig.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x14070EDD4 (MiProcessKernelCfgImageLoadConfig.c)
 *     MiResolveImageReferences @ 0x14070EE20 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x14070F2B8 (MiSnapThunk.c)
 *     MiCacheImageSymbols @ 0x14070FB68 (MiCacheImageSymbols.c)
 *     MiMarkKernelImageCfgBits @ 0x140746B78 (MiMarkKernelImageCfgBits.c)
 *     KsepPatchDriverImportsTable @ 0x14088384C (KsepPatchDriverImportsTable.c)
 *     MiSnapUnresolvedImport @ 0x14088AE40 (MiSnapUnresolvedImport.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x140898824 (MiMarkKernelCfgAddressTakenImports.c)
 *     LdrEnumResources @ 0x1408CEEB0 (LdrEnumResources.c)
 *     LdrRelocateImageWithBias @ 0x1408D8154 (LdrRelocateImageWithBias.c)
 *     RtlFindHotPatchInformation @ 0x1408D880C (RtlFindHotPatchInformation.c)
 *     AslpFileQueryExportName @ 0x14092B2AC (AslpFileQueryExportName.c)
 *     ViThunkSnapSharedExportByName @ 0x140960284 (ViThunkSnapSharedExportByName.c)
 *     ViXdvDriverLoadImage @ 0x140966AD4 (ViXdvDriverLoadImage.c)
 *     VfThunkApplyDriverAddedThunks @ 0x140976078 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkApplyMandatoryThunksCurrentSession @ 0x1409763F4 (ViThunkApplyMandatoryThunksCurrentSession.c)
 *     ViThunkApplyThunksCurrentSession @ 0x14097647C (ViThunkApplyThunksCurrentSession.c)
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400AFB60 (RtlpImageDirectoryEntryToDataEx.c)
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
