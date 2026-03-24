/*
 * XREFs of RtlIsPackageSid @ 0x140654240
 * Callers:
 *     ObpVerifyAccessToBoundaryEntry @ 0x140654050 (ObpVerifyAccessToBoundaryEntry.c)
 *     NtCreateLowBoxToken @ 0x140654F70 (NtCreateLowBoxToken.c)
 *     SepFilterToken @ 0x140657CCC (SepFilterToken.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401C5BD0 (RtlCompareMemory.c)
 */

bool __fastcall RtlIsPackageSid(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == 1
      && RtlCompareMemory((const void *)(a1 + 2), &RtlpAppPackageAuthority, 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == 2;
}
