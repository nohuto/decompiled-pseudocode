/*
 * XREFs of ??_GRIMRawInputProvider@@MEAAPEAXI@Z @ 0x180098D50
 * Callers:
 *     ??_ERIMRawInputProvider@@O7EAAPEAXI@Z @ 0x1800388A0 (--_ERIMRawInputProvider@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x180025CB0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ??1RIMRawInputProvider@@MEAA@XZ @ 0x180098AD0 (--1RIMRawInputProvider@@MEAA@XZ.c)
 */

RIMRawInputProvider *__fastcall RIMRawInputProvider::`scalar deleting destructor'(
        RIMRawInputProvider *this,
        __int64 a2)
{
  char v2; // di

  v2 = a2;
  RIMRawInputProvider::~RIMRawInputProvider(this, a2);
  if ( (v2 & 1) != 0 )
  {
    if ( (v2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
