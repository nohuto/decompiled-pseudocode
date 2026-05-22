/*
 * XREFs of ?OnHandSpatialObjectAdded@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@AEAAJAEBU_GUID@@@Z @ 0x1800BEF5C
 * Callers:
 *     ?OnSpatialObjectAdded@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@EEAAXPEAUISpatialObjectWatcher@Holographic@34@AEBU_GUID@@@Z @ 0x1800BECA0 (-OnSpatialObjectAdded@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@E.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@U_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@V?$_Uhash_compare@U_GUID@@UGuidHash@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@U?$equal_to@U_GUID@@@std@@@3@V?$allocator@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@2@AEBU_GUID@@@Z @ 0x1800BFA3C (-find@-$_Hash@V-$_Umap_traits@U_GUID@@V-$shared_ptr@VSpatialInteractionSourceObject@SpatialInter.c)
 *     ??$?0AEAKPEAUISpatialObjectDevice@Holographic@Internal@Windows@@PEAUISpatialObject@123@@?$_Ref_count_obj@VSpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@@std@@QEAA@AEAK$$QEAPEAUISpatialObjectDevice@Holographic@Internal@Windows@@$$QEAPEAUISpatialObject@345@@Z @ 0x1800BFF18 (--$-0AEAKPEAUISpatialObjectDevice@Holographic@Internal@Windows@@PEAUISpatialObject@123@@-$_Ref_c.c)
 *     ??$_Insert@AEAU?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@U_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@V?$_Uhash_compare@U_GUID@@UGuidHash@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@U?$equal_to@U_GUID@@@std@@@3@V?$allocator@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@1@@Z @ 0x1800C00C8 (--$_Insert@AEAU-$pair@$$CBU_GUID@@V-$shared_ptr@VSpatialInteractionSourceObject@SpatialInteracti.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBU_GUID@@@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBU_GUID@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800C02DC (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBU_GUID@@@2@V-$tuple@$$V@2@@-$_List_buy@U-.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice::OnHandSpatialObjectAdded(
        RTL_SRWLOCK *this,
        const struct _GUID *a2)
{
  PVOID Ptr; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  const char *v7; // r9
  _QWORD *v8; // rcx
  __int64 result; // rax
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  __int64 v14; // rax
  volatile signed __int32 *v15; // rbx
  __int64 v16; // rsi
  int v17; // eax
  unsigned int v18; // r14d
  volatile signed __int32 *v19; // rsi
  __int64 v20; // rcx
  _QWORD *v21; // rcx
  RTL_SRWLOCK *v22; // r14
  RTL_SRWLOCK *v23; // rdi
  __int64 *v24; // rcx
  __int64 *v25; // rax
  __int64 v26; // r15
  __int64 *v27; // r12
  __int64 v28; // rdx
  char *v29; // rax
  volatile signed __int32 *v30; // rsi
  volatile signed __int32 *v31; // rsi
  __int64 v32; // rcx
  _QWORD *v33; // rcx
  _QWORD *v34; // rcx
  PVOID v35; // [rsp+30h] [rbp-88h] BYREF
  __int64 *v36; // [rsp+38h] [rbp-80h] BYREF
  _QWORD v37[3]; // [rsp+40h] [rbp-78h] BYREF
  __int128 v38; // [rsp+58h] [rbp-60h] BYREF
  __int64 v39; // [rsp+68h] [rbp-50h]
  __int64 v40; // [rsp+70h] [rbp-48h]
  __int64 *v41; // [rsp+78h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  _QWORD *v43; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v44; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v45; // [rsp+D8h] [rbp+20h] BYREF

  v37[1] = -2LL;
  try
  {
    v43 = 0LL;
    Ptr = this[9].Ptr;
    if ( !Ptr )
      goto LABEL_56;
    v5 = (*(__int64 (__fastcall **)(PVOID, GUID *, _QWORD **))(*(_QWORD *)Ptr + 24LL))(
           Ptr,
           &GUID_981351b4_74ca_46e5_83e7_55640c3aae9d,
           &v43);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F6,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
        (const char *)(unsigned int)v5);
      v8 = v43;
      if ( v43 )
      {
        v43 = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      }
      return v6;
    }
    if ( v43 )
    {
      v44 = 0LL;
      v10 = (*(__int64 (__fastcall **)(PVOID, const struct _GUID *, __int64 *))(*(_QWORD *)this[15].Ptr + 136LL))(
              this[15].Ptr,
              a2,
              &v44);
      v11 = v10;
      if ( v10 >= 0 )
      {
        v45 = v44;
        v35 = this[15].Ptr;
        v37[0] = operator new(0x108uLL);
        v14 = std::_Ref_count_obj<Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand>::_Ref_count_obj<Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand>(
                v37[0],
                &this[28],
                &v35,
                &v45);
        v15 = (volatile signed __int32 *)v14;
        v16 = v14 + 16;
        v39 = v14 + 16;
        v40 = v14;
        v38 = 0LL;
        if ( v14 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
          v16 = v39;
        }
        *(_QWORD *)&v38 = v16;
        *((_QWORD *)&v38 + 1) = v14;
        v17 = (*(__int64 (__fastcall **)(_QWORD *, RTL_SRWLOCK *, const struct _GUID *, __int128 *))(*v43 + 48LL))(
                v43,
                this,
                a2,
                &v38);
        v18 = v17;
        if ( v17 >= 0 )
        {
          v22 = this + 24;
          AcquireSRWLockExclusive(this + 24);
          v37[2] = this + 24;
          v23 = this + 16;
          std::_Hash<std::_Umap_traits<_GUID,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>,std::_Uhash_compare<_GUID,Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::GuidHash,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>>,0>>::find(
            v23,
            &v36,
            a2);
          v24 = (__int64 *)v23[1].Ptr;
          v25 = v36;
          if ( v36 == v24 )
          {
            v37[0] = a2;
            v26 = *v24;
            v27 = *(__int64 **)(*v24 + 8);
            v28 = std::_List_buy<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>>::_Buynode<std::piecewise_construct_t const &,std::tuple<_GUID const &>,std::tuple<>>(
                    (_DWORD)v24,
                    *v24,
                    (_DWORD)v27,
                    (_DWORD)v7,
                    (__int64)v37);
            v29 = (char *)v23[2].Ptr;
            if ( v29 == (char *)0x555555555555554LL )
              std::_Xlength_error("list<T> too long");
            v23[2].Ptr = v29 + 1;
            *(_QWORD *)(v26 + 8) = v28;
            *v27 = v28;
            std::_Hash<std::_Umap_traits<_GUID,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>,std::_Uhash_compare<_GUID,Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::GuidHash,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>>,0>>::_Insert<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>>>>>(
              v23,
              &v41,
              *(_QWORD *)v23[1].Ptr + 16LL,
              *(_QWORD *)v23[1].Ptr);
            v25 = v41;
          }
          else
          {
            v41 = v36;
          }
          if ( v15 )
          {
            _InterlockedIncrement(v15 + 2);
            v16 = v39;
          }
          v25[4] = v16;
          v30 = (volatile signed __int32 *)v25[5];
          v25[5] = (__int64)v15;
          if ( v30 )
          {
            if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v30)(v30);
              if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
            }
          }
          if ( v22 )
            ReleaseSRWLockExclusive(v22);
          v31 = (volatile signed __int32 *)*((_QWORD *)&v38 + 1);
          if ( *((_QWORD *)&v38 + 1) )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v38 + 1) + 8LL), 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v31)(v31);
              if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
            }
          }
          if ( v15 )
          {
            if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
              if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
            }
          }
          v32 = v44;
          if ( v44 )
          {
            v44 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
          }
          v33 = v43;
          if ( v43 )
          {
            v43 = 0LL;
            (*(void (__fastcall **)(_QWORD *))(*v33 + 16LL))(v33);
          }
          result = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1FE,
            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
            (const char *)(unsigned int)v17);
          v19 = (volatile signed __int32 *)*((_QWORD *)&v38 + 1);
          if ( *((_QWORD *)&v38 + 1) )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v38 + 1) + 8LL), 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
              if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
            }
          }
          if ( v15 )
          {
            if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
              if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
            }
          }
          v20 = v44;
          if ( v44 )
          {
            v44 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
          }
          v21 = v43;
          if ( v43 )
          {
            v43 = 0LL;
            (*(void (__fastcall **)(_QWORD *, _QWORD))(*v21 + 16LL))(v21, *v21);
          }
          result = v18;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1FA,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
          (const char *)(unsigned int)v10);
        v12 = v44;
        if ( v44 )
        {
          v44 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
        v13 = v43;
        if ( v43 )
        {
          v43 = 0LL;
          (*(void (__fastcall **)(_QWORD *, _QWORD))(*v13 + 16LL))(v13, *v13);
        }
        result = v11;
      }
    }
    else
    {
LABEL_56:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F7,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
        (const char *)0x8000FFFFLL);
      v34 = v43;
      if ( v43 )
      {
        v43 = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v34 + 16LL))(v34);
      }
      result = 2147549183LL;
    }
  }
  catch ( ... )
  {
    LODWORD(v43) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x204,
                     (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
                     v7);
    return (unsigned int)v43;
  }
  return result;
}
