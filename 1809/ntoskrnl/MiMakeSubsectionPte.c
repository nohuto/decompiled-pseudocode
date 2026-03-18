/*
 * XREFs of MiMakeSubsectionPte @ 0x140095B00
 * Callers:
 *     MiBuildImageControlArea @ 0x14061DA70 (MiBuildImageControlArea.c)
 *     MiParseImageSectionHeaders @ 0x14061E300 (MiParseImageSectionHeaders.c)
 *     MiInitializePrototypePtes @ 0x14061F030 (MiInitializePrototypePtes.c)
 *     MiAllocatePerSessionProtos @ 0x1406C9210 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeSubsectionPte(__int64 a1)
{
  return MiSwizzleInvalidPte(16 * ((a1 << 12) | *(_WORD *)(a1 + 32) & 0x3E | 0x40));
}
