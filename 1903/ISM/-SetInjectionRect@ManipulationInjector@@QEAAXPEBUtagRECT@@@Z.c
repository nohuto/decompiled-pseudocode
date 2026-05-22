/*
 * XREFs of ?SetInjectionRect@ManipulationInjector@@QEAAXPEBUtagRECT@@@Z @ 0x1800E8FEC
 * Callers:
 *     ?UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ @ 0x1800788F8 (-UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ.c)
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18008D724 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall ManipulationInjector::SetInjectionRect(struct tagRECT *this, const struct tagRECT *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (this[5].right & 0xFFFFFF7F) != 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1324LL,
      (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  this[4] = *a2;
}
