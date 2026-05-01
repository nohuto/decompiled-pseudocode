/*
 * XREFs of ?PearlRectMayHaveChanged@XamlLauncher@@UEAAJPEAUHMONITOR__@@@Z @ 0x18029C3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetCortanaVisibleMonitor@XamlLauncher@@UEAAJPEAPEAUHMONITOR__@@@Z @ 0x18029A9A0 (-GetCortanaVisibleMonitor@XamlLauncher@@UEAAJPEAPEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall XamlLauncher::PearlRectMayHaveChanged(XamlLauncher *this, HMONITOR a2)
{
  __int64 v4; // rcx
  int CortanaVisibleMonitor; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HMONITOR v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 27);
  if ( !v4 )
    return 2147943568LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 112LL))(v4) )
  {
    CortanaVisibleMonitor = XamlLauncher::GetCortanaVisibleMonitor((XamlLauncher *)((char *)this + 32), &v9);
    if ( CortanaVisibleMonitor < 0 )
    {
      v7 = 284LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)CortanaVisibleMonitor);
      return (unsigned int)CortanaVisibleMonitor;
    }
    if ( a2 == v9 )
    {
      CortanaVisibleMonitor = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 136LL))(*((_QWORD *)this + 10));
      if ( CortanaVisibleMonitor < 0 )
      {
        v7 = 287LL;
        goto LABEL_6;
      }
    }
  }
  return 0LL;
}
