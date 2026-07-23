/*
 * XREFs of PsRevertToUserPagePriorityThread @ 0x1400DA4D0
 * Callers:
 *     SmSetThreadSystemPagePriority @ 0x140147788 (SmSetThreadSystemPagePriority.c)
 *     MiRelocateImage @ 0x140651084 (MiRelocateImage.c)
 *     MiValidateSectionCreate @ 0x140653FD0 (MiValidateSectionCreate.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 */

__int64 __fastcall PsRevertToUserPagePriorityThread(__int64 a1, int a2)
{
  unsigned int v2; // eax

  --*(_WORD *)(a1 + 486);
  if ( a2 == -1 )
    v2 = *(_DWORD *)(a1 + 1752) & 0xFFFFF0FF;
  else
    v2 = (a2 << 9) | *(_DWORD *)(a1 + 1752) & 0xFFFFF1FF;
  *(_DWORD *)(a1 + 1752) = v2;
  return KiLeaveGuardedRegionUnsafe(a1);
}
