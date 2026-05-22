/*
 * XREFs of Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_3f0123449741a7972872694de663f1a4___ @ 0x18011BB18
 * Callers:
 *     ?GetSittingStandingOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z @ 0x1801151F0 (-GetSittingStandingOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ @ 0x1800A49E8 (-Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBUSPATIAL_NODE_ID@@@Z @ 0x1801188B0 (-find@-$_Tree@V-$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holog.c)
 *     ??A?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@@std@@@2@@std@@QEAAAEAUSpatialGraphSnapshot@Holographic@Internal@Windows@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x18011D0F4 (--A-$map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@USpatialGraphSnapshot@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_3f0123449741a7972872694de663f1a4___(
        const void *a1,
        _BYTE **a2)
{
  struct Windows::Internal::Holographic::HolographicDeviceSnapshot *v4; // rdi
  const char *v5; // r9
  __int64 v6; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp+10h] BYREF
  struct Windows::Internal::Holographic::HolographicDeviceSnapshot *v10; // [rsp+60h] [rbp+18h]

  try
  {
    v4 = Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance();
    if ( *((_BYTE *)v4 + 120) )
    {
      AcquireSRWLockExclusive((PSRWLOCK)v4);
      v10 = v4;
      std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::find(
        (__int64 *)v4 + 9,
        &v8,
        a1);
      if ( v8 != *((_QWORD *)v4 + 9) )
      {
        v6 = std::map<std::wstring,Windows::Internal::Holographic::SpatialGraphSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialGraphSnapshot>>>::operator[]((int)v4 + 56);
        *(_BYTE *)(v6 + 56) = **a2 != 0;
        QueryPerformanceCounter(&PerformanceCount);
        *(LARGE_INTEGER *)(v6 + 64) = PerformanceCount;
      }
      if ( v4 )
        ReleaseSRWLockExclusive((PSRWLOCK)v4);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x133,
      (__int64)"onecoreuap\\analog\\input\\common\\inc\\holographicdevicesnapshot.h",
      v5);
  }
}
