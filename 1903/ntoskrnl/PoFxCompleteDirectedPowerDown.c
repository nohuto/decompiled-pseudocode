/*
 * XREFs of PoFxCompleteDirectedPowerDown @ 0x1402F1CB0
 * Callers:
 *     <none>
 * Callees:
 *     PopFxDerefAndCompleteDirectedPowerTransition @ 0x1402F2F64 (PopFxDerefAndCompleteDirectedPowerTransition.c)
 */

__int64 __fastcall PoFxCompleteDirectedPowerDown(ULONG_PTR a1)
{
  return PopFxDerefAndCompleteDirectedPowerTransition(a1);
}
