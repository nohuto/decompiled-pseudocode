/*
 * XREFs of KiShadowProcessorAllocation @ 0x140573D84
 * Callers:
 *     KeWriteProtectProcessorState @ 0x1405733B8 (KeWriteProtectProcessorState.c)
 *     KiEnableKvaShadowing @ 0x140573BD8 (KiEnableKvaShadowing.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14009DA20 (RtlImageNtHeader.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1400F34D0 (RtlSectionTableFromVirtualAddress.c)
 *     MmCreateShadowMapping @ 0x14072B348 (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x14085A12C (MmDeleteShadowMapping.c)
 */

__int64 __fastcall KiShadowProcessorAllocation(__int64 a1, __int64 a2)
{
  int v4; // esi
  _IMAGE_NT_HEADERS64 *v6; // rax
  PIMAGE_SECTION_HEADER v7; // rax
  unsigned int PhysicalAddress; // edx

  if ( !KiKvaShadow )
    return 1LL;
  if ( (unsigned int)MmCreateShadowMapping(a2, 20480LL) )
  {
    v4 = 0;
    if ( !(unsigned int)MmCreateShadowMapping(a1 + 28288, 4096LL) )
      goto LABEL_11;
    v4 = 1;
    if ( !*(_DWORD *)(a1 + 36) )
    {
      v6 = RtlImageNtHeader((PVOID)0x140000000LL);
      v7 = RtlSectionTableFromVirtualAddress(
             v6,
             (PVOID)0x140000000LL,
             (unsigned int)KiDivideErrorFaultShadow - 0x40000000);
      PhysicalAddress = v7->Misc.PhysicalAddress;
      if ( PhysicalAddress <= v7->SizeOfRawData )
        PhysicalAddress = v7->SizeOfRawData;
      if ( !(unsigned int)MmCreateShadowMapping(
                            0x140000000LL + v7->VirtualAddress,
                            (PhysicalAddress + 4095) & 0xFFFFF000) )
      {
LABEL_11:
        MmDeleteShadowMapping(a2, 20480LL);
        if ( v4 )
          MmDeleteShadowMapping(a1 + 28288, 4096LL);
        return 0LL;
      }
    }
    return 1LL;
  }
  return 0LL;
}
