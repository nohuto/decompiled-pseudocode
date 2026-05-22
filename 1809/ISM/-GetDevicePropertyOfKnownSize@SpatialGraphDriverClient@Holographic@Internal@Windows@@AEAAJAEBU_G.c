/*
 * XREFs of ?GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAX_KP6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x18011471C
 * Callers:
 *     ?GetFloorDynamicNode@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUDynamicNodeInfo@234@@Z @ 0x180114FC0 (-GetFloorDynamicNode@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUDynamicNode.c)
 *     ?GetForwardOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z @ 0x1801150E0 (-GetForwardOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z.c)
 *     ?GetSittingStandingOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z @ 0x1801151F0 (-GetSittingStandingOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z.c)
 *     ?GetSupportedDDILevelsInternal@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJPEAUHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@@Z @ 0x1801159BC (-GetSupportedDDILevelsInternal@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJPEAUH.c)
 * Callees:
 *     memcpy_s @ 0x1800019E8 (memcpy_s.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$vector@EV?$allocator@E@std@@@std@@QEAA@_KAEBV?$allocator@E@1@@Z @ 0x18007C358 (--0-$vector@EV-$allocator@E@std@@@std@@QEAA@_KAEBV-$allocator@E@1@@Z.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180109F10 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?DevicePropertyCacheMiss_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1_N@Z @ 0x18010D96C (-DevicePropertyCacheMiss_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1_N@Z.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x18010F27C (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 *     ?SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z @ 0x18011047C (-SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBUSPATIAL_NODE_ID@@@Z @ 0x1801188B0 (-find@-$_Tree@V-$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holog.c)
 *     ??$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAX_K@Z @ 0x18011B760 (--$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@H.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetDevicePropertyOfKnownSize(
        __int64 a1,
        const struct _GUID *a2,
        void *a3,
        rsize_t a4,
        __int64 (__fastcall *a5)(void *, rsize_t),
        char a6)
{
  bool v10; // al
  unsigned __int8 v11; // r15
  const void *v12; // r8
  rsize_t v13; // r9
  _DWORD *v14; // rcx
  __int64 v15; // rcx
  int PropertyOfKnown; // ebx
  __int64 v17; // rdx
  const char *v19; // r9
  struct _GUID v20; // xmm0
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v21; // rbx
  char *v22; // rdi
  __int64 v23; // rcx
  char *v24; // rax
  const struct std::nothrow_t *v25; // rdx
  char *v26; // rax
  const char *v27; // r9
  char *v28; // rax
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v29; // rcx
  unsigned int v30; // [rsp+40h] [rbp-59h] BYREF
  BOOL bAlertable[2]; // [rsp+48h] [rbp-51h] BYREF
  int v32; // [rsp+50h] [rbp-49h]
  __int64 v33; // [rsp+58h] [rbp-41h]
  __int64 v34; // [rsp+60h] [rbp-39h] BYREF
  __int64 (__fastcall *v35)(void *, rsize_t); // [rsp+68h] [rbp-31h]
  struct _GUID InBuffer; // [rsp+70h] [rbp-29h] BYREF
  __int64 v37; // [rsp+80h] [rbp-19h]
  struct _GUID v38; // [rsp+88h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+4Fh]

  v35 = a5;
  v10 = (a6 & 1) != 0 || *(_BYTE *)(a1 + 120) && (a6 & 2) == 0;
  v11 = (a6 & 2) != 0 || *(_BYTE *)(a1 + 120) == 0;
  if ( v10 )
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 240));
    std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::find(
      a1 + 248,
      &v34,
      a2);
    if ( v34 != *(_QWORD *)(a1 + 248) )
    {
      v12 = *(const void **)(v34 + 48);
      v13 = *(_QWORD *)(v34 + 56) - (_QWORD)v12;
      if ( a4 == v13 )
      {
        if ( memcpy_s(a3, a4, v12, v13) )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x9A,
            (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertycache.h",
            v19);
          JUMPOUT(0x180114AC7LL);
        }
        if ( a1 != -240 )
          ReleaseSRWLockShared((PSRWLOCK)(a1 + 240));
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x98,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertycache.h",
        (const char *)0x8007000DLL);
    }
    if ( a1 != -240 )
      ReleaseSRWLockShared((PSRWLOCK)(a1 + 240));
    v14 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
    if ( v14 && *v14 )
    {
      HolographicDriverClientTrace::Instance();
      HolographicDriverClientTrace::DevicePropertyCacheMiss_(v15, 1, a1 + 80, (__int64)a2, v11);
    }
  }
  if ( !v11 )
  {
    PropertyOfKnown = -2147023728;
    v17 = 1138LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)PropertyOfKnown);
    return (unsigned int)PropertyOfKnown;
  }
  v20 = *a2;
  if ( *(_BYTE *)(a1 + 121) )
  {
    v21 = *(Windows::Internal::Holographic::HolographicDriverHandleWrapper **)(a1 + 104);
    v37 = 0LL;
    InBuffer = v20;
    std::vector<unsigned char>::vector<unsigned char>((char **)bAlertable, a4 + 12);
    v22 = *(char **)bAlertable;
    v30 = 0;
    PropertyOfKnown = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
                        v21,
                        0x5B8430u,
                        &InBuffer,
                        0x18u,
                        *(LPVOID *)bAlertable,
                        v32 - bAlertable[0],
                        &v30);
    if ( PropertyOfKnown < 0 )
    {
      if ( !v22 )
        goto LABEL_42;
      v24 = v22;
      v25 = (const struct std::nothrow_t *)(v33 - (_QWORD)v22);
      if ( (unsigned __int64)(v33 - (_QWORD)v22) < 0x1000
        || (v22 = (char *)*((_QWORD *)v22 - 1),
            v25 = (const struct std::nothrow_t *)((char *)v25 + 39),
            (unsigned __int64)(v24 - v22 - 8) <= 0x1F) )
      {
        operator delete(v22, v25);
        goto LABEL_42;
      }
      goto LABEL_40;
    }
    if ( v30 == a4 + 12 )
    {
      if ( *(_DWORD *)v22 == a4 )
      {
        if ( memcpy_s(a3, a4, v22 + 12, a4) )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x155,
            (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
            v27);
          __debugbreak();
        }
        v28 = v22;
        v25 = (const struct std::nothrow_t *)(v33 - (_QWORD)v22);
        if ( (unsigned __int64)(v33 - (_QWORD)v22) < 0x1000
          || (v22 = (char *)*((_QWORD *)v22 - 1),
              v25 = (const struct std::nothrow_t *)((char *)v25 + 39),
              (unsigned __int64)(v28 - v22 - 8) <= 0x1F) )
        {
          operator delete(v22, v25);
          PropertyOfKnown = 0;
LABEL_42:
          if ( PropertyOfKnown < 0 )
            goto LABEL_43;
          goto LABEL_46;
        }
LABEL_40:
        _o__invalid_parameter_noinfo_noreturn(v23, v25);
        __debugbreak();
      }
      PropertyOfKnown = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x153,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
        (const char *)0x8000FFFFLL);
    }
    else
    {
      PropertyOfKnown = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x150,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
        (const char *)0x8000FFFFLL);
      if ( !v22 )
        goto LABEL_43;
    }
    v26 = v22;
    v25 = (const struct std::nothrow_t *)(v33 - (_QWORD)v22);
    if ( (unsigned __int64)(v33 - (_QWORD)v22) >= 0x1000 )
    {
      v22 = (char *)*((_QWORD *)v22 - 1);
      v25 = (const struct std::nothrow_t *)((char *)v25 + 39);
      if ( (unsigned __int64)(v26 - v22 - 8) > 0x1F )
        goto LABEL_40;
    }
    operator delete(v22, v25);
LABEL_43:
    v17 = 1152LL;
    goto LABEL_20;
  }
  v29 = *(Windows::Internal::Holographic::HolographicDriverHandleWrapper **)(a1 + 104);
  v38 = *a2;
  PropertyOfKnown = Windows::Internal::Holographic::HolographicDriverHandleWrapper::GetPropertyOfKnownSize<HOLOGRAPHIC_DEVICE_PROPERTY_HEADER>(
                      v29,
                      0x5B8414u,
                      &v38,
                      0x10u,
                      a3,
                      a4);
  if ( PropertyOfKnown < 0 )
  {
    v17 = 1166LL;
    goto LABEL_20;
  }
LABEL_46:
  PropertyOfKnown = v35(a3, a4);
  if ( PropertyOfKnown < 0 )
  {
    v17 = 1169LL;
    goto LABEL_20;
  }
  Windows::Internal::Holographic::PropertyCache::SetValue(
    (Windows::Internal::Holographic::PropertyCache *)(a1 + 208),
    a2,
    a3,
    a4);
  return 0LL;
}
