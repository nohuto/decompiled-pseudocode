/*
 * XREFs of MiMakeSubsectionPte @ 0x1400E0328
 * Callers:
 *     MiInitializePrototypePtes @ 0x140689274 (MiInitializePrototypePtes.c)
 *     MiParseImageSectionHeaders @ 0x140689390 (MiParseImageSectionHeaders.c)
 *     MiBuildImageControlArea @ 0x14068BB74 (MiBuildImageControlArea.c)
 *     MiAllocatePerSessionProtos @ 0x1406E8AF8 (MiAllocatePerSessionProtos.c)
 *     MiAllocateFileExtents @ 0x14088BE80 (MiAllocateFileExtents.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeSubsectionPte(__int64 a1)
{
  return MiSwizzleInvalidPte(16 * ((a1 << 12) | *(_WORD *)(a1 + 32) & 0x3E | 0x40));
}
