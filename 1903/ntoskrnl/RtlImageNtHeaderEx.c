/*
 * XREFs of RtlImageNtHeaderEx @ 0x14005F320
 * Callers:
 *     RtlImageNtHeader @ 0x14005EDB0 (RtlImageNtHeader.c)
 *     MiLockPagableImageSection @ 0x14005F120 (MiLockPagableImageSection.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400AFB60 (RtlpImageDirectoryEntryToDataEx.c)
 *     MiProcessKernelCfgImage @ 0x140154394 (MiProcessKernelCfgImage.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x140187CD4 (RtlpCaptureDynamicRelocationTableRva.c)
 *     MiCaptureDynamicRelocationTableRva @ 0x14065AF5C (MiCaptureDynamicRelocationTableRva.c)
 *     LdrpResGetMappingSize @ 0x14067B430 (LdrpResGetMappingSize.c)
 *     LdrpResGetResourceDirectory @ 0x14067C240 (LdrpResGetResourceDirectory.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x1406DABD0 (EtwpLocateDbgIdForRegEntry.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x14070EC4C (LdrpFetchAddressOfSecurityCookie.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x14070ED5C (LdrImageDirectoryEntryToLoadConfig.c)
 *     MiOpenHotPatchFile @ 0x140890210 (MiOpenHotPatchFile.c)
 *     LdrRelocateImageWithBias @ 0x1408D8154 (LdrRelocateImageWithBias.c)
 *     VfDriverEnableVerifierForAll @ 0x140966538 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlImageNtHeaderEx(ULONG Flags, PVOID BaseAddress, ULONGLONG Size, PIMAGE_NT_HEADERS *NtHeader)
{
  NTSTATUS v4; // r10d
  char v5; // al
  ULONGLONG v6; // rcx
  _IMAGE_NT_HEADERS64 *v7; // rax

  if ( !NtHeader )
    return -1073741811;
  v4 = 0;
  *NtHeader = 0LL;
  if ( (Flags & 0xFFFFFFFE) != 0 || (char *)BaseAddress - 1 > (char *)0xFFFFFFFFFFFFFFFDLL )
    return -1073741811;
  if ( (Flags & 1) != 0 )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    if ( Size < 0x40 )
      return -1073741701;
  }
  if ( *(_WORD *)BaseAddress == 23117 )
  {
    v6 = *((unsigned int *)BaseAddress + 15);
    if ( !v5 || v6 < Size && (unsigned int)v6 < 0xFFFFFFE7 && v6 + 24 < Size )
    {
      v7 = (_IMAGE_NT_HEADERS64 *)((char *)BaseAddress + v6);
      if ( (char *)BaseAddress + v6 >= BaseAddress
        && ((unsigned __int64)BaseAddress >= 0x7FFFFFFEFFFFLL
         || (unsigned __int64)v7 < 0x7FFFFFFEFFFFLL && (unsigned __int64)&v7[1] < 0x7FFFFFFEFFFFLL)
        && v7->Signature == 17744 )
      {
        *NtHeader = v7;
        return v4;
      }
    }
  }
  return -1073741701;
}
