/*
 * XREFs of ??_GDWMFocusedInputTarget@@MEAAPEAXI@Z @ 0x18008E00C
 * Callers:
 *     ??_EDWMFocusedInputTarget@@OCA@EAAPEAXI@Z @ 0x18008EA50 (--_EDWMFocusedInputTarget@@OCA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1DWMFocusedInputTarget@@MEAA@XZ @ 0x18008E058 (--1DWMFocusedInputTarget@@MEAA@XZ.c)
 */

DWMFocusedInputTarget *__fastcall DWMFocusedInputTarget::`scalar deleting destructor'(
        DWMFocusedInputTarget *this,
        char a2)
{
  DWMFocusedInputTarget::~DWMFocusedInputTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
