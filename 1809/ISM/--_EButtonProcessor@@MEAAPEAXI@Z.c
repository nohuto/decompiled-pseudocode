/*
 * XREFs of ??_EButtonProcessor@@MEAAPEAXI@Z @ 0x1800EA54C
 * Callers:
 *     ??_EButtonProcessor@@O7EAAPEAXI@Z @ 0x1800EB860 (--_EButtonProcessor@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1ButtonProcessor@@MEAA@XZ @ 0x1800EA598 (--1ButtonProcessor@@MEAA@XZ.c)
 */

ButtonProcessor *__fastcall ButtonProcessor::`vector deleting destructor'(ButtonProcessor *this, char a2)
{
  ButtonProcessor::~ButtonProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
