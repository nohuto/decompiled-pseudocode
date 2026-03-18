/*
 * XREFs of SepIsPackageSid @ 0x14011F4E0
 * Callers:
 *     SepMaximumAccessCheck @ 0x1400AAD80 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x1400AB350 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x14015C194 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x14015C2B4 (SepNormalAccessCheckEx.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401C5BB0 (RtlCompareMemory.c)
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
