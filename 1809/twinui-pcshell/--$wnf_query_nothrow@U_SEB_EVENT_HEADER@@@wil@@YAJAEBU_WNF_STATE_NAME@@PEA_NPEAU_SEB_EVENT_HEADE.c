/*
 * XREFs of ??$wnf_query_nothrow@U_SEB_EVENT_HEADER@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAU_SEB_EVENT_HEADER@@PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1800E519C
 * Callers:
 *     ?IsBatterySaverEnabled@@YA_NXZ @ 0x1800E6530 (-IsBatterySaverEnabled@@YA_NXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ZeroStateDataIfSizeInconsistent@U_SEB_EVENT_HEADER@@@details@wil@@YAXPEAU_SEB_EVENT_HEADER@@KK@Z @ 0x180088FD0 (--$ZeroStateDataIfSizeInconsistent@U_SEB_EVENT_HEADER@@@details@wil@@YAXPEAU_SEB_EVENT_HEADER@@K.c)
 */

__int64 __fastcall wil::wnf_query_nothrow<_SEB_EVENT_HEADER>(__int64 a1, bool *a2, _QWORD *a3, int *a4)
{
  unsigned int v7; // edi
  int v9; // ecx
  bool v10; // al
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+58h] [rbp+10h] BYREF

  v12 = a1;
  *a2 = 0;
  if ( a4 )
    *a4 = 0;
  LODWORD(v12) = 8;
  v7 = NtQueryWnfStateData(&WNF_PO_ENERGY_SAVER_STATE, 0LL, 0LL, &v13, a3, &v12) | 0x10000000;
  if ( (int)(v7 + 0x80000000) < 0 || v7 == -805306333 )
  {
    wil::details::ZeroStateDataIfSizeInconsistent<_SEB_EVENT_HEADER>(a3, v12, v13);
    v9 = v13;
    v10 = v13 && (_DWORD)v12 == 8;
    *a2 = v10;
    if ( a4 )
      *a4 = v9;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16FE,
      (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)v7);
    return v7;
  }
}
