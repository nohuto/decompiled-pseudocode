/*
 * XREFs of ?SendGamepadAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x1800369BC
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180033F70 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@G_N1@Z @ 0x180036C44 (-SetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@G_N1@Z.c)
 *     ?UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x180036EF4 (-UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 */

__int64 __fastcall ControllerProcessor::SendGamepadAsVirtualKeysForNavigation(
        ControllerProcessor *this,
        struct InputInfo *a2)
{
  char v2; // si
  unsigned __int16 v5; // r10
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r9
  void *i; // rax
  void *v11; // rcx
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v15; // [rsp+40h] [rbp+8h]

  v2 = *((_BYTE *)a2 + 584);
  v15 = 8;
  v5 = 0;
  v6 = 0LL;
  v7 = 0xCBF29CE484222325uLL;
  do
  {
    v8 = *((unsigned __int8 *)&v15 + v6++);
    v7 = 0x100000001B3LL * (v8 ^ v7);
  }
  while ( v6 < 4 );
  v9 = 2 * (qword_180193CC0 & v7);
  for ( i = *(void **)(qword_180193CA8 + 16 * (qword_180193CC0 & v7)); ; i = *(void **)i )
  {
    v11 = *(void **)(qword_180193CA8 + 8 * v9) == qword_180193C98
        ? qword_180193C98
        : **(void ***)(qword_180193CA8 + 8 * v9 + 8);
    if ( i == v11 )
      break;
    if ( *((_DWORD *)i + 4) == 8 )
      goto LABEL_11;
  }
  i = qword_180193C98;
LABEL_11:
  if ( i != qword_180193C98 )
    v5 = *((_WORD *)i + 10);
  ControllerProcessor::SetVirtualKeyState(this, a2, v5, (*((_DWORD *)a2 + 132) & 8) != 0, 0);
  ControllerProcessor::SetVirtualKeyState(this, a2, 0xC6u, (*((_DWORD *)a2 + 132) & 0x20) != 0, 0);
  ControllerProcessor::SetVirtualKeyState(this, a2, 0xC8u, (*((_DWORD *)a2 + 132) & 0x400) != 0, 0);
  ControllerProcessor::SetVirtualKeyState(this, a2, 0xC7u, (*((_DWORD *)a2 + 132) & 0x800) != 0, 0);
  ControllerProcessor::SetVirtualKeyState(this, a2, 0xD0u, (*((_DWORD *)a2 + 132) & 2) != 0, 0);
  if ( !*((_BYTE *)a2 + 1584) )
    ControllerProcessor::SetVirtualKeyState(this, a2, 7u, (*((_DWORD *)a2 + 132) & 0x40000000) != 0, 0);
  if ( (*((_BYTE *)this + 1776) & 0x40) != 0 && !v2 )
  {
    ControllerProcessor::SetVirtualKeyState(this, a2, 0x26u, (*((_DWORD *)a2 + 132) & 0x40) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, a2, 0x28u, (*((_DWORD *)a2 + 132) & 0x80) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, a2, 0x25u, *((_DWORD *)a2 + 132) & 0x100, 0);
    ControllerProcessor::SetVirtualKeyState(this, a2, 0x27u, (*((_DWORD *)a2 + 132) & 0x200) != 0, 0);
  }
  updated = ControllerProcessor::UpdateAutoRepeatTimer(this);
  if ( updated < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x8B1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)updated);
    JUMPOUT(0x180036C3CLL);
  }
  return 0LL;
}
