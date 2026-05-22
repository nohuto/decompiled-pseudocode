/*
 * XREFs of ??_GSystemContextProvider@@MEAAPEAXI@Z @ 0x18009E970
 * Callers:
 *     ??_ESystemContextProvider@@O7EAAPEAXI@Z @ 0x18009ECA0 (--_ESystemContextProvider@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1SystemContextProvider@@MEAA@XZ @ 0x18009E9BC (--1SystemContextProvider@@MEAA@XZ.c)
 */

SystemContextProvider *__fastcall SystemContextProvider::`scalar deleting destructor'(
        SystemContextProvider *this,
        char a2)
{
  SystemContextProvider::~SystemContextProvider(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
