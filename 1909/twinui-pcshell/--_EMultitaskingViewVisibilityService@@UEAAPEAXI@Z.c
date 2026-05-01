/*
 * XREFs of ??_EMultitaskingViewVisibilityService@@UEAAPEAXI@Z @ 0x180363960
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18006B280 (--1-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VFtmBase@WR.c)
 *     ??3@YAXPEAX@Z @ 0x18008A5F0 (--3@YAXPEAX@Z.c)
 *     ??1CGITRegistrationList@@QEAA@XZ @ 0x18018AC3C (--1CGITRegistrationList@@QEAA@XZ.c)
 */

MultitaskingViewVisibilityService *__fastcall MultitaskingViewVisibilityService::`vector deleting destructor'(
        MultitaskingViewVisibilityService *this,
        char a2)
{
  CGITRegistrationList::~CGITRegistrationList((MultitaskingViewVisibilityService *)((char *)this + 72));
  *((_DWORD *)this + 13) = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>((__int64)this + 16);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
