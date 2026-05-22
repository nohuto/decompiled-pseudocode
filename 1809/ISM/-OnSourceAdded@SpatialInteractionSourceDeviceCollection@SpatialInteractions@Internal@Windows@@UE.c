/*
 * XREFs of ?OnSourceAdded@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJPEAVSpatialInteractionObjectDevice@234@AEBU_GUID@@AEBV?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800B2FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@DdiSource_BackgroundInit@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WAEBU_GUID@@@Z @ 0x1800AD3B8 (-StartActivity@DdiSource_BackgroundInit@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAX.c)
 *     ??1?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800ADF9C (--1-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorT.c)
 *     ?QueueInputThreadCallback@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJV?$function@$$A6AXPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions@Internal@Windows@@@Z@std@@@Z @ 0x1800B388C (-QueueInputThreadCallback@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@.c)
 *     ?Destroy@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800B3D10 (-Destroy@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgRefl.c)
 *     ?Stop@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B4150 (-Stop@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflect.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnSourceAdded(
        __int64 a1,
        __int64 a2,
        const struct _GUID *a3,
        _QWORD *a4)
{
  const wchar_t *v4; // rbx
  __int64 v8; // r14
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  struct _GUID v12; // xmm0
  volatile signed __int32 *v13; // rbx
  __int64 v14; // rax
  _QWORD v16[2]; // [rsp+20h] [rbp-E0h] BYREF
  struct _GUID v17; // [rsp+30h] [rbp-D0h]
  __int128 v18; // [rsp+40h] [rbp-C0h]
  _QWORD *v19; // [rsp+58h] [rbp-A8h]
  struct _GUID v20; // [rsp+68h] [rbp-98h]
  _QWORD v21[4]; // [rsp+90h] [rbp-70h] BYREF
  int v22; // [rsp+B0h] [rbp-50h]
  int *v23; // [rsp+B8h] [rbp-48h]
  int *v24; // [rsp+C0h] [rbp-40h]
  int v25; // [rsp+C8h] [rbp-38h] BYREF
  char v26; // [rsp+CCh] [rbp-34h]
  int v27; // [rsp+F0h] [rbp-10h] BYREF
  const char *v28; // [rsp+F8h] [rbp-8h]
  __int64 v29; // [rsp+100h] [rbp+0h]
  char v30; // [rsp+108h] [rbp+8h]
  __int64 v31; // [rsp+110h] [rbp+10h]
  _BYTE v32[144]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v33; // [rsp+1A8h] [rbp+A8h]
  __int64 v34; // [rsp+1B0h] [rbp+B0h]
  __int64 v35; // [rsp+1B8h] [rbp+B8h]
  __int64 v36; // [rsp+1C0h] [rbp+C0h]
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+118h]

  v4 = (const wchar_t *)(a2 + 80);
  if ( *(_QWORD *)(a2 + 104) >= 8uLL )
    v4 = *(const wchar_t **)v4;
  v31 = 1LL;
  v21[1] = 0LL;
  v21[2] = v21;
  v21[3] = 0LL;
  v23 = &v27;
  v22 = 0;
  v24 = &v25;
  v25 = 0;
  v28 = "DdiSource_BackgroundInit";
  v26 = 0;
  v30 = 0;
  v27 = 0;
  v29 = 0LL;
  v33 = 0LL;
  memset_0(v32, 0, sizeof(v32));
  v36 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v21[0] = &SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_BackgroundInit::`vftable';
  SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_BackgroundInit::StartActivity(
    (SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_BackgroundInit *)v21,
    v4,
    a3);
  v8 = a1 - 32;
  v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 128LL))(*a4);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v12 = *a3;
    v13 = (volatile signed __int32 *)a4[1];
    v20 = *a3;
    if ( v13 )
    {
      _InterlockedIncrement(v13 + 2);
      v13 = (volatile signed __int32 *)a4[1];
      v12 = v20;
    }
    v14 = *a4;
    v19 = 0LL;
    v16[0] = off_18013E628;
    v16[1] = v8;
    v17 = v12;
    v18 = 0LL;
    if ( v13 )
      _InterlockedIncrement(v13 + 2);
    *(_QWORD *)&v18 = v14;
    v19 = v16;
    *((_QWORD *)&v18 + 1) = v13;
    if ( v13 )
    {
      if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      }
    }
    v9 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueInputThreadCallback(
           v8,
           v16);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v10 = 0;
      goto LABEL_17;
    }
    v11 = 1407LL;
  }
  else
  {
    v11 = 1399LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
    (const char *)(unsigned int)v9);
LABEL_17:
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v21,
    v10);
  v21[0] = &SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_BackgroundInit::`vftable';
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy(v21);
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>((__int64)v21);
  return v10;
}
