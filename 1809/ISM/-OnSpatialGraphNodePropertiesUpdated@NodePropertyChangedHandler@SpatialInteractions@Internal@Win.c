/*
 * XREFs of ?OnSpatialGraphNodePropertiesUpdated@NodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialGraphDriverClient@Holographic@34@AEBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@634@@Z @ 0x180124660
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetButtonLatencyMicroseconds@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAAXH@Z @ 0x180125070 (-SetButtonLatencyMicroseconds@SpatialInteractionSourceController@SpatialInteractions@Internal@Wi.c)
 *     ?SetHapticsOutputReportPeriodMicroseconds@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAAXI@Z @ 0x1801250E8 (-SetHapticsOutputReportPeriodMicroseconds@SpatialInteractionSourceController@SpatialInteractions.c)
 *     ?UpdateNodeErrorStatus@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAAXPEAUISpatialGraphDriverClient@Holographic@34@AEBUSPATIAL_NODE_ID@@@Z @ 0x180128404 (-UpdateNodeErrorStatus@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::NodePropertyChangedHandler::OnSpatialGraphNodePropertiesUpdated(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        char a4)
{
  RTL_SRWLOCK *v4; // rbp
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // r9
  unsigned int v14; // edx
  int v15; // eax
  int v16; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v19; // [rsp+40h] [rbp+8h] BYREF

  v4 = (RTL_SRWLOCK *)(a1 + 80);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 80));
  if ( *a3 != *(_DWORD *)(a1 + 64)
    || a3[1] != *(_DWORD *)(a1 + 68)
    || a3[2] != *(_DWORD *)(a1 + 72)
    || a3[3] != *(_DWORD *)(a1 + 76) )
  {
    v10 = 140LL;
    goto LABEL_25;
  }
  v9 = *(_QWORD *)(a1 + 96);
  if ( a2 != v9 )
  {
    v10 = 141LL;
LABEL_25:
    v12 = -2147418113;
    v13 = 2147549183LL;
    goto LABEL_26;
  }
  if ( !*(_QWORD *)(a1 + 88) )
    goto LABEL_23;
  if ( (a4 & 2) == 0 )
  {
    if ( (a4 & 4) == 0 )
    {
      if ( (a4 & 8) == 0 )
      {
        if ( (a4 & 1) != 0 )
          Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::UpdateNodeErrorStatus(
            *(Windows::Internal::SpatialInteractions::SpatialInteractionSourceController **)(a1 + 88),
            *(struct Windows::Internal::Holographic::ISpatialGraphDriverClient **)(a1 + 96),
            (const struct SPATIAL_NODE_ID *)(a1 + 64));
        goto LABEL_23;
      }
      v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned int *))(*(_QWORD *)v9 + 176LL))(
              *(_QWORD *)(a1 + 96),
              a1 + 64,
              &v19);
      v12 = v16;
      if ( v16 < 0 )
      {
        v13 = (unsigned int)v16;
        v10 = 159LL;
        goto LABEL_26;
      }
      v14 = (unsigned __int8)v19;
      goto LABEL_20;
    }
    v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned int *))(*(_QWORD *)v9 + 168LL))(
            *(_QWORD *)(a1 + 96),
            a1 + 64,
            &v19);
    v12 = v15;
    if ( v15 < 0 )
    {
      v13 = (unsigned int)v15;
      v10 = 153LL;
      goto LABEL_26;
    }
    Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SetHapticsOutputReportPeriodMicroseconds(
      *(Windows::Internal::SpatialInteractions::SpatialInteractionSourceController **)(a1 + 88),
      v19);
LABEL_23:
    v12 = 0;
    goto LABEL_27;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned int *))(*(_QWORD *)v9 + 160LL))(
          *(_QWORD *)(a1 + 96),
          a1 + 64,
          &v19);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v14 = v19;
LABEL_20:
    Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SetButtonLatencyMicroseconds(
      *(Windows::Internal::SpatialInteractions::SpatialInteractionSourceController **)(a1 + 88),
      v14);
    goto LABEL_23;
  }
  v13 = (unsigned int)v11;
  v10 = 147LL;
LABEL_26:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
    (const char *)v13);
LABEL_27:
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v12;
}
