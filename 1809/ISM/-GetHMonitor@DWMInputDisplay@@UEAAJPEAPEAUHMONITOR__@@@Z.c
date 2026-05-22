/*
 * XREFs of ?GetHMonitor@DWMInputDisplay@@UEAAJPEAPEAUHMONITOR__@@@Z @ 0x18008ECD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall DWMInputDisplay::GetHMonitor(DWMInputDisplay *this, HMONITOR *a2)
{
  HMONITOR v4; // rax
  BOOL v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  LPARAM dwData; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v4 = (HMONITOR)*((_QWORD *)this + 3);
    if ( !v4 )
    {
      dwData = 0LL;
      v5 = EnumDisplayMonitors(
             0LL,
             0LL,
             (MONITORENUMPROC)lambda_1862f4448b0c18fc2289e23f0d227847_::_lambda_invoker_cdecl_,
             (LPARAM)&dwData);
      v4 = (HMONITOR)(dwData & -(__int64)v5);
    }
    *a2 = v4;
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
