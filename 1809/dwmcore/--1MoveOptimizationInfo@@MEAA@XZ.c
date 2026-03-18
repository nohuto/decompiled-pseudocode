/*
 * XREFs of ??1MoveOptimizationInfo@@MEAA@XZ @ 0x18016188C
 * Callers:
 *     ??_GMoveOptimizationInfo@@MEAAPEAXI@Z @ 0x180161B30 (--_GMoveOptimizationInfo@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MoveOptimizationInfo::~MoveOptimizationInfo(MoveOptimizationInfo *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &MoveOptimizationInfo::`vftable';
  v2 = (void *)*((_QWORD *)this + 6);
  if ( v2 )
    DeleteObject(v2);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
