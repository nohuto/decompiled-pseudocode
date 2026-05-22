/*
 * XREFs of Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::TrackedDeviceSnapshot__lambda_84d1669a2d3ff4f598ada49efe38a155___ @ 0x18011BD04
 * Callers:
 *     _lambda_5c93fa6c61cd305c53357332304ca747_::operator() @ 0x1801176A0 (_lambda_5c93fa6c61cd305c53357332304ca747_--operator().c)
 * Callees:
 *     ?Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ @ 0x1800A49E8 (-Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBUSPATIAL_NODE_ID@@@Z @ 0x1801188B0 (-find@-$_Tree@V-$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holog.c)
 *     ??A?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@@2@@std@@QEAAAEAUTrackedDeviceSnapshot@Holographic@Internal@Windows@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x18011D014 (--A-$map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UTrackedDeviceSnapshot.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::TrackedDeviceSnapshot__lambda_84d1669a2d3ff4f598ada49efe38a155___(
        const void *a1,
        _QWORD **a2)
{
  struct Windows::Internal::Holographic::HolographicDeviceSnapshot *v4; // rdi
  const char *v5; // r9
  LARGE_INTEGER *v6; // rax
  _OWORD *v7; // rdx
  LARGE_INTEGER *v8; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp+10h] BYREF
  struct Windows::Internal::Holographic::HolographicDeviceSnapshot *v12; // [rsp+60h] [rbp+18h]

  try
  {
    v4 = Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance();
    if ( *((_BYTE *)v4 + 120) )
    {
      AcquireSRWLockExclusive((PSRWLOCK)v4);
      v12 = v4;
      std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::find(
        (__int64 *)v4 + 11,
        &v10,
        a1);
      if ( v10 != *((_QWORD *)v4 + 11) )
      {
        v6 = (LARGE_INTEGER *)std::map<std::wstring,Windows::Internal::Holographic::TrackedDeviceSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::TrackedDeviceSnapshot>>>::operator[]((int)v4 + 8);
        v7 = (_OWORD *)**a2;
        v8 = v6 + 14;
        *(_OWORD *)&v6[14].LowPart = *v7;
        *(_OWORD *)&v6[16].LowPart = v7[1];
        *(_OWORD *)&v6[18].LowPart = v7[2];
        *(_OWORD *)&v6[20].LowPart = v7[3];
        *(_OWORD *)&v6[22].LowPart = v7[4];
        *(_OWORD *)&v6[24].LowPart = v7[5];
        *(_OWORD *)&v6[26].LowPart = v7[6];
        *(_OWORD *)&v6[28].LowPart = v7[7];
        *(_OWORD *)&v6[30].LowPart = v7[8];
        *(_OWORD *)&v6[32].LowPart = v7[9];
        QueryPerformanceCounter(&PerformanceCount);
        v8[20] = PerformanceCount;
      }
      if ( v4 )
        ReleaseSRWLockExclusive((PSRWLOCK)v4);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x14B,
      (__int64)"onecoreuap\\analog\\input\\common\\inc\\holographicdevicesnapshot.h",
      v5);
  }
}
