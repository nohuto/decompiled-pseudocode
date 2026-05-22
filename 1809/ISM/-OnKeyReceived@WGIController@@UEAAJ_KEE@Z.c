/*
 * XREFs of ?OnKeyReceived@WGIController@@UEAAJ_KEE@Z @ 0x18006E170
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800056F0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?NotifyCurrentGamepadReading@WGIController@@AEAAJ_N@Z @ 0x18006E824 (-NotifyCurrentGamepadReading@WGIController@@AEAAJ_N@Z.c)
 *     ?NotifyInputReport@WGIController@@AEAAJPEAUInputInfo@@@Z @ 0x18006F088 (-NotifyInputReport@WGIController@@AEAAJPEAUInputInfo@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 */

__int64 __fastcall WGIController::OnKeyReceived(WGIController *this, __int64 a2, unsigned __int8 a3, char a4)
{
  _DWORD *v7; // rax
  unsigned int v9; // eax
  _DWORD v10[4]; // [rsp+20h] [rbp-E0h] BYREF
  LARGE_INTEGER v11; // [rsp+30h] [rbp-D0h]
  int v12; // [rsp+38h] [rbp-C8h]
  __int16 v13; // [rsp+44h] [rbp-BCh]
  __int16 v14; // [rsp+66h] [rbp-9Ah]
  __int64 v15; // [rsp+170h] [rbp+70h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]
  LARGE_INTEGER PerformanceCount; // [rsp+1A0h] [rbp+A0h] BYREF

  if ( !*((_QWORD *)this + 19) )
  {
    v9 = wil::verify_hresult<long>(0x8000FFFF);
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x255,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)v9);
    JUMPOUT(0x18006E279LL);
  }
  if ( a3 == 91 )
  {
    WGIController::NotifyCurrentGamepadReading((WGIController *)((char *)this - 16), 1);
  }
  else
  {
    QueryPerformanceCounter(&PerformanceCount);
    memset_0(v10, 0, 0x158uLL);
    v7 = (_DWORD *)*((_QWORD *)this + 19);
    v12 = 344;
    v10[0] = 4;
    v10[1] = *v7;
    v10[2] = GetTickCount();
    v11 = PerformanceCount;
    v15 = *((_QWORD *)this + 16);
    v13 = a3;
    v14 = 65 - (a4 != 0);
    WGIController::NotifyInputReport((WGIController *)((char *)this - 16), (struct InputInfo *)v10);
  }
  return 0LL;
}
