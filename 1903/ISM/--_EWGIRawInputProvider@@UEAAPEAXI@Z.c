/*
 * XREFs of ??_EWGIRawInputProvider@@UEAAPEAXI@Z @ 0x1800A74B0
 * Callers:
 *     ??_EWGIRawInputProvider@@WBA@EAAPEAXI@Z @ 0x1800388F0 (--_EWGIRawInputProvider@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x180025CB0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ??1WGIRawInputProvider@@UEAA@XZ @ 0x1800A734C (--1WGIRawInputProvider@@UEAA@XZ.c)
 */

WGIRawInputProvider *__fastcall WGIRawInputProvider::`vector deleting destructor'(WGIRawInputProvider *this, char a2)
{
  WGIRawInputProvider::~WGIRawInputProvider(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
