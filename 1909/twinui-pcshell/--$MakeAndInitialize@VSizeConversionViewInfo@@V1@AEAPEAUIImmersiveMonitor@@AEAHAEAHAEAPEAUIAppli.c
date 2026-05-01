/*
 * XREFs of ??$MakeAndInitialize@VSizeConversionViewInfo@@V1@AEAPEAUIImmersiveMonitor@@AEAHAEAHAEAPEAUIApplicationViewTitlebarConfiguration@@@Details@WRL@Microsoft@@YAJPEAPEAVSizeConversionViewInfo@@AEAPEAUIImmersiveMonitor@@AEAH2AEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18001526C
 * Callers:
 *     ?ConvertForMonitorAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonitor@@HHPEAUIApplicationViewTitlebarConfiguration@@PEAU2@@Z @ 0x180015940 (-ConvertForMonitorAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonit.c)
 *     ??$MakeAndInitialize@VSizeConversionViewInfo@@V1@AEAPEAUIImmersiveMonitor@@AEAHAEAHAEAPEAUIApplicationViewTitlebarConfiguration@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@@012@AEAPEAUIImmersiveMonitor@@AEAH2AEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1803B0B2C (--$MakeAndInitialize@VSizeConversionViewInfo@@V1@AEAPEAUIImmersiveMonitor@@AEAHAEAH_ea_1803B0B2C.c)
 * Callees:
 *     ??0SizeConversionViewInfo@@QEAA@XZ @ 0x18001511C (--0SizeConversionViewInfo@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIImmersiveMonitor@@HHPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180015340 (-RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIImmersiveMonitor@@HHPEAUIApplicationVi.c)
 *     ?Attach@?$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z @ 0x180015478 (-Attach@-$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SizeConversionViewInfo,SizeConversionViewInfo,IImmersiveMonitor * &,int &,int &,IApplicationViewTitlebarConfiguration * &>(
        SizeConversionViewInfo **a1,
        struct IImmersiveMonitor **a2,
        int *a3,
        int *a4,
        struct IApplicationViewTitlebarConfiguration **a5)
{
  SizeConversionViewInfo *v9; // rax
  SizeConversionViewInfo *v10; // rax
  int v11; // r9d
  SizeConversionViewInfo *v12; // rbx
  int v13; // edi
  SizeConversionViewInfo *v15; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = (SizeConversionViewInfo *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v10 = SizeConversionViewInfo::SizeConversionViewInfo(v9);
    v15 = 0LL;
    Microsoft::WRL::ComPtr<SizeConversionViewInfo>::Attach(&v15, v10);
    v11 = *a4;
    v12 = v15;
    v13 = SizeConversionViewInfo::RuntimeClassInitialize(v15, *a2, *a3, v11, *a5);
    if ( v13 >= 0 )
    {
      if ( v12 )
        (*(void (__fastcall **)(SizeConversionViewInfo *))(*(_QWORD *)v12 + 8LL))(v12);
      *a1 = v12;
      v13 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v13;
}
