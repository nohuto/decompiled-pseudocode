/*
 * XREFs of ??0?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIMultitaskingViewController@@UIFrameInteractionEvents@@UISwitchItemController@@UIDismissAnimationController@@@WRL@Microsoft@@QEAA@XZ @ 0x180358564
 * Callers:
 *     ??0CMultitaskingViewControllerBase@@QEAA@XZ @ 0x180358670 (--0CMultitaskingViewControllerBase@@QEAA@XZ.c)
 * Callees:
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x180086430 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IMultitaskingViewController,IFrameInteractionEvents,ISwitchItemController,IDismissAnimationController>::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IMultitaskingViewController,IFrameInteractionEvents,ISwitchItemController,IDismissAnimationController>(
        __int64 a1)
{
  IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)a1);
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)(a1 + 8));
  IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)(a1 + 16));
  IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)(a1 + 24));
  return a1;
}
