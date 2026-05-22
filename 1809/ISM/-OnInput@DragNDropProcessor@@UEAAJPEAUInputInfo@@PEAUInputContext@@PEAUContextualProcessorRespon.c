/*
 * XREFs of ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180023BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000886C (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ?DragStarted@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x1800222B4 (-DragStarted@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z.c)
 *     ?DragInProgress@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x180022460 (-DragInProgress@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@.c)
 *     ?DragEnded@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x18002260C (-DragEnded@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z.c)
 *     ?StartGestureRecognition@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@K@Z @ 0x1800235F4 (-StartGestureRecognition@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@K@Z.c)
 *     ?UpdateVelocityForPointerId@DragNDropProcessor@@AEAAJKUtagPOINT@@@Z @ 0x1800239D0 (-UpdateVelocityForPointerId@DragNDropProcessor@@AEAAJKUtagPOINT@@@Z.c)
 *     ?GetVelocityForPointerId@DragNDropProcessor@@AEAA?AUtagPOINTF@@K@Z @ 0x180023B34 (-GetVelocityForPointerId@DragNDropProcessor@@AEAA-AUtagPOINTF@@K@Z.c)
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@U_GUID@@PEAU2@PEA_KPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@7@Z @ 0x180024AD0 (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@U_GUID@@PEAU2@PEA_KPEAPEAVBamoDragS.c)
 *     ?FeedAnimationDataIfNeeded@DragNDropProcessor@@QEAAJKUtagPOINT@@UtagPOINTF@@@Z @ 0x180025324 (-FeedAnimationDataIfNeeded@DragNDropProcessor@@QEAAJKUtagPOINT@@UtagPOINTF@@@Z.c)
 *     ?GetPositionRelativeToSite@DragNDropProcessor@@QEAA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x1800254EC (-GetPositionRelativeToSite@DragNDropProcessor@@QEAA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180025804 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUVelocityData@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x1800259B0 (-erase@-$_Hash@V-$_Umap_traits@KUVelocityData@DragNDropProcessor@@V-$_Uhash_compare@KU-$hash@K@s.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x180025B0C (-erase@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$all.c)
 *     ??A?$unordered_map@K_KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBK_K@std@@@2@@std@@QEAAAEA_KAEBK@Z @ 0x180025C68 (--A-$unordered_map@K_KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@U-$pair@$$CBK_K@std@@@2@@std@@.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x180025E54 (-erase@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V-$_Uhash_compar.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUVelocityData@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@@std@@@std@@@2@@Z @ 0x180025F3C (-erase@-$_Hash@V-$_Umap_traits@KUVelocityData@DragNDropProcessor@@V-$_Uhash_compare_ea_180025F3C.c)
 *     ?clear@?$list@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@2@@std@@QEAAXXZ @ 0x1800260BC (-clear@-$list@U-$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@V-$allocator@U-$pair@$$CBKVMes.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KVMessageInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@std@@@std@@@2@@Z @ 0x180026120 (-erase@-$_Hash@V-$_Umap_traits@KVMessageInfo@DragNDropProcessor@@V-$_Uhash_compare@KU-$hash@K@st.c)
 *     ??$emplace@AEAKAEA_K@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@std@@_N@1@AEAKAEA_K@Z @ 0x1800261F4 (--$emplace@AEAKAEA_K@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@.c)
 *     ??$_Insert@AEAU?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@1@@Z @ 0x180026448 (--$_Insert@AEAU-$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@V-$_List_unchecked_iter.c)
 *     ??$_Buynode@AEAKUPointerCache@DragNDropProcessor@@@?$_List_buy@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@PEAX@1@PEAU21@0AEAK$$QEAUPointerCache@DragNDropProcessor@@@Z @ 0x180026998 (--$_Buynode@AEAKUPointerCache@DragNDropProcessor@@@-$_List_buy@U-$pair@$$CBKUPointerCache@DragND.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DragNDropProcessor::OnInput(
        DragNDropProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  struct InputContext *v4; // rbx
  struct InputInfo *v5; // rdi
  int v7; // eax
  unsigned int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // r15
  struct tagPOINT v11; // r14
  HMONITOR v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // rcx
  unsigned int j; // edi
  __int64 v21; // rax
  DragNDropProcessor *v22; // rcx
  struct tagPOINT v23; // rdi
  struct tagPOINT v24; // rsi
  __int64 v25; // rsi
  __int64 v26; // rcx
  unsigned __int64 i; // rdx
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 v30; // r8
  _QWORD *v31; // rbx
  __int64 v32; // rcx
  _QWORD **v33; // rdx
  _QWORD **v34; // r10
  _QWORD *v35; // rax
  _QWORD *v36; // rcx
  _QWORD *v37; // rdi
  _QWORD *v38; // rax
  _QWORD *v39; // rcx
  _QWORD *v40; // rbx
  _QWORD *v41; // r8
  _QWORD *v42; // rax
  unsigned __int64 v43; // rsi
  __int64 v44; // rcx
  __int64 v45; // rcx
  unsigned __int64 k; // rdx
  __int64 v47; // rax
  __int64 v48; // r9
  __int64 v49; // r8
  _QWORD *v50; // rbx
  __int64 v51; // rcx
  _QWORD **v52; // rdx
  _QWORD **v53; // r10
  _QWORD *v54; // rax
  _QWORD *v55; // rcx
  _QWORD *v56; // rdi
  _QWORD *v57; // rax
  _QWORD *v58; // rsi
  _QWORD *v59; // rbx
  __int64 v60; // rcx
  _QWORD *v61; // r8
  __int64 v62; // rcx
  unsigned __int64 m; // rdx
  __int64 v64; // rax
  __int64 v65; // r9
  __int64 v66; // r8
  _QWORD *v67; // rbx
  __int64 v68; // rcx
  _QWORD *v69; // rdx
  _QWORD *v70; // r10
  _QWORD *v71; // rax
  _QWORD *v72; // rcx
  _QWORD *v73; // rdi
  _QWORD *v74; // rax
  _QWORD *v75; // r8
  unsigned int v77[2]; // [rsp+50h] [rbp-B0h] BYREF
  void *Src; // [rsp+58h] [rbp-A8h]
  __int64 v79; // [rsp+60h] [rbp-A0h] BYREF
  struct tagPOINT v80; // [rsp+68h] [rbp-98h] BYREF
  struct tagPOINT v81; // [rsp+70h] [rbp-90h] BYREF
  int v82; // [rsp+78h] [rbp-88h]
  tagPOINTF v83; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v84; // [rsp+88h] [rbp-78h] BYREF
  HMONITOR v85; // [rsp+90h] [rbp-70h] BYREF
  struct tagPOINT v86; // [rsp+98h] [rbp-68h]
  struct _GUID v87; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v88; // [rsp+B0h] [rbp-50h]
  __int64 v89; // [rsp+C0h] [rbp-40h] BYREF
  struct InputContext *v90; // [rsp+C8h] [rbp-38h]
  __int64 v91; // [rsp+D0h] [rbp-30h]
  char v92[8]; // [rsp+D8h] [rbp-28h] BYREF
  char v93[8]; // [rsp+E0h] [rbp-20h] BYREF
  struct tagPOINT v94; // [rsp+E8h] [rbp-18h]
  char v95[8]; // [rsp+F0h] [rbp-10h] BYREF
  char v96[8]; // [rsp+F8h] [rbp-8h] BYREF
  char v97[8]; // [rsp+100h] [rbp+0h] BYREF
  char v98[8]; // [rsp+108h] [rbp+8h] BYREF
  _OWORD v99[2]; // [rsp+110h] [rbp+10h] BYREF
  char v100[16]; // [rsp+130h] [rbp+30h] BYREF
  char v101[16]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v102[48]; // [rsp+150h] [rbp+50h] BYREF
  unsigned int v103; // [rsp+180h] [rbp+80h]
  __int128 v104; // [rsp+188h] [rbp+88h]
  _OWORD v105[95]; // [rsp+198h] [rbp+98h]

  v91 = -2LL;
  v4 = a3;
  v90 = a3;
  v5 = a2;
  Src = a2;
  *(_DWORD *)a4 = 4;
  v7 = *((_DWORD *)a2 + 95);
  v8 = (v7 & 0x11) != 0;
  if ( (v7 & 0x22) != 0 )
    v8 |= 4u;
  if ( (v7 & 0x44) != 0 )
    v8 |= 2u;
  if ( (v7 & 0x88) != 0 )
    v8 |= 8u;
  v9 = 0LL;
  v82 = 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    while ( 1 )
    {
      v10 = 32 * v9;
      v77[0] = *((_DWORD *)v5 + 8 * v9 + 14);
      v86.x = *((_DWORD *)v5 + 8 * v9 + 16);
      v86.y = *((_DWORD *)v5 + 8 * v9 + 17);
      v11 = v86;
      DragNDropProcessor::UpdateVelocityForPointerId(this, v77[0], v86);
      v12 = 0LL;
      v85 = 0LL;
      v13 = *((_QWORD *)v4 + 1);
      if ( v13 )
      {
        (*(void (__fastcall **)(__int64, HMONITOR *))(*(_QWORD *)v13 + 24LL))(v13, &v85);
        v12 = v85;
      }
      if ( (*((_BYTE *)v5 + v10 + 60) & 2) != 0 )
        break;
      if ( *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
                        (char *)this + 40,
                        v92,
                        v77) != *((_QWORD *)this + 6) )
      {
        v26 = 0xCBF29CE484222325uLL;
        for ( i = 0LL; i < 4; ++i )
          v26 = 0x100000001B3LL * (*((unsigned __int8 *)v77 + i) ^ (unsigned __int64)v26);
        v11 = v86;
        v28 = v26 & *((_QWORD *)this + 11);
        v29 = 2 * v28;
        v30 = *((_QWORD *)this + 8);
        v31 = *(_QWORD **)(v30 + 16 * v28);
        v32 = 2 * v28;
        v33 = (_QWORD **)*((_QWORD *)this + 6);
        v34 = (_QWORD **)v31;
        while ( 1 )
        {
          if ( v34 == v33 )
            v35 = (_QWORD *)*((_QWORD *)this + 6);
          else
            v35 = **(_QWORD ***)(v30 + 8 * v32 + 8);
          if ( v31 == v35 )
            goto LABEL_50;
          if ( *((_DWORD *)v31 + 4) == v77[0] )
            break;
          v31 = (_QWORD *)*v31;
        }
        v36 = v31;
        v37 = v31;
        while ( 1 )
        {
          v38 = v34 == v33 ? (_QWORD *)*((_QWORD *)this + 6) : **(_QWORD ***)(v30 + 8 * v29 + 8);
          if ( v31 == v38 || v77[0] != *((_DWORD *)v31 + 4) )
            break;
          v31 = (_QWORD *)*v31;
        }
        if ( v36 == v31 )
        {
LABEL_50:
          v37 = (_QWORD *)*((_QWORD *)this + 6);
          v31 = v37;
        }
        v84 = (unsigned __int64)v37;
        v39 = *v33;
        if ( v37 == *v33 && v31 == v33 )
        {
          *v33 = v33;
          *(_QWORD *)(*((_QWORD *)this + 6) + 8LL) = *((_QWORD *)this + 6);
          *((_QWORD *)this + 7) = 0LL;
          if ( v39 != *((_QWORD **)this + 6) )
          {
            do
            {
              v40 = (_QWORD *)*v39;
              operator delete(v39, (const struct std::nothrow_t *)0x30);
              v39 = v40;
            }
            while ( v40 != *((_QWORD **)this + 6) );
          }
          std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
            (_QWORD *)this + 5,
            8LL);
        }
        else
        {
          while ( v37 != v31 )
          {
            v41 = v37;
            v37 = (_QWORD *)*v37;
            std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::VelocityData,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::VelocityData>>,0>>::erase(
              (char *)this + 40,
              v93,
              v41);
          }
        }
        goto LABEL_13;
      }
LABEL_14:
      std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
        (char *)this + 104,
        &v89,
        v77);
      v18 = v89;
      if ( v89 == *((_QWORD *)this + 14) )
        goto LABEL_122;
      v19 = *(_QWORD *)(v89 + 48);
      if ( v19 )
      {
        v81 = v11;
        v84 = 0LL;
        v87 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v19 + 8) + 72LL))(v19 + 8);
        DragNDropProcessor::HitTest(this, v11, v85, &v87, &v81, &v84, 0LL, 0LL, 0LL, 0LL);
        if ( *(_DWORD *)(v18 + 32) == 2 )
        {
          memcpy_0(v102, v5, 0x640uLL);
          v104 = *(_OWORD *)((char *)v5 + v10 + 56);
          v105[0] = *(_OWORD *)((char *)v5 + v10 + 72);
          for ( j = 1; j < v103; ++j )
          {
            memset_0(v99, 0, sizeof(v99));
            v21 = 2LL * j;
            v105[v21 - 1] = v99[0];
            v105[v21] = v99[1];
          }
          v103 = 1;
          (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(v18 + 56) + 24LL))(*(_QWORD *)(v18 + 56), v102);
        }
        DragNDropProcessor::GetVelocityForPointerId(this, &v83, v77[0]);
        v23 = *(struct tagPOINT *)(v18 + 80);
        v94 = v23;
        if ( v23 )
          (*(void (__fastcall **)(struct tagPOINT))(**(_QWORD **)&v23 + 8LL))(v23);
        v80 = v11;
        if ( v23 )
        {
          v22 = **(DragNDropProcessor ***)&DragNDropProcessor::GetPositionRelativeToSite(
                                             v22,
                                             (struct InputSite *)v95,
                                             v23);
          v80 = (struct tagPOINT)v22;
        }
        v79 = 0LL;
        if ( *(_QWORD *)(v18 + 40) )
        {
          v24 = *(struct tagPOINT *)(v18 + 72);
          *(struct tagPOINT *)&v87.Data1 = v24;
          if ( v24 )
            (*(void (__fastcall **)(struct tagPOINT))(**(_QWORD **)&v24 + 8LL))(v24);
          v79 = **(_QWORD **)&DragNDropProcessor::GetPositionRelativeToSite(v22, (struct InputSite *)v96, v24);
          if ( v24 )
            (*(void (__fastcall **)(struct tagPOINT))(**(_QWORD **)&v24 + 16LL))(v24);
        }
        if ( *(_DWORD *)(v18 + 32) == 3 )
        {
          v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v18 + 40) + 8LL) + 32LL))(*(_QWORD *)(v18 + 40) + 8LL);
          v84 = 0LL;
          InputETW::DragNDrop::DragStarted(v77[0], (int *)&v80, (int *)&v81, (int *)&v79, 0, v8);
          (*(void (__fastcall **)(__int64, _QWORD, struct tagPOINT *, struct tagPOINT *, __int64 *, tagPOINTF *, _QWORD, unsigned int, __int64))(*(_QWORD *)(*(_QWORD *)(v18 + 48) + 8LL) + 24LL))(
            *(_QWORD *)(v18 + 48) + 8LL,
            v77[0],
            &v80,
            &v81,
            &v79,
            &v83,
            0LL,
            v8,
            v25);
          std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::emplace<unsigned long &,unsigned __int64 &>(
            (char *)this + 168,
            v101,
            v77,
            &v84);
          *(_DWORD *)(v18 + 32) = 4;
          if ( v23 )
            (*(void (__fastcall **)(struct tagPOINT))(**(_QWORD **)&v23 + 16LL))(v23);
          goto LABEL_121;
        }
        if ( *(_DWORD *)(v18 + 32) == 4 )
        {
          DragNDropProcessor::FeedAnimationDataIfNeeded(this, v77[0], v80, v83);
          v42 = (_QWORD *)std::unordered_map<unsigned long,unsigned __int64>::operator[]((char *)this + 168, v77);
          v43 = v84;
          if ( v84 != *v42 )
          {
            (*(void (__fastcall **)(__int64, _QWORD, struct tagPOINT *, struct tagPOINT *, __int64 *, tagPOINTF *, unsigned __int64, unsigned int))(*(_QWORD *)(*(_QWORD *)(v18 + 48) + 8LL) + 56LL))(
              *(_QWORD *)(v18 + 48) + 8LL,
              v77[0],
              &v80,
              &v81,
              &v79,
              &v83,
              v84,
              v8);
            *(_QWORD *)std::unordered_map<unsigned long,unsigned __int64>::operator[]((char *)this + 168, v77) = v43;
          }
          if ( (*((_BYTE *)Src + v10 + 60) & 2) != 0 )
          {
            InputETW::DragNDrop::DragInProgress(v77[0], (int *)&v80, (int *)&v81, (int *)&v79, v43, v8);
            if ( (*(int (__fastcall **)(__int64, _QWORD, struct tagPOINT *, struct tagPOINT *, __int64 *, tagPOINTF *, unsigned __int64, unsigned int))(*(_QWORD *)(*(_QWORD *)(v18 + 48) + 8LL) + 32LL))(
                   *(_QWORD *)(v18 + 48) + 8LL,
                   v77[0],
                   &v80,
                   &v81,
                   &v79,
                   &v83,
                   v43,
                   v8) < 0 )
            {
              v44 = *(_QWORD *)(v18 + 48);
              if ( v44 )
              {
                *(_QWORD *)(v18 + 48) = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 8LL))(v44);
              }
            }
          }
          else
          {
            InputETW::DragNDrop::DragEnded(v77[0], (int *)&v80, (int *)&v81, (int *)&v79, v43, v8);
            (*(void (__fastcall **)(__int64, _QWORD, struct tagPOINT *, struct tagPOINT *, __int64 *, tagPOINTF *, unsigned __int64, unsigned int))(*(_QWORD *)(*(_QWORD *)(v18 + 48) + 8LL) + 40LL))(
              *(_QWORD *)(v18 + 48) + 8LL,
              v77[0],
              &v80,
              &v81,
              &v79,
              &v83,
              v43,
              v8);
          }
        }
        if ( v23 )
          (*(void (__fastcall **)(struct tagPOINT))(**(_QWORD **)&v23 + 16LL))(v23);
        v5 = (struct InputInfo *)Src;
      }
      if ( (*((_BYTE *)v5 + v10 + 60) & 2) != 0 )
        goto LABEL_122;
      v45 = 0xCBF29CE484222325uLL;
      for ( k = 0LL; k < 4; ++k )
        v45 = 0x100000001B3LL * (*((unsigned __int8 *)v77 + k) ^ (unsigned __int64)v45);
      v47 = v45 & *((_QWORD *)this + 45);
      v48 = 2 * v47;
      v49 = *((_QWORD *)this + 42);
      v50 = *(_QWORD **)(v49 + 16 * v47);
      v51 = 2 * v47;
      v52 = (_QWORD **)*((_QWORD *)this + 40);
      v53 = (_QWORD **)v50;
      while ( 1 )
      {
        if ( v53 == v52 )
          v54 = (_QWORD *)*((_QWORD *)this + 40);
        else
          v54 = **(_QWORD ***)(v49 + 8 * v51 + 8);
        if ( v50 == v54 )
          goto LABEL_87;
        if ( *((_DWORD *)v50 + 4) == v77[0] )
          break;
        v50 = (_QWORD *)*v50;
      }
      v55 = v50;
      v56 = v50;
      while ( 1 )
      {
        v57 = v53 == v52 ? (_QWORD *)*((_QWORD *)this + 40) : **(_QWORD ***)(v49 + 8 * v48 + 8);
        if ( v50 == v57 || v77[0] != *((_DWORD *)v50 + 4) )
          break;
        v50 = (_QWORD *)*v50;
      }
      if ( v55 == v50 )
      {
LABEL_87:
        v56 = (_QWORD *)*((_QWORD *)this + 40);
        v50 = v56;
      }
      *(_QWORD *)&v87.Data1 = v56;
      v58 = *v52;
      if ( v56 == *v52 && v50 == v52 )
      {
        *v52 = v52;
        *(_QWORD *)(*((_QWORD *)this + 40) + 8LL) = *((_QWORD *)this + 40);
        *((_QWORD *)this + 41) = 0LL;
        if ( v58 != *((_QWORD **)this + 40) )
        {
          do
          {
            v59 = (_QWORD *)*v58;
            v60 = v58[3];
            if ( v60 )
            {
              v58[3] = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 8LL))(v60);
            }
            operator delete(v58, (const struct std::nothrow_t *)0x20);
            v58 = v59;
          }
          while ( v59 != *((_QWORD **)this + 40) );
        }
        std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
          (_QWORD *)this + 39,
          8LL);
      }
      else
      {
        while ( v56 != v50 )
        {
          v61 = v56;
          v56 = (_QWORD *)*v56;
          std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::erase(
            (char *)this + 312,
            v97,
            v61);
        }
      }
      v62 = 0xCBF29CE484222325uLL;
      for ( m = 0LL; m < 4; ++m )
        v62 = 0x100000001B3LL * (*((unsigned __int8 *)v77 + m) ^ (unsigned __int64)v62);
      v64 = v62 & *((_QWORD *)this + 19);
      v65 = 2 * v64;
      v66 = *((_QWORD *)this + 16);
      v67 = *(_QWORD **)(v66 + 16 * v64);
      v68 = 2 * v64;
      v69 = (_QWORD *)*((_QWORD *)this + 14);
      v70 = v67;
      while ( 1 )
      {
        if ( v70 == v69 )
          v71 = (_QWORD *)*((_QWORD *)this + 14);
        else
          v71 = **(_QWORD ***)(v66 + 8 * v68 + 8);
        if ( v67 == v71 )
          goto LABEL_114;
        if ( *((_DWORD *)v67 + 4) == v77[0] )
          break;
        v67 = (_QWORD *)*v67;
      }
      v72 = v67;
      v73 = v67;
      while ( 1 )
      {
        v74 = v70 == v69 ? (_QWORD *)*((_QWORD *)this + 14) : **(_QWORD ***)(v66 + 8 * v65 + 8);
        if ( v67 == v74 || v77[0] != *((_DWORD *)v67 + 4) )
          break;
        v67 = (_QWORD *)*v67;
      }
      if ( v72 == v67 )
      {
LABEL_114:
        v73 = (_QWORD *)*((_QWORD *)this + 14);
        v67 = v73;
      }
      *(_QWORD *)&v87.Data1 = v73;
      if ( v73 == (_QWORD *)*v69 && v67 == v69 )
      {
        std::list<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>>::clear((char *)this + 112);
        std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
          (_QWORD *)this + 13,
          8LL);
      }
      else
      {
        while ( v73 != v67 )
        {
          v75 = v73;
          v73 = (_QWORD *)*v73;
          std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::MessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>>,0>>::erase(
            (char *)this + 104,
            v98,
            v75);
        }
      }
      std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::VelocityData,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::VelocityData>>,0>>::erase(
        (char *)this + 248,
        v77);
      std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::erase(
        (char *)this + 168,
        v77);
LABEL_121:
      v5 = (struct InputInfo *)Src;
LABEL_122:
      v9 = (unsigned int)(v82 + 1);
      v82 = v9;
      if ( (unsigned int)v9 >= *((_DWORD *)v5 + 12) )
        return 0LL;
      v4 = v90;
    }
    *(struct tagPOINT *)&v87.Data1 = v11;
    *(_QWORD *)v87.Data4 = v12;
    v88 = v8;
    v14 = **((_QWORD **)this + 6);
    v15 = *(__int64 **)(v14 + 8);
    v16 = std::_List_buy<std::pair<unsigned long const,DragNDropProcessor::PointerCache>>::_Buynode<unsigned long &,DragNDropProcessor::PointerCache>(
            v13,
            v14,
            (_DWORD)v15,
            (unsigned int)v77,
            (__int64)&v87);
    v17 = *((_QWORD *)this + 7);
    if ( v17 == 0x555555555555554LL )
      std::_Xlength_error("list<T> too long");
    *((_QWORD *)this + 7) = v17 + 1;
    *(_QWORD *)(v14 + 8) = v16;
    *v15 = v16;
    std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::_Insert<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>>>>(
      (char *)this + 40,
      v100,
      **((_QWORD **)this + 6) + 16LL);
    DragNDropProcessor::StartGestureRecognition((struct InputSite **)this, v11, v85, v77[0]);
LABEL_13:
    v5 = (struct InputInfo *)Src;
    goto LABEL_14;
  }
  return 0LL;
}
