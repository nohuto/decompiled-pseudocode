/*
 * XREFs of PsSetSystemPagePriorityThread @ 0x1400DA538
 * Callers:
 *     SmSetThreadSystemPagePriority @ 0x140147788 (SmSetThreadSystemPagePriority.c)
 *     MiRelocateImage @ 0x140651084 (MiRelocateImage.c)
 *     MiValidateSectionCreate @ 0x140653FD0 (MiValidateSectionCreate.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 */

__int64 __fastcall PsSetSystemPagePriorityThread(__int64 a1, int a2)
{
  int v2; // eax
  int v3; // edx
  unsigned int v4; // ebx
  unsigned int v5; // eax

  --*(_WORD *)(a1 + 486);
  v2 = *(_DWORD *)(a1 + 1752);
  v3 = a2 << 9;
  if ( (v2 & 0x100) != 0 )
  {
    v4 = (BYTE1(v2) >> 1) & 7;
    v5 = v2 & 0xFFFFF1FF;
  }
  else
  {
    v4 = -1;
    v5 = v2 | 0x100;
  }
  *(_DWORD *)(a1 + 1752) = v3 | v5;
  KiLeaveGuardedRegionUnsafe(a1);
  return v4;
}
