/*
 * XREFs of ??$MakeAndInitialize@VSpatialAudioDevicePropertyReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDevicePropertyReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x180053DBC
 * Callers:
 *     Create_SpatialAudioDevicePropertyReader @ 0x180053D14 (Create_SpatialAudioDevicePropertyReader.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180014D44 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180041630 (-RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ??0SpatialAudioDevicePropertyReader@@QEAA@XZ @ 0x18004192C (--0SpatialAudioDevicePropertyReader@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioDevicePropertyReader,SpatialAudioDevicePropertyReader,unsigned short const * &,IPropertyStore * &>(
        SpatialAudioDevicePropertyReader **a1,
        const unsigned __int16 **a2,
        struct IPropertyStore **a3)
{
  SpatialAudioDevicePropertyReader *v6; // rax
  SpatialAudioDevicePropertyReader *v7; // rbx
  int v8; // edi
  SpatialAudioDevicePropertyReader *v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h]

  *a1 = 0LL;
  v6 = (SpatialAudioDevicePropertyReader *)operator new(0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v7 = SpatialAudioDevicePropertyReader::SpatialAudioDevicePropertyReader(v6);
    v10 = v7;
    v11 = 0LL;
    v8 = SpatialAudioDevicePropertyReader::RuntimeClassInitialize(v7, *a2, *a3);
    if ( v8 >= 0 )
    {
      if ( v7 )
        (*(void (__fastcall **)(SpatialAudioDevicePropertyReader *))(*(_QWORD *)v7 + 8LL))(v7);
      *a1 = v7;
      v8 = 0;
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
