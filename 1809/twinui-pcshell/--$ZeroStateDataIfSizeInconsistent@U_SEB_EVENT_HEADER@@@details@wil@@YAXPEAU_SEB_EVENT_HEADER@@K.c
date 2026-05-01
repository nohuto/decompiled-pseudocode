/*
 * XREFs of ??$ZeroStateDataIfSizeInconsistent@U_SEB_EVENT_HEADER@@@details@wil@@YAXPEAU_SEB_EVENT_HEADER@@KK@Z @ 0x180088FD0
 * Callers:
 *     ??$wnf_query_nothrow@U_SEB_EVENT_HEADER@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAU_SEB_EVENT_HEADER@@PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1800E519C (--$wnf_query_nothrow@U_SEB_EVENT_HEADER@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAU_SEB_EVENT_HEADE.c)
 * Callees:
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1800E6598 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall wil::details::ZeroStateDataIfSizeInconsistent<_SEB_EVENT_HEADER>(_QWORD *a1, int a2, int a3)
{
  __int64 result; // rax
  const char *v5; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a3 )
  {
    if ( a2 != 8 )
    {
      wil::details::in1diag3::Log_HrMsg(
        retaddr,
        (void *)0x16A3,
        (unsigned int)"internal\\sdk\\inc\\wil\\Resource.h",
        (const char *)0x8000FFFFLL,
        (int)"Inconsistent state data size in wnf_query",
        v5);
      result = 0LL;
      *a1 = 0LL;
    }
  }
  return result;
}
