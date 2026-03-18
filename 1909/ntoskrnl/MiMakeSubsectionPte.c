/*
 * XREFs of MiMakeSubsectionPte @ 0x1400C01A8
 * Callers:
 *     MiBuildImageControlArea @ 0x1406457E8 (MiBuildImageControlArea.c)
 *     MiInitializePrototypePtes @ 0x14064F444 (MiInitializePrototypePtes.c)
 *     MiParseImageSectionHeaders @ 0x14064F560 (MiParseImageSectionHeaders.c)
 *     MiAllocatePerSessionProtos @ 0x1406E9D44 (MiAllocatePerSessionProtos.c)
 *     MiAllocateFileExtents @ 0x14088B6A0 (MiAllocateFileExtents.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeSubsectionPte(__int64 a1)
{
  return MiSwizzleInvalidPte(16 * ((a1 << 12) | *(_WORD *)(a1 + 32) & 0x3E | 0x40));
}
