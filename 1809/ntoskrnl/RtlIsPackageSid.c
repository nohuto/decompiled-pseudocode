/*
 * XREFs of RtlIsPackageSid @ 0x140654260
 * Callers:
 *     ObpVerifyAccessToBoundaryEntry @ 0x140654070 (ObpVerifyAccessToBoundaryEntry.c)
 *     NtCreateLowBoxToken @ 0x140654F90 (NtCreateLowBoxToken.c)
 *     SepFilterToken @ 0x140657CEC (SepFilterToken.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401C5BB0 (RtlCompareMemory.c)
 */

bool __fastcall RtlIsPackageSid(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == 1
      && RtlCompareMemory((const void *)(a1 + 2), &RtlpAppPackageAuthority, 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == 2;
}
