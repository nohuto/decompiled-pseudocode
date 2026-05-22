/*
 * XREFs of ?DestroyCustomCursorShapeAnimation@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K@Z @ 0x1800C9F70
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AEA0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059B94 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IV?$shared_ptr@VCustomCursorApplication@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x1800C8910 (--$_Try_emplace@AEBI$$V@-$map@IV-$shared_ptr@VCustomCursorApplication@@@std@@U-$less@I@2@V-$allo.c)
 *     ?CustomShapeExists@SystemCursorService@@QEBA_N_K@Z @ 0x1800C9B68 (-CustomShapeExists@SystemCursorService@@QEBA_N_K@Z.c)
 *     ?IsApplicationPeer@SystemCursorController@@AEAA_NI@Z @ 0x1800CA4D0 (-IsApplicationPeer@SystemCursorController@@AEAA_NI@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x1800CB03C (-erase@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@VSystemCursorShape@@@std@@U-$less@_K@2@V-$allocat.c)
 *     ?lock@?$weak_ptr@VSystemCursor@@@std@@QEBA?AV?$shared_ptr@VSystemCursor@@@2@XZ @ 0x1800CB12C (-lock@-$weak_ptr@VSystemCursor@@@std@@QEBA-AV-$shared_ptr@VSystemCursor@@@2@XZ.c)
 *     ?RemoveShape@SystemCursor@@QEAAX_K@Z @ 0x1800CD9AC (-RemoveShape@SystemCursor@@QEAAX_K@Z.c)
 *     ?count@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEBA_KAEB_K@Z @ 0x1800CDF3C (-count@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$a.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x1800CE010 (-erase@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$a.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemCursorController::DestroyCustomCursorShapeAnimation(
        SystemCursorController *this,
        struct BamoSystemCursorControllerStub *a2,
        unsigned __int64 a3)
{
  int v6; // r9d
  unsigned int v7; // edx
  wil::details::in1diag3 *v9; // r10
  __int64 v10; // rax
  volatile signed __int32 *v11; // rbx
  __int64 v12; // r14
  SystemCursorService *v13; // r14
  const char *v14; // r9
  __int64 result; // rax
  _QWORD v16[2]; // [rsp+20h] [rbp-58h] BYREF
  SystemCursor *v17; // [rsp+30h] [rbp-48h] BYREF
  std::_Ref_count_base *v18; // [rsp+38h] [rbp-40h]
  __int64 v19; // [rsp+40h] [rbp-38h] BYREF
  __int64 v20; // [rsp+50h] [rbp-28h]
  volatile signed __int32 *v21; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v23; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v24; // [rsp+90h] [rbp+18h]
  unsigned __int64 v25; // [rsp+98h] [rbp+20h] BYREF

  v24 = a3;
  v16[1] = -2LL;
  if ( !*((_QWORD *)this + 12) )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      274LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorcontroller.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  try
  {
    v23 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 7) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 7) + 16LL))
                    + 36);
    v6 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 7) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 7) + 16LL))
                   + 32);
    v7 = v23;
    if ( v23 != *((_DWORD *)this + 18) && !SystemCursorController::IsApplicationPeer(this, v23) )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        279LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)0x80070005LL);
    if ( HIBYTE(a3) != 1 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        285LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)0x80070057LL);
    if ( *(_DWORD *)((char *)&v24 + 2) != v6 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        289LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)0x80070005LL);
    if ( !SystemCursorController::IsApplicationPeer(this, v7) )
      wil::details::in1diag3::_Throw_Hr(
        v9,
        290LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)0x8000FFFFLL);
    std::map<unsigned int,std::shared_ptr<CustomCursorApplication>>::_Try_emplace<unsigned int const &,>(
      (__int64 *)this + 10,
      (__int64)&v19,
      &v23);
    v10 = v19;
    v11 = *(volatile signed __int32 **)(v19 + 48);
    if ( v11 )
    {
      _InterlockedIncrement(v11 + 2);
      v11 = *(volatile signed __int32 **)(v10 + 48);
    }
    v20 = *(_QWORD *)(v10 + 40);
    v21 = v11;
    v25 = a3;
    v12 = v20 + 16;
    if ( std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::count(
           v20 + 16,
           &v25) )
    {
      std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::erase(
        v12,
        &v25);
    }
    v13 = (SystemCursorService *)*((_QWORD *)this + 12);
    v16[0] = a3;
    if ( SystemCursorService::CustomShapeExists(v13, a3) )
    {
      std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::erase(
        (char *)v13 + 152,
        v16);
      v13 = (SystemCursorService *)*((_QWORD *)this + 12);
    }
    std::weak_ptr<SystemCursor>::lock((char *)v13 + 168, &v17);
    if ( v17 )
      SystemCursor::RemoveShape(v17, a3);
    if ( v18 )
      std::_Ref_count_base::_Decref(v18);
    if ( v11 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v11);
    result = 0LL;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x134,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorcontroller.cpp",
      v14);
    return 0LL;
  }
  return result;
}
