/*
 * XREFs of ?StopTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAXAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x180116E20
 * Callers:
 *     ??1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ @ 0x180115D18 (--1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ.c)
 * Callees:
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x180020FA8 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 *     ?_Extract@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@@std@@@std@@@2@@Z @ 0x18003B5E8 (-_Extract@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$map@U_GUID@@V-$vector@EV-$allocator@E@std@@@std@@UG.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1800A83BC (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     ?CheckForTrackingStateTransition@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@PEAUTrackingStateEntry@1234@@Z @ 0x1801170D0 (-CheckForTrackingStateTransition@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@A.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@USpatialNodeIdComp@456@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@2@AEBUSPATIAL_NODE_ID@@@Z @ 0x180118EE4 (-find@-$_Tree@V-$_Tmap_traits@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrap.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StopTracking(
        __int64 a1,
        const struct SPATIAL_NODE_ID *a2,
        int a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rax
  int v9; // edi
  __int64 v10; // r8
  const char *v11; // r9
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 *j; // rcx
  __int64 i; // r8
  __int64 *v16; // rax
  __int64 v17; // [rsp+0h] [rbp-78h] BYREF
  char *v18; // [rsp+20h] [rbp-58h]
  const char *v19; // [rsp+28h] [rbp-50h]
  __int64 v20; // [rsp+30h] [rbp-48h]
  __int64 **v21; // [rsp+38h] [rbp-40h]
  __int64 v22; // [rsp+40h] [rbp-38h]
  char v23; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 *v25; // [rsp+80h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+98h] [rbp+20h]

  v20 = -2LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  v26 = v6;
  std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry>>,0>>::find(
    a1 + 216,
    &v25,
    a2);
  wil::details::in1diag3::FailFast_IfMsg(
    retaddr,
    (void *)0x711,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
    (const char *)(v25 == *(__int64 **)(a1 + 216)),
    (unsigned __int16 *)"StopTracking() called without corresponding StartTracking() call",
    v19);
  if ( a3 == 1 )
  {
    v8 = 16LL;
    v7 = 20LL;
  }
  else
  {
    if ( a3 != 2 )
    {
      wil::details::in1diag3::FailFast_UnexpectedMsg(
        retaddr,
        (void *)0x53,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.h",
        "Invalid state passed to GetCountForState",
        v18);
      __debugbreak();
    }
    v7 = 20LL;
    v8 = 20LL;
  }
  wil::details::in1diag3::FailFast_IfMsg(
    retaddr,
    (void *)0x712,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
    (const char *)(*(_DWORD *)((char *)v25 + v8 + 28) == 0),
    (unsigned __int16 *)"TrackingState ref count is incorrect",
    v19);
  v9 = a3 - 1;
  if ( v9 )
  {
    if ( v9 != 1 )
    {
      wil::details::in1diag3::FailFast_UnexpectedMsg(
        retaddr,
        (void *)0x53,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.h",
        "Invalid state passed to GetCountForState",
        v18);
      JUMPOUT(0x180117023LL);
    }
  }
  else
  {
    v7 = 16LL;
  }
  try
  {
    --*(_DWORD *)((char *)v25 + v7 + 28);
    v21 = &v25;
    v22 = a1;
    v23 = 1;
    Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::CheckForTrackingStateTransition(
      (Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper *)a1,
      a2,
      (struct Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry *)((char *)v25 + 44));
    if ( !(*((_DWORD *)v25 + 11) + *((_DWORD *)v25 + 12)) )
    {
      v12 = v25;
      if ( !*((_BYTE *)v25 + 25) )
      {
        v13 = v25[2];
        if ( *(_BYTE *)(v13 + 25) )
        {
          for ( i = v25[1]; !*(_BYTE *)(i + 25) && v12 == *(__int64 **)(i + 16); i = *(_QWORD *)(i + 8) )
            v12 = (__int64 *)i;
        }
        else
        {
          for ( j = *(__int64 **)v13; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            ;
        }
      }
      v16 = std::_Tree<std::_Tmap_traits<_GUID,std::map<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::map<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>>>>,0>>::_Extract(
              (_QWORD *)(a1 + 216),
              v25);
      operator delete(v16, (const struct std::nothrow_t *)0x38);
    }
    if ( v6 )
      LeaveCriticalSection(v6);
  }
  catch ( ... )
  {
    wil::details::in1diag3::FailFast_CaughtException(retaddr, &v17, v10, v11);
    JUMPOUT(0x180135D7BLL);
  }
}
