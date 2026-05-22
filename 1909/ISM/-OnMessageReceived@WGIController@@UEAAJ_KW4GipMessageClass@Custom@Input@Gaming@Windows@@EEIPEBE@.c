/*
 * XREFs of ?OnMessageReceived@WGIController@@UEAAJ_KW4GipMessageClass@Custom@Input@Gaming@Windows@@EEIPEBE@Z @ 0x1800AB340
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EmitShellButtonFromConsoleFunctionMap@WGIController@@AEAAXPEAE@Z @ 0x1800350C4 (-EmitShellButtonFromConsoleFunctionMap@WGIController@@AEAAXPEAE@Z.c)
 *     ?NotifyExternalDeviceFault@WGIRawInputProvider@@QEAAJPEBU_ZEPHYRUS_EXTERNAL_GAMEPAD_STATUS@@_K@Z @ 0x1800A73A0 (-NotifyExternalDeviceFault@WGIRawInputProvider@@QEAAJPEBU_ZEPHYRUS_EXTERNAL_GAMEPAD_STATUS@@_K@Z.c)
 *     ?NotifyCurrentGamepadReading@WGIController@@AEAAJ_N@Z @ 0x1800AA2A0 (-NotifyCurrentGamepadReading@WGIController@@AEAAJ_N@Z.c)
 */

__int64 __fastcall WGIController::OnMessageReceived(
        __int64 a1,
        __int64 a2,
        int a3,
        char a4,
        __int64 a5,
        unsigned int a6,
        struct _ZEPHYRUS_EXTERNAL_GAMEPAD_STATUS *a7)
{
  WGIController *v7; // rbp
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v7 = (WGIController *)(a1 - 16);
  WGIController::NotifyCurrentGamepadReading((WGIController *)(a1 - 16), 1);
  if ( *(_BYTE *)(a1 + 259) )
  {
    if ( !a3 && a4 == 10 && a6 >= 0xB )
    {
      v11 = WGIRawInputProvider::NotifyExternalDeviceFault(
              *(struct _RTL_CRITICAL_SECTION **)(a1 + 104),
              a7,
              *(_QWORD *)(a1 + 136));
      if ( v11 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          758LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
          (const char *)(unsigned int)v11);
        JUMPOUT(0x1800AB415LL);
      }
    }
  }
  if ( *(_BYTE *)(a1 + 258) && a6 >= 0x32 )
    WGIController::EmitShellButtonFromConsoleFunctionMap(v7, (unsigned __int8 *)a7 + 32);
  if ( *(_BYTE *)(a1 + 260) && a6 >= 0x22 )
    WGIController::EmitShellButtonFromConsoleFunctionMap(v7, (unsigned __int8 *)a7 + 16);
  return 0LL;
}
