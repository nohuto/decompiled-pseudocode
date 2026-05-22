/*
 * XREFs of ?OnTrackingRequestedHeartbeat@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800E3E90
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B220 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180056650 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$TrackingRequestedHeartbeat@PEB_WAEAKKI_NAEA_NPEB_WAEAU_GUID@@AEAW4SPATIAL_TRACKING_CAPABILITY_FLAGS@@AEAY02MAEAY03MAEAY02MAEAY03M@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SAX$$QEAPEB_WAEAK$$QEAK$$QEAI$$QEA_NAEA_N0AEAU_GUID@@AEAW4SPATIAL_TRACKING_CAPABILITY_FLAGS@@AEAY02MAEAY03M89@Z @ 0x1800DFC70 (--$TrackingRequestedHeartbeat@PEB_WAEAKKI_NAEA_NPEB_WAEAU_GUID@@AEAW4SPATIAL_TRACKING_CAPABILITY.c)
 *     ?CanSwitchTo6DOF@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAA_NXZ @ 0x1800E1740 (-CanSwitchTo6DOF@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAA_NXZ.c)
 *     ?GetCacheEntry@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJKKPEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800E26BC (-GetCacheEntry@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 *     ?GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NPEAUDynamicNodeInfo@Holographic@34@@Z @ 0x1800E278C (-GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NP.c)
 *     ?KeepAlive@KeepAliveTimer@ThreadpoolTimerHelpers@@QEAAXXZ @ 0x1800E2B14 (-KeepAlive@KeepAliveTimer@ThreadpoolTimerHelpers@@QEAAXXZ.c)
 *     ?QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@6@_N@Z @ 0x1800E4490 (-QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnTrackingRequestedHeartbeat(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        int a2,
        struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *a3)
{
  char *v3; // rbx
  int CacheEntry; // eax
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *v6; // rdi
  bool DynamicNodeInfo; // al
  __int128 v8; // xmm0
  HSTRING v9; // rcx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // r9
  int v14; // eax
  bool v16; // [rsp+70h] [rbp-90h] BYREF
  bool v17; // [rsp+71h] [rbp-8Fh] BYREF
  unsigned int v18; // [rsp+74h] [rbp-8Ch] BYREF
  int v19; // [rsp+78h] [rbp-88h] BYREF
  int v20; // [rsp+80h] [rbp-80h] BYREF
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *v21[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 StringRawBuffer; // [rsp+98h] [rbp-68h] BYREF
  int v23[2]; // [rsp+A0h] [rbp-60h] BYREF
  __m256i v24; // [rsp+A8h] [rbp-58h] BYREF
  __m256i *v25; // [rsp+E0h] [rbp-20h]
  __m256i v26; // [rsp+E8h] [rbp-18h] BYREF
  struct _GUID v27; // [rsp+108h] [rbp+8h] BYREF
  __int64 v28; // [rsp+118h] [rbp+18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v3 = (char *)this - 8;
  v20 = a2;
  *(_OWORD *)v21 = 0LL;
  CacheEntry = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::GetCacheEntry(
                 (struct _RTL_CRITICAL_SECTION *)((char *)this - 8),
                 a2,
                 (__int64)a3,
                 v21);
  if ( CacheEntry >= 0 )
  {
    v6 = v21[0];
    if ( (*(unsigned __int8 (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *))(*(_QWORD *)v21[0] + 104LL))(v21[0]) )
    {
      DynamicNodeInfo = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::GetDynamicNodeInfo(
                          v6,
                          (struct Windows::Internal::Holographic::DynamicNodeInfo *)&v27);
      v8 = *(_OWORD *)((char *)v6 + 508);
      v9 = (HSTRING)*((_QWORD *)this + 18);
      v10 = *(_OWORD *)((char *)v6 + 524);
      v16 = DynamicNodeInfo;
      *(_OWORD *)v24.m256i_i8 = v8;
      v11 = *(_OWORD *)((char *)v6 + 540);
      *(_OWORD *)&v24.m256i_u64[2] = v10;
      v12 = *(_OWORD *)((char *)v6 + 556);
      *(_OWORD *)v26.m256i_i8 = v11;
      *(_OWORD *)&v26.m256i_u64[2] = v12;
      StringRawBuffer = (__int64)WindowsGetStringRawBuffer(v9, 0LL);
      v17 = (*(__int64 (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *))(*(_QWORD *)v6 + 40LL))(v6);
      v18 = *((_DWORD *)v6 + 126);
      v19 = *((_DWORD *)v6 + 3);
      *(_QWORD *)v23 = (**(__int64 (__fastcall ***)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *))v6)(v6);
      SpatialInteractionDevices::SpatialInteractionTraceContinuous::TrackingRequestedHeartbeat<wchar_t const *,unsigned long &,unsigned long,unsigned int,bool,bool &,wchar_t const *,_GUID &,enum SPATIAL_TRACKING_CAPABILITY_FLAGS &,float (&)[3],float (&)[4],float (&)[3],float (&)[4]>(
        (const wchar_t **)v23,
        (unsigned int *)&v20,
        (unsigned int *)&v19,
        &v18,
        &v17,
        &v16,
        (const wchar_t **)&StringRawBuffer,
        &v27,
        (unsigned int *)&v28,
        (float (*)[3])&v24,
        (float (*)[4])((char *)&v24.m256i_u64[1] + 4),
        (float (*)[3])&v26,
        (float (*)[4])((char *)&v26.m256i_u64[1] + 4));
      if ( Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::CanSwitchTo6DOF(v6) )
      {
        v24.m256i_i64[1] = (__int64)v3;
        v24.m256i_i64[0] = (__int64)off_180176100;
        LOBYTE(v13) = 1;
        v25 = &v24;
        v14 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem(
                v3,
                v21,
                &v24,
                v13);
        if ( v14 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            928LL,
            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
            (const char *)(unsigned int)v14);
      }
      ThreadpoolTimerHelpers::KeepAliveTimer::KeepAlive((Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *)((char *)v6 + 576));
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      890LL,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)CacheEntry);
  }
  if ( v21[1] )
    std::_Ref_count_base::_Decref(v21[1]);
  return 0LL;
}
