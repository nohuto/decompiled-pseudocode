/*
 * XREFs of RtlImageNtHeaderEx @ 0x14009D7A0
 * Callers:
 *     MiLockPagableImageSection @ 0x14009AAF0 (MiLockPagableImageSection.c)
 *     RtlImageNtHeader @ 0x14009DA20 (RtlImageNtHeader.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400F2CF0 (RtlpImageDirectoryEntryToDataEx.c)
 *     MiProcessKernelCfgImage @ 0x1400F55E4 (MiProcessKernelCfgImage.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x1402F7794 (RtlpCaptureDynamicRelocationTableRva.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x14068311C (LdrpFetchAddressOfSecurityCookie.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1406831B4 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrpResGetResourceDirectory @ 0x14068BB5C (LdrpResGetResourceDirectory.c)
 *     LdrpResGetMappingSize @ 0x14068C22C (LdrpResGetMappingSize.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x1406BB350 (EtwpLocateDbgIdForRegEntry.c)
 *     LdrRelocateImageWithBias @ 0x14072B948 (LdrRelocateImageWithBias.c)
 *     MiCaptureDynamicRelocationTableRva @ 0x14074CC3C (MiCaptureDynamicRelocationTableRva.c)
 *     MiOpenHotPatchFile @ 0x140857B4C (MiOpenHotPatchFile.c)
 *     VfDriverEnableVerifierForAll @ 0x140929018 (VfDriverEnableVerifierForAll.c)
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
