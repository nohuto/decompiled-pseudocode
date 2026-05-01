/*
 * XREFs of ??$MakeAndInitialize@VCScrollButtonContainer@@V1@AEBUScrollViewerHostMetrics@@AEAW4ScrollButtonContainerFlags@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIDWriteTextFormat@@AEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVCScrollButtonContainer@@AEBUScrollViewerHostMetrics@@AEAW4ScrollButtonContainerFlags@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIDWriteTextFormat@@AEAPEAUISwitchThumbnailFactory@@@Z @ 0x18039B3E4
 * Callers:
 *     ?CScrollButtonContainer_CreateInstance@@YAJAEBUScrollViewerHostMetrics@@W4ScrollButtonContainerFlags@@PEAUIWeakReference@WeakReference@@PEAUIDWriteTextFormat@@PEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x18039B700 (-CScrollButtonContainer_CreateInstance@@YAJAEBUScrollViewerHostMetrics@@W4ScrollButtonContainerF.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0CScrollButtonContainer@@QEAA@XZ @ 0x18039B4E8 (--0CScrollButtonContainer@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CScrollButtonContainer@@QEAAJAEBUScrollViewerHostMetrics@@W4ScrollButtonContainerFlags@@PEAUIWeakReference@WeakReference@@PEAUIDWriteTextFormat@@PEAUISwitchThumbnailFactory@@@Z @ 0x18039B910 (-RuntimeClassInitialize@CScrollButtonContainer@@QEAAJAEBUScrollViewerHostMetrics@@W4ScrollButton.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CScrollButtonContainer,CScrollButtonContainer,ScrollViewerHostMetrics const &,enum ScrollButtonContainerFlags &,WeakReference::IWeakReference * &,IDWriteTextFormat * &,ISwitchThumbnailFactory * &>(
        CScrollButtonContainer **a1,
        __int64 a2,
        unsigned int *a3,
        __int64 *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  CScrollButtonContainer *v10; // rax
  int v11; // edi
  CScrollButtonContainer *v12; // rbx
  __int64 v13; // r9
  __int64 v14; // r8
  CScrollButtonContainer *v16; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = (CScrollButtonContainer *)operator new(0x1B8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
  {
    v12 = CScrollButtonContainer::CScrollButtonContainer(v10);
    v13 = *a4;
    v14 = *a3;
    v16 = v12;
    v11 = CScrollButtonContainer::RuntimeClassInitialize(v12, a2, v14, v13, *a5, *a6);
    if ( v11 >= 0 )
    {
      if ( v12 )
        (*(void (__fastcall **)(CScrollButtonContainer *))(*(_QWORD *)v12 + 8LL))(v12);
      *a1 = v12;
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
