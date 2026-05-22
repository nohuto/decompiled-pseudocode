/*
 * XREFs of ?CreateCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K@Z @ 0x1800C9B10
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B220 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059E14 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Insert@AEBQEAUIHeatSystemContextClient@@U_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@@std@@_N@1@AEBQEAUIHeatSystemContextClient@@U_Not_a_node_tag@1@@Z @ 0x18007A9FC (--$_Insert@AEBQEAUIHeatSystemContextClient@@U_Not_a_node_tag@std@@@-$_Hash@V-$_Uset_traits@PEAUI.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IV?$shared_ptr@VCustomCursorApplication@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x1800C8B50 (--$_Try_emplace@AEBI$$V@-$map@IV-$shared_ptr@VCustomCursorApplication@@@std@@U-$less@I@2@V-$allo.c)
 *     ?IsApplicationPeer@SystemCursorController@@AEAA_NI@Z @ 0x1800CA710 (-IsApplicationPeer@SystemCursorController@@AEAA_NI@Z.c)
 *     ?CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z @ 0x1800CC8EC (-CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z.c)
 *     ?count@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEBA_KAEB_K@Z @ 0x1800CE17C (-count@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$a.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemCursorController::CreateCustomCursorShapeAnimation(
        SystemCursorController *this,
        struct BamoSystemCursorControllerStub *a2,
        unsigned __int64 a3)
{
  unsigned int v6; // r15d
  unsigned int v7; // edx
  wil::details::in1diag3 *v9; // r10
  __int64 v10; // rax
  volatile signed __int32 *v11; // rbx
  __int64 v12; // r14
  int CustomCursorShapeAnimation; // eax
  const char *v14; // r9
  __int64 v16; // [rsp+28h] [rbp-60h] BYREF
  __int64 v17; // [rsp+38h] [rbp-50h]
  volatile signed __int32 *v18; // [rsp+40h] [rbp-48h]
  _BYTE v19[64]; // [rsp+48h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v21; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v22; // [rsp+A0h] [rbp+18h]
  unsigned __int64 v23; // [rsp+A8h] [rbp+20h] BYREF

  v22 = a3;
  if ( !*((_QWORD *)this + 12) )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      201LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorcontroller.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  try
  {
    v21 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 7) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 7) + 16LL))
                    + 36);
    v6 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 7) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 7) + 16LL))
                   + 32);
    v7 = v21;
    if ( v21 != *((_DWORD *)this + 18) && !SystemCursorController::IsApplicationPeer(this, v21) )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        205LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)0x80070005LL);
    if ( HIBYTE(a3) != 1 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        211LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)0x8000FFFFLL);
    if ( *(_DWORD *)((char *)&v22 + 2) != v6 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        215LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)0x80070005LL);
    if ( !SystemCursorController::IsApplicationPeer(this, v7) )
      wil::details::in1diag3::_Throw_Hr(
        v9,
        216LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)0x8000FFFFLL);
    std::map<unsigned int,std::shared_ptr<CustomCursorApplication>>::_Try_emplace<unsigned int const &,>(
      (__int64 *)this + 10,
      (__int64)&v16,
      &v21);
    v10 = v16;
    v11 = *(volatile signed __int32 **)(v16 + 48);
    if ( v11 )
    {
      _InterlockedIncrement(v11 + 2);
      v11 = *(volatile signed __int32 **)(v10 + 48);
    }
    v17 = *(_QWORD *)(v10 + 40);
    v18 = v11;
    v23 = a3;
    v12 = v17 + 16;
    if ( !std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::count(
            v17 + 16,
            &v23) )
      std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::_Insert<IHeatSystemContextClient * const &,std::_Not_a_node_tag>(
        v12,
        (__int64)v19,
        (unsigned __int8 *)&v23);
    CustomCursorShapeAnimation = SystemCursorService::CreateCustomCursorShapeAnimation(
                                   *((SystemCursorService **)this + 12),
                                   v21,
                                   v6,
                                   a3);
    if ( CustomCursorShapeAnimation < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        226LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)(unsigned int)CustomCursorShapeAnimation);
    if ( v11 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v11);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xE4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorcontroller.cpp",
      v14);
  }
  return 0LL;
}
