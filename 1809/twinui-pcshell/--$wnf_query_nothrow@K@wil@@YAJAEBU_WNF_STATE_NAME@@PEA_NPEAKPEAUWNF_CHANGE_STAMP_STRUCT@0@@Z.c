/*
 * XREFs of ??$wnf_query_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1801B0778
 * Callers:
 *     ?_IsPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180027694 (-_IsPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@Fo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ZeroStateDataIfSizeInconsistent@K@details@wil@@YAXPEAKKK@Z @ 0x18008FA70 (--$ZeroStateDataIfSizeInconsistent@K@details@wil@@YAXPEAKKK@Z.c)
 */

__int64 __fastcall wil::wnf_query_nothrow<unsigned long>(__int64 a1, char *a2, _DWORD *a3, __int64 a4)
{
  char v6; // di
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v10; // [rsp+58h] [rbp+10h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF
  int v12; // [rsp+6Ch] [rbp+24h]

  v12 = HIDWORD(a4);
  v11 = 4;
  v6 = 0;
  *a2 = 0;
  v7 = NtQueryWnfStateData(a1, 0LL, 0LL, &v10, a3, &v11) | 0x10000000;
  if ( (int)(v7 + 0x80000000) < 0 || v7 == -805306333 )
  {
    wil::details::ZeroStateDataIfSizeInconsistent<unsigned long>(a3, v11, v10);
    if ( v10 )
    {
      if ( v11 == 4 )
        v6 = 1;
    }
    *a2 = v6;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16FE,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      (const char *)v7);
    return v7;
  }
}
