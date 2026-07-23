/*
 * XREFs of RtlIsPackageSid @ 0x140680488
 * Callers:
 *     SepFilterToken @ 0x14061CD30 (SepFilterToken.c)
 *     NtCreateLowBoxToken @ 0x14067FAD0 (NtCreateLowBoxToken.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140680270 (ObpVerifyAccessToBoundaryEntry.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401CC1F0 (RtlCompareMemory.c)
 */

BOOLEAN __cdecl RtlIsPackageSid(PSID Sid)
{
  return *((_BYTE *)Sid + 1) >= 2u
      && *(_BYTE *)Sid == 1
      && RtlCompareMemory((char *)Sid + 2, &RtlpAppPackageAuthority, 6uLL) == 6
      && *((_DWORD *)Sid + 2) == 2;
}
