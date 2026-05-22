/*
 * XREFs of ?TimeFromPerfCount@MagnifierRecognizer@@QEAA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@_K@Z @ 0x1800D013C
 * Callers:
 *     ?OnHitTest@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800CEA70 (-OnHitTest@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInit.c)
 *     ?OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800CECD0 (-OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRespon.c)
 *     ?UpdateContactState@MagnifierRecognizer@@AEAAXPEBULegacyInputInfo@@@Z @ 0x1800D01AC (-UpdateContactState@MagnifierRecognizer@@AEAAXPEBULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003618 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

_QWORD *__fastcall MagnifierRecognizer::TimeFromPerfCount(__int64 a1, _QWORD *a2, unsigned __int64 a3, const char *a4)
{
  unsigned __int64 v4; // r10
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(_QWORD *)(a1 + 64);
  if ( !v4 )
  {
    wil::details::in1diag3::FailFast_GetLastError(
      retaddr,
      (void *)0x37,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\magnifier\\processor\\magnifi"
               "errecognizer.cpp",
      a4);
    JUMPOUT(0x1800D01A4LL);
  }
  *a2 = 1000 * (*(_QWORD *)(a1 + 72) * (a3 / v4) + *(_QWORD *)(a1 + 72) * (a3 % v4) / v4);
  return a2;
}
