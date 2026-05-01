/*
 * XREFs of ??0MultitaskingViewInvocationAnimationCoordinator@@QEAA@XZ @ 0x18037DC40
 * Callers:
 *     ??0SnapAssistViewInvocationAnimationCoordinator@@QEAA@XZ @ 0x18037E8D4 (--0SnapAssistViewInvocationAnimationCoordinator@@QEAA@XZ.c)
 * Callees:
 *     ??0MultitaskingViewAnimationCoordinatorBase@@QEAA@XZ @ 0x18037DBC0 (--0MultitaskingViewAnimationCoordinatorBase@@QEAA@XZ.c)
 */

MultitaskingViewInvocationAnimationCoordinator *__fastcall MultitaskingViewInvocationAnimationCoordinator::MultitaskingViewInvocationAnimationCoordinator(
        MultitaskingViewInvocationAnimationCoordinator *this)
{
  MultitaskingViewAnimationCoordinatorBase::MultitaskingViewAnimationCoordinatorBase(this);
  *((_BYTE *)this + 184) = 0;
  *(_QWORD *)this = &MultitaskingViewInvocationAnimationCoordinator::`vftable'{for `Microsoft::WRL::ChainInterfaces<IFrameLevelAnimationCoordinator,IAnimationCoordinator,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *((_QWORD *)this + 1) = &MultitaskingViewInvocationAnimationCoordinator::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMultitaskingViewAnimation>'};
  return this;
}
