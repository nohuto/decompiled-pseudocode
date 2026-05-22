/*
 * XREFs of _lambda_0ef360edd2b0e079ee5004fb777ac3fe_::operator() @ 0x180127490
 * Callers:
 *     ?StartTracking@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialGraphNodeReferenceFactory@Holographic@34@PEAUISpatialGraphDriverClient@634@PEAUHSTRING__@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x180127240 (-StartTracking@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEA.c)
 *     wil::details::lambda_call__lambda_0ef360edd2b0e079ee5004fb777ac3fe___::_lambda_call__lambda_0ef360edd2b0e079ee5004fb777ac3fe___ @ 0x180128748 (wil--details--lambda_call__lambda_0ef360edd2b0e079ee5004fb777ac3fe___--_lambda_call__lambda_0ef3.c)
 * Callees:
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?SetSourceNode@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAAXAEAV?$ComPtr@UISpatialGraphNodeReference@Holographic@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1800BAE80 (-SetSourceNode@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAAXAEAV-$C.c)
 *     ?ControllerNodeStartTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKKW4SPATIAL_TRACKING_STATE@@_NKAEBUDynamicNodeInfo@Holographic@Internal@Windows@@@Z @ 0x180122A00 (-ControllerNodeStartTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKKW4SPATI.c)
 */

char __fastcall lambda_0ef360edd2b0e079ee5004fb777ac3fe_::operator()(__int64 a1)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 v3; // rbp
  _DWORD *v4; // r14
  int *v5; // r15
  int *v6; // r12
  char v7; // si
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  RTL_SRWLOCK *v10; // rbx
  struct _FILETIME *v11; // rcx
  char result; // al

  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::SetSourceNode(
    *(RTL_SRWLOCK **)a1,
    *(char **)(a1 + 8));
  v2 = *(RTL_SRWLOCK **)a1;
  v3 = *(_QWORD *)(a1 + 40);
  v4 = *(_DWORD **)(a1 + 32);
  v5 = *(int **)(a1 + 24);
  v6 = *(int **)(a1 + 16);
  v7 = *(_BYTE *)(*(_QWORD *)a1 + 1013LL) != 0;
  v8 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( v8 && *v8 )
  {
    SpatialInteractionDevices::SpatialInteractionTrace::Instance();
    SpatialInteractionDevices::SpatialInteractionTrace::ControllerNodeStartTracking_(
      v9,
      *v6,
      (int)v2[1].Ptr,
      HIDWORD(v2[1].Ptr),
      *v5,
      v7,
      *v4,
      v3);
  }
  v10 = *(RTL_SRWLOCK **)a1;
  v11 = (struct _FILETIME *)(*(_QWORD *)a1 + 932LL);
  if ( **(int **)(a1 + 16) >= 0 )
  {
    HIDWORD(v10[115].Ptr) = 0;
    LODWORD(v10[116].Ptr) = 0;
  }
  else
  {
    HIDWORD(v10[115].Ptr) = -2113929207;
    LODWORD(v10[116].Ptr) = 2;
  }
  GetSystemTimeAsFileTime(v11);
  result = BYTE1(v10[13].Ptr);
  BYTE1(v10[13].Ptr) = 1;
  return result;
}
