/*
 * XREFs of ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x1800A5BB0
 * Callers:
 *     ?OnDeviceRemoval@SpatialRimDeviceCollection@@MEAAJK@Z @ 0x18009E400 (-OnDeviceRemoval@SpatialRimDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z @ 0x1800A19F0 (-OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@ConsumerControlDeviceCollection@@MEAAJK@Z @ 0x1800A2F20 (-OnDeviceRemoval@ConsumerControlDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@SystemControlDeviceCollection@@MEAAJK@Z @ 0x1800A3CE0 (-OnDeviceRemoval@SystemControlDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@HeatDeviceCollection@@MEAAJK@Z @ 0x1800A4630 (-OnDeviceRemoval@HeatDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@GazeDeviceCollection@@MEAAJK@Z @ 0x1800A4D40 (-OnDeviceRemoval@GazeDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z @ 0x1800A5190 (-OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z.c)
 * Callees:
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x18009A684 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?LogRawInputDeviceRemoved@RawInputProvidersTelemetry@@SAXIGGG@Z @ 0x1800A5744 (-LogRawInputDeviceRemoved@RawInputProvidersTelemetry@@SAXIGGG@Z.c)
 */

__int64 __fastcall HIDDeviceCollection::OnDeviceRemoval(HIDDeviceCollection *this, int a2)
{
  struct RIMDevice *v3; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0LL;
  if ( (int)RIMDeviceCollection::FindDevice(this, a2, 0LL, &v3, 0LL) >= 0 )
    RawInputProvidersTelemetry::LogRawInputDeviceRemoved(
      *(unsigned int *)(*((_QWORD *)v3 + 4) + 4LL),
      *(_WORD *)(*((_QWORD *)v3 + 4) + 44LL),
      *(_WORD *)(*((_QWORD *)v3 + 4) + 46LL),
      *(_WORD *)(*((_QWORD *)v3 + 4) + 48LL));
  return 0LL;
}
