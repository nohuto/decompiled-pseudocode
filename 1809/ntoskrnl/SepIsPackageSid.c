/*
 * XREFs of SepIsPackageSid @ 0x14011F500
 * Callers:
 *     SepMaximumAccessCheck @ 0x1400AADA0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x1400AB370 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x14015C1B4 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x14015C2D4 (SepNormalAccessCheckEx.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401C5BD0 (RtlCompareMemory.c)
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
