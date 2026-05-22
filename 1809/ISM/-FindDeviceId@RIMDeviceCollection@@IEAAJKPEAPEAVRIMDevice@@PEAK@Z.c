/*
 * XREFs of ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x18005E988
 * Callers:
 *     ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x18005C930 (-SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z.c)
 *     ?OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18005CF90 (-OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z @ 0x18005D380 (-OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18005ED84 (-GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x180062694 (-DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180065250 (-OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z @ 0x180065600 (-OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180066E60 (-OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x180067170 (-OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180067880 (-OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?SendHeatDeviceCommand@HeatDeviceCollection@@QEAAJKPEAX@Z @ 0x180067AE0 (-SendHeatDeviceCommand@HeatDeviceCollection@@QEAAJKPEAX@Z.c)
 *     ?OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180067F50 (-OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@GazeDeviceCollection@@MEAAJKPEAXK@Z @ 0x180068190 (-OnInputReport@GazeDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnDeviceAttach@CameraControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800685A0 (-OnDeviceAttach@CameraControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@CameraControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800687F0 (-OnInputReport@CameraControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180069360 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x1800696C0 (-OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMDeviceCollection::FindDeviceId(
        RIMDeviceCollection *this,
        int a2,
        struct RIMDevice **a3,
        unsigned int *a4)
{
  __int64 result; // rax
  __int64 *v5; // r10
  unsigned int v6; // r9d
  __int64 v7; // rcx

  result = 0LL;
  v5 = (__int64 *)((char *)this + 624);
  v6 = 0;
  while ( 1 )
  {
    v7 = *v5;
    if ( *v5 )
    {
      if ( !*(_QWORD *)(v7 + 16) || *(_DWORD *)(v7 + 40) == a2 )
        break;
    }
    ++v6;
    ++v5;
    if ( v6 >= 0x100 )
      return 2147943568LL;
  }
  if ( a3 )
    *a3 = (struct RIMDevice *)v7;
  return result;
}
