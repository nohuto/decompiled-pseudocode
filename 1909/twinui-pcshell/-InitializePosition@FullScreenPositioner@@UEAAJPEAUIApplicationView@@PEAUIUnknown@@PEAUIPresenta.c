/*
 * XREFs of ?InitializePosition@FullScreenPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x18018C960
 * Callers:
 *     <none>
 * Callees:
 *     ?ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIPresentationRequestedArgs@@0@Z @ 0x18018BA14 (-ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@P.c)
 */

__int64 __fastcall FullScreenPositioner::InitializePosition(
        FullScreenPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3,
        struct IPresentationRequestedArgs *a4,
        struct IApplicationView *a5)
{
  __int64 *v5; // rcx
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = (__int64 *)((char *)this - 128);
  try
  {
    FullScreenPositioner::ControlGainedHelper(v5, a2, 9, a4, (__int64)a5);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1ED,
                           (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
                           v6);
  }
  return result;
}
