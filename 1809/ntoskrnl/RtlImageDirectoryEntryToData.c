/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x1400F2CC0
 * Callers:
 *     RtlCaptureRetpolineImportRvas @ 0x1401B6030 (RtlCaptureRetpolineImportRvas.c)
 *     NtSetSystemInformation @ 0x140664FB0 (NtSetSystemInformation.c)
 *     MmCreatePeb @ 0x1406796F0 (MmCreatePeb.c)
 *     RtlFindExportedRoutineByName @ 0x14067A080 (RtlFindExportedRoutineByName.c)
 *     MiResolveImageReferences @ 0x14067A170 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x14067A5F4 (MiSnapThunk.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x14067BE58 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpSearchResourceSection_U @ 0x14067C0B0 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceData @ 0x14067CEA8 (LdrpAccessResourceData.c)
 *     MmLoadSystemImageEx @ 0x1406821B8 (MmLoadSystemImageEx.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1406831B4 (LdrImageDirectoryEntryToLoadConfig.c)
 *     MiCacheImageSymbols @ 0x1406835F8 (MiCacheImageSymbols.c)
 *     MiInitializeWowPeb @ 0x14068C7B4 (MiInitializeWowPeb.c)
 *     EtwpFindDebugId @ 0x1406BB490 (EtwpFindDebugId.c)
 *     MiMarkKernelImageCfgBits @ 0x140710634 (MiMarkKernelImageCfgBits.c)
 *     LdrRelocateImageWithBias @ 0x14072B948 (LdrRelocateImageWithBias.c)
 *     KsepPatchDriverImportsTable @ 0x1408495EC (KsepPatchDriverImportsTable.c)
 *     MiSnapUnresolvedImport @ 0x14084FFA8 (MiSnapUnresolvedImport.c)
 *     MiCaptureRetpolineRelocationTables @ 0x140854B34 (MiCaptureRetpolineRelocationTables.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x14085CEF4 (MiMarkKernelCfgAddressTakenImports.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x14085CFE4 (MiProcessKernelCfgImageLoadConfig.c)
 *     LdrEnumResources @ 0x140891E00 (LdrEnumResources.c)
 *     RtlFindHotPatchInformation @ 0x14089AF1C (RtlFindHotPatchInformation.c)
 *     AslpFileQueryExportName @ 0x1408EEB34 (AslpFileQueryExportName.c)
 *     ViThunkSnapSharedExportByName @ 0x1409220B8 (ViThunkSnapSharedExportByName.c)
 *     ViXdvDriverLoadImage @ 0x140929510 (ViXdvDriverLoadImage.c)
 *     VfThunkApplyDriverAddedThunks @ 0x140937998 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkApplyMandatoryThunksCurrentSession @ 0x140937CEC (ViThunkApplyMandatoryThunksCurrentSession.c)
 *     ViThunkApplyThunksCurrentSession @ 0x140937D74 (ViThunkApplyThunksCurrentSession.c)
 *     sub_140990E9C @ 0x140990E9C (sub_140990E9C.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400F2CF0 (RtlpImageDirectoryEntryToDataEx.c)
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
