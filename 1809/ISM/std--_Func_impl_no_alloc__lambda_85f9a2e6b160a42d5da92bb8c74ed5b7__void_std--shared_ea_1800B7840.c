/*
 * XREFs of std::_Func_impl_no_alloc__lambda_85f9a2e6b160a42d5da92bb8c74ed5b7__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&___ptr64_::_Do_call @ 0x1800B7840
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryUpdateTrackingState@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800B123C (-TryUpdateTrackingState@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_85f9a2e6b160a42d5da92bb8c74ed5b7__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_____ptr64_::_Do_call(
        __int64 a1,
        _QWORD *a2)
{
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  updated = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::TryUpdateTrackingState(
              *(HSTRING **)(a1 + 8),
              a2);
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x150,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)updated);
}
