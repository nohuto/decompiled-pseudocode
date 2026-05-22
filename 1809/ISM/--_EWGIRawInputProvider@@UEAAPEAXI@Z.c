/*
 * XREFs of ??_EWGIRawInputProvider@@UEAAPEAXI@Z @ 0x18006AA74
 * Callers:
 *     ??_EWGIRawInputProvider@@WBA@EAAPEAXI@Z @ 0x18006C7A0 (--_EWGIRawInputProvider@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1WGIRawInputProvider@@UEAA@XZ @ 0x18006AAC0 (--1WGIRawInputProvider@@UEAA@XZ.c)
 */

WGIRawInputProvider *__fastcall WGIRawInputProvider::`vector deleting destructor'(WGIRawInputProvider *this, char a2)
{
  WGIRawInputProvider::~WGIRawInputProvider(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
