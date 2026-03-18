/*
 * XREFs of KiShouldScanSharedReadyQueue @ 0x140011CD0
 * Callers:
 *     KiQuantumEnd @ 0x140010F00 (KiQuantumEnd.c)
 *     KeClockInterruptNotify @ 0x140034500 (KeClockInterruptNotify.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiShouldScanSharedReadyQueue(__int64 a1)
{
  return *(_DWORD *)(a1 + 24912) || (*(_BYTE *)(a1 + 35) & 2) != 0 && *(_QWORD *)(a1 + 24896);
}
