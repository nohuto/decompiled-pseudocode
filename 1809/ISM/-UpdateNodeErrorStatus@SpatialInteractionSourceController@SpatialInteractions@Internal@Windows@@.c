/*
 * XREFs of ?UpdateNodeErrorStatus@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAAXPEAUISpatialGraphDriverClient@Holographic@34@AEBUSPATIAL_NODE_ID@@@Z @ 0x180128404
 * Callers:
 *     ?OnSpatialGraphNodePropertiesUpdated@NodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialGraphDriverClient@Holographic@34@AEBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@634@@Z @ 0x180124660 (-OnSpatialGraphNodePropertiesUpdated@NodePropertyChangedHandler@SpatialInteractions@Internal@Win.c)
 *     ?EnsureDynamicNodeForDevice@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJPEAUISpatialGraphDriverClient@Holographic@34@PEAUDynamicNodeInfo@634@PEAK@Z @ 0x180127588 (-EnsureDynamicNodeForDevice@SpatialInteractionSourceController@SpatialInteractions@Internal@Wind.c)
 * Callees:
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?NodeStatusOK_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXK@Z @ 0x18012301C (-NodeStatusOK_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXK@Z.c)
 *     ?NodeStatusError_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXK_KKK@Z @ 0x1801230AC (-NodeStatusError_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXK_KKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::UpdateNodeErrorStatus(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        struct Windows::Internal::Holographic::ISpatialGraphDriverClient *a2,
        const struct SPATIAL_NODE_ID *a3)
{
  bool v4; // dl
  char *v5; // rcx
  unsigned __int64 v6; // rsi
  char *v7; // r8
  unsigned int v8; // edx
  _DWORD *v9; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v10; // rcx
  _DWORD *v11; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v12; // rcx
  LPVOID pv; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+40h] [rbp-30h]
  __int128 v15; // [rsp+48h] [rbp-28h]
  LPVOID *p_pv; // [rsp+58h] [rbp-18h]
  void *v17; // [rsp+60h] [rbp-10h] BYREF
  char v18; // [rsp+68h] [rbp-8h]

  pv = 0LL;
  v14 = 0LL;
  p_pv = &pv;
  v17 = 0LL;
  v18 = 1;
  v4 = (*(int (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *, const struct SPATIAL_NODE_ID *, LPVOID *, void **))(*(_QWORD *)a2 + 144LL))(
         a2,
         a3,
         &pv,
         &v17) >= 0;
  if ( v18 )
    p_pv[1] = v17;
  if ( v4 )
  {
    v15 = 0uLL;
    *(_OWORD *)((char *)this + 908) = 0uLL;
    v5 = (char *)pv;
    v6 = v14;
    v7 = (char *)pv + 16 * v14;
    if ( pv == v7 )
    {
      v8 = *((_DWORD *)this + 227);
    }
    else
    {
      do
      {
        v8 = *(_DWORD *)v5;
        if ( *(_DWORD *)v5 == 33554440 && *((_DWORD *)v5 + 1) == 1 )
        {
          *((_BYTE *)this + 1184) = 1;
          v8 = *(_DWORD *)v5;
        }
        if ( *((_DWORD *)this + 227) >= v8 )
        {
          v8 = *((_DWORD *)this + 227);
        }
        else
        {
          *((_DWORD *)this + 227) = v8;
          *((_DWORD *)this + 228) = *((_DWORD *)v5 + 1);
          *(_QWORD *)((char *)this + 916) = *((_QWORD *)v5 + 1);
        }
        v5 += 16;
      }
      while ( v5 != v7 );
      v6 = v14;
    }
    if ( v8 )
    {
      v11 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
      if ( v11 && *v11 )
      {
        SpatialInteractionDevices::SpatialInteractionTrace::Instance();
        SpatialInteractionDevices::SpatialInteractionTrace::NodeStatusError_(
          v12,
          *((_DWORD *)this + 2),
          v6,
          *((_DWORD *)this + 227),
          *((_DWORD *)this + 228));
      }
    }
    else
    {
      v9 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
      if ( v9 && *v9 )
      {
        SpatialInteractionDevices::SpatialInteractionTrace::Instance();
        SpatialInteractionDevices::SpatialInteractionTrace::NodeStatusOK_(v10, *((_DWORD *)this + 2));
      }
    }
    *((_BYTE *)this + 105) = 1;
  }
  if ( pv )
    CoTaskMemFree(pv);
}
