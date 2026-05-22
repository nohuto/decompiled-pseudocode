/*
 * XREFs of ?HandleTaskSwitcherChordedKey@ControllerProcessor@@AEAAJPEAUInputInfo@@PEA_N@Z @ 0x180033C10
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180033F70 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJW4GamepadButtons@Input@Gaming@Windows@@0@Z @ 0x180034DF4 (-BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJW4GamepadButtons@Input@Gaming@Windows@@0@Z.c)
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x180036504 (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     ?ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GamepadButtons@Input@Gaming@Windows@@PEA_N@Z @ 0x180038DB8 (-ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GamepadButtons@Input@Gaming@Windows.c)
 */

__int64 __fastcall ControllerProcessor::HandleTaskSwitcherChordedKey(
        ControllerProcessor *this,
        struct InputInfo *a2,
        bool *a3)
{
  __int64 v4; // rcx
  bool v5; // zf
  unsigned int v6; // r9d
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  int v10; // ebx
  __int64 v12; // rcx
  unsigned int *v13; // rbx
  unsigned int **v14; // rbp
  __int64 v15; // rdx
  unsigned int v16; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0;
  v4 = *((_QWORD *)this + 869);
  if ( v4 && !*((_DWORD *)this + 430) )
  {
    v5 = *(_DWORD *)(v4 + 16) == 0;
    v6 = *((_DWORD *)a2 + 132);
    v7 = *((_DWORD *)this + 162);
    *a3 = 0;
    if ( v5 || (v8 = v6 >> 1, LOBYTE(v8) = (v6 & 2) != 0, (_BYTE)v8 == ((v7 & 2) != 0)) && (v6 & 1) == (v7 & 1) )
    {
      *a3 = 0;
    }
    else
    {
      LOBYTE(a3) = v6 & 1;
      v9 = ViewMenuChordedKeyHandler::ChordedKeyStateMachine(v4, v8, a3);
      v10 = v9;
      if ( v9 >= 0 )
        v10 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAF,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
          (const char *)(unsigned int)v9);
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1C6,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v10);
        return (unsigned int)v10;
      }
    }
    v12 = *((_QWORD *)this + 869);
    if ( *(_BYTE *)(v12 + 73) )
    {
      v13 = *(unsigned int **)(v12 + 48);
      v14 = (unsigned int **)(v12 + 56);
      v15 = 0LL;
      if ( v13 != *(unsigned int **)(v12 + 56) )
      {
        do
        {
          v16 = *v13;
          if ( (((unsigned __int8)v15 ^ *(_BYTE *)v13) & 1) != 0 )
          {
            if ( *((_DWORD *)this + 430) )
              ControllerProcessor::BuildAndSendKeyboardInputInfo(this, 0xCFu, v16 & 1);
            else
              ControllerProcessor::BuildAndSendMouseInputInfo(this, v15, v16);
          }
          ++v13;
          v15 = v16;
        }
        while ( v13 != *v14 );
        v12 = *((_QWORD *)this + 869);
      }
    }
    if ( *(_BYTE *)(v12 + 72) )
      *(_QWORD *)(v12 + 56) = *(_QWORD *)(v12 + 48);
    *(_BYTE *)(v12 + 72) = 0;
  }
  return 0LL;
}
