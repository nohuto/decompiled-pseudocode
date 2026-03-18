/*
 * XREFs of DxgkChangeVideoMemoryReservation @ 0x1C02086B0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1C02086CC (DxgkChangeVideoMemoryReservationInternal.c)
 */

__int64 __fastcall DxgkChangeVideoMemoryReservation(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return DxgkChangeVideoMemoryReservationInternal(a1, a2, 0LL);
}
