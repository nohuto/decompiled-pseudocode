/*
 * XREFs of ?EnsureDynamicNodeInfo@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@IEAAJPEAUISpatialGraphDriverClient@Holographic@34@PEAUDynamicNodeInfo@634@@Z @ 0x1800EC39C
 * Callers:
 *     ?StartTracking@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialGraphNodeReferenceFactory@Holographic@34@PEAUISpatialGraphDriverClient@634@PEAUHSTRING__@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800EE5A0 (-StartTracking@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAAJPEAUISp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NPEAUDynamicNodeInfo@Holographic@34@@Z @ 0x1800E278C (-GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NP.c)
 *     _lambda_8af77e303c344d221a281039b3d8ff10_::operator() @ 0x1800EB344 (_lambda_8af77e303c344d221a281039b3d8ff10_--operator().c)
 *     ?SetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAAXAEBUDynamicNodeInfo@Holographic@34@@Z @ 0x1800ED814 (-SetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAAXAE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::EnsureDynamicNodeInfo(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject *this,
        struct Windows::Internal::Holographic::ISpatialGraphDriverClient *a2,
        struct Windows::Internal::Holographic::DynamicNodeInfo *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int128 v9; // [rsp+28h] [rbp-38h]
  __int128 v10; // [rsp+40h] [rbp-20h] BYREF
  struct Windows::Internal::Holographic::DynamicNodeInfo *v11; // [rsp+50h] [rbp-10h]
  char v12; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  unsigned int v14; // [rsp+98h] [rbp+38h] BYREF

  v14 = 0;
  if ( !Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::GetDynamicNodeInfo(this, a3) )
  {
    *(_QWORD *)&v9 = this;
    *((_QWORD *)&v9 + 1) = &v14;
    v10 = v9;
    v11 = a3;
    v12 = 1;
    v6 = (*(__int64 (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject *, struct Windows::Internal::Holographic::DynamicNodeInfo *))(*(_QWORD *)this + 256LL))(
           this,
           a3);
    v14 = v6;
    if ( v6 < 0 )
    {
      if ( v6 != -2147024846 )
      {
        v7 = 118LL;
LABEL_9:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
          (const char *)(unsigned int)v6);
        goto LABEL_10;
      }
      goto LABEL_10;
    }
    v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphDriverClient *, struct Windows::Internal::Holographic::DynamicNodeInfo *, char *))(*(_QWORD *)a2 + 136LL))(
           a2,
           a3,
           (char *)a3 + 16);
    v14 = v6;
    if ( v6 < 0 )
    {
      if ( v6 != -2147024846 )
      {
        v7 = 119LL;
        goto LABEL_9;
      }
      v6 = -2147024846;
LABEL_10:
      v12 = 0;
      lambda_8af77e303c344d221a281039b3d8ff10_::operator()(&v10);
      return (unsigned int)v6;
    }
    Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::SetDynamicNodeInfo(this, a3);
    v12 = 0;
    lambda_8af77e303c344d221a281039b3d8ff10_::operator()(&v10);
  }
  return v14;
}
