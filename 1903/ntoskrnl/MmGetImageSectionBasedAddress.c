/*
 * XREFs of MmGetImageSectionBasedAddress @ 0x140887644
 * Callers:
 *     PspAllocateProcess @ 0x14068E52C (PspAllocateProcess.c)
 * Callees:
 *     MiSectionControlArea @ 0x1400717E0 (MiSectionControlArea.c)
 */

__int64 __fastcall MmGetImageSectionBasedAddress(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)MiSectionControlArea(a1) + 32LL);
}
