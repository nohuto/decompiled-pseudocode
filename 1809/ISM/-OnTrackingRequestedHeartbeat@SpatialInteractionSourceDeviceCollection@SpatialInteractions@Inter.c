/*
 * XREFs of ?OnTrackingRequestedHeartbeat@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800B1490
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCacheEntry@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJKPEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800AA37C (-GetCacheEntry@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 *     ?GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NPEAUDynamicNodeInfo@Holographic@34@@Z @ 0x1800AA4A4 (-GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NP.c)
 *     ?CanSwitchTo6DOF@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAA_NXZ @ 0x1800AA518 (-CanSwitchTo6DOF@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAA_NXZ.c)
 *     ?Instance@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800AE148 (-Instance@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?TrackingRequestedHeartbeat_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXPEB_WKKI_N10AEBU_GUID@@IAEAY02$$CBMAEAY03$$CBM34@Z @ 0x1800AE358 (-TrackingRequestedHeartbeat_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXP.c)
 *     ?QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@6@_N@Z @ 0x1800AFC34 (-QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnTrackingRequestedHeartbeat(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        int a2,
        struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *a3)
{
  wchar_t *v3; // rbx
  int CacheEntry; // eax
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *v7; // rdi
  bool DynamicNodeInfo; // al
  HSTRING v9; // rcx
  __int128 v10; // xmm1
  bool v11; // r15
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  const wchar_t *StringRawBuffer; // r14
  char v15; // al
  __int64 (__fastcall **v16)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *); // rcx
  bool v17; // r12
  int v18; // r13d
  _DWORD *v19; // rcx
  SpatialInteractionDevices::SpatialInteractionTraceContinuous *v20; // rcx
  int v21; // eax
  __int64 v22; // rsi
  struct _TP_TIMER *v23; // rcx
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *v24; // rbx
  struct _FILETIME pftDueTime; // [rsp+70h] [rbp-90h] BYREF
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *v27[2]; // [rsp+78h] [rbp-88h] BYREF
  wchar_t *v28; // [rsp+88h] [rbp-78h]
  __m256i v29; // [rsp+90h] [rbp-70h] BYREF
  __m256i v30; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v31[8]; // [rsp+D0h] [rbp-30h] BYREF
  struct _GUID v32; // [rsp+110h] [rbp+10h] BYREF
  char v33[8]; // [rsp+120h] [rbp+20h]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v3 = (wchar_t *)((char *)this - 8);
  *(_OWORD *)v27 = 0LL;
  CacheEntry = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::GetCacheEntry(
                 (struct _RTL_CRITICAL_SECTION *)((char *)this - 8),
                 a2,
                 v27);
  if ( CacheEntry >= 0 )
  {
    v7 = v27[0];
    if ( (*(unsigned __int8 (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *))(*(_QWORD *)v27[0] + 104LL))(v27[0]) )
    {
      DynamicNodeInfo = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::GetDynamicNodeInfo(
                          v7,
                          (struct Windows::Internal::Holographic::DynamicNodeInfo *)&v32);
      v9 = (HSTRING)*((_QWORD *)this + 18);
      v10 = *(_OWORD *)((char *)v7 + 524);
      v11 = DynamicNodeInfo;
      *(_OWORD *)v30.m256i_i8 = *(_OWORD *)((char *)v7 + 508);
      v12 = *(_OWORD *)((char *)v7 + 540);
      *(_OWORD *)&v30.m256i_u64[2] = v10;
      v13 = *(_OWORD *)((char *)v7 + 556);
      *(_OWORD *)v29.m256i_i8 = v12;
      *(_OWORD *)&v29.m256i_u64[2] = v13;
      StringRawBuffer = WindowsGetStringRawBuffer(v9, 0LL);
      v15 = (*(__int64 (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *))(*(_QWORD *)v7 + 40LL))(v7);
      v16 = *(__int64 (__fastcall ***)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *))v7;
      v17 = v15;
      v18 = *((_DWORD *)v7 + 126);
      pftDueTime.dwLowDateTime = *((_DWORD *)v7 + 3);
      v28 = (wchar_t *)(*v16)(v7);
      v19 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTraceContinuous::Instance() + 1);
      if ( v19 && *v19 )
      {
        SpatialInteractionDevices::SpatialInteractionTraceContinuous::Instance();
        SpatialInteractionDevices::SpatialInteractionTraceContinuous::TrackingRequestedHeartbeat_(
          v20,
          v28,
          a2,
          pftDueTime.dwLowDateTime,
          v18,
          v17,
          v11,
          StringRawBuffer,
          &v32,
          v33[0],
          (const float (*)[3])&v30,
          (const float (*)[4])((char *)&v30.m256i_u64[1] + 4),
          (const float (*)[3])&v29,
          (const float (*)[4])((char *)&v29.m256i_u64[1] + 4));
      }
      if ( Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::CanSwitchTo6DOF((RTL_SRWLOCK *)v7) )
      {
        v28 = v3;
        v31[0] = off_18013E380;
        v31[1] = v3;
        v31[7] = v31;
        v21 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem(
                (__int64)v3,
                (__int64)v27,
                (__int64)v31,
                1);
        if ( v21 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x3FA,
            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
            (const char *)(unsigned int)v21);
      }
      _InterlockedExchange64((volatile __int64 *)v7 + 84, GetTickCount64());
      v22 = *((_QWORD *)v7 + 85);
      AcquireSRWLockExclusive((PSRWLOCK)v7 + 75);
      if ( !*((_BYTE *)v7 + 592) )
      {
        v23 = (struct _TP_TIMER *)*((_QWORD *)v7 + 73);
        *((_BYTE *)v7 + 592) = 1;
        pftDueTime = (struct _FILETIME)(-10000 * v22);
        SetThreadpoolTimer(v23, &pftDueTime, 0, 0);
      }
      if ( v7 != (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *)-600LL )
        ReleaseSRWLockExclusive((PSRWLOCK)v7 + 75);
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3D4,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)CacheEntry);
  }
  if ( v27[1] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v27[1] + 2, 0xFFFFFFFF) == 1 )
    {
      v24 = v27[1];
      (**(void (__fastcall ***)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *))v27[1])(v27[1]);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v24 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *))(*(_QWORD *)v27[1] + 8LL))(v27[1]);
    }
  }
  return 0LL;
}
