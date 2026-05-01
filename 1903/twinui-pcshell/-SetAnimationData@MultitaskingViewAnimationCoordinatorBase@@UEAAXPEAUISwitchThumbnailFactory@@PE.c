/*
 * XREFs of ?SetAnimationData@MultitaskingViewAnimationCoordinatorBase@@UEAAXPEAUISwitchThumbnailFactory@@PEAUIAnimatableMultitaskingViewFrame@@PEAUIDCompThumbnail@@@Z @ 0x180373390
 * Callers:
 *     ?SetAnimationData@?$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewInvocationAnimationCoordinator@@@@UEAAXPEAUISwitchThumbnailFactory@@PEAUIAnimatableMultitaskingViewFrame@@PEAUIDCompThumbnail@@@Z @ 0x18035F220 (-SetAnimationData@-$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewInvocationAnimationC.c)
 *     ?SetAnimationData@?$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewDismissalAnimationCoordinator@@@@UEAAXPEAUISwitchThumbnailFactory@@PEAUIAnimatableMultitaskingViewFrame@@PEAUIDCompThumbnail@@@Z @ 0x18035F720 (-SetAnimationData@-$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewDismissalAnimationCo.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18000E500 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MultitaskingViewAnimationCoordinatorBase::SetAnimationData(
        MultitaskingViewAnimationCoordinatorBase *this,
        struct ISwitchThumbnailFactory *a2,
        struct IAnimatableMultitaskingViewFrame *a3,
        struct IDCompThumbnail *a4)
{
  struct IAnimatableMultitaskingViewFrame *v7; // rax
  struct IDCompThumbnail *v8; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 4, (__int64)a2);
  v7 = (struct IAnimatableMultitaskingViewFrame *)*((_QWORD *)this + 5);
  if ( v7 != a3 )
  {
    if ( a3 )
    {
      (*(void (__fastcall **)(struct IAnimatableMultitaskingViewFrame *))(*(_QWORD *)a3 + 8LL))(a3);
      v7 = (struct IAnimatableMultitaskingViewFrame *)*((_QWORD *)this + 5);
    }
    v8 = v7;
    *((_QWORD *)this + 5) = a3;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  }
  if ( *((struct IDCompThumbnail **)this + 6) != a4 )
  {
    v8 = a4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
    v8 = (struct IDCompThumbnail *)*((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = a4;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  }
}
