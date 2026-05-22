/*
 * XREFs of ?OnSendGamepadAsPointerAndManipulationStatic@ControllerProcessor@@CAJPEAX@Z @ 0x180076930
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@Windows@@@Z @ 0x180076E14 (-SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@W.c)
 */

__int64 __fastcall ControllerProcessor::OnSendGamepadAsPointerAndManipulationStatic(char *a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1 )
  {
    v2 = ControllerProcessor::SendGamepadAsPointerAndManipulation(
           (ControllerProcessor *)a1,
           (struct Windows::Gaming::Input::GamepadReading *)(a1 + 208));
    if ( v2 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1214LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v2);
      __debugbreak();
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4BA,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
