/*
 * XREFs of ?GetFrameWindow@CApplicationFrameWrapper@@UEAAJPEAPEAUHWND__@@@Z @ 0x180068DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CApplicationFrameWrapper::GetFrameWindow(CApplicationFrameWrapper *this, HWND *a2)
{
  HWND v2; // rax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v2 = (HWND)*((_QWORD *)this + 10);
  if ( v2 )
  {
    *a2 = v2;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x98,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
      (const char *)0x80070490LL,
      v4);
    return 2147943568LL;
  }
}
