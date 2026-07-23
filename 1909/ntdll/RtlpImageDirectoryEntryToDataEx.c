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

NTSTATUS __fastcall RtlpImageDirectoryEntryToDataEx(
        unsigned __int64 a1,
        char a2,
        unsigned __int16 a3,
        unsigned int *a4,
        _QWORD *a5)
{
  _QWORD *v5; // r14
  int v6; // ebx
  char v9; // si
  char *v10; // rdi
  NTSTATUS result; // eax
  int v12; // edx
  PIMAGE_NT_HEADERS v13; // rcx
  __int64 VirtualAddress; // rdx
  PVOID v15; // rax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+50h] [rbp+8h] BYREF

  v5 = a5;
  v6 = 0;
  OutHeaders = 0LL;
  v9 = a2;
  v10 = (char *)a1;
  *a5 = 0LL;
  if ( (a1 & 3) != 0 )
  {
    v10 = (char *)(a1 & 0xFFFFFFFFFFFFFFFCuLL);
    v9 = 0;
    if ( (a1 & 1) == 0 )
      v9 = a2;
  }
  result = RtlImageNtHeaderEx(1u, v10, 0LL, &OutHeaders);
  v13 = OutHeaders;
  if ( OutHeaders )
  {
    if ( OutHeaders->OptionalHeader.Magic == 267 )
    {
      LOBYTE(v12) = v9;
      return RtlpImageDirectoryEntryToData32((int)v10, v12, a3, (int)a4, OutHeaders, (__int64)v5);
    }
    else if ( OutHeaders->OptionalHeader.Magic == 523 && a3 < OutHeaders->OptionalHeader.NumberOfRvaAndSizes )
    {
      VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[a3].VirtualAddress;
      if ( (_DWORD)VirtualAddress )
      {
        *a4 = OutHeaders->OptionalHeader.DataDirectory[a3].Size;
        if ( v9 || (unsigned int)VirtualAddress < v13->OptionalHeader.SizeOfHeaders )
        {
          *v5 = &v10[VirtualAddress];
        }
        else
        {
          v15 = RtlAddressInSectionTable(v13, v10, VirtualAddress);
          *v5 = v15;
          return v15 == 0LL ? 0xC000000D : 0;
        }
      }
      else
      {
        return -1073741822;
      }
    }
    else
    {
      return -1073741811;
    }
    return v6;
  }
  return result;
}
