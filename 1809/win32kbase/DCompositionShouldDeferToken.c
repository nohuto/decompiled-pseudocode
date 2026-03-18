/*
 * XREFs of DCompositionShouldDeferToken @ 0x1C006DD00
 * Callers:
 *     <none>
 * Callees:
 *     ?ShouldDeferToken@CSynchronizationManager@DirectComposition@@SA_N_K0@Z @ 0x1C006DD18 (-ShouldDeferToken@CSynchronizationManager@DirectComposition@@SA_N_K0@Z.c)
 */

_BOOL8 __fastcall DCompositionShouldDeferToken(unsigned __int64 a1, unsigned __int64 a2)
{
  return DirectComposition::CSynchronizationManager::ShouldDeferToken(a1, a2);
}
