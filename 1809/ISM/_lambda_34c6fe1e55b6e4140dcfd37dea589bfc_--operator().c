/*
 * XREFs of _lambda_34c6fe1e55b6e4140dcfd37dea589bfc_::operator() @ 0x1800B31F0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_34c6fe1e55b6e4140dcfd37dea589bfc__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks_____ptr64_::_Do_call @ 0x1800B7D40 (std--_Func_impl_no_alloc__lambda_34c6fe1e55b6e4140dcfd37dea589bfc__void_Windows--In_ea_1800B7D40.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@DdiSource_InputThreadInit@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@@Z @ 0x1800AD904 (-StartActivity@DdiSource_InputThreadInit@SpatialInteractionTrace@SpatialInteractionDevices@@QEAA.c)
 *     ??1?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800ADF9C (--1-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorT.c)
 *     ?AddDeviceToCache@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJKKAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800AFB28 (-AddDeviceToCache@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 *     ?QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@6@_N@Z @ 0x1800AFC34 (-QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 *     ?Destroy@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800B3D10 (-Destroy@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgRefl.c)
 *     ?Stop@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B4150 (-Stop@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflect.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_34c6fe1e55b6e4140dcfd37dea589bfc_::operator()(__int64 a1, __int64 (__fastcall ***a2)(_QWORD))
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  int v5; // eax
  unsigned int v6; // esi
  volatile signed __int32 *v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rbx
  int v12[2]; // [rsp+28h] [rbp-E0h] BYREF
  volatile signed __int32 *v13; // [rsp+30h] [rbp-D8h]
  __int64 v14; // [rsp+38h] [rbp-D0h]
  _QWORD v15[8]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v16[4]; // [rsp+88h] [rbp-80h] BYREF
  int v17; // [rsp+A8h] [rbp-60h]
  int *v18; // [rsp+B0h] [rbp-58h]
  int *v19; // [rsp+B8h] [rbp-50h]
  int v20; // [rsp+C0h] [rbp-48h] BYREF
  char v21; // [rsp+C4h] [rbp-44h]
  int v22; // [rsp+E8h] [rbp-20h] BYREF
  const char *v23; // [rsp+F0h] [rbp-18h]
  __int64 v24; // [rsp+F8h] [rbp-10h]
  char v25; // [rsp+100h] [rbp-8h]
  int v26; // [rsp+108h] [rbp+0h]
  int v27; // [rsp+10Ch] [rbp+4h]
  _BYTE v28[144]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v29; // [rsp+1A0h] [rbp+98h]
  __int64 v30; // [rsp+1A8h] [rbp+A0h]
  __int64 v31; // [rsp+1B0h] [rbp+A8h]
  __int64 v32; // [rsp+1B8h] [rbp+B0h]
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  v14 = -2LL;
  v16[1] = 0LL;
  v16[2] = v16;
  v16[3] = 0LL;
  v17 = 0;
  v18 = &v22;
  v19 = &v20;
  v20 = 0;
  v21 = 0;
  v25 = 0;
  v22 = 0;
  v23 = "DdiSource_InputThreadInit";
  v24 = 0LL;
  v26 = 1;
  v27 = 0;
  v29 = 0LL;
  memset_0(v28, 0, sizeof(v28));
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v16[0] = &SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_InputThreadInit::`vftable';
  SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_InputThreadInit::StartActivity(
    (SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_InputThreadInit *)v16,
    (const struct _GUID *)(a1 + 8));
  v4 = *(struct _RTL_CRITICAL_SECTION **)a1;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ***)(_QWORD)))(**(_QWORD **)(a1 + 24) + 208LL))(
         *(_QWORD *)(a1 + 24),
         a2);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x588,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_20;
  }
  v7 = *(volatile signed __int32 **)(a1 + 32);
  if ( v7 )
  {
    _InterlockedIncrement(v7 + 2);
    v7 = *(volatile signed __int32 **)(a1 + 32);
  }
  *(_QWORD *)v12 = *(_QWORD *)(a1 + 24);
  v13 = v7;
  v8 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AddDeviceToCache(
         v4,
         *(_DWORD *)(*(_QWORD *)v12 + 8LL),
         *(_DWORD *)(*(_QWORD *)v12 + 12LL));
  v6 = v8;
  if ( v8 < 0 )
  {
    v9 = 1420LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v8);
    if ( v13 )
    {
      if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
      {
        v10 = v13;
        (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
        if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      }
    }
    goto LABEL_20;
  }
  v8 = (**a2)(a2);
  v6 = v8;
  if ( v8 < 0 )
  {
    v9 = 1421LL;
    goto LABEL_7;
  }
  v15[0] = off_18013E700;
  v15[1] = v4;
  v15[7] = v15;
  v8 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem(
         (__int64)v4,
         (__int64)v12,
         (__int64)v15,
         1);
  v6 = v8;
  if ( v8 < 0 )
  {
    v9 = 1428LL;
    goto LABEL_7;
  }
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
    {
      v11 = v13;
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  v6 = 0;
LABEL_20:
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v16,
    v6);
  v16[0] = &SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_InputThreadInit::`vftable';
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy(v16);
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>((__int64)v16);
}
