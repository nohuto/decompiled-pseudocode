/*
 * XREFs of ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x180036504
 * Callers:
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x180032D9C (--1ControllerProcessor@@MEAA@XZ.c)
 *     ?TaskSwitcherInvokedCallbackStatic@ControllerProcessor@@CAJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z @ 0x180033860 (-TaskSwitcherInvokedCallbackStatic@ControllerProcessor@@CAJPEAXAEAV-$vector@U-$pair@G_N@std@@V-$.c)
 *     ?HandleTaskSwitcherChordedKey@ControllerProcessor@@AEAAJPEAUInputInfo@@PEA_N@Z @ 0x180033C10 (-HandleTaskSwitcherChordedKey@ControllerProcessor@@AEAAJPEAUInputInfo@@PEA_N@Z.c)
 *     ?LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z @ 0x180036440 (-LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z.c)
 *     ?OnAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x180036FCC (-OnAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::BuildAndSendKeyboardInputInfo(ControllerProcessor *this, __int16 a2, char a3)
{
  DWORD TickCount; // ebx
  int v7; // eax
  __int64 v8; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD v11[4]; // [rsp+30h] [rbp-D0h] BYREF
  LARGE_INTEGER v12; // [rsp+40h] [rbp-C0h]
  int v13; // [rsp+48h] [rbp-B8h]
  __int16 v14; // [rsp+54h] [rbp-ACh]
  __int16 v15; // [rsp+76h] [rbp-8Ah]
  __int64 v16; // [rsp+180h] [rbp+80h]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  TickCount = GetTickCount();
  QueryPerformanceCounter(&PerformanceCount);
  memset_0(v11, 0, 0x158uLL);
  v12 = PerformanceCount;
  v16 = *((_QWORD *)this + 218);
  v15 = 64;
  v13 = 344;
  v11[0] = 4;
  v11[2] = TickCount;
  v14 = a2;
  if ( !a3 )
    v15 = 65;
  if ( !*((_BYTE *)this + 4680) )
  {
    v7 = -2147418113;
LABEL_7:
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x7D4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v7);
    JUMPOUT(0x180036627LL);
  }
  v8 = *((_QWORD *)this + 461);
  v11[1] = *((_DWORD *)this + 924);
  v7 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v8 + 24LL))(v8, v11);
  if ( v7 < 0 )
    goto LABEL_7;
  return 0LL;
}
