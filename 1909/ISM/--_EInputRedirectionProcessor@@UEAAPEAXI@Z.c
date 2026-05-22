/*
 * XREFs of ??_EInputRedirectionProcessor@@UEAAPEAXI@Z @ 0x180106AA4
 * Callers:
 *     ??_EInputRedirectionProcessor@@WBI@EAAPEAXI@Z @ 0x180039030 (--_EInputRedirectionProcessor@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x1800257D0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ??1InputRedirectionProcessor@@UEAA@XZ @ 0x180106A04 (--1InputRedirectionProcessor@@UEAA@XZ.c)
 */

InputRedirectionProcessor *__fastcall InputRedirectionProcessor::`vector deleting destructor'(
        InputRedirectionProcessor *this,
        char a2)
{
  InputRedirectionProcessor::~InputRedirectionProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
