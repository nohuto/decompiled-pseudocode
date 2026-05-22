/*
 * XREFs of ??_EWin32kInterop@@UEAAPEAXI@Z @ 0x1800BB5FC
 * Callers:
 *     ??_EWin32kInterop@@WBA@EAAPEAXI@Z @ 0x180038720 (--_EWin32kInterop@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x1800257D0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ??1Win32kInterop@@UEAA@XZ @ 0x1800BADE8 (--1Win32kInterop@@UEAA@XZ.c)
 */

Win32kInterop *__fastcall Win32kInterop::`vector deleting destructor'(Win32kInterop *this, __int64 a2)
{
  char v2; // di

  v2 = a2;
  Win32kInterop::~Win32kInterop(this, a2);
  if ( (v2 & 1) != 0 )
  {
    if ( (v2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
