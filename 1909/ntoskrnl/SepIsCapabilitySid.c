/*
 * XREFs of SepIsCapabilitySid @ 0x140086D84
 * Callers:
 *     SepMaximumAccessCheck @ 0x1400866E0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x1400A7380 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x140156D98 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140156EB8 (SepNormalAccessCheckEx.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401CCD70 (RtlCompareMemory.c)
 */

bool __fastcall SepIsCapabilitySid(__int64 a1)
{
  __int64 v2; // rdi

  v2 = SeCapabilityPrefixSid;
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == *(_BYTE *)SeCapabilityPrefixSid
      && RtlCompareMemory((const void *)(a1 + 2), (const void *)(SeCapabilityPrefixSid + 2), 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == *(_DWORD *)(v2 + 8);
}
