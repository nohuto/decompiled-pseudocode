/*
 * XREFs of ?OnSpatialGraphNodePropertiesUpdated@NodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialGraphDriverClient@Holographic@34@AEBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@634@@Z @ 0x180166AD0
 * Callers:
 *     <none>
 * Callees:
 *     InlineIsEqualGUID @ 0x18000C890 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800D8450 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800D9FDC (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ?HapticsOutputReportPeriodMicrosecondsSet_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKKI@Z @ 0x1801660AC (-HapticsOutputReportPeriodMicrosecondsSet_@SpatialInteractionTrace@SpatialInteractionDevices@@QE.c)
 *     ?SetButtonLatencyMicroseconds@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAAXH@Z @ 0x180168088 (-SetButtonLatencyMicroseconds@SpatialInteractionSourceController@SpatialInteractions@Internal@Wi.c)
 *     ?UpdateNodeErrorStatus@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAAXPEAUISpatialGraphDriverClient@Holographic@34@AEBUSPATIAL_NODE_ID@@@Z @ 0x1801692D0 (-UpdateNodeErrorStatus@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::NodePropertyChangedHandler::OnSpatialGraphNodePropertiesUpdated(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        char a4)
{
  RTL_SRWLOCK *v4; // r14
  const struct SPATIAL_NODE_ID *v9; // rdx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // edx
  __int64 v16; // rcx
  int *v17; // rbx
  unsigned int v18; // esi
  __int64 v19; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v20; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v23; // [rsp+40h] [rbp+8h] BYREF

  v4 = (RTL_SRWLOCK *)(a1 + 80);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 80));
  if ( !InlineIsEqualGUID(a3, (_DWORD *)(a1 + 64)) )
  {
    v10 = -2147418113;
    v11 = 142LL;
    v12 = 2147549183LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
      (const char *)v12);
    goto LABEL_25;
  }
  v13 = *(_QWORD *)(a1 + 96);
  if ( a2 != v13 )
  {
    v10 = -2147418113;
    v11 = 143LL;
    v12 = 2147549183LL;
    goto LABEL_19;
  }
  if ( *(_QWORD *)(a1 + 88) )
  {
    if ( (a4 & 2) != 0 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, const struct SPATIAL_NODE_ID *, unsigned int *))(*(_QWORD *)v13 + 168LL))(
              v13,
              v9,
              &v23);
      v10 = v14;
      if ( v14 < 0 )
      {
        v11 = 149LL;
LABEL_18:
        v12 = (unsigned int)v14;
        goto LABEL_19;
      }
      v15 = v23;
LABEL_21:
      Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SetButtonLatencyMicroseconds(
        *(Windows::Internal::SpatialInteractions::SpatialInteractionSourceController **)(a1 + 88),
        v15);
      goto LABEL_24;
    }
    if ( (a4 & 4) == 0 )
    {
      if ( (a4 & 8) == 0 )
      {
        if ( (a4 & 1) != 0 )
          Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::UpdateNodeErrorStatus(
            *(Windows::Internal::SpatialInteractions::SpatialInteractionSourceController **)(a1 + 88),
            *(struct Windows::Internal::Holographic::ISpatialGraphDriverClient **)(a1 + 96),
            v9);
        goto LABEL_24;
      }
      v14 = (*(__int64 (__fastcall **)(__int64, const struct SPATIAL_NODE_ID *, unsigned int *))(*(_QWORD *)v13 + 184LL))(
              v13,
              v9,
              &v23);
      v10 = v14;
      if ( v14 < 0 )
      {
        v11 = 161LL;
        goto LABEL_18;
      }
      v15 = (unsigned __int8)v23;
      goto LABEL_21;
    }
    v14 = (*(__int64 (__fastcall **)(__int64, const struct SPATIAL_NODE_ID *, unsigned int *))(*(_QWORD *)v13 + 176LL))(
            v13,
            v9,
            &v23);
    v10 = v14;
    if ( v14 < 0 )
    {
      v11 = 155LL;
      goto LABEL_18;
    }
    v17 = *(int **)(a1 + 88);
    v18 = v23;
    v17[200] = v23;
    if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(v16) )
    {
      wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
        v19,
        (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
      SpatialInteractionDevices::SpatialInteractionTrace::HapticsOutputReportPeriodMicrosecondsSet_(
        v20,
        v17[2],
        v17[3],
        v18);
    }
  }
LABEL_24:
  v10 = 0;
LABEL_25:
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v10;
}
