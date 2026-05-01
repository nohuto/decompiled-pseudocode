/*
 * XREFs of ?AddView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801406DC
 * Callers:
 *     ?ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x180140C94 (-ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@.c)
 *     ?HandleRecoveryForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1801419A0 (-HandleRecoveryForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAG@?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAAPEAPEAGQEAPEAGAEBQEAG@Z @ 0x18013CC90 (--$_Emplace_reallocate@AEBQEAG@-$vector@PEAGV-$allocator@PEAG@std@@@std@@QEAAPEAPEAGQEAPEAGAEBQE.c)
 */

__int64 __fastcall FullScreenPositioner::AddView(FullScreenPositioner *this, struct IApplicationView *a2)
{
  char *v3; // rcx
  _BYTE *v4; // rdx
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationView *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v3 = (char *)this + 248;
  v4 = (_BYTE *)*((_QWORD *)v3 + 1);
  if ( *((_BYTE **)v3 + 2) == v4 )
  {
    try
    {
      std::vector<unsigned short *>::_Emplace_reallocate<unsigned short * const &>((const void **)v3, v4, &v8);
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x522,
                             (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
                             v5);
    }
  }
  else
  {
    *(_QWORD *)v4 = a2;
    *((_QWORD *)v3 + 1) += 8LL;
  }
  return 0LL;
}
