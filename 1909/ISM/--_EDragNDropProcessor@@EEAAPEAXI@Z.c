/*
 * XREFs of ??_EDragNDropProcessor@@EEAAPEAXI@Z @ 0x18006A880
 * Callers:
 *     ??_EDragNDropProcessor@@G7EAAPEAXI@Z @ 0x180037F30 (--_EDragNDropProcessor@@G7EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x1800257D0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ??1DragNDropProcessor@@EEAA@XZ @ 0x18006A568 (--1DragNDropProcessor@@EEAA@XZ.c)
 */

DragNDropProcessor *__fastcall DragNDropProcessor::`vector deleting destructor'(DragNDropProcessor *this, char a2)
{
  DragNDropProcessor::~DragNDropProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
