/*
 * XREFs of wil::details::lambda_call__lambda_c0721006a4de7138d6c903f24d7ae85d___::_lambda_call__lambda_c0721006a4de7138d6c903f24d7ae85d___ @ 0x18022A294
 * Callers:
 *     _TabViewManager::OnSelectTabRequested_::_1_::dtor$1 @ 0x180233BD1 (_TabViewManager--OnSelectTabRequested_--_1_--dtor$1.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::lambda_call__lambda_c0721006a4de7138d6c903f24d7ae85d___::_lambda_call__lambda_c0721006a4de7138d6c903f24d7ae85d___(
        _BYTE *a1,
        __int64 a2)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[8] )
  {
    a1[8] = 0;
    LOBYTE(a2) = 1;
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(***(_QWORD ***)a1 + 64LL))(**(_QWORD **)a1, a2);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x964,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v2);
  }
}
