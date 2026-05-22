/*
 * XREFs of ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800ED770
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180052360 (-OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z @ 0x18010423C (-UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z.c)
 */

__int64 __fastcall KeyboardProcessor::OnInputReport(KeyboardProcessor *this, struct InputInfo *a2)
{
  __int64 v4; // r8
  int v5; // ebx
  __int64 v6; // rdx
  __int16 v8; // dx
  unsigned int v9; // ebx
  bool v10; // di
  int updated; // eax
  unsigned int v12; // ebp
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0LL;
  if ( (*(_DWORD *)a2 & 4) == 0 )
  {
    v5 = -2147024809;
    v6 = 180LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v8 = *((_WORD *)a2 + 35);
  v9 = 4;
  if ( (v8 & 0x10E7) != 4327 && (v8 & 0x40) == 0 )
  {
    v4 = *((unsigned __int16 *)a2 + 17);
    LOWORD(v4) = v4 | 0xE000;
    if ( (v8 & 2) == 0 )
      LOWORD(v4) = *((_WORD *)a2 + 17);
    if ( (v8 & 4) != 0 )
      LOWORD(v4) = v4 | 0xE100;
  }
  switch ( (unsigned __int16)v4 )
  {
    case 0x1Du:
      v9 = 1;
      break;
    case 0x2Au:
      v9 = 2;
      break;
    case 0x36u:
      v9 = 32;
      break;
    default:
      if ( (unsigned __int16)v4 != 56 )
      {
        switch ( (unsigned __int16)v4 )
        {
          case 0xE01Du:
            v9 = 16;
            break;
          case 0xE038u:
            v9 = 64;
            break;
          case 0xE05Bu:
            v9 = 8;
            break;
          case 0xE05Cu:
            v9 = 128;
            break;
          default:
            goto LABEL_31;
        }
      }
      break;
  }
  v10 = (v8 & 1) == 0;
  if ( (v8 & 1) != 0 || (v9 & *((_DWORD *)this + 14)) == 0 )
  {
    LOBYTE(v4) = (v8 & 1) == 0;
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_QWORD *)this + 6), v9, v4);
    v12 = updated;
    if ( updated < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEA,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
        (const char *)(unsigned int)updated);
      return v12;
    }
    v13 = *((_DWORD *)this + 14);
    if ( v10 )
      *((_DWORD *)this + 14) = v9 | v13;
    else
      *((_DWORD *)this + 14) = v13 & ~v9;
  }
LABEL_31:
  v5 = NonPointerProcessor::OnInputReport(this, a2);
  if ( v5 < 0 )
  {
    v6 = 253LL;
    goto LABEL_3;
  }
  return 0LL;
}
