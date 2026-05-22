/*
 * XREFs of ?OnTrackingTimeoutExpired@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJK@Z @ 0x1800E3E64
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_be19193f882ced76eba7e08926344df0__void_::_Do_call @ 0x1800E63C0 (std--_Func_impl_no_alloc__lambda_be19193f882ced76eba7e08926344df0__void_--_Do_call.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AEA0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?GetCacheEntry@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJKKPEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800E247C (-GetCacheEntry@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 *     ?QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@6@_N@Z @ 0x1800E4260 (-QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnTrackingTimeoutExpired(
        struct _RTL_CRITICAL_SECTION *this,
        int a2,
        __int64 a3)
{
  int CacheEntry; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r9
  __int128 v9; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v10[10]; // [rsp+38h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v9 = 0LL;
  CacheEntry = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::GetCacheEntry(
                 this,
                 a2,
                 a3,
                 &v9);
  v5 = CacheEntry;
  if ( CacheEntry < 0 )
  {
    v6 = 858LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)CacheEntry);
    goto LABEL_8;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 112LL))(v9) )
  {
    v10[0] = off_180176160;
    v10[1] = this;
    v10[7] = v10;
    LOBYTE(v7) = 1;
    CacheEntry = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem(
                   this,
                   &v9,
                   v10,
                   v7);
    v5 = CacheEntry;
    if ( CacheEntry < 0 )
    {
      v6 = 873LL;
      goto LABEL_6;
    }
  }
  v5 = 0;
LABEL_8:
  if ( *((_QWORD *)&v9 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v9 + 1));
  return v5;
}
