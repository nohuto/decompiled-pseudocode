/*
 * XREFs of HUBPSM20_InitiatingResetPort @ 0x1C000FFA0
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_ResetPortUsingControlTransfer @ 0x1C00040F8 (HUBHTX_ResetPortUsingControlTransfer.c)
 */

__int64 __fastcall HUBPSM20_InitiatingResetPort(__int64 a1)
{
  HUBHTX_ResetPortUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
