/*
 * XREFs of ?StopTracking@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJW4StopTrackingReason@234@PEAUISpatialLocatorStaticsInternal@3Spatial@Perception@4@@Z @ 0x180127890
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NPEAUDynamicNodeInfo@Holographic@34@@Z @ 0x1800AA4A4 (-GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NP.c)
 *     ?ControllerNodeStopTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKI@Z @ 0x180122B1C (-ControllerNodeStopTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKI@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::StopTracking(
        __int64 a1,
        int a2,
        __int64 a3)
{
  __int64 v6; // rdx
  __int64 (__fastcall *v7)(__int64, __int64, __int128 *); // rax
  int v8; // eax
  unsigned int v9; // esi
  __int64 *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rsi
  _DWORD *v14; // rcx
  __int64 v15; // rax
  SpatialInteractionDevices::SpatialInteractionTrace *v16; // rcx
  char v17; // [rsp+38h] [rbp-60h] BYREF
  __int128 v18; // [rsp+40h] [rbp-58h] BYREF
  __int128 v19; // [rsp+50h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  if ( a2 == 1 )
  {
    if ( a3 )
    {
      if ( Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::GetDynamicNodeInfo(
             (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *)a1,
             (struct Windows::Internal::Holographic::DynamicNodeInfo *)&v19) )
      {
        v6 = *(_QWORD *)(a1 + 96);
        v7 = *(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)a3 + 64LL);
        v18 = v19;
        v8 = v7(a3, v6, &v18);
        v9 = v8;
        if ( v8 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x511,
            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
            (const char *)(unsigned int)v8);
          return v9;
        }
      }
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 48));
    *(_OWORD *)(a1 + 56) = 0uLL;
    *(_DWORD *)(a1 + 72) = 0;
    if ( a1 != -48 )
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 48));
    *(_BYTE *)(a1 + 105) = 1;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 80));
  v11 = (__int64 *)(a1 + 88);
  v12 = 0LL;
  v13 = 0LL;
  if ( &v17 != (char *)(a1 + 88) )
  {
    v12 = *v11;
    *v11 = 0LL;
    v13 = v12;
  }
  if ( *(_BYTE *)(a1 + 456) )
  {
    *(_BYTE *)(a1 + 457) = 0;
  }
  else
  {
    *(_WORD *)(a1 + 1176) = 0;
    *(_WORD *)(a1 + 1084) = 0;
    *(_WORD *)(a1 + 1124) = 0;
    *(_BYTE *)(a1 + 1126) = 0;
    v14 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
    v15 = v13;
    if ( !v14 || !*v14 )
      goto LABEL_17;
    SpatialInteractionDevices::SpatialInteractionTrace::Instance();
    SpatialInteractionDevices::SpatialInteractionTrace::ControllerNodeStopTracking_(v16, *(_DWORD *)(a1 + 8), a2);
  }
  v15 = v13;
LABEL_17:
  if ( a1 != -80 )
  {
    ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 80));
    v15 = v13;
  }
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return 0LL;
}
