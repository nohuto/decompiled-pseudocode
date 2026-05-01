/*
 * XREFs of _lambda_b1c35f81adaf5b36b55ebdf9a5ea9776_::operator() @ 0x18024ACC0
 * Callers:
 *     _lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98_::operator() @ 0x18024AD7C (_lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x180160640 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x1801628D0 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 *     ??$TabViewManager_CloseRequestedRpcTimeout@AEBJ@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXAEBJ@Z @ 0x1802465D8 (--$TabViewManager_CloseRequestedRpcTimeout@AEBJ@TabViewManagerCloseTabRequested@TabViewManagerMe.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_b1c35f81adaf5b36b55ebdf9a5ea9776_::operator()(__int64 **a1)
{
  __int64 v2; // rbx
  unsigned int v3; // ebx
  __int64 result; // rax
  _BYTE v5[24]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char *v8; // [rsp+60h] [rbp+8h] BYREF

  v2 = **a1;
  CRPCTimeout::CRPCTimeout((CRPCTimeout *)v5, 0);
  v6 = v2;
  LODWORD(v8) = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v2 + 72LL))(v2, *a1[1], a1[2]);
  CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v5);
  v3 = (unsigned int)v8;
  if ( (_DWORD)v8 == -2147418110 )
  {
    TabViewManagerMeasures::TabViewManagerCloseTabRequested::TabViewManager_CloseRequestedRpcTimeout<long const &>(
      (__int64)a1[3],
      (__int64)&v8);
    result = (unsigned int)v8;
    if ( (int)v8 < 0 )
      return result;
  }
  else if ( (int)v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA0F,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v8);
    return v3;
  }
  return 0LL;
}
