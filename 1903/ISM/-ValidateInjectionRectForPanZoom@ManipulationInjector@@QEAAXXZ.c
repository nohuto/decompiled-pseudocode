/*
 * XREFs of ?ValidateInjectionRectForPanZoom@ManipulationInjector@@QEAAXXZ @ 0x1800E9720
 * Callers:
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x1800E90A8 (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall ManipulationInjector::ValidateInjectionRectForPanZoom(ManipulationInjector *this)
{
  int v1; // edx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = 2 * *((_DWORD *)this + 4);
  if ( *((_DWORD *)this + 18) - *((_DWORD *)this + 16) < v1 || *((_DWORD *)this + 19) - *((_DWORD *)this + 17) < v1 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1336LL,
      (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
}
