/*
 * XREFs of NdisWdfMiniportStarted @ 0x1C009F010
 * Callers:
 *     <none>
 * Callees:
 *     ndisMSetMiniportReadyForBinding @ 0x1C00FD3E8 (ndisMSetMiniportReadyForBinding.c)
 */

__int64 __fastcall NdisWdfMiniportStarted(char a1)
{
  return ndisMSetMiniportReadyForBinding(a1);
}
