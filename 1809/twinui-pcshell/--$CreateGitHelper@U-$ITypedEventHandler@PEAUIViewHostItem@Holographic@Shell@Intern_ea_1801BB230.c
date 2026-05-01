/*
 * XREFs of ??$CreateGitHelper@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPrepareForInitialPresentationEventArgs@2345@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPrepareForInitialPresentationEventArgs@2345@@Foundation@Windows@@@Internal@3@@Details@Internal@Windows@@YAJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPrepareForInitialPresentationEventArgs@2345@@Foundation@2@PEAPEAU342@@Z @ 0x1801BB230
 * Callers:
 *     ?add_PrepareforInitialPresentation@Win32BackedViewHostItem@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPrepareForInitialPresentationEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1801C0B20 (-add_PrepareforInitialPresentation@Win32BackedViewHostItem@@UEAAJPEAU-$ITypedEventHandler@PEAUIV.c)
 *     ?add_PrepareforInitialPresentation@ApplicationViewBackedViewHostItem@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPrepareForInitialPresentationEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1801C4B50 (-add_PrepareforInitialPresentation@ApplicationViewBackedViewHostItem@@UEAAJPEAU-$ITypedEventHand.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$GitInvokeHelper@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPrepareForInitialPresentationEventArgs@2345@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPrepareForInitialPresentationEventArgs@2345@@Foundation@Windows@@@Internal@3@$01@Details@Internal@Windows@@QEAA@XZ @ 0x1801BC2FC (--0-$GitInvokeHelper@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Inte_ea_1801BC2FC.c)
 */

__int64 __fastcall Windows::Internal::Details::CreateGitHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPrepareForInitialPresentationEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPrepareForInitialPresentationEventArgs *>>>(
        __int64 a1,
        _QWORD *a2)
{
  void *v4; // rax
  __int64 *v5; // rdi
  void *v6; // rbx
  signed int AgileReference; // ebx
  __int64 *v8; // rsi
  __int64 v9; // rcx
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = 0LL;
  v6 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x38uLL);
    v5 = (__int64 *)Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPrepareForInitialPresentationEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPrepareForInitialPresentationEventArgs *>>,2>::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPrepareForInitialPresentationEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPrepareForInitialPresentationEventArgs *>>,2>(v6);
  }
  AgileReference = v5 == 0LL ? 0x8007000E : 0;
  if ( v5 )
  {
    v8 = v5 + 6;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v5 + 6);
    AgileReference = 0;
    if ( a1 )
    {
      v11 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
      AgileReference = RoGetAgileReference(0LL, &GUID_bae3f61b_eab2_5732_af61_5d63ae9d118b, a1, &v11);
      if ( AgileReference >= 0 )
      {
        v9 = *v8;
        *v8 = v11;
        v11 = v9;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    }
    if ( AgileReference >= 0 )
      AgileReference = (*(__int64 (__fastcall **)(__int64 *, GUID *, _QWORD *))*v5)(
                         v5,
                         &GUID_bae3f61b_eab2_5732_af61_5d63ae9d118b,
                         a2);
    (*(void (__fastcall **)(__int64 *))(*v5 + 16))(v5);
  }
  return (unsigned int)AgileReference;
}
