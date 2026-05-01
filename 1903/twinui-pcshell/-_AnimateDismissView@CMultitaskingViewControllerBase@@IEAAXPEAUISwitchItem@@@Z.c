/*
 * XREFs of ?_AnimateDismissView@CMultitaskingViewControllerBase@@IEAAXPEAUISwitchItem@@@Z @ 0x18036757C
 * Callers:
 *     ?OnActivationLost@CSnapAssistViewController@@UEAAXPEAUIMultitaskingViewFrame@@PEAUHWND__@@@Z @ 0x18035EB10 (-OnActivationLost@CSnapAssistViewController@@UEAAXPEAUIMultitaskingViewFrame@@PEAUHWND__@@@Z.c)
 *     ?OnLightDismiss@CSnapAssistViewController@@UEAAXPEAUIMultitaskingViewFrame@@@Z @ 0x18035EB50 (-OnLightDismiss@CSnapAssistViewController@@UEAAXPEAUIMultitaskingViewFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1BatchDismissView@CMultitaskingViewControllerBase@@QEAA@XZ @ 0x1803668C4 (--1BatchDismissView@CMultitaskingViewControllerBase@@QEAA@XZ.c)
 */

void __fastcall CMultitaskingViewControllerBase::_AnimateDismissView(
        CMultitaskingViewControllerBase *this,
        struct ISwitchItem *a2)
{
  __int64 v4[2]; // [rsp+28h] [rbp-10h] BYREF
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  CMultitaskingViewControllerBase *v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = this;
  _InterlockedIncrement((volatile signed __int32 *)this + 24);
  v4[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v4);
  v4[0] = 0LL;
  *((_WORD *)this + 52) = 257;
  v5 = *((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v4);
  CMultitaskingViewControllerBase::BatchDismissView::~BatchDismissView(&v6);
}
