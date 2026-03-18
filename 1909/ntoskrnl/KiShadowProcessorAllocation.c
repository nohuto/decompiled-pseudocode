/*
 * XREFs of KiShadowProcessorAllocation @ 0x14059F9C8
 * Callers:
 *     KeWriteProtectProcessorState @ 0x14059F378 (KeWriteProtectProcessorState.c)
 *     KiEnableKvaShadowing @ 0x14059F81C (KiEnableKvaShadowing.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14005EE50 (RtlImageNtHeader.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1400E8BC0 (RtlSectionTableFromVirtualAddress.c)
 *     MmCreateShadowMapping @ 0x14074EB40 (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x140892398 (MmDeleteShadowMapping.c)
 */

__int64 __fastcall KiShadowProcessorAllocation(__int64 a1, __int64 a2)
{
  int v4; // esi
  PIMAGE_NT_HEADERS v6; // rax
  _DWORD *v7; // rax
  unsigned int v8; // edx

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
      v7 = (_DWORD *)RtlSectionTableFromVirtualAddress(
                       (unsigned __int64)v6,
                       0x140000000LL,
                       (unsigned int)KiDivideErrorFaultShadow - 0x40000000);
      v8 = v7[2];
      if ( v8 <= v7[4] )
        v8 = v7[4];
      if ( !(unsigned int)MmCreateShadowMapping(0x140000000LL + (unsigned int)v7[3], (v8 + 4095) & 0xFFFFF000) )
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
