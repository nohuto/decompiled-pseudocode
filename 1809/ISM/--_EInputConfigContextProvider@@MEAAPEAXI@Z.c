/*
 * XREFs of ??_EInputConfigContextProvider@@MEAAPEAXI@Z @ 0x18009DBC8
 * Callers:
 *     ??_EInputConfigContextProvider@@O7EAAPEAXI@Z @ 0x18009E950 (--_EInputConfigContextProvider@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1InputConfigContextProvider@@MEAA@XZ @ 0x18009DC14 (--1InputConfigContextProvider@@MEAA@XZ.c)
 */

InputConfigContextProvider *__fastcall InputConfigContextProvider::`vector deleting destructor'(
        InputConfigContextProvider *this,
        char a2)
{
  InputConfigContextProvider::~InputConfigContextProvider(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
