/*
 * XREFs of _ActivationListenerWindowIdAdapter::SetActiveWindowId_::_1_::dtor$7 @ 0x18003BBB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180058D08 (--1-$vector@V-$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL.c)
 */

__int64 __fastcall ActivationListenerWindowIdAdapter::SetActiveWindowId_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 128) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 128) &= ~1u;
    return std::vector<Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice>>::~vector<Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice>>(a2 + 40);
  }
  return result;
}
