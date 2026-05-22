/*
 * XREFs of ?FinalizeInitialization@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800AF90C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_ae063397699a01dee2c76b2816bcdf10__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&___ptr64_::_Do_call @ 0x1800B7820 (std--_Func_impl_no_alloc__lambda_ae063397699a01dee2c76b2816bcdf10__void_std--shared_ea_1800B7820.c)
 * Callees:
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ??1FinalizeControllerInitialization@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ @ 0x1800AA990 (--1FinalizeControllerInitialization@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA@XZ.c)
 *     ?StartActivity@FinalizeControllerInitialization@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXK@Z @ 0x1800AAAEC (-StartActivity@FinalizeControllerInitialization@SpatialInteractionTrace@SpatialInteractionDevice.c)
 *     ?SpatialInputController_Added_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKQEB_WGGG@Z @ 0x1800ABD3C (-SpatialInputController_Added_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKQEB_WGGG.c)
 *     ?TryUpdateTrackingState@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800B123C (-TryUpdateTrackingState@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 *     ?Stop@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B4944 (-Stop@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$00$0EAAAAAAAAAAA@$03U_.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::FinalizeInitialization(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        _QWORD *a2)
{
  int v4; // ebx
  int v5; // eax
  int updated; // ebx
  char v7; // bl
  char v8; // si
  __int16 v9; // r14
  const WCHAR *v10; // r15
  int v11; // edi
  _DWORD *v12; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v13; // rcx
  int v15; // [rsp+38h] [rbp-D0h] BYREF
  int *v16; // [rsp+40h] [rbp-C8h]
  _QWORD *v17; // [rsp+48h] [rbp-C0h]
  __int64 v18; // [rsp+50h] [rbp-B8h]
  __int64 v19; // [rsp+58h] [rbp-B0h]
  _QWORD v20[4]; // [rsp+68h] [rbp-A0h] BYREF
  int v21; // [rsp+88h] [rbp-80h]
  int *v22; // [rsp+90h] [rbp-78h]
  int *v23; // [rsp+98h] [rbp-70h]
  int v24; // [rsp+A0h] [rbp-68h] BYREF
  char v25; // [rsp+A4h] [rbp-64h]
  int v26; // [rsp+C8h] [rbp-40h] BYREF
  const char *v27; // [rsp+D0h] [rbp-38h]
  __int64 v28; // [rsp+D8h] [rbp-30h]
  char v29; // [rsp+E0h] [rbp-28h]
  __int64 v30; // [rsp+E8h] [rbp-20h]
  char v31[144]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v32; // [rsp+180h] [rbp+78h]
  __int64 v33; // [rsp+188h] [rbp+80h]
  __int64 v34; // [rsp+190h] [rbp+88h]
  __int64 v35; // [rsp+198h] [rbp+90h]

  v19 = -2LL;
  v15 = 0;
  v4 = *(_DWORD *)(*a2 + 8LL);
  v20[1] = 0LL;
  v20[2] = v20;
  v20[3] = 0LL;
  v21 = 0;
  v22 = &v26;
  v23 = &v24;
  v24 = 0;
  v25 = 0;
  v29 = 0;
  v26 = 0;
  v27 = "FinalizeControllerInitialization";
  v28 = 0LL;
  v30 = 1LL;
  v32 = 0LL;
  memset_0(v31, 0, sizeof(v31));
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v20[0] = &SpatialInteractionDevices::SpatialInteractionTrace::FinalizeControllerInitialization::`vftable';
  SpatialInteractionDevices::SpatialInteractionTrace::FinalizeControllerInitialization::StartActivity(
    (SpatialInteractionDevices::SpatialInteractionTrace::FinalizeControllerInitialization *)v20,
    v4);
  v16 = &v15;
  v17 = v20;
  LOBYTE(v18) = 1;
  v5 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 136LL))(*a2);
  v15 = v5;
  if ( v5 >= 0 )
  {
    *(_BYTE *)(*a2 + 106LL) = 1;
    updated = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::TryUpdateTrackingState(this);
    if ( updated >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 24LL))(*a2);
      v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
      v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 8LL))(*a2);
      v10 = (const WCHAR *)(**(__int64 (__fastcall ***)(_QWORD))*a2)(*a2);
      v11 = *(_DWORD *)(*a2 + 8LL);
      v12 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
      if ( v12 && *v12 )
      {
        SpatialInteractionDevices::SpatialInteractionTrace::Instance();
        SpatialInteractionDevices::SpatialInteractionTrace::SpatialInputController_Added_(v13, v11, v10, v9, v8, v7);
      }
      updated = 0;
    }
  }
  else
  {
    updated = v5;
  }
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,1,70368744177664,4,_TlgReflectorTag_Param0IsProviderType>::Stop((SpatialInteractionDevices::SpatialInteractionTrace::FinalizeControllerInitialization *)v20);
  SpatialInteractionDevices::SpatialInteractionTrace::FinalizeControllerInitialization::~FinalizeControllerInitialization((SpatialInteractionDevices::SpatialInteractionTrace::FinalizeControllerInitialization *)v20);
  return (unsigned int)updated;
}
