/*
 * XREFs of ?OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z @ 0x18013E2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180014870 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180021840 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     memcpy_0 @ 0x180037D6F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180056650 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z @ 0x18013D8C0 (-LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?ReportPerf@MPCPerfCounter@@AEAAX_K@Z @ 0x180140EB8 (-ReportPerf@MPCPerfCounter@@AEAAX_K@Z.c)
 */

__int64 __fastcall MPCInputProviderBase::OnInputReport(MPCInputProviderBase *this, struct InputInfo *a2)
{
  bool v4; // al
  char *v5; // rcx
  __int64 v6; // r8
  int v7; // eax
  const char *v8; // r9
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  ISMTracing *v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v17; // [rsp+30h] [rbp+8h] BYREF

  memcpy_0((char *)this + 472, a2, 0x7F0uLL);
  v4 = *((_BYTE *)MPCHolographicInputManager::GetInstance() + 2364)
    && *((_QWORD *)MPCHolographicInputManager::GetInstance() + 293);
  v17 = v4;
  v5 = (char *)this + 24;
  v6 = *((_QWORD *)this + 3);
  if ( v4 )
  {
    v7 = (*(__int64 (__fastcall **)(char *, struct InputInfo *))(v6 + 264))(v5, a2);
    if ( v7 >= 0 )
      goto LABEL_11;
    v9 = 223LL;
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(char *, struct InputInfo *))(v6 + 272))(v5, a2);
    if ( v7 >= 0 )
      goto LABEL_11;
    v9 = 228LL;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    v9,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcinputproviderbase.cpp",
    (const char *)(unsigned int)v7);
LABEL_11:
  v10 = *((_QWORD *)a2 + 2);
  if ( !*((_QWORD *)this + 571) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      70LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcperfcounter.cpp",
      v8);
    __debugbreak();
  }
  v11 = *((_QWORD *)this + 572);
  if ( !v11 )
  {
    *((_QWORD *)this + 572) = v10;
    v11 = v10;
  }
  ++*((_QWORD *)this + 573);
  if ( v10 - v11 > *((_QWORD *)this + 571) )
    MPCPerfCounter::ReportPerf((MPCInputProviderBase *)((char *)this + 4544), v10);
  memcpy_0((char *)this + 2504, a2, 0x7F0uLL);
  if ( ISMTracing::IsEnabled(v12) )
  {
    wil::details::static_lazy<ISMTracing>::get(v13, lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::LogMPCInputReport_(v14, a2, &v17);
  }
  return 0LL;
}
