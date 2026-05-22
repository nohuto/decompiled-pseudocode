/*
 * XREFs of ??_GDragNDropProcessorLegacy@@EEAAPEAXI@Z @ 0x1800FE6E4
 * Callers:
 *     ??_EDragNDropProcessorLegacy@@G7EAAPEAXI@Z @ 0x1800394B0 (--_EDragNDropProcessorLegacy@@G7EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x180025CB0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ??1DragNDropProcessorLegacy@@EEAA@XZ @ 0x1800FE5DC (--1DragNDropProcessorLegacy@@EEAA@XZ.c)
 */

DragNDropProcessorLegacy *__fastcall DragNDropProcessorLegacy::`scalar deleting destructor'(
        DragNDropProcessorLegacy *this,
        char a2)
{
  DragNDropProcessorLegacy::~DragNDropProcessorLegacy(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
