/*
 * XREFs of ?HandleRecoveryForView@KioskPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x18039CEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseApplicationView@KioskPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18039BE38 (-CloseApplicationView@KioskPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall KioskPositioner::HandleRecoveryForView(KioskPositioner *this, struct IApplicationView *a2)
{
  KioskPositioner *v2; // rcx
  const char *v3; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (KioskPositioner *)((char *)this - 112);
  try
  {
    KioskPositioner::CloseApplicationView(v2, a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x30E,
                           (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           v3);
  }
  return result;
}
