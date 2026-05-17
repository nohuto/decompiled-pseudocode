/*
 * XREFs of RtlpImageDirectoryEntryToDataEx @ 0x18001C4DC
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180018D8C (LdrpSearchResourceSection_U.c)
 *     RtlpxLookupFunctionTable @ 0x18001E620 (RtlpxLookupFunctionTable.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18001F014 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpAccessResourceData @ 0x18001F250 (LdrpAccessResourceData.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x18001F450 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrpCfgProcessLoadConfig @ 0x18002088C (LdrpCfgProcessLoadConfig.c)
 *     RtlInsertInvertedFunctionTable @ 0x180020D8C (RtlInsertInvertedFunctionTable.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180020F00 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180021B60 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpCompleteMapModule @ 0x18002A370 (LdrpCompleteMapModule.c)
 *     LdrpInitializeTls @ 0x180055158 (LdrpInitializeTls.c)
 *     LdrpHandleTlsData @ 0x180055984 (LdrpHandleTlsData.c)
 *     LdrpGetImportDescriptorForSnap @ 0x180072948 (LdrpGetImportDescriptorForSnap.c)
 *     RtlFindExportedRoutineByName @ 0x180079280 (RtlFindExportedRoutineByName.c)
 *     RtlImageDirectoryEntryToData @ 0x18007F280 (RtlImageDirectoryEntryToData.c)
 *     LdrpRelocateImage @ 0x180082750 (LdrpRelocateImage.c)
 *     LdrRelocateImageWithBias @ 0x1800837A8 (LdrRelocateImageWithBias.c)
 *     LdrpCorValidateImage @ 0x180084190 (LdrpCorValidateImage.c)
 *     LdrpProcessMachineMismatch @ 0x1800865C4 (LdrpProcessMachineMismatch.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180089D30 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpEnclaveAddDelayloadModules @ 0x1800CDC50 (LdrpEnclaveAddDelayloadModules.c)
 *     LdrpEnclaveAddForwarderModules @ 0x1800CDE44 (LdrpEnclaveAddForwarderModules.c)
 *     LdrpCorFixupImage @ 0x1800CEEB8 (LdrpCorFixupImage.c)
 *     LdrpFindDelayloadedMethod @ 0x1800CF154 (LdrpFindDelayloadedMethod.c)
 *     LdrpGetDelayloadDescriptor @ 0x1800CF294 (LdrpGetDelayloadDescriptor.c)
 *     AvrfMiniLoadDll @ 0x1800DA9B4 (AvrfMiniLoadDll.c)
 *     RtlComputeImportTableHash @ 0x1800DF680 (RtlComputeImportTableHash.c)
 *     LdrEnumResources @ 0x1800DFE60 (LdrEnumResources.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x1800F7624 (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     EtwpFindDebugId @ 0x18010E060 (EtwpFindDebugId.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x18001EF44 (RtlpImageDirectoryEntryToData32.c)
 *     RtlAddressInSectionTable @ 0x180075F00 (RtlAddressInSectionTable.c)
 */

__int64 __fastcall RtlpImageDirectoryEntryToDataEx(
        unsigned __int64 a1,
        char a2,
        unsigned __int16 a3,
        _DWORD *a4,
        __int64 *a5)
{
  __int64 *v5; // r14
  unsigned int v6; // ebx
  char v9; // si
  unsigned __int64 v10; // rdi
  __int64 result; // rax
  int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v5 = a5;
  v6 = 0;
  v16 = 0LL;
  v9 = a2;
  v10 = a1;
  *a5 = 0LL;
  if ( (a1 & 3) != 0 )
  {
    v10 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v9 = 0;
    if ( (a1 & 1) == 0 )
      v9 = a2;
  }
  result = RtlImageNtHeaderEx(1LL, v10, 0LL, &v16);
  v13 = v16;
  if ( v16 )
  {
    if ( *(_WORD *)(v16 + 24) == 267 )
    {
      LOBYTE(v12) = v9;
      return (unsigned int)RtlpImageDirectoryEntryToData32(v10, v12, a3, (_DWORD)a4, v16, (__int64)v5);
    }
    else if ( *(_WORD *)(v16 + 24) == 523 && (unsigned int)a3 < *(_DWORD *)(v16 + 132) )
    {
      v14 = *(unsigned int *)(v16 + 8LL * a3 + 136);
      if ( (_DWORD)v14 )
      {
        *a4 = *(_DWORD *)(v16 + 8LL * a3 + 140);
        if ( v9 || (unsigned int)v14 < *(_DWORD *)(v13 + 84) )
        {
          *v5 = v10 + v14;
        }
        else
        {
          v15 = RtlAddressInSectionTable(v13, v10, (unsigned int)v14);
          *v5 = v15;
          return v15 == 0 ? 0xC000000D : 0;
        }
      }
      else
      {
        return (unsigned int)-1073741822;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
    return v6;
  }
  return result;
}
