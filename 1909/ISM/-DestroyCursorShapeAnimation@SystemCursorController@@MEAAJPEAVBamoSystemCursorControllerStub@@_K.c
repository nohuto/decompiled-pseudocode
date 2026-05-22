/*
 * XREFs of ?DestroyCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1@Z @ 0x1800C9C90
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AEA0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?lower_bound@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@@2@AEBQEAUIHeatSystemContextClient@@@Z @ 0x180056710 (-lower_bound@-$_Hash@V-$_Uset_traits@PEAUIHeatSystemContextClient@@V-$_Uhash_compare@PEAUIHeatSy.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059B94 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800C89B0 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEB_K@2@V-$tuple@$$V@2@@-$_Hash@_ea_1800C89B0.c)
 *     ?CursorExists@SystemCursorService@@QEAA_N_K@Z @ 0x1800C9B30 (-CursorExists@SystemCursorService@@QEAA_N_K@Z.c)
 *     ?ShapeExists@SystemCursor@@QEBA_N_K@Z @ 0x1800CA928 (-ShapeExists@SystemCursor@@QEBA_N_K@Z.c)
 *     ?RemoveShape@SystemCursor@@QEAAX_K@Z @ 0x1800CD9AC (-RemoveShape@SystemCursor@@QEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemCursorController::DestroyCursorShapeAnimation(
        SystemCursorController *this,
        struct BamoSystemCursorControllerStub *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  SystemCursorService *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rax
  volatile signed __int32 *v10; // rbx
  SystemCursor *v11; // rdi
  const char *v12; // r9
  __int64 result; // rax
  __int64 v14; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v15[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v16; // [rsp+48h] [rbp-30h] BYREF
  SystemCursor *v17; // [rsp+58h] [rbp-20h]
  volatile signed __int32 *v18; // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v20; // [rsp+80h] [rbp+8h] BYREF

  v15[1] = (_QWORD *)-2LL;
  if ( !*((_QWORD *)this + 12) )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      240LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorcontroller.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  try
  {
    if ( *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 7) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 7) + 16LL))
                   + 36) != *((_DWORD *)this + 18) )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        245LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)0x80070005LL);
    if ( HIBYTE(a4) )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        251LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)0x80070057LL);
    v7 = (SystemCursorService *)*((_QWORD *)this + 12);
    if ( !SystemCursorService::CursorExists(v7, a3) )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        253LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)0x80070057LL);
    v20 = a3;
    std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::lower_bound(
      (__int64)v7 + 40,
      (__int64)&v14,
      (unsigned __int8 *)&v20);
    v9 = v14;
    if ( v14 == *((_QWORD *)v7 + 6) )
    {
      v15[0] = &v20;
      std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<unsigned __int64 const &>,std::tuple<>>(
        (__int64)v7 + 40,
        (__int64)&v16,
        v8,
        v15);
      v9 = v16;
    }
    else
    {
      v16 = v14;
    }
    v10 = *(volatile signed __int32 **)(v9 + 32);
    if ( v10 )
    {
      _InterlockedIncrement(v10 + 2);
      v10 = *(volatile signed __int32 **)(v9 + 32);
    }
    v17 = *(SystemCursor **)(v9 + 24);
    v11 = v17;
    v18 = v10;
    if ( !SystemCursor::ShapeExists(v17, a4) )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        256LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)0x80070057LL);
    SystemCursor::RemoveShape(v11, a4);
    if ( v10 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v10);
    result = 0LL;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x107,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorcontroller.cpp",
      v12);
    return 0LL;
  }
  return result;
}
