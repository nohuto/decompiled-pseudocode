/*
 * XREFs of ?StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x180116A18
 * Callers:
 *     ?RuntimeClassInitialize@SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAAJAEBV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEBUDynamicNodeInfo@234@W4SPATIAL_TRACKING_STATE@@USpatialGraphSettings@234@@Z @ 0x180115FDC (-RuntimeClassInitialize@SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAAJAEBV-$share.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x180020FA8 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1800A83BC (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     ?CheckForTrackingStateTransition@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@PEAUTrackingStateEntry@1234@@Z @ 0x1801170D0 (-CheckForTrackingStateTransition@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@A.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@USpatialNodeIdComp@456@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@2@AEBUSPATIAL_NODE_ID@@@Z @ 0x180118EE4 (-find@-$_Tree@V-$_Tmap_traits@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrap.c)
 *     ?swap@?$function@$$A6AXXZ@std@@QEAAXAEAV12@@Z @ 0x18011C7B4 (-swap@-$function@$$A6AXXZ@std@@QEAAXAEAV12@@Z.c)
 *     ??$_Buynode@U?$pair@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@?$_Tree_comp_alloc@V?$_Tmap_traits@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@USpatialNodeIdComp@456@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@PEAX@1@$$QEAU?$pair@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@1@@Z @ 0x18011D430 (--$_Buynode@U-$pair@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Hologr.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@PEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@USpatialNodeIdComp@456@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@1@PEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@PEAX@1@@Z @ 0x18011D47C (--$_Insert_hint@AEAU-$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWra.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StartTracking(
        __int64 a1,
        const struct SPATIAL_NODE_ID *a2,
        int a3)
{
  __int64 *v5; // rdi
  __int64 (__fastcall ***v6)(); // rdx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 (__fastcall ***v9)(); // rdx
  __int64 v10; // r15
  __int128 *v11; // rax
  __int64 v12; // rax
  int v13; // eax
  const char *v14; // r9
  unsigned int v15; // edi
  _QWORD *v16; // rdx
  __int64 result; // rax
  _QWORD *v18; // rdx
  char *v19; // [rsp+20h] [rbp-128h]
  char *v20; // [rsp+20h] [rbp-128h]
  const char *v21; // [rsp+28h] [rbp-120h]
  const char *v22; // [rsp+28h] [rbp-120h]
  __int64 v23; // [rsp+30h] [rbp-118h] BYREF
  __int128 v24; // [rsp+38h] [rbp-110h] BYREF
  __int128 v25; // [rsp+48h] [rbp-100h] BYREF
  __int64 v26; // [rsp+58h] [rbp-F0h]
  int v27; // [rsp+60h] [rbp-E8h]
  __int64 v28; // [rsp+68h] [rbp-E0h]
  __int64 v29; // [rsp+70h] [rbp-D8h]
  _QWORD *v30; // [rsp+78h] [rbp-D0h]
  char v31; // [rsp+80h] [rbp-C8h]
  __int64 (__fastcall **v32)(); // [rsp+90h] [rbp-B8h] BYREF
  __int128 v33; // [rsp+98h] [rbp-B0h]
  __int64 (__fastcall ***v34)(); // [rsp+C8h] [rbp-80h]
  _QWORD v35[7]; // [rsp+D0h] [rbp-78h] BYREF
  _QWORD *v36; // [rsp+108h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+0h]
  int v38; // [rsp+160h] [rbp+18h] BYREF

  v38 = a3;
  v28 = -2LL;
  wil::details::in1diag3::FailFast_IfMsg(
    retaddr,
    (void *)0x6EF,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
    (const char *)(a3 == 0),
    (unsigned __int16 *)"StartTracking called with TrackingStateStopped",
    v21);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  v29 = a1 + 176;
  v5 = (__int64 *)(a1 + 216);
  std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry>>,0>>::find(
    a1 + 216,
    &v23,
    a2);
  try
  {
    v35[0] = off_180144250;
    v36 = v35;
    v30 = v35;
    v31 = 1;
    if ( v23 == *v5 )
    {
      *(_QWORD *)&v24 = a1;
      *((_QWORD *)&v24 + 1) = &v23;
      v32 = off_180143E00;
      v33 = v24;
      v34 = &v32;
      std::function<void (void)>::swap(&v32, v35);
      if ( v34 )
      {
        v9 = &v32;
        LOBYTE(v9) = v34 != &v32;
        ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v34)[4])(v34, v9);
      }
      v10 = *v5;
      *(_QWORD *)&v24 = 0LL;
      DWORD2(v24) = 0;
      if ( v38 == 1 )
      {
        v11 = &v24;
      }
      else
      {
        if ( v38 != 2 )
        {
          wil::details::in1diag3::FailFast_UnexpectedMsg(
            retaddr,
            (void *)0x53,
            (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.h",
            "Invalid state passed to GetCountForState",
            v19);
          JUMPOUT(0x180116E15LL);
        }
        v11 = (__int128 *)((char *)&v24 + 4);
      }
      *(_DWORD *)v11 = 1;
      v25 = *(_OWORD *)a2;
      v26 = v24;
      v27 = DWORD2(v24);
      v12 = std::_Tree_comp_alloc<std::_Tmap_traits<SPATIAL_NODE_ID,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry>>,0>>::_Buynode<std::pair<SPATIAL_NODE_ID,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry>>(
              a1 + 216,
              &v25);
      std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry>>,0>>::_Insert_hint<std::pair<SPATIAL_NODE_ID const,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry> &,std::_Tree_node<std::pair<SPATIAL_NODE_ID const,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry>,void *> *>(
        a1 + 216,
        &v24,
        v10,
        v12 + 28,
        v12);
      v8 = v24;
      v23 = v24;
    }
    else
    {
      wil::details::in1diag3::FailFast_IfMsg(
        retaddr,
        (void *)0x6FA,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)(*(_DWORD *)(v23 + 44) + *(_DWORD *)(v23 + 48) == 0),
        (unsigned __int16 *)"NodeId should not be in map if TrackingState ref count < 1",
        v22);
      *(_QWORD *)&v24 = &v23;
      *((_QWORD *)&v24 + 1) = &v38;
      v32 = off_180144290;
      v33 = v24;
      v34 = &v32;
      std::function<void (void)>::swap(&v32, v35);
      if ( v34 )
      {
        v6 = &v32;
        LOBYTE(v6) = v34 != &v32;
        ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v34)[4])(v34, v6);
      }
      if ( v38 == 1 )
      {
        v7 = 16LL;
      }
      else
      {
        if ( v38 != 2 )
        {
          wil::details::in1diag3::FailFast_UnexpectedMsg(
            retaddr,
            (void *)0x53,
            (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.h",
            "Invalid state passed to GetCountForState",
            v20);
          __debugbreak();
        }
        v7 = 20LL;
      }
      ++*(_DWORD *)(v7 + v23 + 28);
      v8 = v23;
    }
    v13 = Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::CheckForTrackingStateTransition(
            (Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper *)a1,
            a2,
            (struct Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry *)(v8 + 44));
    v15 = v13;
    if ( v13 >= 0 )
    {
      if ( v36 )
      {
        v18 = v35;
        LOBYTE(v18) = v36 != v35;
        (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v36 + 32LL))(v36, v18);
        v36 = 0LL;
      }
      if ( a1 != -176 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x704,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)(unsigned int)v13);
      if ( !v36 )
      {
        std::_Xbad_function_call();
        __debugbreak();
      }
      (*(void (__fastcall **)(_QWORD *))(*v36 + 16LL))(v36);
      if ( v36 )
      {
        v16 = v35;
        LOBYTE(v16) = v36 != v35;
        (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v36 + 32LL))(v36, v16);
        v36 = 0LL;
      }
      if ( a1 != -176 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
      result = v15;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x709,
                           (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
                           v14);
  }
  return result;
}
