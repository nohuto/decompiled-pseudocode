/*
 * XREFs of ?ShouldHandleFrameworkViewTypeChange@KioskPositioner@@UEAAHPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x180099F90
 * Callers:
 *     <none>
 * Callees:
 *     ?ShouldHandleView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x18009A008 (-ShouldHandleView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 */

_BOOL8 __fastcall KioskPositioner::ShouldHandleFrameworkViewTypeChange(__int64 a1, struct IApplicationView *a2, int a3)
{
  KioskPositioner *v4; // rcx
  const char *v5; // r9
  _BOOL8 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (KioskPositioner *)(a1 - 112);
  try
  {
    result = KioskPositioner::ShouldHandleView(v4, a2) && (!a3 || a3 == 6);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x303,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      v5);
    return 0LL;
  }
  return result;
}
