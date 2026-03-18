/*
 * XREFs of ?IsManipulationCaptured@CManipulation@@UEAA_NXZ @ 0x1801E13F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CManipulation::IsManipulationCaptured(CManipulation *this)
{
  return *((_DWORD *)this + 95) != 0;
}
