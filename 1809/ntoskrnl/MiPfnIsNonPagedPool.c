/*
 * XREFs of MiPfnIsNonPagedPool @ 0x1402B913C
 * Callers:
 *     MiIsPfnLocked @ 0x14013B198 (MiIsPfnLocked.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 */

_BOOL8 __fastcall MiPfnIsNonPagedPool(__int64 a1)
{
  __int64 v1; // rdx

  return (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) == 0
      && (((unsigned int)MiGetSystemRegionType((__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16) - 5) & 0xFFFFFFF7) == 0
      && (*(_BYTE *)(v1 + 34) & 7) == 6;
}
