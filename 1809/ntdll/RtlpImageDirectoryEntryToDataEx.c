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
 *     LdrpGetImportDescriptorForSnap @ 0x180078D00 (LdrpGetImportDescriptorForSnap.c)
 *     RtlFindExportedRoutineByName @ 0x18007F320 (RtlFindExportedRoutineByName.c)
 *     RtlImageDirectoryEntryToData @ 0x180082ED0 (RtlImageDirectoryEntryToData.c)
 *     LdrpRelocateImage @ 0x1800872C4 (LdrpRelocateImage.c)
 *     LdrRelocateImageWithBias @ 0x1800875E8 (LdrRelocateImageWithBias.c)
 *     LdrpCorValidateImage @ 0x180088064 (LdrpCorValidateImage.c)
 *     LdrpProcessMachineMismatch @ 0x18008A46C (LdrpProcessMachineMismatch.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008C7B0 (LdrVerifyImageMatchesChecksumEx.c)
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
 *     RtlAddressInSectionTable @ 0x18007AC30 (RtlAddressInSectionTable.c)
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
