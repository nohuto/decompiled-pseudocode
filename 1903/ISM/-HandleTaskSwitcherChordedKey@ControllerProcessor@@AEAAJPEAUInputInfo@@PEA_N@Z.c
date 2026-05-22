/*
 * XREFs of ?HandleTaskSwitcherChordedKey@ControllerProcessor@@AEAAJPEAUInputInfo@@PEA_N@Z @ 0x180076064
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180076990 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV?$vector@W4GamepadButtons@Input@Gaming@Windows@@V?$allocator@W4GamepadButtons@Input@Gaming@Windows@@@std@@@std@@@Z @ 0x180076FD4 (-SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV-$vector@W4GamepadButtons@Input@Gaming@Windo.c)
 *     ?ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GamepadButtons@Input@Gaming@Windows@@PEA_N@Z @ 0x18007997C (-ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GamepadButtons@Input@Gaming@Windows.c)
 */

__int64 __fastcall ControllerProcessor::HandleTaskSwitcherChordedKey(
        ControllerProcessor *this,
        struct InputInfo *a2,
        bool *a3)
{
  __int64 v4; // rcx
  unsigned int v5; // r9d
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  int v9; // ebx
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0;
  v4 = *((_QWORD *)this + 1417);
  if ( v4 && !*((_DWORD *)this + 544) )
  {
    v5 = *((_DWORD *)a2 + 18);
    if ( *(_DWORD *)(v4 + 16) )
    {
      v6 = v5 >> 1;
      LOBYTE(v6) = (v5 & 2) != 0;
      v7 = v5 & 1;
      if ( (_BYTE)v6 != ((*((_DWORD *)this + 54) & 2) != 0) || (_BYTE)v7 != (*((_DWORD *)this + 54) & 1) )
      {
        v8 = ViewMenuChordedKeyHandler::ChordedKeyStateMachine(v4, v6, v7);
        v9 = v8;
        if ( v8 >= 0 )
          v9 = 0;
        else
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xAF,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
            (const char *)(unsigned int)v8);
        if ( v9 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1D6,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v9);
          return (unsigned int)v9;
        }
      }
    }
    v11 = *((_QWORD *)this + 1417);
    if ( *(_BYTE *)(v11 + 73) )
    {
      ControllerProcessor::SendChordedKeyBuffer(this);
      v11 = *((_QWORD *)this + 1417);
    }
    if ( *(_BYTE *)(v11 + 72) )
      *(_QWORD *)(v11 + 56) = *(_QWORD *)(v11 + 48);
    *(_BYTE *)(v11 + 72) = 0;
  }
  return 0LL;
}
