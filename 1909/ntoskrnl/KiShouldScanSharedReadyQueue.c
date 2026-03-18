/*
 * XREFs of KiShouldScanSharedReadyQueue @ 0x140011F00
 * Callers:
 *     KiQuantumEnd @ 0x140011130 (KiQuantumEnd.c)
 *     KeClockInterruptNotify @ 0x1400348F0 (KeClockInterruptNotify.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiShouldScanSharedReadyQueue(__int64 a1)
{
  return *(_DWORD *)(a1 + 24912) || (*(_BYTE *)(a1 + 35) & 2) != 0 && *(_QWORD *)(a1 + 24896);
}
