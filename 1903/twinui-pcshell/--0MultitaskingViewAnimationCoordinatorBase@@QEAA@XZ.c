/*
 * XREFs of ??0MultitaskingViewAnimationCoordinatorBase@@QEAA@XZ @ 0x18035E350
 * Callers:
 *     ??0MultitaskingViewInvocationAnimationCoordinator@@QEAA@XZ @ 0x18035E3D0 (--0MultitaskingViewInvocationAnimationCoordinator@@QEAA@XZ.c)
 *     ??0MultitaskingViewDismissalAnimationCoordinator@@QEAA@XZ @ 0x18035E4DC (--0MultitaskingViewDismissalAnimationCoordinator@@QEAA@XZ.c)
 * Callees:
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ??0?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIFrameLevelAnimationCoordinator@@UIAnimationCoordinator@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIMultitaskingViewAnimation@@@WRL@Microsoft@@QEAA@XZ @ 0x18035E320 (--0-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ChainInterfaces@UIFrameLevelAnimation.c)
 */

MultitaskingViewAnimationCoordinatorBase *__fastcall MultitaskingViewAnimationCoordinatorBase::MultitaskingViewAnimationCoordinatorBase(
        MultitaskingViewAnimationCoordinatorBase *this)
{
  MultitaskingViewAnimationCoordinatorBase *result; // rax

  Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IFrameLevelAnimationCoordinator,IAnimationCoordinator,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IMultitaskingViewAnimation>::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IFrameLevelAnimationCoordinator,IAnimationCoordinator,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IMultitaskingViewAnimation>((__int64)this);
  *(_QWORD *)this = &MultitaskingViewAnimationCoordinatorBase::`vftable'{for `Microsoft::WRL::ChainInterfaces<IFrameLevelAnimationCoordinator,IAnimationCoordinator,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *((_QWORD *)this + 1) = &MultitaskingViewInvocationAnimationCoordinator::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMultitaskingViewAnimation>'};
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)((char *)this + 76) = 31LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  memset_0((char *)this + 104, 0, 0x40uLL);
  result = this;
  *((_WORD *)this + 84) = 0;
  return result;
}
