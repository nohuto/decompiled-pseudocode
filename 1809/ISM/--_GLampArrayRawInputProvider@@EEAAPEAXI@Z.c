/*
 * XREFs of ??_GLampArrayRawInputProvider@@EEAAPEAXI@Z @ 0x1800702D8
 * Callers:
 *     ??_ELampArrayRawInputProvider@@GBA@EAAPEAXI@Z @ 0x180071430 (--_ELampArrayRawInputProvider@@GBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1LampArrayRawInputProvider@@EEAA@XZ @ 0x1800703F8 (--1LampArrayRawInputProvider@@EEAA@XZ.c)
 */

LampArrayRawInputProvider *__fastcall LampArrayRawInputProvider::`scalar deleting destructor'(
        LampArrayRawInputProvider *this,
        char a2)
{
  LampArrayRawInputProvider::~LampArrayRawInputProvider(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
