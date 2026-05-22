/*
 * XREFs of ?SendCustomCursorAnimationCreatedCallback@SystemCursorController@@QEAAJI_K00@Z @ 0x1800CAAC8
 * Callers:
 *     ?CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z @ 0x1800CC8EC (-CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IV?$shared_ptr@VCustomCursorApplication@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x1800C8B50 (--$_Try_emplace@AEBI$$V@-$map@IV-$shared_ptr@VCustomCursorApplication@@@std@@U-$less@I@2@V-$allo.c)
 *     ?IsApplicationPeer@SystemCursorController@@AEAA_NI@Z @ 0x1800CA710 (-IsApplicationPeer@SystemCursorController@@AEAA_NI@Z.c)
 */

__int64 __fastcall SystemCursorController::SendCustomCursorAnimationCreatedCallback(
        SystemCursorController *this,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  __int64 v7; // r10
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rdx
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v14; // [rsp+58h] [rbp+10h] BYREF

  v14 = a2;
  if ( SystemCursorController::IsApplicationPeer(this, a2) )
  {
    std::map<unsigned int,std::shared_ptr<CustomCursorApplication>>::_Try_emplace<unsigned int const &,>(
      (__int64 *)(v7 + 80),
      (__int64)v12,
      &v14);
    v8 = *(_QWORD *)(*(_QWORD *)(v12[0] + 40LL) + 88LL) + 8LL;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned __int64))(*(_QWORD *)v8 + 40LL))(v8, a3, a4, a5);
    if ( v9 >= 0 )
      return 0LL;
    v10 = 394LL;
  }
  else
  {
    v9 = -2147024809;
    v10 = 398LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorcontroller.cpp",
    (const char *)(unsigned int)v9);
  return (unsigned int)v9;
}
