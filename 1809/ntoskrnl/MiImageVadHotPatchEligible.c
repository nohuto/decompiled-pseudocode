/*
 * XREFs of MiImageVadHotPatchEligible @ 0x1405EF758
 * Callers:
 *     MiSetProtectionOnSection @ 0x140071E70 (MiSetProtectionOnSection.c)
 *     MiSetImageHotPatchAllowed @ 0x140859224 (MiSetImageHotPatchAllowed.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiImageVadHotPatchEligible(__int64 a1)
{
  return MiUserHotPatchReserveSize
      && (*(_DWORD *)(a1 + 64) & 0x1000000) == 0
      && (*(_BYTE *)(a1 + 48) & 0xF8) == 0x38
      && (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))
       - (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
       + 1 > *(unsigned int *)(***(_QWORD ***)(a1 + 72) + 8LL);
}
