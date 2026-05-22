/*
 * XREFs of ??_EContextualProcessorManager@@MEAAPEAXI@Z @ 0x1800F9290
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x1800257D0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ??1ContextualProcessorManager@@MEAA@XZ @ 0x1800F91DC (--1ContextualProcessorManager@@MEAA@XZ.c)
 */

ContextualProcessorManager *__fastcall ContextualProcessorManager::`vector deleting destructor'(
        ContextualProcessorManager *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // di

  v3 = a2;
  ContextualProcessorManager::~ContextualProcessorManager(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    if ( (v3 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
