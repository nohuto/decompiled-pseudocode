/*
 * XREFs of _lambda_36384bfe8fddeea64aa1ca6986ceb908_::operator() @ 0x1801D64F4
 * Callers:
 *     _lambda_6c4b80bdf74632827428df2b58c2a770_::operator() @ 0x1801D692C (_lambda_6c4b80bdf74632827428df2b58c2a770_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x18011910C (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x18011B3F0 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 *     ??$TabViewManager_CloseRequestedRpcTimeout@AEBJ@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXAEBJ@Z @ 0x1801D11A8 (--$TabViewManager_CloseRequestedRpcTimeout@AEBJ@TabViewManagerCloseTabRequested@TabViewManagerMe.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_36384bfe8fddeea64aa1ca6986ceb908_::operator()(_QWORD **a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  _BYTE v5[32]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v7; // [rsp+50h] [rbp+8h] BYREF

  CRPCTimeout::CRPCTimeout((CRPCTimeout *)v5, 0);
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*(_QWORD *)**a1 + 72LL))(**a1, *a1[1], a1[2]);
  v3 = v2;
  v7 = v2;
  if ( !v5[4] )
  {
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBDB,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v2);
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  TabViewManagerMeasures::TabViewManagerCloseTabRequested::TabViewManager_CloseRequestedRpcTimeout<long const &>(
    (__int64)a1[3],
    (__int64)&v7);
  v3 = v7;
  if ( v7 >= 0 )
LABEL_3:
    v3 = 0;
LABEL_4:
  CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v5);
  return v3;
}
