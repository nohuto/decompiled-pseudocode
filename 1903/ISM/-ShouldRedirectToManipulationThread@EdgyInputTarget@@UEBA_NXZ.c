/*
 * XREFs of ?ShouldRedirectToManipulationThread@EdgyInputTarget@@UEBA_NXZ @ 0x180104AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall EdgyInputTarget::ShouldRedirectToManipulationThread(EdgyInputTarget *this)
{
  return *((_DWORD *)this + 6) != 0;
}
