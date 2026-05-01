/*
 * XREFs of ??0CMultitaskingViewControllerBase@@QEAA@XZ @ 0x180358670
 * Callers:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewControllerBase@@@WRL@Microsoft@@QEAA@XZ @ 0x1803585B0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewControllerBase@@@WRL.c)
 *     ??0CSnapAssistViewController@@QEAA@XZ @ 0x18035E6F8 (--0CSnapAssistViewController@@QEAA@XZ.c)
 * Callees:
 *     ??0?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIMultitaskingViewController@@UIFrameInteractionEvents@@UISwitchItemController@@UIDismissAnimationController@@@WRL@Microsoft@@QEAA@XZ @ 0x180358564 (--0-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIMultitaskingViewController@@UIFrameInt.c)
 */

CMultitaskingViewControllerBase *__fastcall CMultitaskingViewControllerBase::CMultitaskingViewControllerBase(
        CMultitaskingViewControllerBase *this)
{
  Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IMultitaskingViewController,IFrameInteractionEvents,ISwitchItemController,IDismissAnimationController>::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IMultitaskingViewController,IFrameInteractionEvents,ISwitchItemController,IDismissAnimationController>((__int64)this);
  *(_QWORD *)this = &CMultitaskingViewControllerBase::`vftable'{for `IMultitaskingViewController'};
  *((_QWORD *)this + 1) = &CMultitaskingViewControllerBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IFrameInteractionEvents,ISwitchItemController,IDismissAnimationController>'};
  *((_QWORD *)this + 2) = &CMultitaskingViewControllerBase::`vftable'{for `ISwitchItemController'};
  *((_QWORD *)this + 3) = &CMultitaskingViewControllerBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IDismissAnimationController>'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_WORD *)this + 52) = 0;
  *((_QWORD *)this + 14) = 0LL;
  return this;
}
