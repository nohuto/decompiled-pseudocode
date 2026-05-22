/*
 * XREFs of ??_ESystemButtonProcessor@@UEAAPEAXI@Z @ 0x180035EBC
 * Callers:
 *     ??_ESystemButtonProcessor@@W7EAAPEAXI@Z @ 0x180039670 (--_ESystemButtonProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x180025CB0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 */

SystemButtonProcessor *__fastcall SystemButtonProcessor::`vector deleting destructor'(
        SystemButtonProcessor *this,
        char a2)
{
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 3);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
