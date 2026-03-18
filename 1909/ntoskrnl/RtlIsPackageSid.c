/*
 * XREFs of RtlIsPackageSid @ 0x14069E928
 * Callers:
 *     SepFilterToken @ 0x14061E840 (SepFilterToken.c)
 *     NtCreateLowBoxToken @ 0x14069CB70 (NtCreateLowBoxToken.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x14069E710 (ObpVerifyAccessToBoundaryEntry.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401CCD70 (RtlCompareMemory.c)
 */

bool __fastcall RtlIsPackageSid(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == 1
      && RtlCompareMemory((const void *)(a1 + 2), &RtlpAppPackageAuthority, 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == 2;
}
