/*
 * XREFs of LdrImageDirectoryEntryToLoadConfig @ 0x140681FF4
 * Callers:
 *     RtlIsImageFullyRetpolined @ 0x1401B5FD8 (RtlIsImageFullyRetpolined.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1402F6718 (RtlGuardCheckLongJumpTarget.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x1402F75A4 (RtlpCaptureDynamicRelocationTableRva.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x1402F7670 (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x140681F5C (LdrpFetchAddressOfSecurityCookie.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14009D860 (RtlImageNtHeaderEx.c)
 *     RtlImageDirectoryEntryToData @ 0x1400F2C40 (RtlImageDirectoryEntryToData.c)
 *     RtlWow64GetEquivalentMachineCHPE @ 0x1400F554C (RtlWow64GetEquivalentMachineCHPE.c)
 */

__int64 __fastcall LdrImageDirectoryEntryToLoadConfig(PVOID BaseAddress)
{
  _DWORD *v2; // rax
  __int64 v3; // r8
  ULONG Size; // [rsp+30h] [rbp+8h] BYREF
  PIMAGE_NT_HEADERS NtHeader; // [rsp+38h] [rbp+10h] BYREF

  RtlImageNtHeaderEx(1u, BaseAddress, 0LL, &NtHeader);
  if ( BaseAddress
    && (v2 = RtlImageDirectoryEntryToData(BaseAddress, 1u, 0xAu, &Size)) != 0LL
    && Size
    && Size == *v2
    && RtlWow64GetEquivalentMachineCHPE(NtHeader->FileHeader.Machine) == -31132 )
  {
    return v3;
  }
  else
  {
    return 0LL;
  }
}
