/*
 * XREFs of ?UpdateRigTransforms@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAXPEAUIPerceptionTimestamp@Perception@4@PEA_J@Z @ 0x1800EF72C
 * Callers:
 *     ?OnInputReport@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEADKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800E3AB0 (-OnInputReport@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UE.c)
 *     ?OnHeadUpdateEvent@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJAEBUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@4@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800ECA90 (-OnHeadUpdateEvent@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A3F4 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??4?$ComPtr@UIHolographicDisplay@Holographic@Graphics@Windows@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180036030 (--4-$ComPtr@UIHolographicDisplay@Holographic@Graphics@Windows@@@WRL@Microsoft@@QEAAAEAV012@AEBV0.c)
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x1800EAC94 (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 *     GetHeadToPose @ 0x1800EC29C (GetHeadToPose.c)
 *     GetRigToHead @ 0x1800EC680 (GetRigToHead.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::UpdateRigTransforms(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        struct Windows::Perception::IPerceptionTimestamp *a2,
        LARGE_INTEGER *a3)
{
  __int64 v6; // rbx
  struct _RTL_CRITICAL_SECTION *v7; // rdi
  _OWORD *v8; // rax
  _QWORD v9[3]; // [rsp+24h] [rbp-9Dh] BYREF
  int v10; // [rsp+3Ch] [rbp-85h]
  __int64 v11; // [rsp+40h] [rbp-81h]
  __int64 v12; // [rsp+48h] [rbp-79h]
  int v13; // [rsp+50h] [rbp-71h]
  __int64 v14; // [rsp+54h] [rbp-6Dh]
  __int64 v15; // [rsp+5Ch] [rbp-65h]
  int v16; // [rsp+64h] [rbp-5Dh]
  __int128 v17; // [rsp+68h] [rbp-59h] BYREF
  __int128 v18; // [rsp+78h] [rbp-49h]
  __int128 v19; // [rsp+88h] [rbp-39h]
  __int128 v20; // [rsp+98h] [rbp-29h]
  __int64 v21; // [rsp+A8h] [rbp-19h]
  _BYTE v22[104]; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v23; // [rsp+128h] [rbp+67h] BYREF
  __int64 v24; // [rsp+130h] [rbp+6Fh] BYREF
  struct _RTL_CRITICAL_SECTION *v25; // [rsp+140h] [rbp+7Fh] BYREF

  v21 = -2LL;
  HIDWORD(v9[0]) = 1065353216;
  v9[1] = 0LL;
  v9[2] = 0LL;
  v10 = 1065353216;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 1065353216;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 1065353216;
  v17 = _xmm;
  v18 = _xmm;
  v19 = _xmm;
  v20 = _xmm;
  v6 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 360);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 9);
  v25 = v7;
  if ( !a2 )
  {
    Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::IHolographicDisplay>::operator=(&v24, (__int64 *)this + 50);
    v6 = v24;
  }
  Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::IHolographicDisplay>::operator=(&v23, (__int64 *)this + 53);
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v25);
  if ( a2 || v6 )
    GetHeadToPose((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2, v6, (__int64)a3, (_QWORD *)((char *)v9 + 4));
  else
    QueryPerformanceCounter(a3);
  if ( v23 )
    GetRigToHead(v23, &v17);
  v8 = Windows::Foundation::Numerics::operator*((__int64)v22, &v17, (_QWORD *)((char *)v9 + 4));
  *(_OWORD *)((char *)this + 180) = *v8;
  *(_OWORD *)((char *)this + 196) = v8[1];
  *(_OWORD *)((char *)this + 212) = v8[2];
  *(_OWORD *)((char *)this + 228) = v8[3];
  *(_OWORD *)((char *)this + 244) = v17;
  *(_OWORD *)((char *)this + 260) = v18;
  *(_OWORD *)((char *)this + 276) = v19;
  *(_OWORD *)((char *)this + 292) = v20;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v23);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v24);
}
