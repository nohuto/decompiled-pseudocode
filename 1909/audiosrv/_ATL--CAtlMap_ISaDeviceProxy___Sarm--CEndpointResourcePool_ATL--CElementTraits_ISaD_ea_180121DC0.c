/*
 * XREFs of _ATL::CAtlMap_ISaDeviceProxy___Sarm::CEndpointResourcePool_ATL::CElementTraits_ISaDeviceProxy____ATL::CElementTraits_Sarm::CEndpointResourcePool___::SetAt_::_1_::catch$0 @ 0x180121DC0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18006C94B (_CxxThrowException_0.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180121698 (-RemoveAtPos@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUIS.c)
 */

void __fastcall __noreturn ATL::CAtlMap_ISaDeviceProxy___Sarm::CEndpointResourcePool_ATL::CElementTraits_ISaDeviceProxy____ATL::CElementTraits_Sarm::CEndpointResourcePool___::SetAt_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::RemoveAtPos(
    *(_QWORD *)(a2 + 112),
    *(_QWORD *)(a2 + 136));
  throw;
}
