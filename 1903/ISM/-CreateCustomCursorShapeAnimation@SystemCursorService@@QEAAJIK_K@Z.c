/*
 * XREFs of ?CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z @ 0x1800CC8EC
 * Callers:
 *     ?CreateCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K@Z @ 0x1800C9B10 (-CreateCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStu.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x1800195E8 (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B220 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VSystemCursorService@@@std@@QEAA?AV?$shared_ptr@VSystemCursorService@@@2@XZ @ 0x180035AA4 (-shared_from_this@-$enable_shared_from_this@VSystemCursorService@@@std@@QEAA-AV-$shared_ptr@VSys.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??$_Lbound@_K@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAX@1@AEB_K@Z @ 0x1800C8B1C (--$_Lbound@_K@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@VSystemCursorShape@@@std@@U-$less@_K@2@V-$.c)
 *     ??4?$shared_ptr@VCustomCursorApplication@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800C9104 (--4-$shared_ptr@VCustomCursorApplication@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?CustomShapeExists@SystemCursorService@@QEBA_N_K@Z @ 0x1800C9DA8 (-CustomShapeExists@SystemCursorService@@QEBA_N_K@Z.c)
 *     ?SendCustomCursorAnimationCreatedCallback@SystemCursorController@@QEAAJI_K00@Z @ 0x1800CAAC8 (-SendCustomCursorAnimationCreatedCallback@SystemCursorController@@QEAAJI_K00@Z.c)
 *     ?ShapeExists@SystemCursor@@QEBA_N_K@Z @ 0x1800CAB68 (-ShapeExists@SystemCursor@@QEBA_N_K@Z.c)
 *     ?lock@?$weak_ptr@VSystemCursor@@@std@@QEBA?AV?$shared_ptr@VSystemCursor@@@2@XZ @ 0x1800CB36C (-lock@-$weak_ptr@VSystemCursor@@@std@@QEBA-AV-$shared_ptr@VSystemCursor@@@2@XZ.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800CB560 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEB_K@2@V-$tuple@$$V@2@@-$_Tree_comp_alloc@V.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@std@@@std@@@1@AEAU?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAX@1@@Z @ 0x1800CB75C (--$_Insert_hint@AEAU-$pair@$$CB_KV-$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAU-$_Tree_node@.c)
 *     ??$make_shared@VSystemCursorShape@@V?$shared_ptr@VSystemCursorService@@@std@@AEA_KAEAV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@YA?AV?$shared_ptr@VSystemCursorShape@@@0@$$QEAV?$shared_ptr@VSystemCursorService@@@0@AEA_KAEAV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@Z @ 0x1800CBB10 (--$make_shared@VSystemCursorShape@@V-$shared_ptr@VSystemCursorService@@@std@@AEA_KAEAV-$ComPtr@V.c)
 *     ?AddShape@SystemCursor@@QEAAJV?$shared_ptr@VSystemCursorShape@@@std@@@Z @ 0x1800CBE28 (-AddShape@SystemCursor@@QEAAJV-$shared_ptr@VSystemCursorShape@@@std@@@Z.c)
 *     ?Initialize@SystemCursorShape@@QEAAJXZ @ 0x1800CD620 (-Initialize@SystemCursorShape@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall SystemCursorService::CreateCustomCursorShapeAnimation(
        SystemCursorService *this,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4)
{
  __int64 *v7; // rsi
  __int64 v8; // rdx
  unsigned int v9; // ebx
  struct IAnimationDataProvider *AnimationDataProvider; // rax
  __int64 *v11; // rax
  int v12; // eax
  std::_Ref_count_base *v13; // rdi
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 *v16; // rbx
  _QWORD *v17; // rax
  int v18; // eax
  struct IAnimationDataProvider *v19; // rbx
  __int64 (__fastcall *v20)(struct IAnimationDataProvider *, void (__fastcall ****)(_QWORD)); // rsi
  unsigned __int64 v21; // rbx
  struct IAnimationDataProvider *v22; // rax
  __int64 v23; // rax
  void (__fastcall ***v24)(_QWORD); // rcx
  void (__fastcall ***v26)(_QWORD); // [rsp+38h] [rbp-59h] BYREF
  std::_Ref_count_base *v27[2]; // [rsp+48h] [rbp-49h] BYREF
  unsigned __int64 *v28; // [rsp+58h] [rbp-39h] BYREF
  __int64 v29[3]; // [rsp+60h] [rbp-31h] BYREF
  __int128 v30; // [rsp+78h] [rbp-19h] BYREF
  SystemCursor *v31; // [rsp+88h] [rbp-9h] BYREF
  std::_Ref_count_base *v32; // [rsp+90h] [rbp-1h]
  __int64 v33; // [rsp+98h] [rbp+7h]
  __int64 v34; // [rsp+A0h] [rbp+Fh] BYREF
  std::_Ref_count_base *v35; // [rsp+A8h] [rbp+17h]
  __int64 *v36; // [rsp+B0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]
  void (__fastcall ***v38)(_QWORD); // [rsp+F8h] [rbp+67h] BYREF
  unsigned __int64 v39; // [rsp+110h] [rbp+7Fh] BYREF

  v39 = a4;
  v33 = -2LL;
  std::weak_ptr<SystemCursor>::lock((__int64)this + 168, &v31);
  v7 = (__int64 *)v31;
  if ( v31 && SystemCursor::ShapeExists(v31, v39) )
  {
    v8 = 161LL;
LABEL_6:
    v9 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)0x8000FFFFLL);
    goto LABEL_26;
  }
  if ( SystemCursorService::CustomShapeExists(this, v39) )
  {
    v8 = 164LL;
    goto LABEL_6;
  }
  AnimationDataProvider = ISMStatics::GetAnimationDataProvider();
  (*(void (__fastcall **)(struct IAnimationDataProvider *, void (__fastcall ****)(_QWORD), _QWORD))(*(_QWORD *)AnimationDataProvider
                                                                                                  + 24LL))(
    AnimationDataProvider,
    &v38,
    a3);
  v11 = (__int64 *)std::enable_shared_from_this<SystemCursorService>::shared_from_this((__int64)this + 8, &v34);
  std::make_shared<SystemCursorShape,std::shared_ptr<SystemCursorService>,unsigned __int64 &,Microsoft::WRL::ComPtr<DataSourcePrincipal> &>(
    v27,
    v11,
    &v39,
    &v38);
  if ( v35 )
    std::_Ref_count_base::_Decref(v35);
  v12 = SystemCursorShape::Initialize(v27[0]);
  v9 = v12;
  if ( v12 >= 0 )
  {
    v14 = std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Lbound<unsigned __int64>(
            (__int64 *)this + 19,
            &v39);
    v16 = v14;
    v29[1] = (__int64)v14;
    if ( v14 == *((__int64 **)this + 19) || v39 < v14[4] )
    {
      v28 = &v39;
      v17 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned __int64 const &>,std::tuple<>>(
              (_QWORD *)this + 19,
              v15,
              &v28);
      std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Insert_hint<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>> &,std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>,void *> *>(
        (__int64 *)this + 19,
        v29,
        v16,
        v17 + 4,
        v17);
      v16 = (__int64 *)v29[0];
    }
    v36 = v16;
    std::shared_ptr<CustomCursorApplication>::operator=(v16 + 5, v27);
    v13 = v27[1];
    if ( !v7 )
      goto LABEL_19;
    v30 = 0LL;
    if ( v27[1] )
    {
      _InterlockedIncrement((volatile signed __int32 *)v27[1] + 2);
      v7 = (__int64 *)v31;
      v13 = v27[1];
    }
    v30 = *(_OWORD *)v27;
    v18 = SystemCursor::AddShape(v7, (unsigned __int64 **)&v30);
    v9 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB1,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorservice.cpp",
        (const char *)(unsigned int)v18);
    }
    else
    {
LABEL_19:
      v19 = ISMStatics::GetAnimationDataProvider();
      v20 = *(__int64 (__fastcall **)(struct IAnimationDataProvider *, void (__fastcall ****)(_QWORD)))(*(_QWORD *)v19 + 40LL);
      v26 = v38;
      if ( v38 )
        (**v38)(v38);
      v21 = v20(v19, &v26);
      v22 = ISMStatics::GetAnimationDataProvider();
      v23 = (*(__int64 (__fastcall **)(struct IAnimationDataProvider *))(*(_QWORD *)v22 + 32LL))(v22);
      SystemCursorController::SendCustomCursorAnimationCreatedCallback(
        *((SystemCursorController **)this + 4),
        a2,
        v39,
        v23,
        v21);
      v9 = 0;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAB,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)(unsigned int)v12);
    v13 = v27[1];
  }
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  v24 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    (*v24)[1](v24);
  }
LABEL_26:
  if ( v32 )
    std::_Ref_count_base::_Decref(v32);
  return v9;
}
