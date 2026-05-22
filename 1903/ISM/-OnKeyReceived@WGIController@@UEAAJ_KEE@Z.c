/*
 * XREFs of ?OnKeyReceived@WGIController@@UEAAJ_KEE@Z @ 0x1800AB340
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyCurrentGamepadReading@WGIController@@AEAAJ_N@Z @ 0x1800AA3D4 (-NotifyCurrentGamepadReading@WGIController@@AEAAJ_N@Z.c)
 *     ?NotifyInputReport@WGIController@@AEAAJPEAUInputInfo@@@Z @ 0x1800AABA8 (-NotifyInputReport@WGIController@@AEAAJPEAUInputInfo@@@Z.c)
 */

__int64 __fastcall WGIController::OnKeyReceived(WGIController *this, __int64 a2, unsigned __int8 a3, char a4)
{
  _DWORD *v7; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD v10[4]; // [rsp+30h] [rbp-D0h] BYREF
  LARGE_INTEGER v11; // [rsp+40h] [rbp-C0h]
  int v12; // [rsp+48h] [rbp-B8h]
  __int16 v13; // [rsp+54h] [rbp-ACh]
  __int16 v14; // [rsp+76h] [rbp-8Ah]
  __int64 v15; // [rsp+180h] [rbp+80h]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  if ( !*((_QWORD *)this + 21) )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      679LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  if ( a3 == 91 )
  {
    WGIController::NotifyCurrentGamepadReading((WGIController *)((char *)this - 16), 1);
  }
  else
  {
    QueryPerformanceCounter(&PerformanceCount);
    memset_0(v10, 0, 0x160uLL);
    v7 = (_DWORD *)*((_QWORD *)this + 21);
    v12 = 352;
    v10[0] = 4;
    v10[1] = *v7;
    v10[2] = GetTickCount();
    v11 = PerformanceCount;
    v15 = *((_QWORD *)this + 17);
    v13 = a3;
    v14 = 65 - (a4 != 0);
    WGIController::NotifyInputReport((WGIController *)((char *)this - 16), (struct InputInfo *)v10);
  }
  return 0LL;
}
