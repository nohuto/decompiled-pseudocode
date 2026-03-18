/*
 * XREFs of LdrImageDirectoryEntryToLoadConfig @ 0x140710B3C
 * Callers:
 *     RtlIsImageFullyRetpolined @ 0x140154A88 (RtlIsImageFullyRetpolined.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x14018814C (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x140188284 (RtlpCaptureDynamicRelocationTableRva.c)
 *     RtlGuardCheckLongJumpTarget @ 0x140314D54 (RtlGuardCheckLongJumpTarget.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x140710A2C (LdrpFetchAddressOfSecurityCookie.c)
 * Callees:
 *     RtlWow64GetEquivalentMachineCHPE @ 0x1400041F4 (RtlWow64GetEquivalentMachineCHPE.c)
 *     RtlImageNtHeaderEx @ 0x14005F3C0 (RtlImageNtHeaderEx.c)
 *     RtlImageDirectoryEntryToData @ 0x1400E8950 (RtlImageDirectoryEntryToData.c)
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
