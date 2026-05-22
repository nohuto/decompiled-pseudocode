/*
 * XREFs of ??_EDWMInputDisplay@@MEAAPEAXI@Z @ 0x1800C6508
 * Callers:
 *     ??_EDWMInputDisplay@@O7EAAPEAXI@Z @ 0x180038A10 (--_EDWMInputDisplay@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x1800257D0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 */

DWMInputDisplay *__fastcall DWMInputDisplay::`vector deleting destructor'(DWMInputDisplay *this, char a2)
{
  *(_QWORD *)this = &DWMInputDisplay::`vftable'{for `IInputDisplay'};
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
