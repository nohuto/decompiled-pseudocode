/*
 * XREFs of ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x18010F27C
 * Callers:
 *     ?GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUDynamicNodeInfo@234@@Z @ 0x180113AD0 (-GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUHSTRING.c)
 *     ?DeleteStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJW4SPATIAL_GRAPH_DELETE_STATIC_NODE_OPERATION@@KPEBUSPATIAL_NODE_ID@@@Z @ 0x180114100 (-DeleteStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJW4SPATIAL_GRAPH_D.c)
 *     ?GetStaticNodeForPose@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@AEBUXMFLOAT4X3@DirectX@@PEAU5@@Z @ 0x180114280 (-GetStaticNodeForPose@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NO.c)
 *     ?GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@KPEBU5@PEAUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x1801143B0 (-GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE.c)
 *     ?SetStaticNodeDurability@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_STATIC_NODE_DURABILITY@@@Z @ 0x180114650 (-SetStaticNodeDurability@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL.c)
 *     ?GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAX_KP6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x18011471C (-GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_G.c)
 *     ?GetDevicePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@P6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x180114AD0 (-GetDevicePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEB.c)
 *     ?TrimDurableStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJIPEBUSPATIAL_NODE_ID@@@Z @ 0x180115830 (-TrimDurableStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJIPEBUSPATIAL.c)
 *     ?GetSupportedDDILevelsInternal@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJPEAUHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@@Z @ 0x1801159BC (-GetSupportedDDILevelsInternal@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJPEAUH.c)
 *     ?SendTrackingStateToDriver@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x18011702C (-SendTrackingStateToDriver@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJAE.c)
 *     ?GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@@Z @ 0x180117220 (-GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_G.c)
 *     ??$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAX_K@Z @ 0x18011B760 (--$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@H.c)
 *     ??$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAVVariableSizeStructWrapperBase@123@@Z @ 0x18011B8B4 (--$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrappe.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003618 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180004D78 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18007D8EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180109F10 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?IoctlRanLong_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@KJMK@Z @ 0x18010BA84 (-IoctlRanLong_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@KJMK@Z.c)
 *     ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x18010DCA0 (-Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ.c)
 *     ?HolographicDriverHandleWrapper_DeviceIoControlFailed_@HolographicDriverClientContinuousTrace@@QEAAXKKPEBXAEBU_GUID@@@Z @ 0x18010E308 (-HolographicDriverHandleWrapper_DeviceIoControlFailed_@HolographicDriverClientContinuousTrace@@Q.c)
 *     ?HandleIoctlTimeout@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAKPEAU_OVERLAPPED@@KKPEBXKPEAK@Z @ 0x18011005C (-HandleIoctlTimeout@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAKPEAU_OVERL.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 */

__int64 __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *this,
        DWORD a2,
        void *lpInBuffer,
        DWORD a4,
        LPVOID bAlertable,
        DWORD a6,
        LPDWORD a7)
{
  DWORD *lpBytesReturned; // r15
  RTL_SRWLOCK *v12; // r12
  signed int v13; // r14d
  LPDWORD v14; // rbx
  struct _OVERLAPPED *lpOverlapped; // r14
  HANDLE Event; // rbx
  const char *v17; // r9
  signed int LastError; // esi
  unsigned int v19; // r9d
  float v20; // xmm6_4
  unsigned int v21; // r14d
  _DWORD *v22; // rcx
  HolographicDriverClientTrace *v23; // rcx
  _DWORD *v24; // rcx
  HolographicDriverClientContinuousTrace *v25; // rcx
  const char *v26; // r9
  const char *nOutBufferSize; // [rsp+30h] [rbp-69h]
  unsigned int nOutBufferSizea; // [rsp+30h] [rbp-69h]
  void *v29; // [rsp+48h] [rbp-51h] BYREF
  __int128 v30; // [rsp+50h] [rbp-49h] BYREF
  __int64 v31; // [rsp+60h] [rbp-39h]
  LPDWORD v32; // [rsp+68h] [rbp-31h]
  __int128 v33; // [rsp+70h] [rbp-29h] BYREF
  __int128 v34; // [rsp+80h] [rbp-19h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+47h]
  LARGE_INTEGER PerformanceCount; // [rsp+E8h] [rbp+4Fh] BYREF
  void *v37; // [rsp+F8h] [rbp+5Fh]
  DWORD nInBufferSize; // [rsp+100h] [rbp+67h]

  nInBufferSize = a4;
  v37 = lpInBuffer;
  lpBytesReturned = a7;
  if ( a7 )
    *a7 = 0;
  if ( *((_QWORD *)this + 6) )
  {
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0xAF,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      (const char *)0x8000000ELL,
      (unsigned __int16 *)"this driver handle wrapper is associated with a completion port, so DeviceIoControlOverlapped must be used",
      nOutBufferSize);
    return 2147483662LL;
  }
  else
  {
    v12 = (RTL_SRWLOCK *)((char *)this + 120);
    AcquireSRWLockShared((PSRWLOCK)this + 15);
    v13 = *((_DWORD *)this + 32);
    if ( v13 >= 0 )
    {
      if ( *((_BYTE *)this + 168) && (!*((_DWORD *)this + 40) || !*((_DWORD *)this + 41)) )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xB7,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
          (const char *)0x8000FFFFLL);
        __debugbreak();
      }
      v14 = 0LL;
      lpOverlapped = 0LL;
      a7 = 0LL;
      if ( *((_BYTE *)this + 169) )
      {
        v29 = 0LL;
        Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
        if ( !Event )
        {
          wil::details::in1diag3::FailFast_GetLastError(
            retaddr,
            (void *)0x169C,
            (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
            v17);
          JUMPOUT(0x18010F5BFLL);
        }
        GetLastError();
        wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
          &v29,
          Event);
        wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
          (void **)&a7,
          v29);
        memset_0(&v33, 0, 0x20uLL);
        v14 = a7;
        lpOverlapped = (struct _OVERLAPPED *)&v30;
        v31 = v34;
        v32 = a7;
        v30 = v33;
      }
      QueryPerformanceCounter(&PerformanceCount);
      if ( DeviceIoControl(
             *((HANDLE *)this + 17),
             a2,
             lpInBuffer,
             nInBufferSize,
             bAlertable,
             a6,
             lpBytesReturned,
             lpOverlapped) )
      {
        goto LABEL_34;
      }
      LastError = GetLastError();
      if ( LastError == 997 && lpOverlapped )
      {
        if ( GetOverlappedResultEx(*((HANDLE *)this + 17), lpOverlapped, (LPDWORD)&a7, 0x1388u, 0) )
        {
          LastError = 0;
        }
        else
        {
          LastError = GetLastError();
          if ( LastError == 258 )
            LastError = Windows::Internal::Holographic::HolographicDriverHandleWrapper::HandleIoctlTimeout(
                          this,
                          lpOverlapped,
                          a2,
                          v19,
                          v37,
                          nOutBufferSizea,
                          (unsigned int *)&a7);
        }
        if ( lpBytesReturned )
          *lpBytesReturned = (unsigned int)a7;
      }
      QueryPerformanceCounter((LARGE_INTEGER *)&a7);
      v20 = (double)(1000 * ((int)a7 - PerformanceCount.LowPart)) / (double)(int)qword_180193A58;
      if ( v20 > 500.0 )
      {
        v21 = (unsigned __int16)LastError | 0x80070000;
        if ( LastError <= 0 )
          v21 = LastError;
        v22 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
        if ( v22 && *v22 )
        {
          HolographicDriverClientTrace::Instance();
          HolographicDriverClientTrace::IoctlRanLong_(v23, (const struct _GUID *)((char *)this + 12), a2, v21, v20, 244);
        }
      }
      if ( !LastError )
      {
LABEL_34:
        v13 = 0;
      }
      else
      {
        v24 = (_DWORD *)*((_QWORD *)HolographicDriverClientContinuousTrace::Instance() + 1);
        if ( v24 && *v24 )
        {
          HolographicDriverClientContinuousTrace::Instance();
          HolographicDriverClientContinuousTrace::HolographicDriverHandleWrapper_DeviceIoControlFailed_(
            v25,
            LastError,
            a2,
            this,
            (const struct _GUID *)((char *)this + 12));
        }
        v13 = (unsigned __int16)LastError | 0x80070000;
        if ( LastError <= 0 )
          v13 = LastError;
      }
      if ( v14 && !CloseHandle(v14) )
      {
        wil::details::in1diag3::FailFast_GetLastError(
          retaddr,
          (void *)0x90E,
          (__int64)"internal\\sdk\\inc\\wil\\resource.h",
          v26);
        __debugbreak();
      }
    }
    if ( v12 )
      ReleaseSRWLockShared(v12);
    return (unsigned int)v13;
  }
}
