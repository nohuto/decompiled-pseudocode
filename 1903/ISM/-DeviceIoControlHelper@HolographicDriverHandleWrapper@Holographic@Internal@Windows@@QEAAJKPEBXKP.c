/*
 * XREFs of ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x180154CE4
 * Callers:
 *     ??$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAX_K@Z @ 0x18014A4DC (--$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@H.c)
 *     ??$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAX_K@Z @ 0x18014A5FC (--$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2@@@HolographicDriverHandleWrappe.c)
 *     ??$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAVVariableSizeStructWrapperBase@123@@Z @ 0x18014A70C (--$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrappe.c)
 *     ??$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAVVariableSizeStructWrapperBase@123@@Z @ 0x18014A8D0 (--$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2@@@HolographicDriverHandleWra.c)
 *     ?DeleteStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJW4SPATIAL_GRAPH_DELETE_STATIC_NODE_OPERATION@@KPEBUSPATIAL_NODE_ID@@@Z @ 0x1801546F0 (-DeleteStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJW4SPATIAL_GRAPH_D.c)
 *     ?GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUDynamicNodeInfo@234@@Z @ 0x180155B90 (-GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUHSTRING.c)
 *     SpatialGraphDriverClientHelpers::GetLatestPoses @ 0x180156988 (SpatialGraphDriverClientHelpers--GetLatestPoses.c)
 *     SpatialGraphDriverClientHelpers::GetPosesAroundTime @ 0x180157A10 (SpatialGraphDriverClientHelpers--GetPosesAroundTime.c)
 *     ?GetStaticNodeForPose@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@AEBUXMFLOAT4X3@DirectX@@PEAU5@@Z @ 0x180157DA0 (-GetStaticNodeForPose@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NO.c)
 *     ?GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@KPEBU5@PEAUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x180157F90 (-GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE.c)
 *     ?GetSupportedDDILevelsInternal@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJPEAUHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@@Z @ 0x1801582D0 (-GetSupportedDDILevelsInternal@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJPEAUH.c)
 *     ?SendTrackingStateToDriver@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x18015D2BC (-SendTrackingStateToDriver@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJAE.c)
 *     ?SetStaticNodeDurability@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_STATIC_NODE_DURABILITY@@@Z @ 0x18015D360 (-SetStaticNodeDurability@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL.c)
 *     ?TrimDurableStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJIPEBUSPATIAL_NODE_ID@@@Z @ 0x18015FE70 (-TrimDurableStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJIPEBUSPATIAL.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18001F94C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800250B8 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180052910 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800B4F4C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$HolographicDriverHandleWrapper_DeviceIoControlFailed@AEAKAEAKPEAVHolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEBU_GUID@@@HolographicDriverClientContinuousTrace@@SAXAEAK0$$QEAPEAVHolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEBU_GUID@@@Z @ 0x18014AB5C (--$HolographicDriverHandleWrapper_DeviceIoControlFailed@AEAKAEAKPEAVHolographicDriverHandleWrapp.c)
 *     ??$IoctlRanLong@AEBU_GUID@@AEAKJAEAMAEBK@HolographicDriverClientTrace@@SAXAEBU_GUID@@AEAK$$QEAJAEAMAEBK@Z @ 0x18014ABC4 (--$IoctlRanLong@AEBU_GUID@@AEAKJAEAMAEBK@HolographicDriverClientTrace@@SAXAEBU_GUID@@AEAK$$QEAJA.c)
 *     ?HandleIoctlTimeout@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAKPEAU_OVERLAPPED@@KKPEBXKPEAK@Z @ 0x180158BAC (-HandleIoctlTimeout@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAKPEAU_OVERL.c)
 */

__int64 __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *this,
        DWORD a2,
        void *a3,
        DWORD a4,
        LPVOID bAlertable,
        DWORD a6,
        LPDWORD a7)
{
  DWORD *lpBytesReturned; // r14
  RTL_SRWLOCK *v11; // r12
  int v12; // edi
  wil::details *v13; // rbx
  struct _OVERLAPPED *v14; // r15
  wil::details *Event; // rbx
  const char *v16; // r9
  void *v17; // rdx
  unsigned int v18; // r9d
  DWORD v19; // xmm2_4
  const struct _GUID *v20; // r14
  const char *nOutBufferSize; // [rsp+30h] [rbp-69h]
  unsigned int nOutBufferSizea; // [rsp+30h] [rbp-69h]
  LARGE_INTEGER PerformanceCount; // [rsp+48h] [rbp-51h] BYREF
  wil::details *v24; // [rsp+50h] [rbp-49h] BYREF
  __int128 v25; // [rsp+58h] [rbp-41h] BYREF
  __int64 v26; // [rsp+68h] [rbp-31h]
  LPDWORD v27; // [rsp+70h] [rbp-29h]
  __int128 v28; // [rsp+78h] [rbp-21h] BYREF
  __int128 v29; // [rsp+88h] [rbp-11h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+47h]
  LARGE_INTEGER NumberOfBytesTransferred; // [rsp+E8h] [rbp+4Fh] BYREF
  DWORD v32; // [rsp+F0h] [rbp+57h] BYREF
  LPVOID lpInBuffer; // [rsp+F8h] [rbp+5Fh]
  DWORD nInBufferSize; // [rsp+100h] [rbp+67h]

  nInBufferSize = a4;
  lpInBuffer = a3;
  v32 = a2;
  lpBytesReturned = a7;
  if ( a7 )
    *a7 = 0;
  if ( *((_QWORD *)this + 6) )
  {
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      175LL,
      (unsigned int)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      (const char *)0x8000000ELL,
      (int)"this driver handle wrapper is associated with a completion port, so DeviceIoControlOverlapped must be used",
      nOutBufferSize);
    return 2147483662LL;
  }
  else
  {
    v11 = (RTL_SRWLOCK *)((char *)this + 120);
    AcquireSRWLockShared((PSRWLOCK)this + 15);
    v12 = *((_DWORD *)this + 32);
    if ( v12 >= 0 )
    {
      if ( *((_BYTE *)this + 168) && (!*((_DWORD *)this + 40) || !*((_DWORD *)this + 41)) )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          183LL,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
          (const char *)0x8000FFFFLL);
        __debugbreak();
      }
      v13 = 0LL;
      v14 = 0LL;
      a7 = 0LL;
      if ( *((_BYTE *)this + 169) )
      {
        v24 = 0LL;
        Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
        if ( !Event )
        {
          wil::details::in1diag3::FailFast_GetLastError(
            retaddr,
            (void *)0x1521,
            (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
            v16);
          __debugbreak();
        }
        GetLastError();
        wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
          &v24,
          Event);
        wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
          (wil::details **)&a7,
          v24);
        memset_0(&v28, 0, 0x20uLL);
        v13 = (wil::details *)a7;
        v14 = (struct _OVERLAPPED *)&v25;
        v26 = v29;
        v27 = a7;
        v25 = v28;
      }
      QueryPerformanceCounter(&PerformanceCount);
      if ( DeviceIoControl(*((HANDLE *)this + 17), a2, lpInBuffer, nInBufferSize, bAlertable, a6, lpBytesReturned, v14) )
        goto LABEL_32;
      LODWORD(a7) = GetLastError();
      v12 = (int)a7;
      if ( (_DWORD)a7 == 997 && v14 )
      {
        if ( GetOverlappedResultEx(*((HANDLE *)this + 17), v14, (LPDWORD)&NumberOfBytesTransferred, 0x1388u, 0) )
        {
          v12 = 0;
          LODWORD(a7) = 0;
        }
        else
        {
          LODWORD(a7) = GetLastError();
          v12 = (int)a7;
          if ( (_DWORD)a7 == 258 )
          {
            v12 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::HandleIoctlTimeout(
                    this,
                    v14,
                    a2,
                    v18,
                    lpInBuffer,
                    nOutBufferSizea,
                    (unsigned int *)&NumberOfBytesTransferred);
            LODWORD(a7) = v12;
          }
        }
        if ( lpBytesReturned )
          *lpBytesReturned = NumberOfBytesTransferred.LowPart;
      }
      QueryPerformanceCounter(&NumberOfBytesTransferred);
      *(float *)&v19 = (double)(1000 * (NumberOfBytesTransferred.LowPart - PerformanceCount.LowPart))
                     / (double)(int)qword_1801E0C60;
      PerformanceCount.LowPart = v19;
      if ( *(float *)&v19 <= 500.0 )
      {
        v20 = (const struct _GUID *)((char *)this + 12);
      }
      else
      {
        NumberOfBytesTransferred.LowPart = v12 > 0 ? (unsigned __int16)v12 | 0x80070000 : v12;
        v20 = (const struct _GUID *)((char *)this + 12);
        HolographicDriverClientTrace::IoctlRanLong<_GUID const &,unsigned long &,long,float &,unsigned long const &>(
          (struct _GUID *)((char *)this + 12),
          &v32,
          (int *)&NumberOfBytesTransferred,
          (float *)&PerformanceCount);
      }
      if ( !v12 )
      {
LABEL_32:
        v12 = 0;
      }
      else
      {
        NumberOfBytesTransferred.QuadPart = (LONGLONG)this;
        HolographicDriverClientContinuousTrace::HolographicDriverHandleWrapper_DeviceIoControlFailed<unsigned long &,unsigned long &,Windows::Internal::Holographic::HolographicDriverHandleWrapper *,_GUID const &>(
          (unsigned int *)&a7,
          &v32,
          (const void **)&NumberOfBytesTransferred,
          v20);
        if ( v12 > 0 )
          v12 = (unsigned __int16)v12 | 0x80070000;
      }
      if ( v13 )
        wil::details::CloseHandle(v13, v17);
    }
    if ( v11 )
      ReleaseSRWLockShared(v11);
    return (unsigned int)v12;
  }
}
