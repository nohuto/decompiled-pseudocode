/*
 * XREFs of ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180036A28
 * Callers:
 *     ?CheckInstalledAppServicesAvailable@AtmosCheck@@AEAA_NXZ @ 0x18006BA18 (-CheckInstalledAppServicesAvailable@AtmosCheck@@AEAA_NXZ.c)
 *     ?GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x18006BB54 (-GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV-$vector@V-$basic_string@GU-$char_traits@G@st.c)
 *     _AtmosCheck::GetCurrentEndpointsUnderLock_::_1_::dtor$1 @ 0x18006BC58 (_AtmosCheck--GetCurrentEndpointsUnderLock_--_1_--dtor$1.c)
 *     ?QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEA_N@Z @ 0x18006C150 (-QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEA_N@Z.c)
 *     ?UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGAEAV?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@Z @ 0x18006C470 (-UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGAEAV-$unique_ptr@$$BY0A@UEndpointSpecificSpatialTe.c)
 *     ?UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGHPEBUEndpointSpecificSpatialTechInfo@1@@Z @ 0x18006C52C (-UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGHPEBUEndpointSpecificSpatialTechInfo@1@@Z.c)
 *     _CDeviceGraphStore::GetDeviceGraphStoreForEndpoint_::_1_::dtor$1 @ 0x180070180 (_CDeviceGraphStore--GetDeviceGraphStoreForEndpoint_--_1_--dtor$1.c)
 *     _CPlaybackNotifier::UpdateAudioPlaybackStatus_::_1_::dtor$0 @ 0x180070200 (_CPlaybackNotifier--UpdateAudioPlaybackStatus_--_1_--dtor$0.c)
 *     _CAudioResourceManager::DestroyStream_::_1_::dtor$5 @ 0x1800717E0 (_CAudioResourceManager--DestroyStream_--_1_--dtor$5.c)
 *     _CConstraintModel::Initialize_::_1_::dtor$4 @ 0x1800745AE (_CConstraintModel--Initialize_--_1_--dtor$4.c)
 *     _CMonitorManager::CaptureMonitor::CaptureMonitor_::_1_::dtor$2 @ 0x1801072DE (_CMonitorManager--CaptureMonitor--CaptureMonitor_--_1_--dtor$2.c)
 *     _std::_List_buy_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_________::_Buynode_unsigned_short___unsigned_short____::_1_::dtor$1 @ 0x18013CE3A (_std--_List_buy_std--pair_std--basic_string_unsigned_short_std--char_traits_unsigne_ea_18013CE3A.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800CA1A0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

__int64 __fastcall std::wstring::~wstring(__int64 a1)
{
  unsigned __int64 v1; // rdx
  void *v3; // rcx
  const struct std::nothrow_t *v4; // rdx
  __int64 result; // rax
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  void *v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 >= 8 )
  {
    v3 = *(void **)a1;
    v4 = (const struct std::nothrow_t *)(2 * v1 + 2);
    v6 = (unsigned __int64)v4;
    v7 = v3;
    if ( (unsigned __int64)v4 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v7, &v6);
      v4 = (const struct std::nothrow_t *)v6;
      v3 = v7;
    }
    operator delete(v3, v4);
  }
  result = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)a1 = 0;
  return result;
}
