/*
 * XREFs of ?CreateCursorShapeAnimation@SystemCursorService@@QEAAJIK_K0@Z @ 0x1800CC630
 * Callers:
 *     ?CreateCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1@Z @ 0x1800C98D0 (-CreateCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x1800195E8 (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B220 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VSystemCursorService@@@std@@QEAA?AV?$shared_ptr@VSystemCursorService@@@2@XZ @ 0x180035AA4 (-shared_from_this@-$enable_shared_from_this@VSystemCursorService@@@std@@QEAA-AV-$shared_ptr@VSys.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?lower_bound@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@@2@AEBQEAUIHeatSystemContextClient@@@Z @ 0x1800569B0 (-lower_bound@-$_Hash@V-$_Uset_traits@PEAUIHeatSystemContextClient@@V-$_Uhash_compare@PEAUIHeatSy.c)
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800C8BF0 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEB_K@2@V-$tuple@$$V@2@@-$_Hash@_ea_1800C8BF0.c)
 *     ?CursorExists@SystemCursorService@@QEAA_N_K@Z @ 0x1800C9D70 (-CursorExists@SystemCursorService@@QEAA_N_K@Z.c)
 *     ?SendCursorAnimationCreatedCallback@SystemCursorController@@QEAAJI_K000@Z @ 0x1800CAA48 (-SendCursorAnimationCreatedCallback@SystemCursorController@@QEAAJI_K000@Z.c)
 *     ?ShapeExists@SystemCursor@@QEBA_N_K@Z @ 0x1800CAB68 (-ShapeExists@SystemCursor@@QEBA_N_K@Z.c)
 *     ??$make_shared@VSystemCursorShape@@V?$shared_ptr@VSystemCursorService@@@std@@AEA_KAEAV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@YA?AV?$shared_ptr@VSystemCursorShape@@@0@$$QEAV?$shared_ptr@VSystemCursorService@@@0@AEA_KAEAV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@Z @ 0x1800CBB10 (--$make_shared@VSystemCursorShape@@V-$shared_ptr@VSystemCursorService@@@std@@AEA_KAEAV-$ComPtr@V.c)
 *     ?AddShape@SystemCursor@@QEAAJV?$shared_ptr@VSystemCursorShape@@@std@@@Z @ 0x1800CBE28 (-AddShape@SystemCursor@@QEAAJV-$shared_ptr@VSystemCursorShape@@@std@@@Z.c)
 *     ?Initialize@SystemCursorShape@@QEAAJXZ @ 0x1800CD620 (-Initialize@SystemCursorShape@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall SystemCursorService::CreateCursorShapeAnimation(
        SystemCursorService *this,
        int a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  unsigned int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // rax
  volatile signed __int32 *v11; // rsi
  __int64 *v12; // r14
  struct IAnimationDataProvider *AnimationDataProvider; // rax
  __int64 *v14; // rax
  int v15; // eax
  std::_Ref_count_base *v16; // rdi
  int v17; // eax
  struct IAnimationDataProvider *v18; // rbx
  __int64 (__fastcall *v19)(struct IAnimationDataProvider *, void (__fastcall ****)(_QWORD)); // r14
  unsigned __int64 v20; // rbx
  struct IAnimationDataProvider *v21; // rax
  unsigned __int64 v22; // rax
  void (__fastcall ***v23)(_QWORD); // rcx
  void (__fastcall ***v25)(_QWORD); // [rsp+38h] [rbp-51h] BYREF
  void (__fastcall ***v26)(_QWORD); // [rsp+40h] [rbp-49h] BYREF
  __int128 v27; // [rsp+48h] [rbp-41h] BYREF
  std::_Ref_count_base *v28[2]; // [rsp+58h] [rbp-31h] BYREF
  __int64 v29; // [rsp+68h] [rbp-21h] BYREF
  unsigned __int64 *v30; // [rsp+70h] [rbp-19h] BYREF
  _QWORD v31[5]; // [rsp+78h] [rbp-11h] BYREF
  __int64 v32; // [rsp+A0h] [rbp+17h] BYREF
  std::_Ref_count_base *v33; // [rsp+A8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+57h]
  unsigned __int64 v35; // [rsp+100h] [rbp+77h] BYREF

  v35 = a4;
  v31[2] = -2LL;
  if ( SystemCursorService::CursorExists(this, a4) )
  {
    std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::lower_bound(
      (__int64)this + 40,
      (__int64)&v29,
      (unsigned __int8 *)&v35);
    v10 = v29;
    if ( v29 == *((_QWORD *)this + 6) )
    {
      v30 = &v35;
      std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<unsigned __int64 const &>,std::tuple<>>(
        (__int64)this + 40,
        (__int64)v31,
        v9,
        &v30);
      v10 = v31[0];
    }
    else
    {
      v31[0] = v29;
    }
    v11 = *(volatile signed __int32 **)(v10 + 32);
    if ( v11 )
    {
      _InterlockedIncrement(v11 + 2);
      v11 = *(volatile signed __int32 **)(v10 + 32);
    }
    v12 = *(__int64 **)(v10 + 24);
    v31[3] = v12;
    v31[4] = v11;
    if ( SystemCursor::ShapeExists((SystemCursor *)v12, a5) )
    {
      v8 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x82,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorservice.cpp",
        (const char *)0x8000FFFFLL);
    }
    else
    {
      AnimationDataProvider = ISMStatics::GetAnimationDataProvider();
      (*(void (__fastcall **)(struct IAnimationDataProvider *, void (__fastcall ****)(_QWORD), _QWORD))(*(_QWORD *)AnimationDataProvider + 24LL))(
        AnimationDataProvider,
        &v25,
        a3);
      v14 = (__int64 *)std::enable_shared_from_this<SystemCursorService>::shared_from_this((__int64)this + 8, &v32);
      std::make_shared<SystemCursorShape,std::shared_ptr<SystemCursorService>,unsigned __int64 &,Microsoft::WRL::ComPtr<DataSourcePrincipal> &>(
        v28,
        v14,
        &a5,
        &v25);
      if ( v33 )
        std::_Ref_count_base::_Decref(v33);
      v15 = SystemCursorShape::Initialize(v28[0]);
      v8 = v15;
      if ( v15 >= 0 )
      {
        v27 = 0LL;
        v16 = v28[1];
        if ( v28[1] )
        {
          _InterlockedIncrement((volatile signed __int32 *)v28[1] + 2);
          v16 = v28[1];
        }
        v27 = *(_OWORD *)v28;
        v17 = SystemCursor::AddShape(v12, (unsigned __int64 **)&v27);
        v8 = v17;
        if ( v17 >= 0 )
        {
          v18 = ISMStatics::GetAnimationDataProvider();
          v19 = *(__int64 (__fastcall **)(struct IAnimationDataProvider *, void (__fastcall ****)(_QWORD)))(*(_QWORD *)v18 + 40LL);
          v26 = v25;
          if ( v25 )
            (**v25)(v25);
          v20 = v19(v18, &v26);
          v21 = ISMStatics::GetAnimationDataProvider();
          v22 = (*(__int64 (__fastcall **)(struct IAnimationDataProvider *))(*(_QWORD *)v21 + 32LL))(v21);
          SystemCursorController::SendCursorAnimationCreatedCallback(
            *((SystemCursorController **)this + 4),
            a2,
            v35,
            a5,
            v22,
            v20);
          v8 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x8A,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib"
                     "\\systemcursorservice.cpp",
            (const char *)(unsigned int)v17);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x89,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorservice.cpp",
          (const char *)(unsigned int)v15);
        v16 = v28[1];
      }
      if ( v16 )
        std::_Ref_count_base::_Decref(v16);
      v23 = v25;
      if ( v25 )
      {
        v25 = 0LL;
        (*v23)[1](v23);
      }
    }
    if ( v11 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v11);
  }
  else
  {
    v8 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)0x80070057LL);
  }
  return v8;
}
