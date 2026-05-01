/*
 * XREFs of ??$MakeAndInitialize@V?$CWeakReference@VCSwitchItemGrid@@@WeakReference@@V12@AEAPEAVCSwitchItemGrid@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VCSwitchItemGrid@@@WeakReference@@AEAPEAVCSwitchItemGrid@@@Z @ 0x180361E9C
 * Callers:
 *     ?RuntimeClassInitialize@CSwitchItemElement@@QEAAJAEBUSwitchItemElementInitializeArgs@1@@Z @ 0x180362CD4 (-RuntimeClassInitialize@CSwitchItemElement@@QEAAJAEBUSwitchItemElementInitializeArgs@1@@Z.c)
 *     ?GetAccessibleObject@CMultitaskingViewElementBase@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180364730 (-GetAccessibleObject@CMultitaskingViewElementBase@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?RuntimeClassInitialize@CSwitchItemGrid@@QEAAJAEBUGridMetrics@@AEBUCSize@Geometry@@PEAUIElementFactory@@PEAUISwitchThumbnailFactory@@PEAUISwitchItemController@@PEAUIObservableObjectArray@@@Z @ 0x180369A14 (-RuntimeClassInitialize@CSwitchItemGrid@@QEAAJAEBUGridMetrics@@AEBUCSize@Geometry@@PEAUIElementF.c)
 *     ?Initialize@?$CWeakRefSource@VSwitchItemThumbnailElement@@@WeakReference@@QEAAJPEAVSwitchItemThumbnailElement@@@Z @ 0x18036AD40 (-Initialize@-$CWeakRefSource@VSwitchItemThumbnailElement@@@WeakReference@@QEAAJPEAVSwitchItemThu.c)
 *     ?RuntimeClassInitialize@MultitaskingViewAnimationCoordinatorBase@@QEAAJXZ @ 0x1803732E0 (-RuntimeClassInitialize@MultitaskingViewAnimationCoordinatorBase@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@CScrollButtonContainer@@QEAAJAEBUScrollViewerHostMetrics@@W4ScrollButtonContainerFlags@@PEAUIWeakReference@WeakReference@@PEAUIDWriteTextFormat@@PEAUISwitchThumbnailFactory@@@Z @ 0x18037BFD8 (-RuntimeClassInitialize@CScrollButtonContainer@@QEAAJAEBUScrollViewerHostMetrics@@W4ScrollButton.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAA@XZ @ 0x18034DC50 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIWeakReference@WeakReference@@@WRL@Mi.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<WeakReference::CWeakReference<CSwitchItemGrid>,WeakReference::CWeakReference<CSwitchItemGrid>,CSwitchItemGrid * &>(
        _QWORD *a1,
        _QWORD *a2)
{
  unsigned int v2; // edi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v5 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,WeakReference::IWeakReference>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,WeakReference::IWeakReference>(v5);
    v8 = v6;
    *v6 = &WeakReference::CWeakReference<CMultitaskingViewElementBase>::`vftable';
    v6[2] = *a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
    *a1 = v6;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
