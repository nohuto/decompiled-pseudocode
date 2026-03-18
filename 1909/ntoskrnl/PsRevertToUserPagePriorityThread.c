/*
 * XREFs of PsRevertToUserPagePriorityThread @ 0x14008E600
 * Callers:
 *     SmSetThreadSystemPagePriority @ 0x1401622F4 (SmSetThreadSystemPagePriority.c)
 *     MiValidateSectionCreate @ 0x1406423A4 (MiValidateSectionCreate.c)
 *     MiRelocateImage @ 0x140644A3C (MiRelocateImage.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 */

__int64 __fastcall PsRevertToUserPagePriorityThread(__int64 a1, int a2)
{
  unsigned int v2; // eax

  --*(_WORD *)(a1 + 486);
  if ( a2 == -1 )
    v2 = *(_DWORD *)(a1 + 1768) & 0xFFFFF0FF;
  else
    v2 = (a2 << 9) | *(_DWORD *)(a1 + 1768) & 0xFFFFF1FF;
  *(_DWORD *)(a1 + 1768) = v2;
  return KiLeaveGuardedRegionUnsafe(a1);
}
