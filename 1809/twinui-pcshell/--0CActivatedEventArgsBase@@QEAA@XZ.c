/*
 * XREFs of ??0CActivatedEventArgsBase@@QEAA@XZ @ 0x180062898
 * Callers:
 *     ??0CActivatedEventArgsWithViewIdBase@@QEAA@XZ @ 0x1800627C4 (--0CActivatedEventArgsWithViewIdBase@@QEAA@XZ.c)
 * Callees:
 *     ??0srwlock@wil@@QEAA@XZ @ 0x18002F14C (--0srwlock@wil@@QEAA@XZ.c)
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18006294C (--0-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VFtmBase@WR.c)
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x180083698 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 */

CActivatedEventArgsBase *__fastcall CActivatedEventArgsBase::CActivatedEventArgsBase(CActivatedEventArgsBase *this)
{
  IApplicationViewChangeListener::IApplicationViewChangeListener(this);
  IApplicationViewChangeListener::IApplicationViewChangeListener((CActivatedEventArgsBase *)((char *)this + 8));
  IApplicationViewChangeListener::IApplicationViewChangeListener((CActivatedEventArgsBase *)((char *)this + 16));
  IApplicationViewChangeListener::IApplicationViewChangeListener((CActivatedEventArgsBase *)((char *)this + 24));
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>((char *)this + 32);
  *(_QWORD *)this = &CActivatedEventArgsBase::`vftable';
  *((_QWORD *)this + 1) = &CActivatedEventArgsBase::`vftable'{for `Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser'};
  *((_QWORD *)this + 2) = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs>,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IActivatedEventArgsInternal>,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 3) = &CActivatedEventArgsWithViewIdBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::ApplicationModel::Activation::IActivatedEventArgsInternal>'};
  *((_QWORD *)this + 4) = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_WORD *)this + 50) = 0;
  *((_BYTE *)this + 102) = 1;
  *((_QWORD *)this + 13) = 0LL;
  *((_BYTE *)this + 112) = 0;
  wil::srwlock::srwlock((CActivatedEventArgsBase *)((char *)this + 120));
  return this;
}
