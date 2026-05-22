/*
 * XREFs of ?SetInputDeviceHapticsFeedback@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKEEGPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800E4990
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B220 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180056650 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCacheEntry@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJKKPEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800E26BC (-GetCacheEntry@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SetInputDeviceHapticsFeedback(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        int a2,
        __int64 a3,
        char a4,
        unsigned __int16 a5)
{
  unsigned __int8 v6; // bl
  int CacheEntry; // eax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  std::_Ref_count_base *v13[2]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *(_OWORD *)v13 = 0LL;
  v6 = a3;
  CacheEntry = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::GetCacheEntry(
                 (struct _RTL_CRITICAL_SECTION *)((char *)this - 8),
                 a2,
                 a3,
                 v13);
  if ( CacheEntry >= 0 )
  {
    v10 = v6;
    v11 = *(_QWORD *)v13[0];
    if ( v6 == 1 )
    {
      CacheEntry = (*(__int64 (**)(void))(v11 + 192))();
      if ( CacheEntry >= 0 )
        goto LABEL_9;
      v9 = 1020LL;
    }
    else
    {
      LOBYTE(v8) = a4;
      LOWORD(v10) = v6 + 4096;
      CacheEntry = (*(__int64 (__fastcall **)(std::_Ref_count_base *, __int64, __int64, _QWORD))(v11 + 184))(
                     v13[0],
                     v10,
                     v8,
                     a5);
      if ( CacheEntry >= 0 )
        goto LABEL_9;
      v9 = 1024LL;
    }
  }
  else
  {
    v9 = 1015LL;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    v9,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
    (const char *)(unsigned int)CacheEntry);
LABEL_9:
  if ( v13[1] )
    std::_Ref_count_base::_Decref(v13[1]);
  return 0LL;
}
