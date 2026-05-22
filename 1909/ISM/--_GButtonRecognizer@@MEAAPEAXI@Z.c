/*
 * XREFs of ??_GButtonRecognizer@@MEAAPEAXI@Z @ 0x1800FCF10
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x1800257D0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ??1ButtonRecognizer@@MEAA@XZ @ 0x1800FCD7C (--1ButtonRecognizer@@MEAA@XZ.c)
 */

ButtonRecognizer *__fastcall ButtonRecognizer::`scalar deleting destructor'(ButtonRecognizer *this, char a2)
{
  ButtonRecognizer::~ButtonRecognizer(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
