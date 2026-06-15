/*
 * XREFs of ??0SpatialAudioDeviceStateWriter@@QEAA@XZ @ 0x18005093C
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateWriter@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x1800509E4 (--$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@W.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UISpatialAudioDeviceStateWriter@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180050888 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UISpatialAudioDeviceStateWriter@@VFtmB.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 */

SpatialAudioDeviceStateWriter *__fastcall SpatialAudioDeviceStateWriter::SpatialAudioDeviceStateWriter(
        SpatialAudioDeviceStateWriter *this)
{
  memset_0((char *)this + 8, 0, 0x208uLL);
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *(_QWORD *)this = &SpatialAudioStateIO::`vftable';
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioDeviceStateWriter,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioDeviceStateWriter,Microsoft::WRL::FtmBase>((__int64)this + 568);
  *(_QWORD *)this = &SpatialAudioDeviceStateWriter::`vftable';
  *((_QWORD *)this + 71) = &SpatialAudioDeviceStateWriter::`vftable'{for `ISpatialAudioDeviceStateWriter'};
  *((_QWORD *)this + 72) = &SpatialAudioDeviceStateWriter::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 616), 0, 0);
  return this;
}
