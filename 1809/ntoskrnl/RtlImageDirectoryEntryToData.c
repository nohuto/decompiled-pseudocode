/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x1400F2C20
 * Callers:
 *     RtlCaptureRetpolineImportRvas @ 0x1401B5EA8 (RtlCaptureRetpolineImportRvas.c)
 *     NtSetSystemInformation @ 0x140663E10 (NtSetSystemInformation.c)
 *     MmCreatePeb @ 0x140678550 (MmCreatePeb.c)
 *     RtlFindExportedRoutineByName @ 0x140678EE0 (RtlFindExportedRoutineByName.c)
 *     MiResolveImageReferences @ 0x140678FD0 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x140679454 (MiSnapThunk.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x14067ACB8 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpSearchResourceSection_U @ 0x14067AF10 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceData @ 0x14067BD08 (LdrpAccessResourceData.c)
 *     MmLoadSystemImageEx @ 0x140681018 (MmLoadSystemImageEx.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140682014 (LdrImageDirectoryEntryToLoadConfig.c)
 *     MiCacheImageSymbols @ 0x140682458 (MiCacheImageSymbols.c)
 *     MiInitializeWowPeb @ 0x14068B614 (MiInitializeWowPeb.c)
 *     EtwpFindDebugId @ 0x1406BA210 (EtwpFindDebugId.c)
 *     MiMarkKernelImageCfgBits @ 0x14070F3B4 (MiMarkKernelImageCfgBits.c)
 *     LdrRelocateImageWithBias @ 0x14072A778 (LdrRelocateImageWithBias.c)
 *     KsepPatchDriverImportsTable @ 0x1408483AC (KsepPatchDriverImportsTable.c)
 *     MiSnapUnresolvedImport @ 0x14084ED68 (MiSnapUnresolvedImport.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1408538F4 (MiCaptureRetpolineRelocationTables.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x14085BCB4 (MiMarkKernelCfgAddressTakenImports.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x14085BDA4 (MiProcessKernelCfgImageLoadConfig.c)
 *     LdrEnumResources @ 0x140890BC0 (LdrEnumResources.c)
 *     RtlFindHotPatchInformation @ 0x140899CDC (RtlFindHotPatchInformation.c)
 *     AslpFileQueryExportName @ 0x1408ED894 (AslpFileQueryExportName.c)
 *     ViThunkSnapSharedExportByName @ 0x1409210B8 (ViThunkSnapSharedExportByName.c)
 *     ViXdvDriverLoadImage @ 0x140928510 (ViXdvDriverLoadImage.c)
 *     VfThunkApplyDriverAddedThunks @ 0x140936998 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkApplyMandatoryThunksCurrentSession @ 0x140936CEC (ViThunkApplyMandatoryThunksCurrentSession.c)
 *     ViThunkApplyThunksCurrentSession @ 0x140936D74 (ViThunkApplyThunksCurrentSession.c)
 *     sub_14098FE9C @ 0x14098FE9C (sub_14098FE9C.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400F2C50 (RtlpImageDirectoryEntryToDataEx.c)
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
