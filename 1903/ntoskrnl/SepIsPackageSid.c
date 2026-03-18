/*
 * XREFs of SepIsPackageSid @ 0x14008690C
 * Callers:
 *     SepMaximumAccessCheck @ 0x1400862C0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x1400C7500 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x1401566F8 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140156818 (SepNormalAccessCheckEx.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401CC1F0 (RtlCompareMemory.c)
 */

bool __fastcall SepIsPackageSid(__int64 a1)
{
  __int64 v2; // rdi

  v2 = SePackagePrefixSid;
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == *(_BYTE *)SePackagePrefixSid
      && RtlCompareMemory((const void *)(a1 + 2), (const void *)(SePackagePrefixSid + 2), 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == *(_DWORD *)(v2 + 8);
}
