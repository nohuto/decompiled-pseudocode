/*
 * XREFs of ?StopTracking@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAAJW4StopTrackingReason@234@PEAUISpatialLocatorStaticsInternal@3Spatial@Perception@4@@Z @ 0x1800BB620
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NPEAUDynamicNodeInfo@Holographic@34@@Z @ 0x1800AA4A4 (-GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NP.c)
 *     ?SpatialObjectStoppedTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@I@Z @ 0x1800BADA8 (-SpatialObjectStoppedTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID.c)
 *     ?SetSourceNode@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAAXAEAV?$ComPtr@UISpatialGraphNodeReference@Holographic@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1800BAE80 (-SetSourceNode@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAAXAEAV-$C.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::StopTracking(
        __int64 a1,
        int a2,
        __int64 a3)
{
  int v6; // eax
  const struct _GUID *v7; // rbx
  _DWORD *v8; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-39h] BYREF
  __int128 v12; // [rsp+28h] [rbp-31h]
  int v13; // [rsp+38h] [rbp-21h]
  __int64 v14; // [rsp+40h] [rbp-19h]
  __int128 v15; // [rsp+50h] [rbp-9h] BYREF
  __int128 v16; // [rsp+60h] [rbp+7h] BYREF
  _BYTE v17[16]; // [rsp+78h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v14 = -2LL;
  if ( a2 == 1 )
  {
    if ( a3 )
    {
      if ( Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::GetDynamicNodeInfo(
             (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *)a1,
             (struct Windows::Internal::Holographic::DynamicNodeInfo *)&v16) )
      {
        v15 = v16;
        v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)a3 + 64LL))(
               a3,
               *(_QWORD *)(a1 + 96),
               &v15);
        if ( v6 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xA9,
            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
            (const char *)(unsigned int)v6);
      }
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 48));
    v12 = 0uLL;
    v13 = 0;
    *(_OWORD *)(a1 + 56) = 0uLL;
    *(_DWORD *)(a1 + 72) = 0;
    if ( a1 != -48 )
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 48));
    *(_BYTE *)(a1 + 105) = 1;
  }
  v11 = 0LL;
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::SetSourceNode((RTL_SRWLOCK *)a1, (char *)&v11);
  v7 = (const struct _GUID *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 120) + 48LL))(
                               *(_QWORD *)(a1 + 120),
                               v17);
  v8 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( v8 && *v8 )
  {
    SpatialInteractionDevices::SpatialInteractionTrace::Instance();
    SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectStoppedTracking_(v9, v7, a2);
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return 0LL;
}
