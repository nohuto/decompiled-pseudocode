/*
 * XREFs of ??_GInputStateManager@@MEAAPEAXI@Z @ 0x18009286C
 * Callers:
 *     ??_EInputStateManager@@OBI@EAAPEAXI@Z @ 0x1800387B0 (--_EInputStateManager@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x180025CB0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ??1InputStateManager@@MEAA@XZ @ 0x180092698 (--1InputStateManager@@MEAA@XZ.c)
 */

InputStateManager *__fastcall InputStateManager::`scalar deleting destructor'(InputStateManager *this, char a2)
{
  InputStateManager::~InputStateManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
