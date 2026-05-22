/*
 * XREFs of ?AttachApplication@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoCustomCursorControllerClientProxy@@@Z @ 0x1800C93F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B220 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059E14 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IV?$shared_ptr@VCustomCursorApplication@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x1800C8B50 (--$_Try_emplace@AEBI$$V@-$map@IV-$shared_ptr@VCustomCursorApplication@@@std@@U-$less@I@2@V-$allo.c)
 *     ??$make_shared@VCustomCursorApplication@@AEAV?$shared_ptr@VSystemCursorService@@@std@@AEAIAEAPEAVBamoCustomCursorControllerClientProxy@@@std@@YA?AV?$shared_ptr@VCustomCursorApplication@@@0@AEAV?$shared_ptr@VSystemCursorService@@@0@AEAIAEAPEAVBamoCustomCursorControllerClientProxy@@@Z @ 0x1800C8C90 (--$make_shared@VCustomCursorApplication@@AEAV-$shared_ptr@VSystemCursorService@@@std@@AEAIAEAPEA.c)
 *     ??4?$shared_ptr@VCustomCursorApplication@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800C9104 (--4-$shared_ptr@VCustomCursorApplication@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?IsApplicationPeer@SystemCursorController@@AEAA_NI@Z @ 0x1800CA710 (-IsApplicationPeer@SystemCursorController@@AEAA_NI@Z.c)
 *     ?CreateSharedVisual@CustomCursorApplication@@QEAAJPEAPEAX@Z @ 0x1800CCF48 (-CreateSharedVisual@CustomCursorApplication@@QEAAJPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemCursorController::AttachApplication(
        SystemCursorController *this,
        struct BamoSystemCursorControllerStub *a2,
        struct BamoCustomCursorControllerClientProxy *a3)
{
  char *v6; // rdi
  double v7; // xmm0_8
  int v8; // eax
  int v9; // eax
  const char *v10; // r9
  int v11; // eax
  CustomCursorApplication *v13; // [rsp+28h] [rbp-50h] BYREF
  std::_Ref_count_base *v14; // [rsp+30h] [rbp-48h]
  _QWORD v15[3]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v17; // [rsp+80h] [rbp+8h] BYREF
  struct BamoCustomCursorControllerClientProxy *v18; // [rsp+90h] [rbp+18h] BYREF
  void *v19; // [rsp+98h] [rbp+20h] BYREF

  v18 = a3;
  try
  {
    if ( *((_QWORD *)this + 8) )
    {
      v6 = (char *)this + 8;
      v7 = (*(double (__fastcall **)(char *))(*((_QWORD *)this + 1) + 24LL))((char *)this + 8);
      if ( *(float *)&v7 != (*(float (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 8) + 8LL) + 64LL))(*((_QWORD *)this + 8) + 8LL) )
        (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 32LL))(v6);
    }
    if ( *((_QWORD *)this + 12) )
    {
      v17 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 7) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 7) + 16LL))
                      + 36);
      if ( SystemCursorController::IsApplicationPeer(this, v17) )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          95LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorcontroller.cpp",
          (const char *)0x8000FFFFLL);
      std::make_shared<CustomCursorApplication,std::shared_ptr<SystemCursorService> &,unsigned int &,BamoCustomCursorControllerClientProxy * &>(
        &v13,
        (_QWORD *)this + 12,
        &v17,
        &v18);
      std::map<unsigned int,std::shared_ptr<CustomCursorApplication>>::_Try_emplace<unsigned int const &,>(
        (__int64 *)this + 10,
        (__int64)v15,
        &v17);
      std::shared_ptr<CustomCursorApplication>::operator=((_QWORD *)(v15[0] + 40LL), &v13);
      v8 = CustomCursorApplication::CreateSharedVisual(v13, &v19);
      if ( v8 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          107LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorcontroller.cpp",
          (const char *)(unsigned int)v8);
      v9 = (*(__int64 (__fastcall **)(__int64, __int64, void *))(*(_QWORD *)(*((_QWORD *)v13 + 11) + 8LL) + 24LL))(
             *((_QWORD *)v13 + 11) + 8LL,
             *((_QWORD *)this + 12) + 184LL,
             v19);
      if ( v9 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          111LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorcontroller.cpp",
          (const char *)(unsigned int)v9);
      if ( v14 )
        std::_Ref_count_base::_Decref(v14);
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a3 + 1) + 32LL))((char *)a3 + 8);
      if ( v11 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          119LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorcontroller.cpp",
          (const char *)(unsigned int)v11);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x7A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorcontroller.cpp",
      v10);
  }
  return 0LL;
}
