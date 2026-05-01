/*
 * XREFs of ?ItemAdded@CVirtualDesktopContainerElement@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x1803216C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802EED50 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1802EEDD4 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?GetAncestorElementOfType@ElementHelpers@@YA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@W4AnimationCoordinatorItemType@@@Z @ 0x18030E4E4 (-GetAncestorElementOfType@ElementHelpers@@YA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsof.c)
 *     ?ItemAddedInternal@CVirtualDesktopContainerElement@@IEAAXPEAUIObservableItem@@@Z @ 0x180321818 (-ItemAddedInternal@CVirtualDesktopContainerElement@@IEAAXPEAUIObservableItem@@@Z.c)
 *     ?VirtualDesktopAddAnimationCoordinator_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@HAEBU_GUID@@PEAPEAX@Z @ 0x180325394 (-VirtualDesktopAddAnimationCoordinator_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@HAEBU_GUI.c)
 */

void __fastcall CVirtualDesktopContainerElement::ItemAdded(
        CVirtualDesktopContainerElement *this,
        struct IObservableObjectArray *a2,
        struct IObservableItem *a3)
{
  __int64 v5; // rbx
  const struct _GUID *v6; // r8
  int v7; // eax
  __int64 v8[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  void *v10; // [rsp+50h] [rbp+20h] BYREF
  __int64 v11; // [rsp+68h] [rbp+38h] BYREF

  v11 = *((_QWORD *)this + 4);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v11);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v8, &v11, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  v10 = 0LL;
  ElementHelpers::GetAncestorElementOfType(&v11, (__int64)this - 208);
  v5 = v11;
  if ( v11 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
    v7 = VirtualDesktopAddAnimationCoordinator_CreateInstance(
           *((struct ISwitchThumbnailFactory **)this + 4),
           *((_DWORD *)this - 35) - *((_DWORD *)this - 37),
           v6,
           &v10);
    if ( v7 >= 0 )
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 392LL))(v5, v10);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        58LL,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopcontainerelement.cpp",
        (const char *)(unsigned int)v7);
  }
  CVirtualDesktopContainerElement::ItemAddedInternal((CVirtualDesktopContainerElement *)((char *)this - 208), a3);
  (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 1) + 48LL))(
    (char *)this + 8,
    *(_QWORD *)(*((_QWORD *)this - 24) + 8LL * *((_QWORD *)this - 23) - 8));
  if ( v5 && v10 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 72LL))(v10);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 392LL))(v5, 0LL);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v8);
}
