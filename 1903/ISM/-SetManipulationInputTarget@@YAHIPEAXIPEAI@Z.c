/*
 * XREFs of ?SetManipulationInputTarget@@YAHIPEAXIPEAI@Z @ 0x1800533D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall SetManipulationInputTarget(unsigned int a1, void *a2, unsigned int a3, unsigned int *a4)
{
  return NtUserSetManipulationInputTarget(a1, a2, a3, a4);
}
