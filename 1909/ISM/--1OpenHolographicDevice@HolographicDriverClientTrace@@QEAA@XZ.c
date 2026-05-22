/*
 * XREFs of ??1OpenHolographicDevice@HolographicDriverClientTrace@@QEAA@XZ @ 0x180151CAC
 * Callers:
 *     ?Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJAEBU_GUID@@PEAUHSTRING__@@W4HandleWrapperDesiredAccess@234@_NPEAXPEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@Z @ 0x180153AE8 (-Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJAEBU_GUID@@PEAUHSTRING_.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::Create_::_1_::dtor$2 @ 0x180153D72 (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--Create_--_1_--dtor$2.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180154AB0 (-Destroy@-$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

void __fastcall HolographicDriverClientTrace::OpenHolographicDevice::~OpenHolographicDevice(
        HolographicDriverClientTrace::OpenHolographicDevice *this)
{
  *(_QWORD *)this = &HolographicDriverClientTrace::OpenHolographicDevice::`vftable';
  wil::ActivityBase<HolographicDriverClientTrace,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<HolographicDriverClientTrace,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicDriverClientTrace,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
