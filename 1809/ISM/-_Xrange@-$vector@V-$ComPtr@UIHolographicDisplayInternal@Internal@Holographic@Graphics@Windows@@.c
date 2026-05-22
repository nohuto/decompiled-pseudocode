/*
 * XREFs of ?_Xrange@?$vector@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x1800B5660
 * Callers:
 *     ?RemoveDisplay@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEAUIHolographicDisplay@Holographic@Graphics@4@@Z @ 0x1800B1820 (-RemoveDisplay@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 * Callees:
 *     <none>
 */

void __noreturn std::vector<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal>>::_Xrange()
{
  std::_Xout_of_range("invalid vector<T> subscript");
  JUMPOUT(0x1800B5671LL);
}
