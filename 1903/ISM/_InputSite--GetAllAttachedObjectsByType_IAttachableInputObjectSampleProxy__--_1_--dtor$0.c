/*
 * XREFs of _InputSite::GetAllAttachedObjectsByType_IAttachableInputObjectSampleProxy__::_1_::dtor$0 @ 0x1800F8EF3
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800E09B4 (--1-$vector@V-$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@M.c)
 */

void __fastcall InputSite::GetAllAttachedObjectsByType_IAttachableInputObjectSampleProxy__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::vector<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal>>::~vector<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal>>(*(_QWORD *)(a2 + 72));
  }
}
