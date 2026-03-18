/*
 * XREFs of RtlIsCapabilitySid @ 0x14069D16C
 * Callers:
 *     RtlCheckTokenCapability @ 0x14030BCE0 (RtlCheckTokenCapability.c)
 *     SepFilterToken @ 0x14061E840 (SepFilterToken.c)
 *     NtCreateLowBoxToken @ 0x14069CB70 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401CCD70 (RtlCompareMemory.c)
 */

bool __fastcall RtlIsCapabilitySid(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == 1
      && RtlCompareMemory((const void *)(a1 + 2), &RtlpAppPackageAuthority, 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == 3;
}
