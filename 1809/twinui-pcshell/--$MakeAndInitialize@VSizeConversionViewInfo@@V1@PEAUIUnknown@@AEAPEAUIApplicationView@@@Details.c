/*
 * XREFs of ??$MakeAndInitialize@VSizeConversionViewInfo@@V1@PEAUIUnknown@@AEAPEAUIApplicationView@@@Details@WRL@Microsoft@@YAJPEAPEAVSizeConversionViewInfo@@$$QEAPEAUIUnknown@@AEAPEAUIApplicationView@@@Z @ 0x1803311AC
 * Callers:
 *     ?ConvertForView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIApplicationView@@PEAU2@@Z @ 0x1803322E0 (-ConvertForView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIApplicationView@@PEAU2@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z @ 0x1800E5FEC (-Attach@-$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z.c)
 *     ??0SizeConversionViewInfo@@QEAA@XZ @ 0x180331C40 (--0SizeConversionViewInfo@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z @ 0x1803331DC (-RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SizeConversionViewInfo,SizeConversionViewInfo,IUnknown *,IApplicationView * &>(
        SizeConversionViewInfo **a1,
        struct IUnknown **a2,
        struct IApplicationView **a3)
{
  SizeConversionViewInfo *v6; // rax
  int v7; // edi
  SizeConversionViewInfo *v8; // rax
  struct IApplicationView *v9; // r8
  SizeConversionViewInfo *v10; // rbx
  SizeConversionViewInfo *v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v6 = (SizeConversionViewInfo *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = SizeConversionViewInfo::SizeConversionViewInfo(v6);
    v12 = 0LL;
    Microsoft::WRL::ComPtr<SizeConversionViewInfo>::Attach((__int64 *)&v12, (__int64)v8);
    v13 = 0LL;
    v9 = *a3;
    v10 = v12;
    v7 = SizeConversionViewInfo::RuntimeClassInitialize(v12, *a2, v9);
    if ( v7 >= 0 )
    {
      if ( v10 )
        (*(void (__fastcall **)(SizeConversionViewInfo *))(*(_QWORD *)v10 + 8LL))(v10);
      *a1 = v10;
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
