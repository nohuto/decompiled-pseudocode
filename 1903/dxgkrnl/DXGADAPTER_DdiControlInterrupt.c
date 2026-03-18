/*
 * XREFs of DXGADAPTER_DdiControlInterrupt @ 0x1C00150A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z @ 0x1C0138624 (-DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z.c)
 */

__int64 __fastcall DXGADAPTER_DdiControlInterrupt(DXGADAPTER *a1, enum _DXGK_INTERRUPT_TYPE a2, unsigned __int8 a3)
{
  return DXGADAPTER::DdiControlInterrupt(a1, a2, a3);
}
