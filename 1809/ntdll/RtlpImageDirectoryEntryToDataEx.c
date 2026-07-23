/*
 * XREFs of RtlpImageDirectoryEntryToDataEx @ 0x180007188
 * Callers:
 *     RtlpxLookupFunctionTable @ 0x180006E00 (RtlpxLookupFunctionTable.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18000A08C (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpAccessResourceData @ 0x180014704 (LdrpAccessResourceData.c)
 *     LdrpCompleteMapModule @ 0x180021B40 (LdrpCompleteMapModule.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180022CBC (LdrpSnapKernelBaseExtensions.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1800273C4 (LdrImageDirectoryEntryToLoadConfig.c)
 *     RtlInsertInvertedFunctionTable @ 0x180027528 (RtlInsertInvertedFunctionTable.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x18002769C (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrpInitializeTls @ 0x180035890 (LdrpInitializeTls.c)
 *     LdrpHandleTlsData @ 0x18003629C (LdrpHandleTlsData.c)
 *     LdrpSearchResourceSection_U @ 0x18003D2E8 (LdrpSearchResourceSection_U.c)
 *     LdrpCfgProcessLoadConfig @ 0x180041A48 (LdrpCfgProcessLoadConfig.c)
 *     LdrpGetImportDescriptorForSnap @ 0x180078D10 (LdrpGetImportDescriptorForSnap.c)
 *     RtlFindExportedRoutineByName @ 0x18007F330 (RtlFindExportedRoutineByName.c)
 *     RtlImageDirectoryEntryToData @ 0x180082EE0 (RtlImageDirectoryEntryToData.c)
 *     LdrpRelocateImage @ 0x1800872D4 (LdrpRelocateImage.c)
 *     LdrRelocateImageWithBias @ 0x1800875F8 (LdrRelocateImageWithBias.c)
 *     LdrpCorValidateImage @ 0x180088074 (LdrpCorValidateImage.c)
 *     LdrpProcessMachineMismatch @ 0x18008A47C (LdrpProcessMachineMismatch.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008C7C0 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpEnclaveAddDelayloadModules @ 0x1800CF388 (LdrpEnclaveAddDelayloadModules.c)
 *     LdrpEnclaveAddForwarderModules @ 0x1800CF57C (LdrpEnclaveAddForwarderModules.c)
 *     LdrpCorFixupImage @ 0x1800D05E8 (LdrpCorFixupImage.c)
 *     LdrpFindDelayloadedMethod @ 0x1800D0884 (LdrpFindDelayloadedMethod.c)
 *     LdrpGetDelayloadDescriptor @ 0x1800D09C4 (LdrpGetDelayloadDescriptor.c)
 *     AvrfMiniLoadDll @ 0x1800DCAA8 (AvrfMiniLoadDll.c)
 *     RtlComputeImportTableHash @ 0x1800E1A00 (RtlComputeImportTableHash.c)
 *     LdrEnumResources @ 0x1800E22B0 (LdrEnumResources.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x1800F9934 (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     EtwpFindDebugId @ 0x18010FD30 (EtwpFindDebugId.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180007BB0 (RtlImageNtHeaderEx.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x180009BAC (RtlpImageDirectoryEntryToData32.c)
 *     RtlAddressInSectionTable @ 0x18007AC40 (RtlAddressInSectionTable.c)
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
