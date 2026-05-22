/*
 * XREFs of ?GetNodeErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAPEAUHOLOGRAPHIC_DEVICE_ERROR_STATUS@@PEA_K@Z @ 0x1801153F0
 * Callers:
 *     ?GetNodeErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUSPATIAL_NODE_ID@@PEAPEAUHOLOGRAPHIC_DEVICE_ERROR_STATUS@@PEA_K@Z @ 0x180121F10 (-GetNodeErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUSPATIAL.c)
 * Callees:
 *     memcpy_s @ 0x1800019E8 (memcpy_s.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z @ 0x180109EE0 (-Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180109F10 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?NodePropertyCacheMiss_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0_N@Z @ 0x18010DA8C (-NodePropertyCacheMiss_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0_N@Z.c)
 *     ?SetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAA_NAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEBX_K@Z @ 0x180110804 (-SetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAA_NAEBUSPATIAL_NODE_ID@@AEBU_GUID@@.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBUSPATIAL_NODE_ID@@@Z @ 0x1801188B0 (-find@-$_Tree@V-$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holog.c)
 *     ??$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAVVariableSizeStructWrapperBase@123@@Z @ 0x18011B8B4 (--$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrappe.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memmove_0 @ 0x18012DB6B (memmove_0.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetNodeErrorStatuses(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        const struct SPATIAL_NODE_ID *a2,
        struct HOLOGRAPHIC_DEVICE_ERROR_STATUS **a3,
        unsigned __int64 *a4)
{
  char v5; // al
  char v7; // r13
  bool v8; // r12
  _QWORD *v9; // rsi
  __int64 v10; // rbx
  int v11; // eax
  const char *v12; // r9
  int v13; // esi
  const char *v14; // r9
  _DWORD *v15; // rcx
  HolographicDriverClientTrace *v16; // rcx
  unsigned int v17; // ebx
  __int64 v18; // rdx
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v19; // rcx
  __int128 v20; // xmm1
  int PropertyOfVariable; // eax
  const char *v22; // r9
  _DWORD *v23; // r9
  unsigned __int64 v24; // rdx
  __int64 v25; // rdx
  unsigned int *v26; // rbx
  SIZE_T v27; // rsi
  char *v28; // rax
  char *v29; // rdi
  char *v30; // rax
  char *i; // rcx
  unsigned __int64 v32; // rcx
  void *v33; // rcx
  const struct std::nothrow_t *v34; // rdx
  int v38[2]; // [rsp+48h] [rbp-41h] BYREF
  void *v39[2]; // [rsp+50h] [rbp-39h]
  __int64 v40; // [rsp+60h] [rbp-29h]
  __int64 v41; // [rsp+68h] [rbp-21h] BYREF
  __int64 v42; // [rsp+70h] [rbp-19h] BYREF
  _OWORD InBuffer[2]; // [rsp+78h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  *(_QWORD *)v38 = 0LL;
  v40 = 0LL;
  v5 = *((_BYTE *)this + 112);
  *(_OWORD *)v39 = 0LL;
  v7 = 1;
  v8 = *((_BYTE *)this + 112) == 0;
  if ( v5 )
  {
    AcquireSRWLockShared((PSRWLOCK)this + 34);
    std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::find(
      (char *)this + 280,
      &v41,
      a2);
    if ( v41 == *((_QWORD *)this + 35) )
      v9 = 0LL;
    else
      v9 = (_QWORD *)(v41 + 48);
    if ( !v9
      || (std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::find(
            v9,
            &v42,
            &SPATIAL_DYNAMIC_NODE_PROPERTY_ERROR_STATUSES),
          v10 = v42,
          v42 == *v9) )
    {
      if ( this != (Windows::Internal::Holographic::SpatialGraphDriverClient *)-272LL )
        ReleaseSRWLockShared((PSRWLOCK)this + 34);
      v39[1] = v39[0];
    }
    else
    {
      v11 = Windows::Internal::Holographic::VariableSizeStructWrapperBase::Allocate((Windows::Internal::Holographic::VariableSizeStructWrapperBase *)v38);
      v13 = v11;
      if ( v11 >= 0 )
      {
        if ( (char *)v39[1] - (char *)v39[0] < *(_QWORD *)v38 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x34,
            (__int64)"onecoreuap\\analog\\input\\common\\inc\\holographicdriverclienttypes.h",
            v12);
          __debugbreak();
        }
        if ( memcpy_s(
               (char *)v39[0] + *(_QWORD *)v38,
               (char *)v39[1] - *(_QWORD *)v38 - (char *)v39[0],
               *(const void *const *)(v10 + 48),
               *(_QWORD *)(v10 + 56) - *(_QWORD *)(v10 + 48)) )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x1DD,
            (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertycache.h",
            v14);
          JUMPOUT(0x180115824LL);
        }
        if ( this != (Windows::Internal::Holographic::SpatialGraphDriverClient *)-272LL )
          ReleaseSRWLockShared((PSRWLOCK)this + 34);
        v13 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1D8,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertycache.h",
          (const char *)(unsigned int)v11);
        if ( this != (Windows::Internal::Holographic::SpatialGraphDriverClient *)-272LL )
          ReleaseSRWLockShared((PSRWLOCK)this + 34);
        v39[1] = v39[0];
      }
      if ( v13 >= 0 )
        goto LABEL_37;
    }
    v15 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
    if ( v15 && *v15 )
    {
      HolographicDriverClientTrace::Instance();
      HolographicDriverClientTrace::NodePropertyCacheMiss_(
        v16,
        (const struct _GUID *)((char *)this + 72),
        a2,
        &SPATIAL_DYNAMIC_NODE_PROPERTY_ERROR_STATUSES,
        v8);
    }
  }
  if ( !v8 )
  {
    v17 = -2147023728;
    v18 = 1319LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)v17);
LABEL_36:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D4,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)v17);
    goto LABEL_47;
  }
  memset_0(InBuffer, 0, sizeof(InBuffer));
  v19 = (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)*((_QWORD *)this + 12);
  v20 = *(_OWORD *)a2;
  InBuffer[0] = SPATIAL_DYNAMIC_NODE_PROPERTY_ERROR_STATUSES;
  InBuffer[1] = v20;
  PropertyOfVariable = Windows::Internal::Holographic::HolographicDriverHandleWrapper::GetPropertyOfVariableSize<HOLOGRAPHIC_DEVICE_PROPERTY_HEADER>(
                         v19,
                         0x5B8418u,
                         InBuffer,
                         0x20u,
                         (Windows::Internal::Holographic::VariableSizeStructWrapperBase *)v38);
  v17 = PropertyOfVariable;
  if ( PropertyOfVariable < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x535,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)PropertyOfVariable);
    goto LABEL_35;
  }
  if ( (char *)v39[1] - (char *)v39[0] < *(_QWORD *)v38 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x34,
      (__int64)"onecoreuap\\analog\\input\\common\\inc\\holographicdriverclienttypes.h",
      v22);
    __debugbreak();
  }
  v23 = (char *)v39[0] + *(_QWORD *)v38;
  v24 = (char *)v39[1] - *(_QWORD *)v38 - (char *)v39[0];
  if ( v24 < 4 )
  {
    v25 = 100LL;
LABEL_33:
    v17 = -2147024883;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\validateproperty.h",
      (const char *)0x8007000DLL);
    v18 = 1338LL;
    goto LABEL_25;
  }
  if ( v24 != 16 * *v23 + 4 )
  {
    v25 = 103LL;
    goto LABEL_33;
  }
  Windows::Internal::Holographic::NodePropertyCache::SetValue(
    (struct _GUID *)this + 16,
    a2,
    &SPATIAL_DYNAMIC_NODE_PROPERTY_ERROR_STATUSES,
    v23,
    (char *)v39[1] - *(_QWORD *)v38 - (char *)v39[0]);
  v17 = 0;
LABEL_35:
  if ( (v17 & 0x80000000) != 0 )
    goto LABEL_36;
LABEL_37:
  v26 = (unsigned int *)v39[0];
  if ( v39[0] )
    v26 = (unsigned int *)((char *)v39[0] + *(_QWORD *)v38);
  v27 = 16LL * *v26;
  v28 = (char *)CoTaskMemAlloc(v27);
  v29 = v28;
  if ( v28 )
  {
    v30 = &v28[v27];
    for ( i = v29; i != v30; i += 16 )
    {
      *(_QWORD *)i = 0LL;
      *((_QWORD *)i + 1) = 0LL;
    }
    if ( *v26 )
      memmove_0(v29, v26 + 1, 16LL * *v26);
    v7 = 0;
    *a3 = (struct HOLOGRAPHIC_DEVICE_ERROR_STATUS *)v29;
    v32 = *v26;
    v17 = 0;
    *a4 = v32;
  }
  else
  {
    v17 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5DA,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)0x8007000ELL);
  }
  CoTaskMemFree(0LL);
LABEL_47:
  v33 = v39[0];
  if ( v39[0] )
  {
    v34 = (const struct std::nothrow_t *)(v40 - (unsigned __int64)v39[0]);
    if ( v40 - (unsigned __int64)v39[0] >= 0x1000 )
    {
      v33 = (void *)*((_QWORD *)v39[0] - 1);
      v34 = (const struct std::nothrow_t *)((char *)v34 + 39);
      if ( (unsigned __int64)((char *)v39[0] - (char *)v33 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v33, v34);
        __debugbreak();
      }
    }
    operator delete(v33, v34);
  }
  if ( v7 )
  {
    *a3 = 0LL;
    *a4 = 0LL;
  }
  return v17;
}
