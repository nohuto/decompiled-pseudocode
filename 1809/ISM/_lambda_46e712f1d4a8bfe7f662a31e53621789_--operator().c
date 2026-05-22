/*
 * XREFs of _lambda_46e712f1d4a8bfe7f662a31e53621789_::operator() @ 0x1800B35CC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_46e712f1d4a8bfe7f662a31e53621789__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks_____ptr64_::_Do_call @ 0x1800B7D60 (std--_Func_impl_no_alloc__lambda_46e712f1d4a8bfe7f662a31e53621789__void_Windows--In_ea_1800B7D60.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@DdiSource_InputThreadRemoval@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WAEBU_GUID@@@Z @ 0x1800ADE24 (-StartActivity@DdiSource_InputThreadRemoval@SpatialInteractionTrace@SpatialInteractionDevices@@Q.c)
 *     ??1?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800ADF9C (--1-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorT.c)
 *     ?DoDeviceRemoval@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@K_NPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800AF080 (-DoDeviceRemoval@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@.c)
 *     ?Destroy@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800B3D10 (-Destroy@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgRefl.c)
 *     ?Stop@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B4150 (-Stop@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflect.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_46e712f1d4a8bfe7f662a31e53621789_::operator()(__int64 *a1, __int64 a2)
{
  const wchar_t *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // eax
  int v8; // eax
  volatile signed __int32 *v9; // rbx
  __int128 v10; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+48h] [rbp-C0h]
  struct _GUID v12; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v13[4]; // [rsp+68h] [rbp-A0h] BYREF
  int v14; // [rsp+88h] [rbp-80h]
  int *v15; // [rsp+90h] [rbp-78h]
  int *v16; // [rsp+98h] [rbp-70h]
  int v17; // [rsp+A0h] [rbp-68h] BYREF
  char v18; // [rsp+A4h] [rbp-64h]
  int v19; // [rsp+C8h] [rbp-40h] BYREF
  const char *v20; // [rsp+D0h] [rbp-38h]
  __int64 v21; // [rsp+D8h] [rbp-30h]
  char v22; // [rsp+E0h] [rbp-28h]
  int v23; // [rsp+E8h] [rbp-20h]
  int v24; // [rsp+ECh] [rbp-1Ch]
  _BYTE v25[144]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v26; // [rsp+180h] [rbp+78h]
  __int64 v27; // [rsp+188h] [rbp+80h]
  __int64 v28; // [rsp+190h] [rbp+88h]
  __int64 v29; // [rsp+198h] [rbp+90h]
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v11 = -2LL;
  v4 = (const wchar_t *)(a1[1] + 80);
  if ( *(_QWORD *)(a1[1] + 104) >= 8uLL )
    v4 = *(const wchar_t **)v4;
  (*(void (__fastcall **)(_QWORD, struct _GUID *))(**(_QWORD **)(a1[2] + 120) + 48LL))(*(_QWORD *)(a1[2] + 120), &v12);
  v13[1] = 0LL;
  v13[2] = v13;
  v13[3] = 0LL;
  v14 = 0;
  v15 = &v19;
  v16 = &v17;
  v17 = 0;
  v18 = 0;
  v22 = 0;
  v19 = 0;
  v20 = "DdiSource_InputThreadRemoval";
  v21 = 0LL;
  v23 = 1;
  v24 = 0;
  v26 = 0LL;
  memset_0(v25, 0, sizeof(v25));
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v13[0] = &SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_InputThreadRemoval::`vftable';
  SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_InputThreadRemoval::StartActivity(
    (SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_InputThreadRemoval *)v13,
    v4,
    &v12);
  v5 = *a1;
  v10 = 0LL;
  v6 = a1[3];
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    v6 = a1[3];
  }
  *(_QWORD *)&v10 = a1[2];
  *((_QWORD *)&v10 + 1) = v6;
  v7 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DoDeviceRemoval(
         v5,
         (RTL_SRWLOCK **)&v10,
         *(_DWORD *)(v10 + 12),
         0,
         a2);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5AD,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v7);
  v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1[2] + 216LL))(a1[2], a2);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5AE,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v8);
  v9 = (volatile signed __int32 *)*((_QWORD *)&v10 + 1);
  if ( *((_QWORD *)&v10 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v10 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v13,
    0LL);
  v13[0] = &SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_InputThreadRemoval::`vftable';
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy(v13);
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>((__int64)v13);
}
