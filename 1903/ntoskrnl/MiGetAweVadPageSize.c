/*
 * XREFs of MiGetAweVadPageSize @ 0x14089687C
 * Callers:
 *     MiVadPageTableChargeLevel @ 0x140052AF0 (MiVadPageTableChargeLevel.c)
 * Callees:
 *     ExGetCallBackBlockRoutine @ 0x14013D1D0 (ExGetCallBackBlockRoutine.c)
 */

_BOOL8 __fastcall MiGetAweVadPageSize(__int64 a1)
{
  _DWORD *v1; // rcx

  v1 = *(_DWORD **)(a1 + 8);
  return v1 && (*v1 & 1) == 0 && (unsigned __int64)ExGetCallBackBlockRoutine((__int64)v1) >= 0x200;
}
