/*
 * XREFs of LdrImageDirectoryEntryToLoadConfig @ 0x14070ED5C
 * Callers:
 *     RtlIsImageFullyRetpolined @ 0x1401543E8 (RtlIsImageFullyRetpolined.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x140187B9C (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x140187CD4 (RtlpCaptureDynamicRelocationTableRva.c)
 *     RtlGuardCheckLongJumpTarget @ 0x140315304 (RtlGuardCheckLongJumpTarget.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x14070EC4C (LdrpFetchAddressOfSecurityCookie.c)
 * Callees:
 *     RtlWow64GetEquivalentMachineCHPE @ 0x140004164 (RtlWow64GetEquivalentMachineCHPE.c)
 *     RtlImageNtHeaderEx @ 0x14005F320 (RtlImageNtHeaderEx.c)
 *     RtlImageDirectoryEntryToData @ 0x1400AFB30 (RtlImageDirectoryEntryToData.c)
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
