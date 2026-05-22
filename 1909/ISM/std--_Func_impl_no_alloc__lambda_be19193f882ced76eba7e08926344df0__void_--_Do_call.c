/*
 * XREFs of std::_Func_impl_no_alloc__lambda_be19193f882ced76eba7e08926344df0__void_::_Do_call @ 0x1800E63C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800563B0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnTrackingTimeoutExpired@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJK@Z @ 0x1800E3E64 (-OnTrackingTimeoutExpired@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_be19193f882ced76eba7e08926344df0__void_::_Do_call(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnTrackingTimeoutExpired(
         *(struct _RTL_CRITICAL_SECTION **)(a1 + 8),
         *(_DWORD *)(a1 + 16),
         a3);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      166LL,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v3);
}
