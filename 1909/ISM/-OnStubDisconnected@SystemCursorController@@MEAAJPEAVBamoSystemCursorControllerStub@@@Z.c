/*
 * XREFs of ?OnStubDisconnected@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@@Z @ 0x1800CA5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AEA0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IV?$shared_ptr@VCustomCursorApplication@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x1800C8910 (--$_Try_emplace@AEBI$$V@-$map@IV-$shared_ptr@VCustomCursorApplication@@@std@@U-$less@I@2@V-$allo.c)
 *     ?IsApplicationPeer@SystemCursorController@@AEAA_NI@Z @ 0x1800CA4D0 (-IsApplicationPeer@SystemCursorController@@AEAA_NI@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@VCustomCursorApplication@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x1800CAE9C (-erase@-$_Tree@V-$_Tmap_traits@IV-$shared_ptr@VCustomCursorApplication@@@std@@U-$le_ea_1800CAE9C.c)
 *     ?Cleanup@CustomCursorApplication@@QEAAXXZ @ 0x1800CBE00 (-Cleanup@CustomCursorApplication@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemCursorController::OnStubDisconnected(
        SystemCursorController *this,
        struct BamoSystemCursorControllerStub *a2)
{
  const char *v3; // r9
  char *v4; // rsi
  __int64 v5; // rbx
  volatile signed __int32 *v6; // rdi
  CustomCursorApplication *v7; // rbx
  _QWORD v9[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v11; // [rsp+68h] [rbp+10h] BYREF

  try
  {
    v11 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 7) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 7) + 16LL))
                    + 36);
    if ( SystemCursorController::IsApplicationPeer(this, v11) )
    {
      v4 = (char *)this + 80;
      std::map<unsigned int,std::shared_ptr<CustomCursorApplication>>::_Try_emplace<unsigned int const &,>(
        (__int64 *)this + 10,
        (__int64)v9,
        &v11);
      v5 = v9[0];
      v6 = *(volatile signed __int32 **)(v9[0] + 48LL);
      if ( v6 )
      {
        _InterlockedIncrement(v6 + 2);
        v6 = *(volatile signed __int32 **)(v5 + 48);
      }
      v7 = *(CustomCursorApplication **)(v5 + 40);
      v9[2] = v7;
      v9[3] = v6;
      std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<CustomCursorApplication>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication>>>,0>>::erase(
        v4,
        &v11);
      CustomCursorApplication::Cleanup(v7);
      if ( v6 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v6);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x9D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorcontroller.cpp",
      v3);
  }
  return 0LL;
}
