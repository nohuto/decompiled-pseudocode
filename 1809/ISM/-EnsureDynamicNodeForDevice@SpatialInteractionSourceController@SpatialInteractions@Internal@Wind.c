/*
 * XREFs of ?EnsureDynamicNodeForDevice@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJPEAUISpatialGraphDriverClient@Holographic@34@PEAUDynamicNodeInfo@634@PEAK@Z @ 0x180127588
 * Callers:
 *     ?StartTracking@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialGraphNodeReferenceFactory@Holographic@34@PEAUISpatialGraphDriverClient@634@PEAUHSTRING__@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x180127240 (-StartTracking@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NPEAUDynamicNodeInfo@Holographic@34@@Z @ 0x1800AA4A4 (-GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NP.c)
 *     ?ControllerGetDynamicNodeFailed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJK@Z @ 0x180122518 (-ControllerGetDynamicNodeFailed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJK@Z.c)
 *     ?EnsureDynamicNodeForDeviceFailed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJK@Z @ 0x1801225C4 (-EnsureDynamicNodeForDeviceFailed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJK@Z.c)
 *     ?HapticsIntensityLevelsSet_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKKE@Z @ 0x1801227D8 (-HapticsIntensityLevelsSet_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKKE@Z.c)
 *     ?SetButtonLatencyMicroseconds@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAAXH@Z @ 0x180125070 (-SetButtonLatencyMicroseconds@SpatialInteractionSourceController@SpatialInteractions@Internal@Wi.c)
 *     ?SetHapticsOutputReportPeriodMicroseconds@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAAXI@Z @ 0x1801250E8 (-SetHapticsOutputReportPeriodMicroseconds@SpatialInteractionSourceController@SpatialInteractions.c)
 *     ?EnsureInitializationRetryParameters@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXXZ @ 0x18012593C (-EnsureInitializationRetryParameters@SpatialInteractionSourceController@SpatialInteractions@Inte.c)
 *     ?ReleaseNodePropertyChangedHandlerUnderLock@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1801281E4 (-ReleaseNodePropertyChangedHandlerUnderLock@SpatialInteractionSourceController@SpatialInteractio.c)
 *     ?UpdateNodeErrorStatus@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAAXPEAUISpatialGraphDriverClient@Holographic@34@AEBUSPATIAL_NODE_ID@@@Z @ 0x180128404 (-UpdateNodeErrorStatus@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@.c)
 *     ??$MakeAndInitialize@VNodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@V1234@PEAVSpatialInteractionSourceController@234@AEBUSPATIAL_NODE_ID@@AEAPEAUISpatialGraphDriverClient@Holographic@34@@Details@WRL@Microsoft@@YAJPEAPEAVNodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@$$QEAPEAVSpatialInteractionSourceController@456@AEBUSPATIAL_NODE_ID@@AEAPEAUISpatialGraphDriverClient@Holographic@56@@Z @ 0x1801299E4 (--$MakeAndInitialize@VNodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@V1234@PEA.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::EnsureDynamicNodeForDevice(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        struct Windows::Internal::Holographic::ISpatialGraphDriverClient *a2,
        struct Windows::Internal::Holographic::DynamicNodeInfo *a3,
        unsigned int *a4)
{
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *v8; // rcx
  unsigned int v9; // r14d
  _DWORD *v10; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v11; // rcx
  char v12; // si
  _DWORD *v13; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v14; // rcx
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // edi
  int v19; // eax
  _DWORD *v20; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v21; // rcx
  int v23; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v24; // [rsp+24h] [rbp-4Ch] BYREF
  struct Windows::Internal::Holographic::ISpatialGraphDriverClient *v25; // [rsp+28h] [rbp-48h] BYREF
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *v26; // [rsp+30h] [rbp-40h] BYREF
  __int128 v27; // [rsp+38h] [rbp-38h]
  __int64 v28; // [rsp+48h] [rbp-28h]
  char *v29; // [rsp+50h] [rbp-20h]
  __int128 v30; // [rsp+58h] [rbp-18h]
  char v31; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  unsigned __int8 v33; // [rsp+A0h] [rbp+30h] BYREF
  int v34; // [rsp+B8h] [rbp+48h] BYREF

  v28 = -2LL;
  v34 = 0;
  *a4 = 0;
  *(_QWORD *)&v27 = &v34;
  *((_QWORD *)&v27 + 1) = this;
  v30 = v27;
  v31 = 1;
  if ( !Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::GetDynamicNodeInfo(this, a3) )
  {
    Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::EnsureInitializationRetryParameters(v8);
    v9 = 1;
    if ( Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::s_DynamicNodeInfoBindingAttemptsCount )
    {
      while ( !*((_BYTE *)this + 104) )
      {
        if ( v9 > 1 )
          Sleep(Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::s_DynamicNodeInfoBindingWaitBeforeRetryMilliseconds);
        v34 = (*(__int64 (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *, _QWORD, struct Windows::Internal::Holographic::DynamicNodeInfo *))(*(_QWORD *)a2 + 64LL))(
                a2,
                *((_QWORD *)this + 5),
                a3);
        if ( v34 >= 0 )
        {
          v23 = 0;
          if ( (*(int (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *, struct Windows::Internal::Holographic::DynamicNodeInfo *, int *))(*(_QWORD *)a2 + 160LL))(
                 a2,
                 a3,
                 &v23) >= 0
            && (unsigned int)v23 <= 0xF423F )
          {
            Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SetButtonLatencyMicroseconds(
              this,
              v23);
          }
          v24 = 0;
          if ( (*(int (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *, struct Windows::Internal::Holographic::DynamicNodeInfo *, unsigned int *))(*(_QWORD *)a2 + 168LL))(
                 a2,
                 a3,
                 &v24) >= 0
            && v24 < 0xF4240 )
          {
            Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SetHapticsOutputReportPeriodMicroseconds(
              this,
              v24);
          }
          v33 = 0;
          if ( (*(int (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *, struct Windows::Internal::Holographic::DynamicNodeInfo *, unsigned __int8 *))(*(_QWORD *)a2 + 176LL))(
                 a2,
                 a3,
                 &v33) >= 0 )
          {
            v12 = v33;
            if ( v33 <= 0x64u )
            {
              *((_BYTE *)this + 804) = v33;
              v13 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
              if ( v13 )
              {
                if ( *v13 )
                {
                  SpatialInteractionDevices::SpatialInteractionTrace::Instance();
                  SpatialInteractionDevices::SpatialInteractionTrace::HapticsIntensityLevelsSet_(
                    v14,
                    *((_DWORD *)this + 2),
                    *((_DWORD *)this + 3),
                    v12);
                }
              }
            }
          }
          Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::UpdateNodeErrorStatus(
            this,
            a2,
            a3);
          v25 = a2;
          EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 696));
          v29 = (char *)this + 696;
          Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::ReleaseNodePropertyChangedHandlerUnderLock(
            this,
            v15);
          v26 = this;
          v16 = *((_QWORD *)this + 92);
          if ( v16 )
          {
            *((_QWORD *)this + 92) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
          }
          v17 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::NodePropertyChangedHandler,Windows::Internal::SpatialInteractions::NodePropertyChangedHandler,Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *,SPATIAL_NODE_ID const &,Windows::Internal::Holographic::ISpatialGraphDriverClient * &>(
                  (char *)this + 736,
                  &v26,
                  a3,
                  &v25);
          v18 = v17;
          if ( v17 >= 0 )
          {
            if ( this != (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)-696LL )
              LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 696));
            v18 = 0;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x601,
              (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
              (const char *)(unsigned int)v17);
            if ( this != (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)-696LL )
              LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 696));
          }
          if ( v18 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x4F7,
              (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
              (const char *)(unsigned int)v18);
            v19 = v34;
            goto LABEL_37;
          }
          AcquireSRWLockExclusive((PSRWLOCK)this + 6);
          *(_QWORD *)&v27 = (char *)this + 48;
          *(_OWORD *)((char *)this + 56) = *(_OWORD *)a3;
          *((_DWORD *)this + 18) = *((_DWORD *)a3 + 4);
          (*(void (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *))(*(_QWORD *)this + 88LL))(this);
          if ( this != (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)-48LL )
            ReleaseSRWLockExclusive((PSRWLOCK)this + 6);
          break;
        }
        v10 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
        if ( v10 && *v10 )
        {
          SpatialInteractionDevices::SpatialInteractionTrace::Instance();
          SpatialInteractionDevices::SpatialInteractionTrace::ControllerGetDynamicNodeFailed_(
            v11,
            v34,
            *((_DWORD *)this + 2));
        }
        if ( ++v9 > Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::s_DynamicNodeInfoBindingAttemptsCount )
          break;
      }
    }
    *a4 = v9 - 1;
  }
  v19 = v34;
  v18 = v34;
LABEL_37:
  if ( v19 < 0 )
  {
    v20 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
    if ( v20 )
    {
      if ( *v20 )
      {
        SpatialInteractionDevices::SpatialInteractionTrace::Instance();
        SpatialInteractionDevices::SpatialInteractionTrace::EnsureDynamicNodeForDeviceFailed_(
          v21,
          v34,
          *((_DWORD *)this + 2));
      }
    }
  }
  return (unsigned int)v18;
}
