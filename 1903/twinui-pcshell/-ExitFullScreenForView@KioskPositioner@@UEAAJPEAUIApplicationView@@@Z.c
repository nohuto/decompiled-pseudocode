/*
 * XREFs of ?ExitFullScreenForView@KioskPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x18039C5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveView@ApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z @ 0x18039E364 (-RemoveView@ApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall KioskPositioner::ExitFullScreenForView(KioskPositioner *this, struct IApplicationView *a2)
{
  ApplicationViewCollection *v2; // rcx
  const char *v3; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (KioskPositioner *)((char *)this + 504);
  try
  {
    ApplicationViewCollection::RemoveView(v2, a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x36F,
                           (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           v3);
  }
  return result;
}
