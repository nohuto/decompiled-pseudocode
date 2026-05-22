/*
 * XREFs of ?DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@@Z @ 0x1800BBC90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z @ 0x18002A778 (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18002B42C (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@PEAX@2@PEAU32@0@Z @ 0x18006D5FC (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@QEAUIDCompInputTarget@@V-$vector@KV-$alloca.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@V?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@3@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18006D964 (-_Init@-$_Hash@V-$_Umap_traits@PEAUIDCompInputTarget@@V-$vector@KV-$allocator@K@std@@@std@@V-$_U.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18006E760 (-lower_bound@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V-$_Uhash_.c)
 *     ?GetSizeForPointerCount@PointerInputInfo@@SAKK@Z @ 0x180076044 (-GetSizeForPointerCount@PointerInputInfo@@SAKK@Z.c)
 *     ??$_Emplace_reallocate@AEBW4GamepadButtons@Input@Gaming@Windows@@@?$vector@W4GamepadButtons@Input@Gaming@Windows@@V?$allocator@W4GamepadButtons@Input@Gaming@Windows@@@std@@@std@@QEAAPEAW4GamepadButtons@Input@Gaming@Windows@@QEAW42345@AEBW42345@@Z @ 0x1800796BC (--$_Emplace_reallocate@AEBW4GamepadButtons@Input@Gaming@Windows@@@-$vector@W4GamepadButtons@Inpu.c)
 *     ??$As@UIDCompInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B9B70 (--$As@UIDCompInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$emplace@AEBKI@?$_Hash@V?$_Umap_traits@KIV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKI@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKI@std@@@std@@@std@@@std@@_N@1@AEBK$$QEAI@Z @ 0x1800BA568 (--$emplace@AEBKI@-$_Hash@V-$_Umap_traits@KIV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@st.c)
 *     ??$emplace@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@?$_Hash@V?$_Umap_traits@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@V?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@3@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAPEAUIDCompInputTarget@@$$QEAV?$vector@KV?$allocator@K@std@@@1@@Z @ 0x1800BA60C (--$emplace@PEAUIDCompInputTarget@@V-$vector@KV-$allocator@K@std@@@std@@@-$_Hash@V-$_Umap_traits@.c)
 *     ??0?$_Hash@V?$_Umap_traits@KIV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKI@std@@@2@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@1@AEBV?$allocator@U?$pair@$$CBKI@std@@@1@@Z @ 0x1800BA740 (--0-$_Hash@V-$_Umap_traits@KIV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$allocato.c)
 *     ?CopyFrom@?$VariableSizedPayloadStorage@UInputInfo@@@@QEAAAEAU1@PEBUInputInfo@@@Z @ 0x1800BB9D0 (-CopyFrom@-$VariableSizedPayloadStorage@UInputInfo@@@@QEAAAEAU1@PEBUInputInfo@@@Z.c)
 *     ?InitializeInputMessageWithInputInfo@@YAXPEBUPointerInputInfo@@PEAPEAU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1800BCCE8 (-InitializeInputMessageWithInputInfo@@YAXPEBUPointerInputInfo@@PEAPEAU_MIT_INPUT_INTEROP_MESSAGE.c)
 *     ?RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@PEAX@Z @ 0x1800BEDA0 (-RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@PEAX@Z.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@V?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@3@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@2@AEBQEAUIDCompInputTarget@@@Z @ 0x1800BFB68 (-lower_bound@-$_Hash@V-$_Umap_traits@PEAUIDCompInputTarget@@V-$vector@KV-$allocator@K@std@@@std@.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall Win32kInterop::DeliverInputToAllTargets(__int64 a1, int *a2, __int64 a3)
{
  unsigned __int64 SizeForPointerCount; // rdx
  __int64 v6; // r8
  const char *v7; // r9
  struct PointerInputInfo *v8; // r14
  unsigned int v9; // edi
  __int64 v10; // rax
  int v11; // ebx
  _DWORD *v12; // rcx
  _OWORD *v13; // r8
  int *v14; // rax
  _QWORD *v15; // rbx
  _QWORD *v16; // rsi
  _BYTE *v17; // rdx
  _QWORD *v18; // rdi
  _QWORD *i; // rbx
  unsigned int v20; // eax
  __int64 v21; // r8
  const char *v22; // r9
  __int64 v23; // rdx
  _OWORD *v24; // r8
  struct InputInfo *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // r9
  int *v28; // rax
  void *v29; // rax
  const struct std::nothrow_t *v30; // rdx
  unsigned int v31; // esi
  struct _MIT_INPUT_INTEROP_MESSAGE *v32; // rdi
  unsigned int j; // ebx
  const struct std::nothrow_t *v34; // rdx
  _QWORD *v35; // r8
  void *v36; // rcx
  _QWORD *v37; // rbx
  const struct std::nothrow_t *v38; // rdx
  _QWORD *v39; // rdi
  void *v40; // rcx
  _QWORD *v41; // rbx
  int v43; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int v44; // [rsp+24h] [rbp-DCh] BYREF
  __int64 v45; // [rsp+28h] [rbp-D8h] BYREF
  int v46; // [rsp+30h] [rbp-D0h]
  int v47; // [rsp+34h] [rbp-CCh] BYREF
  int v48; // [rsp+38h] [rbp-C8h] BYREF
  int v49; // [rsp+3Ch] [rbp-C4h] BYREF
  struct InputInfo *v50; // [rsp+40h] [rbp-C0h] BYREF
  struct PointerInputInfo *v51; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v52; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD *v53; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v54; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v55; // [rsp+68h] [rbp-98h]
  __int64 v56; // [rsp+70h] [rbp-90h]
  void *v57; // [rsp+78h] [rbp-88h]
  __int128 v58; // [rsp+80h] [rbp-80h]
  __int128 v59; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v60; // [rsp+B0h] [rbp-50h]
  __int64 v61; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD *v62; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v63; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD *v64; // [rsp+D8h] [rbp-28h] BYREF
  struct _MIT_INPUT_INTEROP_MESSAGE *v65; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD *v66; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD *v67; // [rsp+F0h] [rbp-10h] BYREF
  char v68; // [rsp+F8h] [rbp-8h]
  __int64 v69; // [rsp+100h] [rbp+0h] BYREF
  _QWORD *v70; // [rsp+108h] [rbp+8h]
  __int64 v71; // [rsp+110h] [rbp+10h]
  void *v72; // [rsp+118h] [rbp+18h]
  __int128 v73; // [rsp+120h] [rbp+20h]
  _DWORD *v74; // [rsp+140h] [rbp+40h] BYREF
  char v75; // [rsp+148h] [rbp+48h]
  __int64 v76; // [rsp+150h] [rbp+50h]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v76 = -2LL;
  v46 = 0;
  v56 = 0LL;
  v55 = std::_List_alloc<std::_List_base_types<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>>::_Buynode0(
          a1,
          0LL,
          0LL);
  v57 = 0LL;
  v58 = 0LL;
  *(float *)&v54 = FLOAT_1_0;
  std::_Hash<std::_Umap_traits<IDCompInputTarget *,std::vector<unsigned long>,std::_Uhash_compare<IDCompInputTarget *,DCompTargetHash,DCompTargetEqual>,std::allocator<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>,0>>::_Init(
    &v54,
    8LL);
  SizeForPointerCount = (unsigned int)PointerInputInfo::GetSizeForPointerCount(a2[53]);
  VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>(
    (void **)&v51,
    SizeForPointerCount,
    v6,
    v7);
  VariableSizedPayloadStorage<InputInfo>::CopyFrom((__int64)&v51, a2);
  v8 = v51;
  *((_DWORD *)v51 + 53) = 0;
  v47 = 0;
  std::_Hash<std::_Umap_traits<unsigned long,unsigned int,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned int>>,0>>::_Hash<std::_Umap_traits<unsigned long,unsigned int,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned int>>,0>>(
    &v69,
    &v47);
  v9 = 0;
  v44 = 0;
  if ( a2[53] )
  {
    v10 = 0LL;
    while ( 1 )
    {
      v43 = a2[36 * v10 + 55];
      std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
        a3,
        (__int64)&v61,
        (unsigned __int8 *)&v43);
      if ( v61 == *(_QWORD *)(a3 + 8) )
        break;
      v45 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IDCompInputTarget>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v61 + 24),
                  &v45) >= 0 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v45 + 48LL))(v45) )
        {
          v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 64LL))(v45);
          v48 = v11;
          std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
            (__int64)&v69,
            (__int64)&v62,
            (unsigned __int8 *)&v43);
          v12 = v62;
          if ( v62 == (_DWORD *)v70 )
          {
            std::_Hash<std::_Umap_traits<unsigned long,unsigned int,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned int>>,0>>::emplace<unsigned long const &,unsigned int>(
              (__int64)&v69,
              (__int64)&v74,
              &v43,
              &v48);
          }
          else
          {
            v62[5] = v11;
            v74 = v12;
            v75 = 0;
          }
          v13 = (_OWORD *)((char *)v8 + 144 * *((unsigned int *)v8 + 53) + 216);
          v14 = &a2[36 * v9 + 54];
          *v13 = *(_OWORD *)v14;
          v13[1] = *((_OWORD *)v14 + 1);
          v13[2] = *((_OWORD *)v14 + 2);
          v13[3] = *((_OWORD *)v14 + 3);
          v13[4] = *((_OWORD *)v14 + 4);
          v13[5] = *((_OWORD *)v14 + 5);
          v13[6] = *((_OWORD *)v14 + 6);
          v13[7] = *((_OWORD *)v14 + 7);
          v13[8] = *((_OWORD *)v14 + 8);
          ++*((_DWORD *)v8 + 53);
        }
        else
        {
          v63 = v45;
          std::_Hash<std::_Umap_traits<IDCompInputTarget *,std::vector<unsigned long>,std::_Uhash_compare<IDCompInputTarget *,DCompTargetHash,DCompTargetEqual>,std::allocator<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>,0>>::lower_bound(
            &v54,
            &v53,
            &v63);
          v15 = v53;
          if ( v53 == v55 )
          {
            v52 = v45;
            v59 = 0LL;
            v60 = 0LL;
            std::_Hash<std::_Umap_traits<IDCompInputTarget *,std::vector<unsigned long>,std::_Uhash_compare<IDCompInputTarget *,DCompTargetHash,DCompTargetEqual>,std::allocator<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>,0>>::lower_bound(
              &v54,
              &v64,
              &v52);
            v15 = v64;
            if ( v64 == v55 )
            {
              std::_Hash<std::_Umap_traits<IDCompInputTarget *,std::vector<unsigned long>,std::_Uhash_compare<IDCompInputTarget *,DCompTargetHash,DCompTargetEqual>,std::allocator<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>,0>>::emplace<IDCompInputTarget *,std::vector<unsigned long>>(
                &v54,
                (__int64)&v67,
                &v52,
                &v59);
              v15 = v67;
            }
            else
            {
              v16 = v64 + 3;
              if ( v64 + 3 != (_QWORD *)&v59 )
              {
                std::vector<Windows::UI::Color>::_Tidy((__int64)(v64 + 3));
                *v16 = 0LL;
                v15[4] = 0LL;
                v15[5] = 0LL;
                v59 = 0LL;
                v60 = 0LL;
              }
              v67 = v15;
              v68 = 0;
            }
            v53 = v15;
            std::vector<Windows::UI::Color>::_Tidy((__int64)&v59);
          }
          v17 = (_BYTE *)v15[4];
          if ( (_BYTE *)v15[5] == v17 )
          {
            std::vector<enum Windows::Gaming::Input::GamepadButtons>::_Emplace_reallocate<enum Windows::Gaming::Input::GamepadButtons const &>(
              (void **)v15 + 3,
              v17,
              &v44);
            v9 = v44;
          }
          else
          {
            *(_DWORD *)v17 = v9;
            v15[4] += 4LL;
          }
        }
      }
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v45);
      v44 = ++v9;
      v10 = v9;
      if ( v9 >= a2[53] )
        goto LABEL_21;
    }
    v31 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)0x8000FFFFLL);
  }
  else
  {
LABEL_21:
    v18 = v55;
    for ( i = (_QWORD *)*v55; i != v18; i = (_QWORD *)*i )
    {
      v20 = PointerInputInfo::GetSizeForPointerCount((__int64)(i[4] - i[3]) >> 2);
      VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>((void **)&v50, v20, v21, v22);
      VariableSizedPayloadStorage<InputInfo>::CopyFrom((__int64)&v50, a2);
      v25 = v50;
      v26 = (__int64)(i[4] - i[3]) >> 2;
      *((_DWORD *)v50 + 53) = v26;
      v27 = 0LL;
      if ( (_DWORD)v26 )
      {
        while ( (__int64)(i[4] - i[3]) >> 2 > (unsigned __int64)(unsigned int)v27 )
        {
          _mm_lfence();
          v23 = 36LL * *(unsigned int *)(i[3] + 4LL * (unsigned int)v27);
          v24 = (_OWORD *)((char *)v25 + 144 * (unsigned int)v27 + 216);
          v28 = &a2[v23 + 54];
          *v24 = *(_OWORD *)v28;
          v24[1] = *((_OWORD *)v28 + 1);
          v24[2] = *((_OWORD *)v28 + 2);
          v24[3] = *((_OWORD *)v28 + 3);
          v24[4] = *((_OWORD *)v28 + 4);
          v24[5] = *((_OWORD *)v28 + 5);
          v24[6] = *((_OWORD *)v28 + 6);
          v24[7] = *((_OWORD *)v28 + 7);
          v24[8] = *((_OWORD *)v28 + 8);
          v27 = (unsigned int)(v27 + 1);
          if ( (unsigned int)v27 >= *((_DWORD *)v25 + 53) )
            goto LABEL_26;
        }
        std::_Xout_of_range("invalid vector<T> subscript");
        break;
      }
LABEL_26:
      v29 = (void *)(*(__int64 (__fastcall **)(_QWORD, __int64, _OWORD *, __int64))(*(_QWORD *)i[2] + 56LL))(
                      i[2],
                      v23 * 4,
                      v24,
                      v27);
      Win32kInterop::RoutePointerFrame(v25, v29);
      if ( v50 )
        operator delete(v50, v30);
    }
    if ( *((_DWORD *)v8 + 53) )
    {
      InitializeInputMessageWithInputInfo(v8, &v65);
      v32 = v65;
      for ( j = 0; j < *((_DWORD *)v8 + 53); ++j )
      {
        v49 = *((_DWORD *)v8 + 36 * j + 55);
        std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
          (__int64)&v69,
          (__int64)&v66,
          (unsigned __int8 *)&v49);
        if ( v66 == (_DWORD *)v70 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            1838LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
            (const char *)retaddr);
          __debugbreak();
        }
        *((_DWORD *)v32 + 60 * j + 60) = v66[5];
      }
      ((void (__fastcall *)(struct _MIT_INPUT_INTEROP_MESSAGE *, _QWORD))Win32kInterop::s_pfnMTCallback)(v32, 0LL);
      operator delete(v32, v34);
    }
    v31 = 0;
  }
  if ( v72 )
  {
    std::_Deallocate<16,0>(
      v72,
      (const struct std::nothrow_t *)((*((_QWORD *)&v73 + 1) - (_QWORD)v72) & 0xFFFFFFFFFFFFFFF8uLL));
    v72 = 0LL;
    v73 = 0LL;
  }
  v35 = (_QWORD *)*v70;
  *v70 = v70;
  v70[1] = v70;
  v71 = 0LL;
  v36 = v70;
  if ( v35 != v70 )
  {
    do
    {
      v37 = (_QWORD *)*v35;
      std::_Deallocate<16,0>(v35, (const struct std::nothrow_t *)0x18);
      v35 = v37;
      v36 = v70;
    }
    while ( v37 != v70 );
  }
  std::_Deallocate<16,0>(v36, (const struct std::nothrow_t *)0x18);
  if ( v51 )
    operator delete(v51, v38);
  if ( v57 )
  {
    std::_Deallocate<16,0>(
      v57,
      (const struct std::nothrow_t *)((*((_QWORD *)&v58 + 1) - (_QWORD)v57) & 0xFFFFFFFFFFFFFFF8uLL));
    v57 = 0LL;
    v58 = 0LL;
  }
  v39 = (_QWORD *)*v55;
  *v55 = v55;
  v55[1] = v55;
  v56 = 0LL;
  v40 = v55;
  if ( v39 != v55 )
  {
    do
    {
      v41 = (_QWORD *)*v39;
      std::vector<Windows::UI::Color>::_Tidy((__int64)(v39 + 3));
      std::_Deallocate<16,0>(v39, (const struct std::nothrow_t *)0x30);
      v39 = v41;
      v40 = v55;
    }
    while ( v41 != v55 );
  }
  std::_Deallocate<16,0>(v40, (const struct std::nothrow_t *)0x30);
  return v31;
}
