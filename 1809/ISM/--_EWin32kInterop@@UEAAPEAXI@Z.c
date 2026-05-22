/*
 * XREFs of ??_EWin32kInterop@@UEAAPEAXI@Z @ 0x1800812B0
 * Callers:
 *     ??_EWin32kInterop@@WBI@EAAPEAXI@Z @ 0x180085FC0 (--_EWin32kInterop@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1Win32kInterop@@UEAA@XZ @ 0x1800812FC (--1Win32kInterop@@UEAA@XZ.c)
 */

Win32kInterop *__fastcall Win32kInterop::`vector deleting destructor'(Win32kInterop *this, char a2)
{
  Win32kInterop::~Win32kInterop(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
