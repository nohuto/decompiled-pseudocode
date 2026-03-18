/*
 * XREFs of ?IsRoute@TargetingInfo@@QEBA_NXZ @ 0x1802385B0
 * Callers:
 *     ?TargetPointer@CGlobalManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x18023AE50 (-TargetPointer@CGlobalManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame.c)
 * Callees:
 *     <none>
 */

bool __fastcall TargetingInfo::IsRoute(TargetingInfo *this)
{
  bool result; // al

  if ( *(_DWORD *)this == 2 )
    return 0;
  result = 1;
  if ( *(_DWORD *)this == 1 && !*((_QWORD *)this + 1) )
    return 0;
  return result;
}
