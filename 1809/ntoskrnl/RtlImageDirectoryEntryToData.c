/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x1400F2C40
 * Callers:
 *     RtlCaptureRetpolineImportRvas @ 0x1401B5EC8 (RtlCaptureRetpolineImportRvas.c)
 *     NtSetSystemInformation @ 0x140663DF0 (NtSetSystemInformation.c)
 *     MmCreatePeb @ 0x140678530 (MmCreatePeb.c)
 *     RtlFindExportedRoutineByName @ 0x140678EC0 (RtlFindExportedRoutineByName.c)
 *     MiResolveImageReferences @ 0x140678FB0 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x140679434 (MiSnapThunk.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x14067AC98 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpSearchResourceSection_U @ 0x14067AEF0 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceData @ 0x14067BCE8 (LdrpAccessResourceData.c)
 *     MmLoadSystemImageEx @ 0x140680FF8 (MmLoadSystemImageEx.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140681FF4 (LdrImageDirectoryEntryToLoadConfig.c)
 *     MiCacheImageSymbols @ 0x140682438 (MiCacheImageSymbols.c)
 *     MiInitializeWowPeb @ 0x14068B5F4 (MiInitializeWowPeb.c)
 *     EtwpFindDebugId @ 0x1406BA1F0 (EtwpFindDebugId.c)
 *     MiMarkKernelImageCfgBits @ 0x14070F394 (MiMarkKernelImageCfgBits.c)
 *     LdrRelocateImageWithBias @ 0x14072A758 (LdrRelocateImageWithBias.c)
 *     KsepPatchDriverImportsTable @ 0x14084838C (KsepPatchDriverImportsTable.c)
 *     MiSnapUnresolvedImport @ 0x14084ED48 (MiSnapUnresolvedImport.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1408538D4 (MiCaptureRetpolineRelocationTables.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x14085BC94 (MiMarkKernelCfgAddressTakenImports.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x14085BD84 (MiProcessKernelCfgImageLoadConfig.c)
 *     LdrEnumResources @ 0x140890BA0 (LdrEnumResources.c)
 *     RtlFindHotPatchInformation @ 0x140899CBC (RtlFindHotPatchInformation.c)
 *     AslpFileQueryExportName @ 0x1408ED874 (AslpFileQueryExportName.c)
 *     ViThunkSnapSharedExportByName @ 0x1409210B8 (ViThunkSnapSharedExportByName.c)
 *     ViXdvDriverLoadImage @ 0x140928510 (ViXdvDriverLoadImage.c)
 *     VfThunkApplyDriverAddedThunks @ 0x140936998 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkApplyMandatoryThunksCurrentSession @ 0x140936CEC (ViThunkApplyMandatoryThunksCurrentSession.c)
 *     ViThunkApplyThunksCurrentSession @ 0x140936D74 (ViThunkApplyThunksCurrentSession.c)
 *     sub_14098FE9C @ 0x14098FE9C (sub_14098FE9C.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400F2C70 (RtlpImageDirectoryEntryToDataEx.c)
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
