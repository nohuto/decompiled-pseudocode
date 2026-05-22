/*
 * XREFs of ?GetHMonitor@DWMInputDisplay@@UEAAJPEAPEAUHMONITOR__@@@Z @ 0x1800C68A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInternalHMonitor@@YAPEAUHMONITOR__@@XZ @ 0x1800C68F0 (-GetInternalHMonitor@@YAPEAUHMONITOR__@@XZ.c)
 */

__int64 __fastcall DWMInputDisplay::GetHMonitor(DWMInputDisplay *this, HMONITOR *a2)
{
  HMONITOR InternalHMonitor; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    InternalHMonitor = (HMONITOR)*((_QWORD *)this + 3);
    if ( !InternalHMonitor )
      InternalHMonitor = GetInternalHMonitor();
    *a2 = InternalHMonitor;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x67,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputdisplay.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
