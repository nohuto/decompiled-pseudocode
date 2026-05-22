/*
 * XREFs of ??_EHidLampArrayDevice@@UEAAPEAXI@Z @ 0x1800B3160
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x1800257D0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ??1HidLampArrayDevice@@UEAA@XZ @ 0x1800B2F2C (--1HidLampArrayDevice@@UEAA@XZ.c)
 */

WCHAR *__fastcall HidLampArrayDevice::`vector deleting destructor'(WCHAR *this, const struct std::nothrow_t *a2)
{
  char v2; // di

  v2 = (char)a2;
  HidLampArrayDevice::~HidLampArrayDevice(this, a2);
  if ( (v2 & 1) != 0 )
  {
    if ( (v2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents((MPCEyeGazeProcessor *)this);
    else
      free(this);
  }
  return this;
}
