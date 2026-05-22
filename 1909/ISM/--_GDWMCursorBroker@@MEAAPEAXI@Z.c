/*
 * XREFs of ??_GDWMCursorBroker@@MEAAPEAXI@Z @ 0x18014368C
 * Callers:
 *     ??_EDWMCursorBroker@@OBI@EAAPEAXI@Z @ 0x18003A000 (--_EDWMCursorBroker@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x1800257D0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ??1DWMCursorBroker@@MEAA@XZ @ 0x18014325C (--1DWMCursorBroker@@MEAA@XZ.c)
 */

DWMCursorBroker *__fastcall DWMCursorBroker::`scalar deleting destructor'(DWMCursorBroker *this, char a2)
{
  DWMCursorBroker::~DWMCursorBroker(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
