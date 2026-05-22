/*
 * XREFs of ?CreateCursorForDevice@SystemCursorService@@QEAAJ_K@Z @ 0x1800CC090
 * Callers:
 *     ?CreateCursorForDevice@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K@Z @ 0x1800C94C0 (-CreateCursorForDevice@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AEA0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B050 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C41C (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?shared_from_this@?$enable_shared_from_this@VSystemCursorService@@@std@@QEAA?AV?$shared_ptr@VSystemCursorService@@@2@XZ @ 0x1800355B4 (-shared_from_this@-$enable_shared_from_this@VSystemCursorService@@@std@@QEAA-AV-$shared_ptr@VSys.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800563B0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lower_bound@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@@2@AEBQEAUIHeatSystemContextClient@@@Z @ 0x180056710 (-lower_bound@-$_Hash@V-$_Uset_traits@PEAUIHeatSystemContextClient@@V-$_Uhash_compare@PEAUIHeatSy.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180059990 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18007BE74 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800C89B0 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEB_K@2@V-$tuple@$$V@2@@-$_Hash@_ea_1800C89B0.c)
 *     ?CursorExists@SystemCursorService@@QEAA_N_K@Z @ 0x1800C9B30 (-CursorExists@SystemCursorService@@QEAA_N_K@Z.c)
 *     ?SendAttachCustomCursorVisual@SystemCursorController@@QEAAJ_KPEAX@Z @ 0x1800CA7B4 (-SendAttachCustomCursorVisual@SystemCursorController@@QEAAJ_KPEAX@Z.c)
 *     ?lock@?$weak_ptr@VSystemCursor@@@std@@QEBA?AV?$shared_ptr@VSystemCursor@@@2@XZ @ 0x1800CB12C (-lock@-$weak_ptr@VSystemCursor@@@std@@QEBA-AV-$shared_ptr@VSystemCursor@@@2@XZ.c)
 *     ??$?0V?$shared_ptr@VSystemCursorService@@@std@@AEA_K@?$_Ref_count_obj@VSystemCursor@@@std@@QEAA@$$QEAV?$shared_ptr@VSystemCursorService@@@1@AEA_K@Z @ 0x1800CB170 (--$-0V-$shared_ptr@VSystemCursorService@@@std@@AEA_K@-$_Ref_count_obj@VSystemCursor@@@std@@QEAA@.c)
 *     ?AddShape@SystemCursor@@QEAAJV?$shared_ptr@VSystemCursorShape@@@std@@@Z @ 0x1800CBBE8 (-AddShape@SystemCursor@@QEAAJV-$shared_ptr@VSystemCursorShape@@@std@@@Z.c)
 *     ?CreateCursorForDevice@Cursor@InputTraceLogging@@SAX_KPEBX@Z @ 0x1800CBFE0 (-CreateCursorForDevice@Cursor@InputTraceLogging@@SAX_KPEBX@Z.c)
 *     ?CreateCustomCursorSharedTarget@SystemCursor@@QEAAJPEAUIContainerVisual@Composition@UI@Windows@@PEAPEAX@Z @ 0x1800CC974 (-CreateCustomCursorSharedTarget@SystemCursor@@QEAAJPEAUIContainerVisual@Composition@UI@Windows@@.c)
 *     ?RefreshShapeVisibilityData@SystemCursor@@QEAAXXZ @ 0x1800CD938 (-RefreshShapeVisibilityData@SystemCursor@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SystemCursorService::CreateCursorForDevice(SystemCursorService *this, unsigned __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *i; // rdx
  char v6; // al
  _QWORD *v7; // rbx
  volatile signed __int32 *v8; // rdi
  char v9; // r15
  volatile signed __int32 *v10; // r14
  __int64 v11; // r8
  __int64 v12; // rax
  std::_Ref_count_base *v13; // rcx
  bool v14; // bl
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rdx
  int v18; // eax
  _QWORD *v19; // rbx
  _QWORD *v20; // rax
  __int64 v21; // rdx
  int v22; // eax
  std::_Ref_count_base *v23; // rcx
  __int128 v25; // [rsp+30h] [rbp-79h] BYREF
  volatile signed __int32 *v26; // [rsp+40h] [rbp-69h]
  volatile signed __int32 *v27; // [rsp+48h] [rbp-61h]
  void *v28; // [rsp+50h] [rbp-59h] BYREF
  void *v29; // [rsp+58h] [rbp-51h] BYREF
  __int128 v30; // [rsp+60h] [rbp-49h]
  __int64 v31; // [rsp+70h] [rbp-39h] BYREF
  __int128 v32; // [rsp+80h] [rbp-29h]
  __int64 v33; // [rsp+90h] [rbp-19h]
  _QWORD *v34; // [rsp+98h] [rbp-11h]
  __int64 v35; // [rsp+A0h] [rbp-9h] BYREF
  std::_Ref_count_base *v36; // [rsp+A8h] [rbp-1h]
  __int64 v37; // [rsp+B0h] [rbp+7h] BYREF
  std::_Ref_count_base *v38; // [rsp+B8h] [rbp+Fh]
  std::_Ref_count_base *v39; // [rsp+C8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]
  _QWORD *v41; // [rsp+110h] [rbp+67h] BYREF
  unsigned __int64 v42; // [rsp+118h] [rbp+6Fh] BYREF
  __int64 v43; // [rsp+120h] [rbp+77h] BYREF
  unsigned __int64 *v44; // [rsp+128h] [rbp+7Fh] BYREF

  v42 = a2;
  v33 = -2LL;
  LODWORD(v41) = 0;
  v30 = 0uLL;
  v32 = 0uLL;
  v4 = (_QWORD *)*((_QWORD *)this + 14);
  v34 = v4;
  for ( i = (_QWORD *)*((_QWORD *)this + 13); i != v4 && *i != a2; i += 2 )
    ;
  if ( i == v4 )
  {
    v6 = 1;
  }
  else
  {
    v32 = *(_OWORD *)i;
    v6 = 0;
  }
  if ( v6 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      60LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  if ( SystemCursorService::CursorExists(this, a2) )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      62LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  v7 = (_QWORD *)std::enable_shared_from_this<SystemCursorService>::shared_from_this((__int64)this + 8, &v35);
  v41 = operator new(0x60uLL);
  v8 = (volatile signed __int32 *)std::_Ref_count_obj<SystemCursor>::_Ref_count_obj<SystemCursor>(
                                    (__int64)v41,
                                    v7,
                                    &v42);
  v9 = 4;
  v10 = v8 + 4;
  v26 = v8 + 4;
  v27 = v8;
  if ( v36 )
    std::_Ref_count_base::_Decref(v36);
  std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::lower_bound(
    (__int64)this + 40,
    (__int64)&v43,
    (unsigned __int8 *)&v42);
  v12 = v43;
  if ( v43 == *((_QWORD *)this + 6) )
  {
    v44 = &v42;
    std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<unsigned __int64 const &>,std::tuple<>>(
      (__int64)this + 40,
      (__int64)&v31,
      v11,
      &v44);
    v12 = v31;
  }
  else
  {
    v31 = v43;
  }
  if ( v8 )
  {
    _InterlockedIncrement(v8 + 2);
    v10 = v26;
  }
  *(_QWORD *)(v12 + 24) = v10;
  v39 = *(std::_Ref_count_base **)(v12 + 32);
  v13 = v39;
  *(_QWORD *)(v12 + 32) = v8;
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  InputTraceLogging::Cursor::CreateCursorForDevice(v42, (const void *)v10);
  v14 = 0;
  if ( !DWORD2(v32) )
  {
    v9 = 5;
    if ( !*std::weak_ptr<SystemCursor>::lock((__int64)this + 168, &v37) )
      v14 = 1;
  }
  if ( (v9 & 1) != 0 && v38 )
    std::_Ref_count_base::_Decref(v38);
  if ( v14 )
  {
    v15 = SystemCursor::CreateCustomCursorSharedTarget(
            (SystemCursor *)v10,
            *((struct Windows::UI::Composition::IContainerVisual **)this + 18),
            &v28);
    v16 = v15;
    if ( v15 < 0 )
    {
      v17 = 85LL;
LABEL_35:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorservice.cpp",
        (const char *)(unsigned int)v15);
      goto LABEL_48;
    }
    v18 = NtDCompositionDuplicateHandleToProcess(v28, *((unsigned int *)this + 32), &v29);
    if ( v18 < 0 )
    {
      v16 = wil::details::in1diag3::Return_NtStatus(
              retaddr,
              (void *)0x5E,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\l"
                       "ib\\systemcursorservice.cpp",
              (const char *)(unsigned int)v18);
      goto LABEL_48;
    }
    v15 = SystemCursorController::SendAttachCustomCursorVisual(*((SystemCursorController **)this + 4), v42, v29);
    v16 = v15;
    if ( v15 < 0 )
    {
      v17 = 98LL;
      goto LABEL_35;
    }
    v19 = (_QWORD *)*((_QWORD *)this + 19);
    v20 = (_QWORD *)*v19;
    v41 = (_QWORD *)*v19;
    while ( v20 != v19 )
    {
      v25 = 0LL;
      v21 = v20[6];
      if ( v21 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v21 + 8));
        v21 = v20[6];
        v10 = v26;
      }
      *(_QWORD *)&v25 = v20[5];
      *((_QWORD *)&v25 + 1) = v21;
      v22 = SystemCursor::AddShape((__int64 *)v10, (unsigned __int64 **)&v25);
      if ( v22 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          104LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorservice.cpp",
          (const char *)(unsigned int)v22);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v41);
      v20 = v41;
    }
    SystemCursor::RefreshShapeVisibilityData((SystemCursor *)v10);
    if ( v8 )
    {
      _InterlockedIncrement(v8 + 3);
      v10 = v26;
    }
    *((_QWORD *)this + 21) = v10;
    v23 = (std::_Ref_count_base *)*((_QWORD *)this + 22);
    *((_QWORD *)this + 22) = v8;
    if ( v23 )
      std::_Ref_count_base::_Decwref(v23);
  }
  v16 = 0;
LABEL_48:
  if ( v8 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v8);
  return v16;
}
