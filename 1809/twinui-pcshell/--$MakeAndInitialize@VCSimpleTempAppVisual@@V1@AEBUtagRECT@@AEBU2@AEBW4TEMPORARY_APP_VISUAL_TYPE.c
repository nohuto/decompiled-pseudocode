/*
 * XREFs of ??$MakeAndInitialize@VCSimpleTempAppVisual@@V1@AEBUtagRECT@@AEBU2@AEBW4TEMPORARY_APP_VISUAL_TYPE@@AEBQEAUHWND__@@AEBQEAU4@AEAPEAUIApplicationView@@@Details@WRL@Microsoft@@YAJPEAPEAVCSimpleTempAppVisual@@AEBUtagRECT@@1AEBW4TEMPORARY_APP_VISUAL_TYPE@@AEBQEAUHWND__@@3AEAPEAUIApplicationView@@@Z @ 0x180378998
 * Callers:
 *     ?CreateInstance@CSimpleTempAppVisual@@SAJAEBUtagRECT@@0AEBW4TEMPORARY_APP_VISUAL_TYPE@@AEBQEAUHWND__@@2PEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x180378C3C (-CreateInstance@CSimpleTempAppVisual@@SAJAEBUtagRECT@@0AEBW4TEMPORARY_APP_VISUAL_TYPE@@AEBQEAUHW.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z @ 0x1800E5FEC (-Attach@-$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z.c)
 *     ??0CSimpleTempAppVisual@@QEAA@XZ @ 0x180378A78 (--0CSimpleTempAppVisual@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CSimpleTempAppVisual@@QEAAJAEBUtagRECT@@0AEBW4TEMPORARY_APP_VISUAL_TYPE@@AEBQEAUHWND__@@2PEAUIApplicationView@@@Z @ 0x180378DB8 (-RuntimeClassInitialize@CSimpleTempAppVisual@@QEAAJAEBUtagRECT@@0AEBW4TEMPORARY_APP_VISUAL_TYPE@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSimpleTempAppVisual,CSimpleTempAppVisual,tagRECT const &,tagRECT const &,enum TEMPORARY_APP_VISUAL_TYPE const &,HWND__ * const &,HWND__ * const &,IApplicationView * &>(
        CSimpleTempAppVisual **a1,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        const enum TEMPORARY_APP_VISUAL_TYPE *a4,
        HWND *a5,
        HWND *a6,
        struct IApplicationView **a7)
{
  CSimpleTempAppVisual *v11; // rax
  int v12; // edi
  CSimpleTempAppVisual *v13; // rax
  const enum TEMPORARY_APP_VISUAL_TYPE *v14; // r9
  CSimpleTempAppVisual *v15; // rbx
  CSimpleTempAppVisual *v17; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v11 = (CSimpleTempAppVisual *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    v13 = CSimpleTempAppVisual::CSimpleTempAppVisual(v11);
    v17 = 0LL;
    Microsoft::WRL::ComPtr<SizeConversionViewInfo>::Attach((__int64 *)&v17, (__int64)v13);
    v14 = a4;
    v15 = v17;
    v12 = CSimpleTempAppVisual::RuntimeClassInitialize(v17, a2, a3, v14, a5, a6, *a7);
    if ( v12 >= 0 )
    {
      if ( v15 )
        (*(void (__fastcall **)(CSimpleTempAppVisual *))(*(_QWORD *)v15 + 8LL))(v15);
      *a1 = v15;
      v12 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v12;
}
