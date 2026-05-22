/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_Microsoft::WRL::Singleton_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory__IInspectable__::_1_::dtor$1 @ 0x180136245
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_Microsoft::WRL::Singleton_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory_Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory__IInspectable__::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  MPCClickerProcessor::Uninitialize3DComponents(*(MPCClickerProcessor **)(a2 + 80));
}
