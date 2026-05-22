/*
 * XREFs of ?ValidatePointerInput@InputInfoValidator@@AEAAJPEAUPointerInputInfo@@@Z @ 0x180142EA8
 * Callers:
 *     ?OnInputReport@TouchProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801411D0 (-OnInputReport@TouchProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?clear@?$list@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@V?$allocator@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@2@@std@@QEAAXXZ @ 0x18005675C (-clear@-$list@U-$pair@$$CBKUPointerState@InputInfoValidator@@@std@@V-$allocator@U-$pair@$$CBKUPo.c)
 *     ??0?$unordered_map@K_KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBK_K@std@@@2@@std@@QEAA@XZ @ 0x18006A43C (--0-$unordered_map@K_KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@U-$pair@$$CBK_K@std@@@2@@std@@.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@V?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@3@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18006D964 (-_Init@-$_Hash@V-$_Umap_traits@PEAUIDCompInputTarget@@V-$vector@KV-$allocator@K@std@@@std@@V-$_U.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@KVMessageInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@std@@@std@@@std@@V12@@2@AEBK@Z @ 0x18006DFC0 (-equal_range@-$_Hash@V-$_Umap_traits@KVMessageInfo@DragNDropProcessor@@V-$_Uhash_compare@KU-$has.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18006E760 (-lower_bound@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V-$_Uhash_.c)
 *     ??$emplace@AEBKAEAUPointerState@InputInfoValidator@@@?$_Hash@V?$_Umap_traits@KUPointerState@InputInfoValidator@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAUPointerState@InputInfoValidator@@@Z @ 0x180142C5C (--$emplace@AEBKAEAUPointerState@InputInfoValidator@@@-$_Hash@V-$_Umap_traits@KUPointerState@Inpu.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputInfoValidator::ValidatePointerInput(InputInfoValidator *this, struct PointerInputInfo *a2)
{
  __int64 i; // rdi
  int v5; // r12d
  int v6; // esi
  const char *v7; // r9
  _QWORD *v8; // r13
  int v9; // ebx
  char v10; // si
  const char *v11; // r9
  _QWORD *v12; // rax
  unsigned __int8 *v13; // r14
  unsigned __int8 *j; // rbx
  int v15; // esi
  const char *v16; // r9
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 *v19; // rsi
  __int64 *k; // rbx
  _QWORD *v21; // rax
  _BYTE v23[12]; // [rsp+28h] [rbp-59h] BYREF
  _QWORD *v24; // [rsp+38h] [rbp-49h] BYREF
  _QWORD *v25; // [rsp+40h] [rbp-41h]
  __int64 v26; // [rsp+48h] [rbp-39h] BYREF
  __int64 v27; // [rsp+58h] [rbp-29h] BYREF
  _QWORD *v28; // [rsp+60h] [rbp-21h] BYREF
  void *v29; // [rsp+70h] [rbp-11h]
  __int128 v30; // [rsp+78h] [rbp-9h]
  __int64 v31; // [rsp+98h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  _QWORD *v33; // [rsp+F0h] [rbp+6Fh] BYREF
  __int64 v34; // [rsp+F8h] [rbp+77h] BYREF
  _QWORD *v35; // [rsp+100h] [rbp+7Fh] BYREF

  v31 = -2LL;
  std::unordered_map<unsigned long,unsigned __int64>::unordered_map<unsigned long,unsigned __int64>((__int64)&v27);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 53); i = (unsigned int)(i + 1) )
  {
    v5 = *((_DWORD *)a2 + 36 * i + 55);
    LODWORD(v34) = v5;
    v6 = *((_DWORD *)a2 + 36 * i + 57);
    HIDWORD(v34) = v6;
    LODWORD(v33) = v5;
    std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
      (__int64)&v27,
      (__int64)&v35,
      (unsigned __int8 *)&v33);
    v8 = v28;
    if ( v35 != v28 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        68LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\validation\\inputinfo\\lib\\inputinfovalidator.cpp",
        v7);
      __debugbreak();
    }
    v9 = v6 & 2;
    if ( (v6 & 4) != 0 )
    {
      v10 = 1;
      if ( !v9 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          80LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\validation\\inputinfo\\lib\\inputinfovalidator.cpp",
          v7);
        __debugbreak();
      }
    }
    else
    {
      v10 = 0;
    }
    LODWORD(v33) = v5;
    std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
      (__int64)this + 16,
      (__int64)&v26,
      (unsigned __int8 *)&v33);
    if ( v26 == *((_QWORD *)this + 3) )
    {
      if ( !v9 && !v10 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          133LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\validation\\inputinfo\\lib\\inputinfovalidator.cpp",
          v11);
        __debugbreak();
      }
    }
    else if ( (*(_QWORD *)(v26 + 20) & 0x200000000LL) == 0
           && (*(_QWORD *)(v26 + 20) & 0x400000000LL) == 0
           && !v9
           && !v10 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        115LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\validation\\inputinfo\\lib\\inputinfovalidator.cpp",
        v11);
      __debugbreak();
    }
    LODWORD(v33) = v5;
    std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
      (__int64)&v27,
      (__int64)v23,
      (unsigned __int8 *)&v33);
    v12 = *(_QWORD **)v23;
    if ( *(_QWORD **)v23 == v8 )
    {
      std::_Hash<std::_Umap_traits<unsigned long,InputInfoValidator::PointerState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputInfoValidator::PointerState>>,0>>::emplace<unsigned long const &,InputInfoValidator::PointerState &>(
        (__int64)&v27,
        (__int64)&v24,
        &v33,
        &v34);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)v23 + 20LL) = v34;
      v24 = v12;
      LOBYTE(v25) = 0;
    }
  }
  v13 = (unsigned __int8 *)*((_QWORD *)this + 3);
  for ( j = *(unsigned __int8 **)v13; j != v13; j = *(unsigned __int8 **)j )
  {
    v15 = *((_DWORD *)j + 6) & 2;
    std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::MessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>>,0>>::equal_range(
      &v27,
      &v24,
      j + 20);
    v17 = v24;
    v18 = 0LL;
    while ( v17 != v25 )
    {
      ++v18;
      v17 = (_QWORD *)*v17;
    }
    if ( v15 && !v18 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        157LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\validation\\inputinfo\\lib\\inputinfovalidator.cpp",
        v16);
      break;
    }
  }
  std::list<std::pair<unsigned long const,InputInfoValidator::PointerState>>::clear((__int64)this + 24);
  std::_Hash<std::_Umap_traits<IDCompInputTarget *,std::vector<unsigned long>,std::_Uhash_compare<IDCompInputTarget *,DCompTargetHash,DCompTargetEqual>,std::allocator<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>,0>>::_Init(
    (_QWORD *)this + 2,
    8LL);
  v19 = v28;
  for ( k = (__int64 *)*v28; k != v19; k = (__int64 *)*k )
  {
    *(_QWORD *)v23 = k[2];
    *(_DWORD *)&v23[8] = *((_DWORD *)k + 6);
    std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
      (__int64)this + 16,
      (__int64)&v33,
      &v23[4]);
    v21 = v33;
    if ( v33 == *((_QWORD **)this + 3) )
    {
      std::_Hash<std::_Umap_traits<unsigned long,InputInfoValidator::PointerState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputInfoValidator::PointerState>>,0>>::emplace<unsigned long const &,InputInfoValidator::PointerState &>(
        (__int64)this + 16,
        (__int64)&v24,
        &v23[4],
        &v23[4]);
    }
    else
    {
      *(_QWORD *)((char *)v33 + 20) = *(_QWORD *)&v23[4];
      v24 = v21;
      LOBYTE(v25) = 0;
    }
  }
  if ( v29 )
  {
    std::_Deallocate<16,0>(
      v29,
      (const struct std::nothrow_t *)((*((_QWORD *)&v30 + 1) - (_QWORD)v29) & 0xFFFFFFFFFFFFFFF8uLL));
    v29 = 0LL;
    v30 = 0LL;
  }
  std::list<std::pair<unsigned long const,InputInfoValidator::PointerState>>::clear((__int64)&v28);
  std::_Deallocate<16,0>(v28, (const struct std::nothrow_t *)0x20);
  return 0LL;
}
