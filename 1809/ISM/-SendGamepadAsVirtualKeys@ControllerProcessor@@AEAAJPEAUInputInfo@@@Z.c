/*
 * XREFs of ?SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180036630
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180033F70 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@G_N1@Z @ 0x180036C44 (-SetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@G_N1@Z.c)
 *     ?TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@NGG_N@Z @ 0x180036E30 (-TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@NGG_N@Z.c)
 *     ?UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x180036EF4 (-UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 */

__int64 __fastcall ControllerProcessor::SendGamepadAsVirtualKeys(ControllerProcessor *this, struct InputInfo *a2)
{
  double v4; // xmm0_8
  bool v5; // r9
  double v6; // xmm0_8
  bool v7; // r9
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  ControllerProcessor::SetVirtualKeyState(this, a2, 0xCFu, *((_BYTE *)a2 + 528) & 1, 0);
  ControllerProcessor::SetVirtualKeyState(this, a2, 0xD0u, (*((_DWORD *)a2 + 132) & 2) != 0, 0);
  ControllerProcessor::SetVirtualKeyState(this, a2, 0xC3u, (*((_DWORD *)a2 + 132) & 4) != 0, 0);
  ControllerProcessor::SetVirtualKeyState(this, a2, 0xC4u, (*((_DWORD *)a2 + 132) & 8) != 0, 0);
  ControllerProcessor::SetVirtualKeyState(this, a2, 0xC5u, (*((_DWORD *)a2 + 132) & 0x10) != 0, 0);
  ControllerProcessor::SetVirtualKeyState(this, a2, 0xC6u, (*((_DWORD *)a2 + 132) & 0x20) != 0, 0);
  ControllerProcessor::SetVirtualKeyState(this, a2, 0xCBu, (*((_DWORD *)a2 + 132) & 0x40) != 0, 0);
  ControllerProcessor::SetVirtualKeyState(this, a2, 0xCCu, (*((_DWORD *)a2 + 132) & 0x80) != 0, 0);
  ControllerProcessor::SetVirtualKeyState(this, a2, 0xCDu, *((_DWORD *)a2 + 132) & 0x100, 0);
  ControllerProcessor::SetVirtualKeyState(this, a2, 0xCEu, (*((_DWORD *)a2 + 132) & 0x200) != 0, 0);
  ControllerProcessor::SetVirtualKeyState(this, a2, 0xC8u, (*((_DWORD *)a2 + 132) & 0x400) != 0, 0);
  ControllerProcessor::SetVirtualKeyState(this, a2, 0xC7u, (*((_DWORD *)a2 + 132) & 0x800) != 0, 0);
  ControllerProcessor::SetVirtualKeyState(this, a2, 0xD1u, (*((_DWORD *)a2 + 132) & 0x1000) != 0, 0);
  ControllerProcessor::SetVirtualKeyState(this, a2, 0xD2u, (*((_DWORD *)a2 + 132) & 0x2000) != 0, 0);
  if ( !*((_BYTE *)a2 + 1584) )
    ControllerProcessor::SetVirtualKeyState(this, a2, 7u, (*((_DWORD *)a2 + 132) & 0x40000000) != 0, 0);
  v4 = *((double *)a2 + 67);
  if ( v4 < 0.1275 )
  {
    if ( v4 > 0.1075 )
      goto LABEL_8;
    v5 = 0;
  }
  else
  {
    v5 = 1;
  }
  ControllerProcessor::SetVirtualKeyState(this, a2, 0xC9u, v5, 0);
LABEL_8:
  v6 = *((double *)a2 + 68);
  if ( v6 < 0.1275 )
  {
    if ( v6 > 0.1075 )
      goto LABEL_13;
    v7 = 0;
  }
  else
  {
    v7 = 1;
  }
  ControllerProcessor::SetVirtualKeyState(this, a2, 0xCAu, v7, 0);
LABEL_13:
  ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(this, a2, *((double *)a2 + 70), 0xD3u, 0xD4u, 0);
  ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(this, a2, *((double *)a2 + 69), 0xD5u, 0xD6u, 0);
  ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(this, a2, *((double *)a2 + 72), 0xD7u, 0xD8u, 0);
  ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(this, a2, *((double *)a2 + 71), 0xD9u, 0xDAu, 0);
  updated = ControllerProcessor::UpdateAutoRepeatTimer(this);
  if ( updated < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x85F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)updated);
    JUMPOUT(0x1800369B4LL);
  }
  return 0LL;
}
