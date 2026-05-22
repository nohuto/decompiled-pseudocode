/*
 * XREFs of ?ValidatePointerInput@InputInfoValidator@@AEAAJPEAULegacyInputInfo@@@Z @ 0x1801055B4
 * Callers:
 *     ?OnInputReport@TouchProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180103D70 (-OnInputReport@TouchProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x180005EDC (--1-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000886C (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAVControllerProcessor@@@std@@PEAX@2@PEAU32@0@Z @ 0x180008EA4 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKPEAVControllerProcessor@@@std@@V-$allo.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180025804 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ??$insert_or_assign@AEAUPointerState@InputInfoValidator@@@?$unordered_map@KUPointerState@InputInfoValidator@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAUPointerState@InputInfoValidator@@@Z @ 0x180105978 (--$insert_or_assign@AEAUPointerState@InputInfoValidator@@@-$unordered_map@KUPointerState@InputIn.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall InputInfoValidator::ValidatePointerInput(InputInfoValidator *this, struct LegacyInputInfo *a2)
{
  unsigned int i; // r14d
  int *v5; // rsi
  int v6; // ebx
  const char *v7; // r9
  char v8; // di
  bool v9; // bl
  __int64 v10; // r8
  const char *v11; // r9
  char *v12; // r9
  char *j; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  __int64 *v16; // rax
  __int64 v17; // rdi
  __int64 *v18; // rdx
  int v19; // ebx
  __int64 *v20; // r10
  __int64 *v21; // rdx
  __int64 *v22; // r8
  __int64 v23; // r8
  char *v24; // rcx
  char *v25; // rbx
  __int64 *v26; // rdi
  __int64 k; // rbx
  __int64 v29; // [rsp+20h] [rbp-49h]
  __int64 v30; // [rsp+28h] [rbp-41h] BYREF
  int v31; // [rsp+30h] [rbp-39h]
  char v32[24]; // [rsp+38h] [rbp-31h] BYREF
  __int64 v33; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v34; // [rsp+58h] [rbp-11h]
  __int64 v35; // [rsp+60h] [rbp-9h]
  __int64 v36; // [rsp+68h] [rbp-1h]
  __int128 v37; // [rsp+70h] [rbp+7h]
  __int64 v38; // [rsp+80h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  int v40; // [rsp+D8h] [rbp+6Fh] BYREF
  int v41; // [rsp+DCh] [rbp+73h]
  __int64 *v42; // [rsp+E0h] [rbp+77h] BYREF
  __int64 *v43; // [rsp+E8h] [rbp+7Fh] BYREF

  v29 = -2LL;
  v35 = 0LL;
  v34 = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,ControllerProcessor *>>>::_Buynode0(
          (__int64)this,
          0LL,
          0LL);
  v36 = 0LL;
  v37 = 0LL;
  *(float *)&v33 = FLOAT_1_0;
  std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
    &v33,
    8LL);
  for ( i = 0; i < *((_DWORD *)a2 + 12); ++i )
  {
    v5 = (int *)((char *)a2 + 32 * i + 56);
    v40 = *v5;
    v6 = v5[1];
    v41 = v6;
    std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
      &v33,
      &v42,
      v5);
    if ( v42 != v34 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x43,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\validation\\inputinfo\\lib\\inputinfovalidator.cpp",
        v7);
      JUMPOUT(0x1801058C8LL);
    }
    v8 = v6 & 1;
    v9 = (v6 & 2) != 0;
    if ( v9 && !v8 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x4F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\validation\\inputinfo\\lib\\inputinfovalidator.cpp",
        v7);
      __debugbreak();
    }
    std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
      (_QWORD *)this + 2,
      &v43,
      v5);
    if ( v43 == *((__int64 **)this + 3) )
    {
      if ( !v8 && !v9 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x84,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\validation\\inputinfo\\lib\\inputinfovalidator.cpp",
          v11);
        __debugbreak();
      }
    }
    else if ( (*(__int64 *)((char *)v43 + 20) & 0x100000000LL) == 0
           && (*(__int64 *)((char *)v43 + 20) & 0x200000000LL) == 0
           && !v8
           && !v9 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x72,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\validation\\inputinfo\\lib\\inputinfovalidator.cpp",
        v11);
      __debugbreak();
    }
    std::unordered_map<unsigned long,InputInfoValidator::PointerState>::insert_or_assign<InputInfoValidator::PointerState &>(
      &v33,
      &v30,
      v10,
      &v40,
      v29);
  }
  v12 = (char *)*((_QWORD *)this + 3);
  for ( j = *(char **)v12; j != v12; j = *(char **)j )
  {
    v14 = 0LL;
    v15 = 0xCBF29CE484222325uLL;
    do
    {
      v15 = 0x100000001B3LL * ((unsigned __int8)j[v14 + 20] ^ (unsigned __int64)v15);
      ++v14;
    }
    while ( v14 < 4 );
    v16 = *(__int64 **)(v36 + 16 * (v15 & v38));
    v17 = 2 * (v15 & v38);
    while ( 1 )
    {
      if ( *(__int64 **)(v36 + 16 * (v15 & v38)) == v34 )
        v18 = v34;
      else
        v18 = **(__int64 ***)(v36 + 16 * (v15 & v38) + 8);
      if ( v16 == v18 )
        goto LABEL_32;
      v19 = *((_DWORD *)j + 5);
      if ( *((_DWORD *)v16 + 4) == v19 )
        break;
      v16 = (__int64 *)*v16;
    }
    v20 = v16;
    v21 = v16;
    while ( 1 )
    {
      v22 = *(__int64 **)(v36 + 8 * v17) == v34 ? v34 : **(__int64 ***)(v36 + 8 * v17 + 8);
      if ( v16 == v22 || v19 != *((_DWORD *)v16 + 4) )
        break;
      v16 = (__int64 *)*v16;
    }
    if ( v20 == v16 )
    {
LABEL_32:
      v21 = v34;
      v16 = v34;
    }
    v23 = 0LL;
    while ( v21 != v16 )
    {
      ++v23;
      v21 = (__int64 *)*v21;
    }
    if ( (j[24] & 1) != 0 && !v23 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x9C,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\validation\\inputinfo\\lib\\inputinfovalidator.cpp",
        v12);
      __debugbreak();
    }
  }
  v24 = *(char **)v12;
  *(_QWORD *)v12 = v12;
  *(_QWORD *)(*((_QWORD *)this + 3) + 8LL) = *((_QWORD *)this + 3);
  *((_QWORD *)this + 4) = 0LL;
  if ( v24 != *((char **)this + 3) )
  {
    do
    {
      v25 = *(char **)v24;
      operator delete(v24, (const struct std::nothrow_t *)0x20);
      v24 = v25;
    }
    while ( v25 != *((char **)this + 3) );
  }
  std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
    (_QWORD *)this + 2,
    8LL);
  v26 = v34;
  for ( k = *v34; (__int64 *)k != v26; k = *(_QWORD *)k )
  {
    v30 = *(_QWORD *)(k + 16);
    v31 = *(_DWORD *)(k + 24);
    std::unordered_map<unsigned long,InputInfoValidator::PointerState>::insert_or_assign<InputInfoValidator::PointerState &>(
      (char *)this + 16,
      v32,
      (char *)&v30 + 4,
      (char *)&v30 + 4,
      v29);
  }
  std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::~_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>(&v33);
  return 0LL;
}
