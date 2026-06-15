/*
 * XREFs of ??$MakeAndInitialize@VSpatialAudioConfigureDevice@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioConfigureDevice@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x18005105C
 * Callers:
 *     Create_SpatialAudioConfigureDevice @ 0x18005112C (Create_SpatialAudioConfigureDevice.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D84 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UISpatialAudioConfigureDevice@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1800507D4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UISpatialAudioConfigureDevice@@VFtmBas.c)
 *     ?RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180050FB8 (-RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800652FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioConfigureDevice,SpatialAudioConfigureDevice,unsigned short const * &,IPropertyStore * &>(
        __int64 *a1,
        unsigned __int16 **a2,
        struct IPropertyStore **a3)
{
  void *v6; // rax
  __int64 v7; // rbx
  struct IPropertyStore *v8; // r8
  unsigned __int16 *v9; // rdx
  const GUID *v10; // r9
  int v11; // edi
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = (__int64)v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioConfigureDevice,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioConfigureDevice,Microsoft::WRL::FtmBase>((__int64)v6);
    *(_QWORD *)v7 = &SpatialAudioConfigureDevice::`vftable'{for `ISpatialAudioConfigureDevice'};
    *(_QWORD *)(v7 + 8) = &SpatialAudioConfigureDevice::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v7 + 48), 0, 0);
    *(_QWORD *)(v7 + 88) = 0LL;
    *(_QWORD *)(v7 + 96) = 0LL;
    v8 = *a3;
    v9 = *a2;
    v13 = v7;
    v11 = SpatialAudioConfigureDevice::RuntimeClassInitialize((SpatialAudioConfigureDevice *)v7, v9, v8, v10);
    if ( v11 >= 0 )
    {
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      *a1 = v7;
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
