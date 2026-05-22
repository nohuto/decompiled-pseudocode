/*
 * XREFs of ?TimeFromPerfCount@MagnifierRecognizer@@QEAA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@_K@Z @ 0x1801066B8
 * Callers:
 *     ?OnHitTest@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180105240 (-OnHitTest@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInit.c)
 *     ?OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180105420 (-OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRespon.c)
 *     ?UpdateContactState@MagnifierRecognizer@@AEAAXPEBUPointerInputInfo@@@Z @ 0x18010670C (-UpdateContactState@MagnifierRecognizer@@AEAAXPEBUPointerInputInfo@@@Z.c)
 * Callees:
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180052670 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x1800AC7B0 (-QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z.c)
 */

_QWORD *__fastcall MagnifierRecognizer::TimeFromPerfCount(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !(unsigned int)QpcTimeConverter::QpcToMicroSec((QpcTimeConverter *)(a1 + 64), a3, &v7) )
  {
    wil::details::in1diag3::FailFast_GetLastError(
      retaddr,
      (void *)0x37,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\magnifier\\processor\\magnifi"
               "errecognizer.cpp",
      v4);
    __debugbreak();
  }
  *a2 = 1000 * v7;
  return a2;
}
