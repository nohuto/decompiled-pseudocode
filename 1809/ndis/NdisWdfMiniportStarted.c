/*
 * XREFs of NdisWdfMiniportStarted @ 0x1C0065320
 * Callers:
 *     <none>
 * Callees:
 *     ndisMSetMiniportReadyForBinding @ 0x1C00C87C0 (ndisMSetMiniportReadyForBinding.c)
 */

__int64 __fastcall NdisWdfMiniportStarted(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return ndisMSetMiniportReadyForBinding(a1, a2, 0x80000LL);
}
