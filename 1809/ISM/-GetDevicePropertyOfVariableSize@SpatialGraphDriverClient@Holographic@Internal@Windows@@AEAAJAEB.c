/*
 * XREFs of ?GetDevicePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@P6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x180114AD0
 * Callers:
 *     ?GetErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAU?$VariableSizeStructWrapper@UHOLOGRAPHIC_DEVICE_ERROR_STATUSES@@@234@@Z @ 0x180115300 (-GetErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAU-$VariableSize.c)
 *     ?PrecacheProperties@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJXZ @ 0x180115AD0 (-PrecacheProperties@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18007D8EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z @ 0x180109EE0 (-Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180109F10 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?DevicePropertyCacheMiss_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1_N@Z @ 0x18010D96C (-DevicePropertyCacheMiss_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1_N@Z.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x18010F27C (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 *     ?SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z @ 0x18011047C (-SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z.c)
 *     ?GetValue@PropertyCache@Holographic@Internal@Windows@@QEAAJAEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@@Z @ 0x18011058C (-GetValue@PropertyCache@Holographic@Internal@Windows@@QEAAJAEBU_GUID@@PEAVVariableSizeStructWrap.c)
 *     ??$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAVVariableSizeStructWrapperBase@123@@Z @ 0x18011B8B4 (--$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrappe.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetDevicePropertyOfVariableSize(
        __int64 a1,
        const struct _GUID *a2,
        struct Windows::Internal::Holographic::VariableSizeStructWrapperBase *a3,
        __int64 (__fastcall *a4)(__int64, rsize_t),
        char a5)
{
  __int64 (__fastcall *v5)(__int64, rsize_t); // r15
  bool v9; // al
  unsigned __int8 v10; // bl
  _DWORD *v11; // rcx
  __int64 v12; // rcx
  int PropertyOfVariable; // ebx
  __int64 v14; // rdx
  struct _GUID v16; // xmm0
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v17; // r13
  DWORD v18; // r14d
  unsigned int v19; // r15d
  Windows::Internal::Holographic::VariableSizeStructWrapperBase *v20; // rcx
  int v21; // eax
  const char *v22; // r9
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 v26; // rbx
  __int64 v27; // rax
  const void *v28; // r14
  rsize_t v29; // rbx
  int v30; // eax
  unsigned int v31; // edi
  const char *v32; // [rsp+28h] [rbp-79h]
  unsigned int *v33; // [rsp+30h] [rbp-71h]
  Windows::Internal::Holographic::VariableSizeStructWrapperBase *v34; // [rsp+50h] [rbp-51h] BYREF
  unsigned int v35; // [rsp+58h] [rbp-49h] BYREF
  __int64 (__fastcall *v36)(__int64, rsize_t); // [rsp+60h] [rbp-41h]
  __int64 v37; // [rsp+68h] [rbp-39h]
  Windows::Internal::Holographic::VariableSizeStructWrapperBase **v38; // [rsp+70h] [rbp-31h]
  char v39; // [rsp+78h] [rbp-29h]
  struct _GUID InBuffer; // [rsp+80h] [rbp-21h] BYREF
  __int64 v41; // [rsp+90h] [rbp-11h]
  struct _GUID v42; // [rsp+98h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+57h]

  v37 = -2LL;
  v5 = a4;
  v36 = a4;
  v9 = (a5 & 1) != 0 || *(_BYTE *)(a1 + 120) && (a5 & 2) == 0;
  v10 = (a5 & 2) != 0 || *(_BYTE *)(a1 + 120) == 0;
  if ( v9 )
  {
    if ( (int)Windows::Internal::Holographic::PropertyCache::GetValue((RTL_SRWLOCK *)(a1 + 208), a2, a3) >= 0 )
      return 0LL;
    v11 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
    if ( v11 && *v11 )
    {
      HolographicDriverClientTrace::Instance();
      HolographicDriverClientTrace::DevicePropertyCacheMiss_(v12, 1, a1 + 80, (__int64)a2, v10);
    }
  }
  if ( !v10 )
  {
    PropertyOfVariable = -2147023728;
    v14 = 1201LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)PropertyOfVariable);
    return (unsigned int)PropertyOfVariable;
  }
  v16 = *a2;
  if ( *(_BYTE *)(a1 + 121) )
  {
    v41 = 0LL;
    InBuffer = v16;
    v17 = *(Windows::Internal::Holographic::HolographicDriverHandleWrapper **)(a1 + 104);
    v34 = a3;
    v38 = &v34;
    v39 = 1;
    *((_QWORD *)a3 + 2) = *((_QWORD *)a3 + 1);
    *(_QWORD *)a3 = 12LL;
    v35 = 0;
    v18 = 12;
    v19 = 0;
    v20 = v34;
    do
    {
      v21 = Windows::Internal::Holographic::VariableSizeStructWrapperBase::Allocate(v20);
      PropertyOfVariable = v21;
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x16F,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
          (const char *)(unsigned int)v21);
        *((_QWORD *)v34 + 2) = *((_QWORD *)v34 + 1);
        goto LABEL_37;
      }
      PropertyOfVariable = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
                             v17,
                             0x5B8430u,
                             &InBuffer,
                             0x18u,
                             *((LPVOID *)v34 + 1),
                             v18,
                             &v35);
      if ( PropertyOfVariable < 0 )
        goto LABEL_27;
      v20 = v34;
      if ( v35 < 0xC )
      {
        v24 = 383LL;
LABEL_35:
        PropertyOfVariable = -2147418113;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v24,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
          (const char *)0x8000FFFFLL);
        *((_QWORD *)v34 + 2) = *((_QWORD *)v34 + 1);
        goto LABEL_38;
      }
      v23 = **((unsigned int **)v34 + 1);
      v18 = v23 + 12;
      if ( v35 == v23 + 12 )
        goto LABEL_29;
      if ( v35 != 12 )
      {
        v24 = 390LL;
        goto LABEL_35;
      }
      if ( !**((_DWORD **)v34 + 1) )
      {
LABEL_29:
        Windows::Internal::Holographic::VariableSizeStructWrapperBase::Allocate(v34);
LABEL_30:
        v5 = v36;
        goto LABEL_31;
      }
      ++v19;
    }
    while ( v19 < 0xA );
    LODWORD(v33) = 12;
    LODWORD(v32) = 10;
    PropertyOfVariable = -2147418113;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x195,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      (const char *)0x8000FFFFLL,
      (unsigned __int16 *)"failed to read variable-size property after %u tries: bytesReturned = %u, propertySize = %u, r"
                          "equiredSize = %zu, ioctlCode = 0x%x",
      v32,
      v33,
      v23,
      v23 + 12,
      5997616);
LABEL_27:
    *((_QWORD *)v34 + 2) = *((_QWORD *)v34 + 1);
LABEL_37:
    if ( PropertyOfVariable >= 0 )
      goto LABEL_30;
LABEL_38:
    v14 = 1214LL;
    goto LABEL_16;
  }
  v42 = *a2;
  PropertyOfVariable = Windows::Internal::Holographic::HolographicDriverHandleWrapper::GetPropertyOfVariableSize<HOLOGRAPHIC_DEVICE_PROPERTY_HEADER>(
                         *(Windows::Internal::Holographic::HolographicDriverHandleWrapper **)(a1 + 104),
                         0x5B8414u,
                         &v42,
                         0x10u,
                         a3);
  if ( PropertyOfVariable < 0 )
  {
    v14 = 1227LL;
    goto LABEL_16;
  }
LABEL_31:
  v25 = *((_QWORD *)a3 + 1);
  v26 = *((_QWORD *)a3 + 2) - v25;
  v27 = *(_QWORD *)a3;
  if ( v26 < *(_QWORD *)a3 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x34,
      (__int64)"onecoreuap\\analog\\input\\common\\inc\\holographicdriverclienttypes.h",
      v22);
    JUMPOUT(0x180114E1ALL);
  }
  v28 = (const void *)(v27 + v25);
  v29 = v26 - v27;
  v30 = v5(v27 + v25, v29);
  v31 = v30;
  if ( v30 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D1,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v30);
    return v31;
  }
  Windows::Internal::Holographic::PropertyCache::SetValue(
    (Windows::Internal::Holographic::PropertyCache *)(a1 + 208),
    a2,
    v28,
    v29);
  return 0LL;
}
