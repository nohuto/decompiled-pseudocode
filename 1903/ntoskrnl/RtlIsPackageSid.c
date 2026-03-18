/*
 * XREFs of RtlIsPackageSid @ 0x140680488
 * Callers:
 *     SepFilterToken @ 0x14061CD30 (SepFilterToken.c)
 *     NtCreateLowBoxToken @ 0x14067FAD0 (NtCreateLowBoxToken.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140680270 (ObpVerifyAccessToBoundaryEntry.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401CC1F0 (RtlCompareMemory.c)
 */

bool __fastcall RtlIsPackageSid(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == 1
      && RtlCompareMemory((const void *)(a1 + 2), &RtlpAppPackageAuthority, 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == 2;
}
