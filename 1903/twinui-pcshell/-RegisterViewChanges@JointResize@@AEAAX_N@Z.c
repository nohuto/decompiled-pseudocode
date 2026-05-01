/*
 * XREFs of ?RegisterViewChanges@JointResize@@AEAAX_N@Z @ 0x1803D0CEC
 * Callers:
 *     ?Cleanup@JointResize@@AEAAXXZ @ 0x1803CF960 (-Cleanup@JointResize@@AEAAXXZ.c)
 *     ?OnArrangedWindowBorderEnter@JointResize@@UEAAXPEAUHWND__@@HI@Z @ 0x1803D04C0 (-OnArrangedWindowBorderEnter@JointResize@@UEAAXPEAUHWND__@@HI@Z.c)
 *     ?OnArrangedWindowSizeStarted@JointResize@@UEAAJPEAUIApplicationView@@UtagRECT@@HI@Z @ 0x1803D0710 (-OnArrangedWindowSizeStarted@JointResize@@UEAAJPEAUIApplicationView@@UtagRECT@@HI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall JointResize::RegisterViewChanges(JointResize *this, char a2)
{
  _DWORD *v2; // rbx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_DWORD *)((char *)this + 432);
  if ( a2 )
  {
    if ( !*v2 )
      (*(void (__fastcall **)(_QWORD, char *, _DWORD *))(**((_QWORD **)this + 17) + 96LL))(
        *((_QWORD *)this + 17),
        (char *)this + 96,
        v2);
  }
  else if ( *v2 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, JointResize *))(**((_QWORD **)this + 17) + 104LL))(
           *((_QWORD *)this + 17),
           (unsigned int)*v2,
           this);
    if ( v3 >= 0 )
      *v2 = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1EF,
        (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
        (const char *)(unsigned int)v3);
  }
}
