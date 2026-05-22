/*
 * XREFs of ?OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z @ 0x180054B20
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800056F0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000886C (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180025804 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ??1?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA@XZ @ 0x180032CE8 (--1-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$alloc.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@PEAX@2@PEAU32@0@Z @ 0x180037DA8 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@.c)
 *     ?PopulatePointerInfoProperties@PointerInfoAdapter@@AEAAXPEAUInputInfo@@PEAUPointer@@PEAUtagPOINTER_INFO_UNION@@@Z @ 0x1800548C4 (-PopulatePointerInfoProperties@PointerInfoAdapter@@AEAAXPEAUInputInfo@@PEAUPointer@@PEAUtagPOINT.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@ULastDeviceFrame@PointerInfoAdapter@@U?$default_delete@ULastDeviceFrame@PointerInfoAdapter@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@ULastDeviceFrame@PointerInfoAdapter@@U?$default_delete@ULastDeviceFrame@PointerInfoAdapter@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x1800553D4 (-erase@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@ULastDeviceFrame@PointerInfoAdapter@@U-$default_de.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KKV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x180055580 (-erase@-$_Hash@V-$_Umap_traits@KKV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$allo.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUtagPOINTER_INFO_UNION@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x18005573C (-erase@-$_Hash@V-$_Umap_traits@KUtagPOINTER_INFO_UNION@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equ.c)
 *     ??$insert_or_assign@V?$unique_ptr@ULastDeviceFrame@PointerInfoAdapter@@U?$default_delete@ULastDeviceFrame@PointerInfoAdapter@@@std@@@std@@@?$unordered_map@KV?$unique_ptr@ULastDeviceFrame@PointerInfoAdapter@@U?$default_delete@ULastDeviceFrame@PointerInfoAdapter@@@std@@@std@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@ULastDeviceFrame@PointerInfoAdapter@@U?$default_delete@ULastDeviceFrame@PointerInfoAdapter@@@std@@@std@@@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@ULastDeviceFrame@PointerInfoAdapter@@U?$default_delete@ULastDeviceFrame@PointerInfoAdapter@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBK$$QEAV?$unique_ptr@ULastDeviceFrame@PointerInfoAdapter@@U?$default_delete@ULastDeviceFrame@PointerInfoAdapter@@@std@@@1@@Z @ 0x180055A50 (--$insert_or_assign@V-$unique_ptr@ULastDeviceFrame@PointerInfoAdapter@@U-$default_delete@ULastDe.c)
 *     ??$insert_or_assign@AEAUtagPOINTER_INFO_UNION@@@?$unordered_map@KUtagPOINTER_INFO_UNION@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAUtagPOINTER_INFO_UNION@@@Z @ 0x180055BA8 (--$insert_or_assign@AEAUtagPOINTER_INFO_UNION@@@-$unordered_map@KUtagPOINTER_INFO_UNION@@U-$hash.c)
 *     ??$_Insert@AEAU?$pair@$$CBKK@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KKV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKK@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@1@@Z @ 0x180055FB4 (--$_Insert@AEAU-$pair@$$CBKK@std@@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types.c)
 *     ??$_Buynode@AEBKAEAK@?$_List_buy@U?$pair@$$CBKK@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKK@std@@PEAX@1@PEAU21@0AEBKAEAK@Z @ 0x180056504 (--$_Buynode@AEBKAEAK@-$_List_buy@U-$pair@$$CBKK@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@@std@@Q.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall PointerInfoAdapter::OnInputReport(PointerInfoAdapter *this, struct InputInfo *a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // r13
  __int64 v6; // r9
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD *v9; // rcx
  int v10; // r11d
  _QWORD *v11; // rcx
  _QWORD *v12; // rdx
  __int64 v13; // rdx
  PointerInfoAdapter *v14; // rcx
  char v16; // r12
  _DWORD *v17; // r10
  __int64 v18; // rdx
  unsigned __int64 i; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 *v22; // rax
  __int64 v23; // r8
  __int64 *v24; // r9
  __int64 *v25; // rcx
  char *v26; // r15
  __int64 v27; // rcx
  void *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdi
  char *v32; // r12
  int v33; // ebx
  char *v34; // rdi
  __int64 *v35; // rcx
  __int64 *v36; // rax
  __int64 v37; // rbx
  __int64 *v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rdx
  _BYTE *v41; // r11
  int v42; // edx
  int v43; // ecx
  struct tagPOINTER_INFO_UNION *v44; // r9
  struct tagPOINTER_INFO_UNION *v45; // r8
  __int64 v46; // rdx
  unsigned __int64 j; // rcx
  __int64 v48; // r8
  __int64 *v49; // rax
  __int64 v50; // r9
  __int64 *v51; // rdx
  __int64 *v52; // rcx
  PointerInfoAdapter *v53; // rcx
  int v54; // eax
  struct Pointer *v55; // rbx
  char *v56; // rcx
  _BYTE *v57; // r11
  unsigned int v58; // eax
  unsigned int v59; // eax
  unsigned int v60; // eax
  unsigned int v61; // eax
  unsigned int v62; // eax
  unsigned int v63; // eax
  char v64; // [rsp+38h] [rbp-D0h]
  int v65; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v66; // [rsp+40h] [rbp-C8h]
  void *v67; // [rsp+48h] [rbp-C0h] BYREF
  struct tagPOINTER_INFO_UNION *v68; // [rsp+50h] [rbp-B8h]
  struct tagPOINTER_INFO_UNION *v69; // [rsp+58h] [rbp-B0h]
  __int64 *v70; // [rsp+60h] [rbp-A8h] BYREF
  __int64 *v71; // [rsp+68h] [rbp-A0h] BYREF
  struct Pointer *v72; // [rsp+70h] [rbp-98h]
  char *v73; // [rsp+78h] [rbp-90h]
  __int64 *v74; // [rsp+80h] [rbp-88h] BYREF
  char v75; // [rsp+88h] [rbp-80h]
  __int64 v76; // [rsp+90h] [rbp-78h]
  char v77[16]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v78; // [rsp+A8h] [rbp-60h]
  __int128 v79; // [rsp+B8h] [rbp-50h]
  __int128 v80; // [rsp+C8h] [rbp-40h]
  __int128 v81; // [rsp+D8h] [rbp-30h]
  __int128 v82; // [rsp+E8h] [rbp-20h]
  __int128 v83; // [rsp+F8h] [rbp-10h]
  __int128 v84; // [rsp+108h] [rbp+0h]
  __int128 v85; // [rsp+118h] [rbp+10h]
  __int128 v86; // [rsp+128h] [rbp+20h]
  _BYTE v87[4]; // [rsp+138h] [rbp+30h] BYREF
  int v88; // [rsp+13Ch] [rbp+34h]
  int v89; // [rsp+140h] [rbp+38h]
  int v90; // [rsp+144h] [rbp+3Ch]
  wil::details::in1diag3 *retaddr; // [rsp+720h] [rbp+618h]

  v76 = -2LL;
  if ( (*(_BYTE *)a2 & 0x3B) == 0 )
    return 0LL;
  memset_0(v87, 0, 0x5A0uLL);
  if ( !*((_BYTE *)a2 + 516) )
  {
    v16 = 1;
    v68 = 0LL;
    LODWORD(v66) = *((_DWORD *)a2 + 13);
    if ( !(_DWORD)v66 )
    {
      LODWORD(v66) = *((_DWORD *)this + 25);
      *((_DWORD *)this + 25) = v66 + 1;
    }
    v17 = (_DWORD *)((char *)a2 + 4);
    v73 = (char *)a2 + 4;
    v18 = 0xCBF29CE484222325uLL;
    for ( i = 0LL; i < 4; ++i )
      v18 = 0x100000001B3LL * (*((unsigned __int8 *)v17 + i) ^ (unsigned __int64)v18);
    v20 = v18 & *((_QWORD *)this + 20);
    v21 = *((_QWORD *)this + 17);
    v22 = *(__int64 **)(v21 + 16 * v20);
    v23 = 2 * v20;
    v24 = v22;
    while ( 1 )
    {
      v25 = v24 == *((__int64 **)this + 15) ? (__int64 *)*((_QWORD *)this + 15) : **(__int64 ***)(v21 + 8 * v23 + 8);
      if ( v22 == v25 )
        break;
      if ( *((_DWORD *)v22 + 4) == *v17 )
        goto LABEL_45;
      v22 = (__int64 *)*v22;
    }
    v22 = (__int64 *)*((_QWORD *)this + 15);
LABEL_45:
    if ( v22 == *((__int64 **)this + 15) )
    {
      v26 = (char *)operator new(0x48uLL);
      v72 = (struct Pointer *)v26;
      memset_0(v26, 0, 0x48uLL);
      *(_DWORD *)v26 = 0;
      v26[4] = 1;
      v71 = (__int64 *)(v26 + 8);
      *((_DWORD *)v26 + 2) = 0;
      v70 = (__int64 *)(v26 + 16);
      *((_QWORD *)v26 + 2) = 0LL;
      *((_QWORD *)v26 + 3) = 0LL;
      *((_QWORD *)v26 + 2) = std::_List_alloc<std::_List_base_types<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>>::_Buynode0(
                               v27,
                               0LL,
                               0LL);
      *((_QWORD *)v26 + 4) = 0LL;
      *((_QWORD *)v26 + 5) = 0LL;
      *((_QWORD *)v26 + 6) = 0LL;
      *((_DWORD *)v26 + 2) = 1065353216;
      std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
        (_QWORD *)v26 + 1,
        8LL);
      v67 = v26;
      std::unordered_map<unsigned long,std::unique_ptr<PointerInfoAdapter::LastDeviceFrame>>::insert_or_assign<std::unique_ptr<PointerInfoAdapter::LastDeviceFrame>>(
        (char *)this + 112,
        &v74,
        (char *)a2 + 4,
        &v67);
      v28 = v67;
      if ( v67 )
      {
        std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::~_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>((_QWORD *)v67 + 1);
        operator delete(v28, (const struct std::nothrow_t *)0x48);
      }
    }
    else
    {
      v26 = (char *)v22[3];
    }
    v29 = 0LL;
    LODWORD(v67) = 0;
    v30 = *((unsigned int *)a2 + 12);
    if ( !(_DWORD)v30 )
    {
LABEL_103:
      (*(void (__fastcall **)(_QWORD, __int64, _BYTE *))(**((_QWORD **)this + 3) + 24LL))(
        *((_QWORD *)this + 3),
        v30,
        v87);
      if ( v16
        && !std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<PointerInfoAdapter::LastDeviceFrame>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<PointerInfoAdapter::LastDeviceFrame>>>,0>>::erase(
              (char *)this + 112,
              v73) )
      {
        v59 = wil::verify_hresult<long>(0x80004005);
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1A3,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\adapters\\pointerinfo\\lib\\pointerinfoadapter.cpp",
          (const char *)v59);
        __debugbreak();
      }
      return 0LL;
    }
    while ( 1 )
    {
      v64 = v16;
      v31 = 32 * v29;
      v32 = (char *)a2 + 32 * v29 + 56;
      v72 = (struct Pointer *)v32;
      v69 = (struct tagPOINTER_INFO_UNION *)&v87[144 * v29];
      std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
        (_QWORD *)v26 + 1,
        &v70,
        v32);
      if ( v70 == *((__int64 **)v26 + 2) )
      {
        if ( *((_BYTE *)this + 104) )
        {
          v33 = *(_DWORD *)v32;
        }
        else
        {
          v33 = *((_DWORD *)this + 24);
          *((_DWORD *)this + 24) = v33 + 1;
        }
        v65 = v33;
        v34 = v26 + 8;
        std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
          (_QWORD *)v26 + 1,
          &v71,
          v32);
        v35 = (__int64 *)*((_QWORD *)v26 + 2);
        v36 = v71;
        if ( v71 == v35 )
        {
          v37 = *v35;
          v38 = *(__int64 **)(*v35 + 8);
          v39 = std::_List_buy<std::pair<unsigned long const,unsigned long>>::_Buynode<unsigned long const &,unsigned long &>(
                  (_DWORD)v35,
                  *v35,
                  (_DWORD)v38,
                  (_DWORD)v32,
                  (__int64)&v65);
          v40 = *((_QWORD *)v26 + 3);
          if ( v40 == 0xAAAAAAAAAAAAAA9LL )
            std::_Xlength_error("list<T> too long");
          *((_QWORD *)v26 + 3) = v40 + 1;
          *(_QWORD *)(v37 + 8) = v39;
          *v38 = v39;
          std::_Hash<std::_Umap_traits<unsigned long,unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Insert<std::pair<unsigned long const,unsigned long> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,unsigned long>>>>>(
            v26 + 8,
            &v74,
            **((_QWORD **)v26 + 2) + 16LL);
          v33 = v65;
          v34 = v26 + 8;
        }
        else
        {
          *((_DWORD *)v71 + 5) = v33;
          v74 = v36;
          v75 = 0;
        }
        v41 = v32 + 4;
        if ( (v32[4] & 2) != 0 )
        {
          v42 = 65537;
        }
        else
        {
          if ( (*v41 & 1) == 0 )
          {
            v62 = wil::verify_hresult<long>(0x8000FFFF);
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x113,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\adapters\\pointerinfo\\lib\\pointerinfoadapter.cpp",
              (const char *)v62);
            __debugbreak();
          }
          v42 = 131073;
        }
        v43 = *(_DWORD *)v26;
        v44 = v69;
        v45 = v68;
      }
      else
      {
        v33 = *((_DWORD *)v70 + 5);
        v65 = v33;
        v46 = 0xCBF29CE484222325uLL;
        for ( j = 0LL; j < 4; ++j )
          v46 = 0x100000001B3LL * (*((unsigned __int8 *)&v65 + j) ^ (unsigned __int64)v46);
        v48 = *((_QWORD *)this + 7);
        v49 = *(__int64 **)(v48 + 16 * (v46 & *((_QWORD *)this + 10)));
        v50 = 2 * (v46 & *((_QWORD *)this + 10));
        v51 = (__int64 *)*((_QWORD *)this + 5);
        while ( 1 )
        {
          v52 = *(__int64 **)(v48 + 8 * v50) == v51
              ? (__int64 *)*((_QWORD *)this + 5)
              : **(__int64 ***)(v48 + 8 * v50 + 8);
          if ( v49 == v52 )
            break;
          if ( v33 == *((_DWORD *)v49 + 4) )
            goto LABEL_74;
          v49 = (__int64 *)*v49;
        }
        v49 = (__int64 *)*((_QWORD *)this + 5);
LABEL_74:
        if ( v49 == v51 )
        {
          v60 = wil::verify_hresult<long>(0x80004005);
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x11F,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\adapters\\pointerinfo\\lib\\pointerinfoadapter.cpp",
            (const char *)v60);
          __debugbreak();
        }
        v78 = *(_OWORD *)(v49 + 3);
        v79 = *(_OWORD *)(v49 + 5);
        v80 = *(_OWORD *)(v49 + 7);
        v81 = *(_OWORD *)(v49 + 9);
        v82 = *(_OWORD *)(v49 + 11);
        v83 = *(_OWORD *)(v49 + 13);
        v84 = *(_OWORD *)(v49 + 15);
        v85 = *(_OWORD *)(v49 + 17);
        v86 = *(_OWORD *)(v49 + 19);
        v43 = *(_DWORD *)v26;
        v45 = v68;
        v44 = v69;
        if ( *(_DWORD *)v26 == v33 )
          v45 = v69;
        v68 = v45;
        v41 = (char *)a2 + v31 + 60;
        if ( (*v41 & 2) != 0 )
        {
          v42 = (BYTE12(v78) & 4) != 0 ? 0x20000 : 0x10000;
        }
        else
        {
          v42 = 0x40000;
          if ( (BYTE12(v78) & 4) == 0 )
            v42 = 0x20000;
        }
        v34 = v26 + 8;
      }
      if ( !v43 )
      {
        *(_DWORD *)v26 = v33;
        v43 = v33;
      }
      if ( (v42 & 0x10000) != 0 )
      {
        if ( v26[4] && v33 != *(_DWORD *)v26 )
        {
          if ( v45 )
            *((_DWORD *)v45 + 3) &= ~0x2000u;
          *(_DWORD *)v26 = v33;
        }
        v43 = *(_DWORD *)v26;
        if ( v33 != *(_DWORD *)v26 )
          goto LABEL_94;
        v26[4] = 0;
      }
      if ( v33 == v43 )
      {
        v42 |= 0x2000u;
        v68 = v44;
      }
LABEL_94:
      v53 = (PointerInfoAdapter *)(*(_DWORD *)v41 & 1);
      v16 = 0;
      if ( (*(_DWORD *)v41 & 1) == 0 )
        v16 = v64;
      *((_DWORD *)v44 + 1) = v33;
      v54 = v42 | 2;
      if ( !(_DWORD)v53 )
        v54 = v42;
      *((_DWORD *)v44 + 3) = v54;
      *((_DWORD *)v44 + 2) = v66;
      v55 = v72;
      PointerInfoAdapter::PopulatePointerInfoProperties(v53, a2, v72, v44);
      v56 = (char *)this + 32;
      if ( (*v57 & 1) != 0 )
      {
        std::unordered_map<unsigned long,tagPOINTER_INFO_UNION>::insert_or_assign<tagPOINTER_INFO_UNION &>(
          v56,
          v77,
          &v65);
      }
      else
      {
        if ( !std::_Hash<std::_Umap_traits<unsigned long,tagPOINTER_INFO_UNION,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINTER_INFO_UNION>>,0>>::erase(
                v56,
                &v65) )
        {
          v58 = wil::verify_hresult<long>(0x80004005);
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x193,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\adapters\\pointerinfo\\lib\\pointerinfoadapter.cpp",
            (const char *)v58);
          __debugbreak();
        }
        if ( !std::_Hash<std::_Umap_traits<unsigned long,unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::erase(
                v34,
                v55) )
        {
          v63 = wil::verify_hresult<long>(0x80004005);
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x198,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\adapters\\pointerinfo\\lib\\pointerinfoadapter.cpp",
            (const char *)v63);
          JUMPOUT(0x1800552B8LL);
        }
      }
      v29 = (unsigned int)((_DWORD)v67 + 1);
      LODWORD(v67) = v29;
      v30 = *((unsigned int *)a2 + 12);
      if ( (unsigned int)v29 >= (unsigned int)v30 )
        goto LABEL_103;
    }
  }
  if ( *((_DWORD *)a2 + 12) != 1 )
    goto LABEL_110;
  v4 = 0LL;
  v5 = 0xCBF29CE484222325uLL;
  do
  {
    v5 = 0x100000001B3LL * (*((unsigned __int8 *)a2 + v4 + 4) ^ (unsigned __int64)v5);
    ++v4;
  }
  while ( v4 < 4 );
  v6 = *((_QWORD *)this + 17);
  v7 = *(_QWORD **)(v6 + 16 * (v5 & *((_QWORD *)this + 20)));
  v8 = *((_QWORD *)this + 15);
  while ( 1 )
  {
    if ( *(_QWORD *)(v6 + 16 * (v5 & *((_QWORD *)this + 20))) == v8 )
      v9 = (_QWORD *)*((_QWORD *)this + 15);
    else
      v9 = **(_QWORD ***)(v6 + 16 * (v5 & *((_QWORD *)this + 20)) + 8);
    if ( v7 == v9 )
      goto LABEL_21;
    v10 = *((_DWORD *)a2 + 1);
    if ( *((_DWORD *)v7 + 4) == v10 )
      break;
    v7 = (_QWORD *)*v7;
  }
  v11 = v7;
  while ( 1 )
  {
    v12 = *(_QWORD *)(v6 + 16 * (v5 & *((_QWORD *)this + 20))) == v8
        ? (_QWORD *)*((_QWORD *)this + 15)
        : **(_QWORD ***)(v6 + 16 * (v5 & *((_QWORD *)this + 20)) + 8);
    if ( v7 == v12 || v10 != *((_DWORD *)v7 + 4) )
      break;
    v7 = (_QWORD *)*v7;
  }
  if ( v11 == v7 )
  {
LABEL_21:
    v11 = (_QWORD *)*((_QWORD *)this + 15);
    v7 = v11;
  }
  v13 = 0LL;
  if ( v11 != v7 )
  {
    do
    {
      ++v13;
      v11 = (_QWORD *)*v11;
    }
    while ( v11 != v7 );
    if ( v13 )
    {
LABEL_110:
      v61 = wil::verify_hresult<long>(0x8000FFFF);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xB7,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\adapters\\pointerinfo\\lib\\pointerinfoadapter.cpp",
        (const char *)v61);
      __debugbreak();
    }
  }
  if ( *((_BYTE *)this + 104) )
  {
    v14 = (PointerInfoAdapter *)*((unsigned int *)a2 + 14);
  }
  else
  {
    v14 = (PointerInfoAdapter *)*((unsigned int *)this + 24);
    *((_DWORD *)this + 24) = (_DWORD)v14 + 1;
  }
  v88 = (int)v14;
  v90 = 335872;
  if ( *((_DWORD *)a2 + 13) )
  {
    v89 = *((_DWORD *)a2 + 13);
  }
  else
  {
    v89 = *((_DWORD *)this + 25);
    *((_DWORD *)this + 25) = v89 + 1;
  }
  PointerInfoAdapter::PopulatePointerInfoProperties(
    v14,
    a2,
    (struct InputInfo *)((char *)a2 + 56),
    (struct tagPOINTER_INFO_UNION *)v87);
  (*(void (__fastcall **)(_QWORD, _QWORD, _BYTE *))(**((_QWORD **)this + 3) + 24LL))(
    *((_QWORD *)this + 3),
    *((unsigned int *)a2 + 12),
    v87);
  return 0LL;
}
