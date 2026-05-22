/*
 * XREFs of ??_GButtonRecognizer@@MEAAPEAXI@Z @ 0x1800C59F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1ButtonRecognizer@@MEAA@XZ @ 0x1800C57E0 (--1ButtonRecognizer@@MEAA@XZ.c)
 */

ButtonRecognizer *__fastcall ButtonRecognizer::`scalar deleting destructor'(ButtonRecognizer *this, char a2)
{
  ButtonRecognizer::~ButtonRecognizer(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
