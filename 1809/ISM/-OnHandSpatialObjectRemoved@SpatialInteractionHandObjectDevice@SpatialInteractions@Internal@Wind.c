/*
 * XREFs of ?OnHandSpatialObjectRemoved@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@AEAAJAEBU_GUID@@@Z @ 0x1800BF47C
 * Callers:
 *     ?OnSpatialObjectRemoved@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@EEAAXPEAUISpatialObjectWatcher@Holographic@34@AEBU_GUID@@@Z @ 0x1800BEE00 (-OnSpatialObjectRemoved@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@U_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@V?$_Uhash_compare@U_GUID@@UGuidHash@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@U?$equal_to@U_GUID@@@std@@@3@V?$allocator@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@2@AEBU_GUID@@@Z @ 0x1800BFA3C (-find@-$_Hash@V-$_Umap_traits@U_GUID@@V-$shared_ptr@VSpatialInteractionSourceObject@SpatialInter.c)
 *     ?erase@?$list@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1800BFE70 (-erase@-$list@U-$pair@$$CBU_GUID@@V-$shared_ptr@VSpatialInteractionSourceObject@SpatialInteracti.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice::OnHandSpatialObjectRemoved(
        RTL_SRWLOCK *this,
        const struct _GUID *a2)
{
  PVOID Ptr; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  const char *v7; // r9
  _QWORD *v8; // rcx
  __int64 result; // rax
  RTL_SRWLOCK *v10; // r13
  RTL_SRWLOCK *v11; // r8
  _QWORD *v12; // rcx
  unsigned int *v13; // r15
  volatile signed __int32 *v14; // rcx
  volatile signed __int32 *v15; // rdi
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  RTL_SRWLOCK *v18; // rcx
  PVOID v19; // rax
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // esi
  volatile signed __int32 *v23; // rdi
  _QWORD *v24; // rcx
  volatile signed __int32 *v25; // rdi
  _QWORD *v26; // rcx
  _QWORD *v27; // rcx
  __int128 v28; // [rsp+28h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  _QWORD *v30; // [rsp+80h] [rbp+8h] BYREF
  __int64 v31; // [rsp+90h] [rbp+18h] BYREF
  char v32; // [rsp+98h] [rbp+20h] BYREF

  try
  {
    v30 = 0LL;
    Ptr = this[9].Ptr;
    if ( !Ptr )
      goto LABEL_49;
    v5 = (*(__int64 (__fastcall **)(PVOID, GUID *, _QWORD **))(*(_QWORD *)Ptr + 24LL))(
           Ptr,
           &GUID_981351b4_74ca_46e5_83e7_55640c3aae9d,
           &v30);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x209,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
        (const char *)(unsigned int)v5);
      v8 = v30;
      if ( v30 )
      {
        v30 = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      }
      return v6;
    }
    if ( v30 )
    {
      v28 = 0LL;
      AcquireSRWLockExclusive(this + 24);
      std::_Hash<std::_Umap_traits<_GUID,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>,std::_Uhash_compare<_GUID,Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::GuidHash,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>>,0>>::find(
        &this[16],
        &v31,
        a2);
      v10 = this + 17;
      v11 = (RTL_SRWLOCK *)v31;
      if ( (PVOID)v31 == this[17].Ptr )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x211,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
          (const char *)0x8000FFFFLL);
        if ( this != (RTL_SRWLOCK *)-192LL )
          ReleaseSRWLockExclusive(this + 24);
        if ( *((_QWORD *)&v28 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v28 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            (***((void (__fastcall ****)(_QWORD))&v28 + 1))(*((_QWORD *)&v28 + 1));
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v28 + 1) + 12LL), 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v28 + 1) + 8LL))(*((_QWORD *)&v28 + 1));
          }
        }
        v12 = v30;
        if ( v30 )
        {
          v30 = 0LL;
          (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
        }
        result = 2147549183LL;
      }
      else
      {
        v13 = (unsigned int *)(v31 + 16);
        v14 = *(volatile signed __int32 **)(v31 + 40);
        if ( v14 )
        {
          _InterlockedAdd(v14 + 2, 1u);
          v14 = (volatile signed __int32 *)v11[5].Ptr;
          v11 = (RTL_SRWLOCK *)v31;
        }
        *(_QWORD *)&v28 = *((_QWORD *)v13 + 2);
        v15 = (volatile signed __int32 *)*((_QWORD *)&v28 + 1);
        *((_QWORD *)&v28 + 1) = v14;
        if ( v15 )
        {
          if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
            if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          }
          v11 = (RTL_SRWLOCK *)v31;
        }
        v16 = *v13;
        v17 = 2
            * ((unsigned __int64)this[22].Ptr & (v16 ^ (*((unsigned __int16 *)v13 + 3) | ((unsigned __int64)*((unsigned __int16 *)v13 + 2) << 16)) ^ (*((unsigned __int8 *)v13 + 15) | ((unsigned __int64)*((unsigned __int8 *)v13 + 10) << 24))));
        v18 = (RTL_SRWLOCK *)this[19].Ptr;
        if ( v18[2
               * ((unsigned __int64)this[22].Ptr & (v16 ^ (*((unsigned __int16 *)v13 + 3) | ((unsigned __int64)*((unsigned __int16 *)v13 + 2) << 16)) ^ (*((unsigned __int8 *)v13 + 15) | ((unsigned __int64)*((unsigned __int8 *)v13 + 10) << 24))))
               + 1].Ptr == v11 )
        {
          if ( v18[2
                 * ((unsigned __int64)this[22].Ptr & (v16 ^ (*((unsigned __int16 *)v13 + 3) | ((unsigned __int64)*((unsigned __int16 *)v13 + 2) << 16)) ^ (*((unsigned __int8 *)v13 + 15) | ((unsigned __int64)*((unsigned __int8 *)v13 + 10) << 24))))].Ptr == v11 )
          {
            v18[2
              * ((unsigned __int64)this[22].Ptr & (v16 ^ (*((unsigned __int16 *)v13 + 3) | ((unsigned __int64)*((unsigned __int16 *)v13 + 2) << 16)) ^ (*((unsigned __int8 *)v13 + 15) | ((unsigned __int64)*((unsigned __int8 *)v13 + 10) << 24))))] = (RTL_SRWLOCK)v10->Ptr;
            v19 = v10->Ptr;
            v18 = (RTL_SRWLOCK *)this[19].Ptr;
          }
          else
          {
            v19 = v11[1].Ptr;
          }
          v18[v17 + 1].Ptr = v19;
        }
        else if ( v18[2
                    * ((unsigned __int64)this[22].Ptr & (v16 ^ (*((unsigned __int16 *)v13 + 3) | ((unsigned __int64)*((unsigned __int16 *)v13 + 2) << 16)) ^ (*((unsigned __int8 *)v13 + 15) | ((unsigned __int64)*((unsigned __int8 *)v13 + 10) << 24))))].Ptr == v11 )
        {
          v18[2
            * ((unsigned __int64)this[22].Ptr & (v16 ^ (*((unsigned __int16 *)v13 + 3) | ((unsigned __int64)*((unsigned __int16 *)v13 + 2) << 16)) ^ (*((unsigned __int8 *)v13 + 15) | ((unsigned __int64)*((unsigned __int8 *)v13 + 10) << 24))))] = (RTL_SRWLOCK)v11->Ptr;
        }
        std::list<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>>::erase(
          &this[17],
          &v32);
        if ( this != (RTL_SRWLOCK *)-192LL )
          ReleaseSRWLockExclusive(this + 24);
        v20 = v28;
        *(_BYTE *)(v28 + 104) = 1;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 120LL))(v20);
        v21 = (*(__int64 (__fastcall **)(_QWORD *, RTL_SRWLOCK *, __int128 *))(*v30 + 56LL))(v30, this, &v28);
        v22 = v21;
        if ( v21 >= 0 )
        {
          v25 = (volatile signed __int32 *)*((_QWORD *)&v28 + 1);
          if ( *((_QWORD *)&v28 + 1) )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v28 + 1) + 8LL), 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
              if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
            }
          }
          v26 = v30;
          if ( v30 )
          {
            v30 = 0LL;
            (*(void (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
          }
          result = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x217,
            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
            (const char *)(unsigned int)v21);
          v23 = (volatile signed __int32 *)*((_QWORD *)&v28 + 1);
          if ( *((_QWORD *)&v28 + 1) )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v28 + 1) + 8LL), 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
              if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
            }
          }
          v24 = v30;
          if ( v30 )
          {
            v30 = 0LL;
            (*(void (__fastcall **)(_QWORD *, _QWORD))(*v24 + 16LL))(v24, *v24);
          }
          result = v22;
        }
      }
    }
    else
    {
LABEL_49:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20A,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
        (const char *)0x8000FFFFLL);
      v27 = v30;
      if ( v30 )
      {
        v30 = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v27 + 16LL))(v27);
      }
      result = 2147549183LL;
    }
  }
  catch ( ... )
  {
    LODWORD(v30) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x21A,
                     (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
                     v7);
    return (unsigned int)v30;
  }
  return result;
}
