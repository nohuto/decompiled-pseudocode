/*
 * XREFs of RtlIsCapabilitySid @ 0x18000E910
 * Callers:
 *     RtlCheckTokenCapability @ 0x18000E960 (RtlCheckTokenCapability.c)
 * Callees:
 *     RtlCompareMemory @ 0x1800A0E80 (RtlCompareMemory.c)
 */

bool __fastcall RtlIsCapabilitySid(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == 1
      && RtlCompareMemory((const void *)(a1 + 2), &unk_18011CB70, 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == 3;
}
