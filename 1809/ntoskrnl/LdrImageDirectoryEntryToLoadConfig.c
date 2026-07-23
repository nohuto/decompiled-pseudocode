/*
 * XREFs of LdrImageDirectoryEntryToLoadConfig @ 0x1406831B4
 * Callers:
 *     RtlIsImageFullyRetpolined @ 0x1401B6140 (RtlIsImageFullyRetpolined.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1402F6908 (RtlGuardCheckLongJumpTarget.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x1402F7794 (RtlpCaptureDynamicRelocationTableRva.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x1402F7860 (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x14068311C (LdrpFetchAddressOfSecurityCookie.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14009D7A0 (RtlImageNtHeaderEx.c)
 *     RtlImageDirectoryEntryToData @ 0x1400F2CC0 (RtlImageDirectoryEntryToData.c)
 *     RtlWow64GetEquivalentMachineCHPE @ 0x1400F55CC (RtlWow64GetEquivalentMachineCHPE.c)
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
