/*
 * XREFs of ?EnsureDynamicNodeForDevice@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJPEAUISpatialGraphDriverClient@Holographic@34@PEAUDynamicNodeInfo@634@PEAK@Z @ 0x1801653B0
 * Callers:
 *     ?StartTracking@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialGraphNodeReferenceFactory@Holographic@34@PEAUISpatialGraphDriverClient@634@PEAUHSTRING__@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1801688D0 (-StartTracking@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800D8690 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800DA21C (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ?GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NPEAUDynamicNodeInfo@Holographic@34@@Z @ 0x1800E278C (-GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NP.c)
 *     ?SetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAAXAEBUDynamicNodeInfo@Holographic@34@@Z @ 0x1800ED814 (-SetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAAXAE.c)
 *     ?ControllerGetDynamicNodeFailed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJK@Z @ 0x180164AD0 (-ControllerGetDynamicNodeFailed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJK@Z.c)
 *     ?CreateNodePropertyChangedHandler@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@PEAUISpatialGraphDriverClient@Holographic@34@@Z @ 0x180164F90 (-CreateNodePropertyChangedHandler@SpatialInteractionSourceController@SpatialInteractions@Interna.c)
 *     ?EnsureDynamicNodeForDeviceFailed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJK@Z @ 0x18016561C (-EnsureDynamicNodeForDeviceFailed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJK@Z.c)
 *     ?EnsureInitializationRetryParameters@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXXZ @ 0x1801656D0 (-EnsureInitializationRetryParameters@SpatialInteractionSourceController@SpatialInteractions@Inte.c)
 *     ?HapticsIntensityLevelsSet_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKKE@Z @ 0x180165FBC (-HapticsIntensityLevelsSet_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKKE@Z.c)
 *     ?HapticsOutputReportPeriodMicrosecondsSet_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKKI@Z @ 0x180166074 (-HapticsOutputReportPeriodMicrosecondsSet_@SpatialInteractionTrace@SpatialInteractionDevices@@QE.c)
 *     ?SetButtonLatencyMicroseconds@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAAXH@Z @ 0x180168038 (-SetButtonLatencyMicroseconds@SpatialInteractionSourceController@SpatialInteractions@Internal@Wi.c)
 *     ?UpdateNodeErrorStatus@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAAXPEAUISpatialGraphDriverClient@Holographic@34@AEBUSPATIAL_NODE_ID@@@Z @ 0x180169280 (-UpdateNodeErrorStatus@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::EnsureDynamicNodeForDevice(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        struct Windows::Internal::Holographic::ISpatialGraphDriverClient *a2,
        struct Windows::Internal::Holographic::DynamicNodeInfo *a3,
        unsigned int *a4)
{
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *v8; // rcx
  unsigned int v9; // esi
  __int64 v10; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v11; // rcx
  __int64 v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v15; // rcx
  __int64 v16; // rcx
  unsigned __int8 v17; // di
  __int64 v18; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v19; // rcx
  int NodePropertyChangedHandler; // eax
  unsigned int v21; // edi
  int v22; // eax
  __int64 v23; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v24; // rcx
  int v26; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v27; // [rsp+24h] [rbp-2Ch] BYREF
  __int64 v28; // [rsp+28h] [rbp-28h]
  int *v29; // [rsp+30h] [rbp-20h]
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *v30; // [rsp+38h] [rbp-18h]
  char v31; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned __int8 v33; // [rsp+80h] [rbp+30h] BYREF
  int v34; // [rsp+98h] [rbp+48h] BYREF

  v28 = -2LL;
  v34 = 0;
  *a4 = 0;
  v29 = &v34;
  v30 = this;
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
        v34 = (*(__int64 (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *, _QWORD, struct Windows::Internal::Holographic::DynamicNodeInfo *))(*(_QWORD *)a2 + 72LL))(
                a2,
                *((_QWORD *)this + 5),
                a3);
        if ( v34 >= 0 )
        {
          v26 = 0;
          if ( (*(int (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *, struct Windows::Internal::Holographic::DynamicNodeInfo *, int *))(*(_QWORD *)a2 + 168LL))(
                 a2,
                 a3,
                 &v26) >= 0
            && (unsigned int)v26 <= 0xF423F )
          {
            Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SetButtonLatencyMicroseconds(
              this,
              v26);
          }
          v27 = 0;
          if ( (*(int (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *, struct Windows::Internal::Holographic::DynamicNodeInfo *, unsigned int *))(*(_QWORD *)a2 + 176LL))(
                 a2,
                 a3,
                 &v27) >= 0 )
          {
            v13 = v27;
            if ( v27 < 0xF4240 )
            {
              *((_DWORD *)this + 200) = v27;
              if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(v12) )
              {
                wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
                  v14,
                  (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
                SpatialInteractionDevices::SpatialInteractionTrace::HapticsOutputReportPeriodMicrosecondsSet_(
                  v15,
                  *((_DWORD *)this + 2),
                  *((_DWORD *)this + 3),
                  v13);
              }
            }
          }
          v33 = 0;
          if ( (*(int (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *, struct Windows::Internal::Holographic::DynamicNodeInfo *, unsigned __int8 *))(*(_QWORD *)a2 + 184LL))(
                 a2,
                 a3,
                 &v33) >= 0 )
          {
            v17 = v33;
            if ( v33 <= 0x64u )
            {
              *((_BYTE *)this + 804) = v33;
              if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(v16) )
              {
                wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
                  v18,
                  (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
                SpatialInteractionDevices::SpatialInteractionTrace::HapticsIntensityLevelsSet_(
                  v19,
                  *((_DWORD *)this + 2),
                  *((_DWORD *)this + 3),
                  v17);
              }
            }
          }
          Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::UpdateNodeErrorStatus(
            this,
            a2,
            a3);
          NodePropertyChangedHandler = Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::CreateNodePropertyChangedHandler(
                                         this,
                                         a3,
                                         a2);
          v21 = NodePropertyChangedHandler;
          if ( NodePropertyChangedHandler < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x520,
              (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
              (const char *)(unsigned int)NodePropertyChangedHandler);
            v22 = v34;
            goto LABEL_27;
          }
          Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::SetDynamicNodeInfo(this, a3);
          break;
        }
        if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(v10) )
        {
          wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
            (__int64)v8,
            (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
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
  v22 = v34;
  v21 = v34;
LABEL_27:
  if ( v22 < 0 && SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled((__int64)v8) )
  {
    wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
      v23,
      (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
    SpatialInteractionDevices::SpatialInteractionTrace::EnsureDynamicNodeForDeviceFailed_(
      v24,
      v34,
      *((_DWORD *)this + 2));
  }
  return v21;
}
