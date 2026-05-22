/*
 * XREFs of ?OnDeviceUpdate@MPCEyeGazeProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x18013EC10
 * Callers:
 *     <none>
 * Callees:
 *     ?OnETCalibrationRequested@MPCManager@@QEAAXI@Z @ 0x18007E980 (-OnETCalibrationRequested@MPCManager@@QEAAXI@Z.c)
 */

__int64 __fastcall MPCEyeGazeProcessor::OnDeviceUpdate(MPCEyeGazeProcessor *this, struct DeviceInfo *a2)
{
  unsigned int v2; // edx

  if ( *((_DWORD *)a2 + 2) == 1568 )
  {
    v2 = *((_DWORD *)a2 + 375);
    if ( v2 != *((_DWORD *)this + 1156) )
    {
      *((_DWORD *)this + 1156) = v2;
      if ( v2 )
        MPCManager::OnETCalibrationRequested(MPCManager::s_instance, v2);
    }
  }
  return 0LL;
}
