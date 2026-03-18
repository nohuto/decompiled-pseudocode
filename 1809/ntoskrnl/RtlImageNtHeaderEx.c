/*
 * XREFs of RtlImageNtHeaderEx @ 0x14009D860
 * Callers:
 *     MiLockPagableImageSection @ 0x14009ABB0 (MiLockPagableImageSection.c)
 *     RtlImageNtHeader @ 0x14009DAE0 (RtlImageNtHeader.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400F2C50 (RtlpImageDirectoryEntryToDataEx.c)
 *     MiProcessKernelCfgImage @ 0x1400F5544 (MiProcessKernelCfgImage.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x1402F74A4 (RtlpCaptureDynamicRelocationTableRva.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x140681F7C (LdrpFetchAddressOfSecurityCookie.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140682014 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrpResGetResourceDirectory @ 0x14068A9BC (LdrpResGetResourceDirectory.c)
 *     LdrpResGetMappingSize @ 0x14068B08C (LdrpResGetMappingSize.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x1406BA0D0 (EtwpLocateDbgIdForRegEntry.c)
 *     LdrRelocateImageWithBias @ 0x14072A778 (LdrRelocateImageWithBias.c)
 *     MiCaptureDynamicRelocationTableRva @ 0x14074BA6C (MiCaptureDynamicRelocationTableRva.c)
 *     MiOpenHotPatchFile @ 0x14085690C (MiOpenHotPatchFile.c)
 *     VfDriverEnableVerifierForAll @ 0x140928018 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlImageNtHeaderEx(ULONG Flags, PVOID BaseAddress, ULONGLONG Size, PIMAGE_NT_HEADERS *NtHeader)
{
  NTSTATUS v4; // r10d
  char v5; // al
  ULONGLONG v6; // rcx
  struct _IMAGE_NT_HEADERS64 *v7; // rax

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
      v7 = (struct _IMAGE_NT_HEADERS64 *)((char *)BaseAddress + v6);
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
