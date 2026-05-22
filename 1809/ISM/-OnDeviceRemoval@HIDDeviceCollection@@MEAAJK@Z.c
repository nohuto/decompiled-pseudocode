/*
 * XREFs of ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x1800696C0
 * Callers:
 *     ?OnDeviceRemoval@SpatialRimDeviceCollection@@MEAAJK@Z @ 0x180062920 (-OnDeviceRemoval@SpatialRimDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z @ 0x1800653E0 (-OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@ConsumerControlDeviceCollection@@MEAAJK@Z @ 0x180066FC0 (-OnDeviceRemoval@ConsumerControlDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@HeatDeviceCollection@@MEAAJK@Z @ 0x1800679C0 (-OnDeviceRemoval@HeatDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@GazeDeviceCollection@@MEAAJK@Z @ 0x180068150 (-OnDeviceRemoval@GazeDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@CameraControlDeviceCollection@@MEAAJK@Z @ 0x180068730 (-OnDeviceRemoval@CameraControlDeviceCollection@@MEAAJK@Z.c)
 * Callees:
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x18005E988 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?LogRawInputDeviceRemoved@RawInputProvidersTelemetry@@SAXIGGG@Z @ 0x180068E28 (-LogRawInputDeviceRemoved@RawInputProvidersTelemetry@@SAXIGGG@Z.c)
 */

__int64 __fastcall HIDDeviceCollection::OnDeviceRemoval(
        HIDDeviceCollection *this,
        int a2,
        __int64 a3,
        unsigned int *a4)
{
  struct RIMDevice *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( (int)RIMDeviceCollection::FindDeviceId(this, a2, &v5, a4) >= 0 )
    RawInputProvidersTelemetry::LogRawInputDeviceRemoved(
      *(_DWORD *)(*((_QWORD *)v5 + 4) + 4LL),
      *(_WORD *)(*((_QWORD *)v5 + 4) + 36LL),
      *(_WORD *)(*((_QWORD *)v5 + 4) + 38LL),
      *(_WORD *)(*((_QWORD *)v5 + 4) + 40LL));
  return 0LL;
}
