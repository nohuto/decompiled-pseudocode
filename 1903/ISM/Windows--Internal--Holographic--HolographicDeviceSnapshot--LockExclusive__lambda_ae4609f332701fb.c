/*
 * XREFs of Windows::Internal::Holographic::HolographicDeviceSnapshot::LockExclusive__lambda_ae4609f332701fbf386e5d669d1e8a4c___ @ 0x18014ACE4
 * Callers:
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::TrackedDeviceSnapshot__lambda_3f94c1c330aebc4cd0e0e5305e75e493___ @ 0x18014B810 (Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal-_ea_18014B810.c)
 * Callees:
 *     ?Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ @ 0x1800D8500 (-Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ.c)
 *     _lambda_2f7ec991c440bb20d82758962485f4cf_::operator() @ 0x180152498 (_lambda_2f7ec991c440bb20d82758962485f4cf_--operator().c)
 *     ?find@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBUSPATIAL_NODE_ID@@@Z @ 0x1801615D8 (-find@-$_Tree@V-$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holog.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::Holographic::HolographicDeviceSnapshot::LockExclusive__lambda_ae4609f332701fbf386e5d669d1e8a4c___(
        _QWORD *a1)
{
  struct Windows::Internal::Holographic::HolographicDeviceSnapshot *v2; // rbx
  _QWORD v3[4]; // [rsp+28h] [rbp-20h] BYREF
  struct Windows::Internal::Holographic::HolographicDeviceSnapshot *v4; // [rsp+58h] [rbp+10h] BYREF
  __int64 v5; // [rsp+60h] [rbp+18h] BYREF

  v2 = Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance();
  if ( *((_BYTE *)v2 + 120) )
  {
    AcquireSRWLockExclusive((PSRWLOCK)v2);
    v4 = v2;
    v3[0] = a1[1];
    v3[1] = v2;
    v3[2] = &v4;
    std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::find(
      (char *)v2 + 88,
      &v5,
      *a1);
    if ( v5 != *((_QWORD *)v2 + 11) )
    {
      lambda_2f7ec991c440bb20d82758962485f4cf_::operator()(v3, v5 + 48);
      v2 = v4;
    }
    if ( v2 )
      ReleaseSRWLockExclusive((PSRWLOCK)v2);
  }
}
