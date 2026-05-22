/*
 * XREFs of ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18012B140
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800923E0 (-OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?KeyboardModifierFromScanCode@KeyboardModifierState@@SAJGPEAW4KeyboardModifier@@@Z @ 0x1801418DC (-KeyboardModifierFromScanCode@KeyboardModifierState@@SAJGPEAW4KeyboardModifier@@@Z.c)
 *     ?UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z @ 0x1801419EC (-UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z.c)
 */

__int64 __fastcall KeyboardProcessor::OnInputReport(KeyboardProcessor *this, struct InputInfo *a2)
{
  bool v3; // zf
  unsigned __int16 v5; // cx
  int v6; // ebx
  __int64 v7; // rdx
  __int16 v9; // r11
  char v10; // al
  __int64 v11; // r8
  char v12; // r11
  unsigned int v13; // ebx
  char v14; // si
  int updated; // eax
  unsigned int v16; // ebp
  int v17; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v19; // [rsp+48h] [rbp+10h] BYREF

  v3 = (*(_BYTE *)a2 & 4) == 0;
  v5 = 0;
  v19 = 0;
  if ( v3 )
  {
    v6 = -2147024809;
    v7 = 181LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v9 = *((_WORD *)a2 + 35);
  if ( (v9 & 0x1040) == 0 )
  {
    v5 = *((_WORD *)a2 + 17);
    v10 = *((_WORD *)a2 + 35);
    if ( (v9 & 2) != 0 )
    {
      if ( v5 == 54 || v5 == 69 )
      {
        v10 = v9 & 0xFD;
        *((_WORD *)a2 + 35) = v9 & 0xFFFD;
      }
      else
      {
        v5 |= 0xE000u;
        v10 = *((_WORD *)a2 + 35);
      }
    }
    if ( (v10 & 4) != 0 )
      v5 |= 0xE100u;
  }
  if ( (unsigned int)KeyboardModifierState::KeyboardModifierFromScanCode(v5, (enum KeyboardModifier *)&v19) )
    goto LABEL_22;
  v13 = v19;
  v14 = 1;
  if ( (v12 & 1) != 0 )
  {
    v14 = 0;
  }
  else if ( (v19 & *((_DWORD *)this + 20)) != 0 )
  {
    goto LABEL_22;
  }
  LOBYTE(v11) = v14;
  updated = KeyboardModifierState::UpdateKeyModifierArray(*((_QWORD *)this + 9), v19, v11);
  v16 = updated;
  if ( updated < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
      (const char *)(unsigned int)updated);
    return v16;
  }
  v17 = *((_DWORD *)this + 20);
  if ( v14 )
    *((_DWORD *)this + 20) = v13 | v17;
  else
    *((_DWORD *)this + 20) = v17 & ~v13;
LABEL_22:
  v6 = NonPointerProcessor::OnInputReport(this, a2);
  if ( v6 < 0 )
  {
    v7 = 264LL;
    goto LABEL_3;
  }
  return 0LL;
}
