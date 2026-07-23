/*
 * XREFs of IopQueryProcessorInitValues @ 0x140763F84
 * Callers:
 *     IoInitializeProcessor @ 0x14072A5D0 (IoInitializeProcessor.c)
 *     IoEnableIrpCredits @ 0x14081A4E0 (IoEnableIrpCredits.c)
 *     IoInitSystemPreDrivers @ 0x1409B2F54 (IoInitSystemPreDrivers.c)
 * Callees:
 *     MmIsThisAnNtAsSystem @ 0x14000EC80 (MmIsThisAnNtAsSystem.c)
 */

__int64 __fastcall IopQueryProcessorInitValues(__int64 a1)
{
  BOOLEAN IsThisAnNtAsSystem; // al
  __int16 v3; // r10
  unsigned int v4; // kr00_4
  __int64 result; // rax

  IsThisAnNtAsSystem = MmIsThisAnNtAsSystem();
  v3 = IsThisAnNtAsSystem != 0 ? 96 : 32;
  *(_WORD *)(a1 + 6) = v3;
  *(_WORD *)a1 = v3;
  *(_WORD *)(a1 + 4) = IsThisAnNtAsSystem != 0 ? 128 : 64;
  *(_WORD *)(a1 + 8) = IsThisAnNtAsSystem != 0 ? 256 : 128;
  *(_DWORD *)(a1 + 28) = IsThisAnNtAsSystem != 0 ? 0x10000 : 1536;
  *(_WORD *)(a1 + 2) = *(_WORD *)(a1 + 4);
  v4 = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(a1 + 12) = 280;
  *(_DWORD *)(a1 + 28) = v4 / 0x500;
  *(_DWORD *)(a1 + 16) = 72 * IopMediumIrpStackLocations + 208;
  result = (unsigned int)IopLargeIrpStackLocations;
  *(_DWORD *)(a1 + 24) = 184;
  *(_DWORD *)(a1 + 20) = 72 * result + 208;
  return result;
}
