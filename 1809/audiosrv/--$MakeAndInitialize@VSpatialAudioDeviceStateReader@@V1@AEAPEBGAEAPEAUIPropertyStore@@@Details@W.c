/*
 * XREFs of ??$MakeAndInitialize@VSpatialAudioDeviceStateReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x180053A7C
 * Callers:
 *     Create_SpatialAudioDeviceStateReader @ 0x1800539CC (Create_SpatialAudioDeviceStateReader.c)
 * Callees:
 *     ?Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180041C10 (-Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ??0SpatialAudioDeviceStateReader@@QEAA@XZ @ 0x180053B44 (--0SpatialAudioDeviceStateReader@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ @ 0x18005EC00 (-InternalRelease@-$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioDeviceStateReader,SpatialAudioDeviceStateReader,unsigned short const * &,IPropertyStore * &>(
        SpatialAudioDeviceStateReader **a1,
        const unsigned __int16 **a2,
        struct IPropertyStore **a3)
{
  unsigned int v6; // ebx
  SpatialAudioDeviceStateReader *v7; // rax
  SpatialAudioDeviceStateReader *v8; // rdi
  int v9; // eax
  SpatialAudioDeviceStateReader *v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h]

  v6 = 0;
  *a1 = 0LL;
  v7 = (SpatialAudioDeviceStateReader *)operator new(0x268uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v8 = SpatialAudioDeviceStateReader::SpatialAudioDeviceStateReader(v7);
    v11 = v8;
    v12 = 0LL;
    v9 = SpatialAudioIO::Initialize(v8, *a2, *a3);
    if ( v9 < 0 || (v9 = (*(__int64 (__fastcall **)(SpatialAudioDeviceStateReader *))(*(_QWORD *)v8 + 8LL))(v8), v9 < 0) )
    {
      v6 = v9;
    }
    else
    {
      (*(void (__fastcall **)(__int64))(*((_QWORD *)v8 + 71) + 8LL))((__int64)v8 + 568);
      *a1 = v8;
    }
    Microsoft::WRL::ComPtr<SpatialAudioDeviceStateReader>::InternalRelease(&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v6;
}
