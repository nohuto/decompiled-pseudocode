/*
 * XREFs of ?SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV?$vector@W4GamepadButtons@Input@Gaming@Windows@@V?$allocator@W4GamepadButtons@Input@Gaming@Windows@@@std@@@std@@@Z @ 0x180076D94
 * Callers:
 *     ?HandleTaskSwitcherChordedKey@ControllerProcessor@@AEAAJPEAUInputInfo@@PEA_N@Z @ 0x180075E24 (-HandleTaskSwitcherChordedKey@ControllerProcessor@@AEAAJPEAUInputInfo@@PEA_N@Z.c)
 * Callees:
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x180075378 (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     ?BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJW4GamepadButtons@Input@Gaming@Windows@@0@Z @ 0x1800754B4 (-BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJW4GamepadButtons@Input@Gaming@Windows@@0@Z.c)
 */

__int64 __fastcall ControllerProcessor::SendChordedKeyBuffer(ControllerProcessor *this, int **a2)
{
  int v4; // edx
  int *i; // rbx
  int v6; // edi
  __int64 result; // rax
  int v8; // r8d

  v4 = 0;
  for ( i = *a2; i != a2[1]; ++i )
  {
    v6 = *i;
    result = v4 & 1;
    v8 = *i & 1;
    if ( v8 != (_DWORD)result )
    {
      if ( *((_DWORD *)this + 544) )
        result = ControllerProcessor::BuildAndSendKeyboardInputInfo(this, 207, v8);
      else
        result = ControllerProcessor::BuildAndSendMouseInputInfo(this, v4, v6);
    }
    v4 = v6;
  }
  return result;
}
