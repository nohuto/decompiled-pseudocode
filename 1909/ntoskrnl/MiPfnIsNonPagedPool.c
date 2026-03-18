/*
 * XREFs of MiPfnIsNonPagedPool @ 0x1402CF35C
 * Callers:
 *     MiIsPfnLocked @ 0x14015B204 (MiIsPfnLocked.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 */

_BOOL8 __fastcall MiPfnIsNonPagedPool(__int64 a1)
{
  __int64 v1; // rdx

  return (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) == 0
      && (unsigned int)MiGetSystemRegionType((__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16) == 5
      && (*(_BYTE *)(v1 + 34) & 7) == 6;
}
