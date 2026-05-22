/*
 * XREFs of ?OnHandSpatialObjectRemoved@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@AEAAJAEBU_GUID@@@Z @ 0x1800F577C
 * Callers:
 *     ?OnSpatialObjectRemoved@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@EEAAXPEAUISpatialObjectWatcher@Holographic@34@AEBU_GUID@@@Z @ 0x1800F5B60 (-OnSpatialObjectRemoved@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AEA0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UISpatialInteractionSourceDeviceCollectionInternal@SpatialInteractions@Internal@Windows@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISpatialInteractionSourceDeviceCollectionInternal@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800E97E8 (--$As@UISpatialInteractionSourceDeviceCollectionInternal@SpatialInteractions@Internal@Windows@@@.c)
 *     ?erase@?$list@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1800F7694 (-erase@-$list@U-$pair@$$CBU_GUID@@V-$shared_ptr@VSpatialInteractionSourceObject@SpatialInteracti.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@U_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@V?$_Uhash_compare@U_GUID@@UGuidHash@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@U?$equal_to@U_GUID@@@std@@@3@V?$allocator@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@2@AEBU_GUID@@@Z @ 0x1800F76FC (-lower_bound@-$_Hash@V-$_Umap_traits@U_GUID@@V-$shared_ptr@VSpatialInteractionSourceObject@Spati.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice::OnHandSpatialObjectRemoved(
        RTL_SRWLOCK *this,
        const struct _GUID *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 result; // rax
  RTL_SRWLOCK *v7; // r12
  RTL_SRWLOCK *v8; // rbx
  std::_Ref_count_base **v9; // r14
  volatile signed __int32 *Ptr; // rcx
  std::_Ref_count_base *v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  RTL_SRWLOCK *v14; // rcx
  PVOID v15; // rax
  std::_Ref_count_base *v16; // rcx
  int v17; // eax
  unsigned int v18; // ebx
  const char *v19; // r9
  std::_Ref_count_base *v20[2]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v22; // [rsp+70h] [rbp+8h] BYREF
  __int64 v23; // [rsp+80h] [rbp+18h] BYREF
  char v24; // [rsp+88h] [rbp+20h] BYREF

  v22 = 0LL;
  v4 = Microsoft::WRL::WeakRef::As<Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal>(
         &this[9].Ptr,
         &v22);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( v22 )
    {
      *(_OWORD *)v20 = 0LL;
      AcquireSRWLockExclusive(this + 24);
      std::_Hash<std::_Umap_traits<_GUID,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>,std::_Uhash_compare<_GUID,Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::GuidHash,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>>,0>>::lower_bound(
        &this[16],
        &v23,
        a2);
      v7 = this + 17;
      v8 = (RTL_SRWLOCK *)v23;
      if ( (PVOID)v23 == this[17].Ptr )
      {
        if ( this != (RTL_SRWLOCK *)-192LL )
          ReleaseSRWLockExclusive(this + 24);
        if ( v20[1] )
          std::_Ref_count_base::_Decref(v20[1]);
        Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v22);
        return 2147943568LL;
      }
      else
      {
        v9 = (std::_Ref_count_base **)(v23 + 16);
        Ptr = *(volatile signed __int32 **)(v23 + 40);
        if ( Ptr )
        {
          _InterlockedAdd(Ptr + 2, 1u);
          Ptr = (volatile signed __int32 *)v8[5].Ptr;
          v8 = (RTL_SRWLOCK *)v23;
        }
        v20[0] = v9[2];
        v11 = v20[1];
        v20[1] = (std::_Ref_count_base *)Ptr;
        if ( v11 )
          std::_Ref_count_base::_Decref(v11);
        v12 = *(unsigned int *)v9;
        v13 = 2
            * ((unsigned __int64)this[22].Ptr & (v12 ^ (*((unsigned __int16 *)v9 + 3) | ((unsigned __int64)*((unsigned __int16 *)v9 + 2) << 16)) ^ (*((unsigned __int8 *)v9 + 15) | ((unsigned __int64)*((unsigned __int8 *)v9 + 10) << 24))));
        v14 = (RTL_SRWLOCK *)this[19].Ptr;
        if ( v14[2
               * ((unsigned __int64)this[22].Ptr & (v12 ^ (*((unsigned __int16 *)v9 + 3) | ((unsigned __int64)*((unsigned __int16 *)v9 + 2) << 16)) ^ (*((unsigned __int8 *)v9 + 15) | ((unsigned __int64)*((unsigned __int8 *)v9 + 10) << 24))))
               + 1].Ptr == v8 )
        {
          if ( v14[2
                 * ((unsigned __int64)this[22].Ptr & (v12 ^ (*((unsigned __int16 *)v9 + 3) | ((unsigned __int64)*((unsigned __int16 *)v9 + 2) << 16)) ^ (*((unsigned __int8 *)v9 + 15) | ((unsigned __int64)*((unsigned __int8 *)v9 + 10) << 24))))].Ptr == v8 )
          {
            v14[2
              * ((unsigned __int64)this[22].Ptr & (v12 ^ (*((unsigned __int16 *)v9 + 3) | ((unsigned __int64)*((unsigned __int16 *)v9 + 2) << 16)) ^ (*((unsigned __int8 *)v9 + 15) | ((unsigned __int64)*((unsigned __int8 *)v9 + 10) << 24))))] = (RTL_SRWLOCK)v7->Ptr;
            v15 = v7->Ptr;
            v14 = (RTL_SRWLOCK *)this[19].Ptr;
          }
          else
          {
            v15 = v8[1].Ptr;
          }
          v14[v13 + 1].Ptr = v15;
        }
        else if ( v14[2
                    * ((unsigned __int64)this[22].Ptr & (v12 ^ (*((unsigned __int16 *)v9 + 3) | ((unsigned __int64)*((unsigned __int16 *)v9 + 2) << 16)) ^ (*((unsigned __int8 *)v9 + 15) | ((unsigned __int64)*((unsigned __int8 *)v9 + 10) << 24))))].Ptr == v8 )
        {
          v14[2
            * ((unsigned __int64)this[22].Ptr & (v12 ^ (*((unsigned __int16 *)v9 + 3) | ((unsigned __int64)*((unsigned __int16 *)v9 + 2) << 16)) ^ (*((unsigned __int8 *)v9 + 15) | ((unsigned __int64)*((unsigned __int8 *)v9 + 10) << 24))))] = (RTL_SRWLOCK)v8->Ptr;
        }
        std::list<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>>::erase(
          &this[17],
          &v24,
          v8);
        if ( this != (RTL_SRWLOCK *)-192LL )
          ReleaseSRWLockExclusive(this + 24);
        v16 = v20[0];
        *((_BYTE *)v20[0] + 104) = 1;
        try
        {
          (*(void (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)v16 + 120LL))(v16);
          v17 = (*(__int64 (__fastcall **)(__int64, RTL_SRWLOCK *, std::_Ref_count_base **))(*(_QWORD *)v22 + 56LL))(
                  v22,
                  this,
                  v20);
          v18 = v17;
          if ( v17 >= 0 )
          {
            if ( v20[1] )
              std::_Ref_count_base::_Decref(v20[1]);
            Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v22);
            result = 0LL;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x390,
              (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
              (const char *)(unsigned int)v17);
            if ( v20[1] )
              std::_Ref_count_base::_Decref(v20[1]);
            Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v22);
            result = v18;
          }
        }
        catch ( ... )
        {
          LODWORD(v22) = wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x393,
                           (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
                           v19);
          return (unsigned int)v22;
        }
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x383,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
        (const char *)0x8000FFFFLL);
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v22);
      return 2147549183LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x382,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
      (const char *)(unsigned int)v4);
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v22);
    return v5;
  }
  return result;
}
