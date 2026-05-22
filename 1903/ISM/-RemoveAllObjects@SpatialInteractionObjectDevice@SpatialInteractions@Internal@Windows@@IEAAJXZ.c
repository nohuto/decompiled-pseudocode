/*
 * XREFs of ?RemoveAllObjects@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@IEAAJXZ @ 0x1800ED1AC
 * Callers:
 *     ?OnDeviceRemoved@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800ECCB0 (-OnDeviceRemoved@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@UEAAJXZ.c)
 *     ?StopListeningToSpatialObjects@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800F7290 (-StopListeningToSpatialObjects@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180056650 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@V?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@3@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18006D964 (-_Init@-$_Hash@V-$_Umap_traits@PEAUIDCompInputTarget@@V-$vector@KV-$allocator@K@std@@@std@@V-$_U.c)
 *     ??$As@UISpatialInteractionSourceDeviceCollectionInternal@SpatialInteractions@Internal@Windows@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISpatialInteractionSourceDeviceCollectionInternal@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800E9A18 (--$As@UISpatialInteractionSourceDeviceCollectionInternal@SpatialInteractions@Internal@Windows@@@.c)
 *     ?clear@?$list@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x1800F0228 (-clear@-$list@U-$pair@$$CBU_GUID@@V-$shared_ptr@VSpatialInteractionSourceObject@SpatialInteracti.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::RemoveAllObjects(
        RTL_SRWLOCK *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // r9
  __int64 v5; // rdx
  _QWORD *Ptr; // r14
  _QWORD *i; // rbx
  _BYTE *v8; // rcx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  RTL_SRWLOCK *v13; // [rsp+68h] [rbp+10h]

  v12 = 0LL;
  v2 = Microsoft::WRL::WeakRef::As<Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal>(
         &this[9].Ptr,
         &v12);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = (unsigned int)v2;
    v5 = 271LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
      (const char *)v4);
    goto LABEL_13;
  }
  if ( !v12 )
  {
    v3 = -2147418113;
    v4 = 2147549183LL;
    v5 = 272LL;
    goto LABEL_5;
  }
  AcquireSRWLockExclusive(this + 24);
  v13 = this + 24;
  Ptr = this[17].Ptr;
  for ( i = (_QWORD *)*Ptr; i != Ptr; i = (_QWORD *)*i )
  {
    v8 = (_BYTE *)i[4];
    v8[104] = 1;
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v8 + 120LL))(v8);
    v9 = (*(__int64 (__fastcall **)(__int64, RTL_SRWLOCK *, _QWORD *))(*(_QWORD *)v12 + 56LL))(v12, this, i + 4);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        278LL,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
        (const char *)(unsigned int)v9);
  }
  std::list<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>>::clear(&this[17]);
  std::_Hash<std::_Umap_traits<IDCompInputTarget *,std::vector<unsigned long>,std::_Uhash_compare<IDCompInputTarget *,DCompTargetHash,DCompTargetEqual>,std::allocator<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>,0>>::_Init(
    &this[16].Ptr,
    8LL);
  v3 = 0;
  if ( this != (RTL_SRWLOCK *)-192LL )
    ReleaseSRWLockExclusive(this + 24);
LABEL_13:
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v12);
  return v3;
}
