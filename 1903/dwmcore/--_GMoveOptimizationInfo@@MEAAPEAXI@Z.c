/*
 * XREFs of ??_GMoveOptimizationInfo@@MEAAPEAXI@Z @ 0x18016C380
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     ??1MoveOptimizationInfo@@MEAA@XZ @ 0x18016C04C (--1MoveOptimizationInfo@@MEAA@XZ.c)
 */

MoveOptimizationInfo *__fastcall MoveOptimizationInfo::`scalar deleting destructor'(
        MoveOptimizationInfo *this,
        char a2)
{
  MoveOptimizationInfo::~MoveOptimizationInfo(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
