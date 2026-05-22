/*
 * XREFs of ?SetZoomDecreasingThresholds@ManipulationInjector@@QEAAXJJ@Z @ 0x1800E9068
 * Callers:
 *     ??0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z @ 0x18008CC98 (--0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall ManipulationInjector::SetZoomDecreasingThresholds(ManipulationInjector *this)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 22) )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1439LL,
      (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      (const char *)0x80070057LL);
    JUMPOUT(0x1800E909ELL);
  }
  *((_DWORD *)this + 8) = 150;
  *((_DWORD *)this + 9) = 150;
}
