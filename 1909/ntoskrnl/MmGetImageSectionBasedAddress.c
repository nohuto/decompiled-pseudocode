/*
 * XREFs of MmGetImageSectionBasedAddress @ 0x140886E70
 * Callers:
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 * Callees:
 *     MiSectionControlArea @ 0x140071A50 (MiSectionControlArea.c)
 */

__int64 __fastcall MmGetImageSectionBasedAddress(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)MiSectionControlArea(a1) + 32LL);
}
