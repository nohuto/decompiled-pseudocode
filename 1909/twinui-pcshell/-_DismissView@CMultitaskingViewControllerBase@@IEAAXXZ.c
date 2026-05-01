/*
 * XREFs of ?_DismissView@CMultitaskingViewControllerBase@@IEAAXXZ @ 0x180386FFC
 * Callers:
 *     ?OnActivationLost@CSnapAssistViewController@@UEAAXPEAUIMultitaskingViewFrame@@PEAUHWND__@@@Z @ 0x18037E380 (-OnActivationLost@CSnapAssistViewController@@UEAAXPEAUIMultitaskingViewFrame@@PEAUHWND__@@@Z.c)
 *     ?DismissViewNoAnimate@CMultitaskingViewControllerBase@@UEAAXXZ @ 0x1803862B0 (-DismissViewNoAnimate@CMultitaskingViewControllerBase@@UEAAXXZ.c)
 *     ?OnDisplayChange@CMultitaskingViewControllerBase@@UEAAXPEAUIMultitaskingViewFrame@@@Z @ 0x1803867B0 (-OnDisplayChange@CMultitaskingViewControllerBase@@UEAAXPEAUIMultitaskingViewFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1BatchDismissView@CMultitaskingViewControllerBase@@QEAA@XZ @ 0x180386184 (--1BatchDismissView@CMultitaskingViewControllerBase@@QEAA@XZ.c)
 */

void __fastcall CMultitaskingViewControllerBase::_DismissView(CMultitaskingViewControllerBase *this)
{
  __int64 v2; // rax
  __int64 v3[2]; // [rsp+28h] [rbp-10h] BYREF
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  CMultitaskingViewControllerBase *v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = this;
  _InterlockedIncrement((volatile signed __int32 *)this + 24);
  v3[0] = 0LL;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v3);
  *((_WORD *)this + 52) = 1;
  v2 = *((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0LL;
  v4 = v2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v3);
  CMultitaskingViewControllerBase::BatchDismissView::~BatchDismissView(&v5);
}
