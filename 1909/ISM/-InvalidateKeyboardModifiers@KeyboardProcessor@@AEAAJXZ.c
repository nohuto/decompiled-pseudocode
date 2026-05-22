/*
 * XREFs of ?InvalidateKeyboardModifiers@KeyboardProcessor@@AEAAJXZ @ 0x18012AF48
 * Callers:
 *     ?OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x18012B0E0 (-OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z @ 0x180141A2C (-UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z.c)
 */

__int64 __fastcall KeyboardProcessor::InvalidateKeyboardModifiers(KeyboardProcessor *this)
{
  int v1; // eax
  int updated; // edi
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 20);
  if ( (v1 & 1) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_QWORD *)this + 9), 1LL, 0LL);
    if ( updated < 0 )
    {
      v4 = 83LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
        (const char *)(unsigned int)updated);
      return (unsigned int)updated;
    }
    *((_DWORD *)this + 20) &= ~1u;
    v1 = *((_DWORD *)this + 20);
  }
  if ( (v1 & 2) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_QWORD *)this + 9), 2LL, 0LL);
    if ( updated < 0 )
    {
      v4 = 91LL;
      goto LABEL_4;
    }
    *((_DWORD *)this + 20) &= ~2u;
    v1 = *((_DWORD *)this + 20);
  }
  if ( (v1 & 4) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_QWORD *)this + 9), 4LL, 0LL);
    if ( updated < 0 )
    {
      v4 = 99LL;
      goto LABEL_4;
    }
    *((_DWORD *)this + 20) &= ~4u;
    v1 = *((_DWORD *)this + 20);
  }
  if ( (v1 & 8) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_QWORD *)this + 9), 8LL, 0LL);
    if ( updated < 0 )
    {
      v4 = 107LL;
      goto LABEL_4;
    }
    *((_DWORD *)this + 20) &= ~8u;
    v1 = *((_DWORD *)this + 20);
  }
  if ( (v1 & 0x10) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_QWORD *)this + 9), 16LL, 0LL);
    if ( updated < 0 )
    {
      v4 = 115LL;
      goto LABEL_4;
    }
    *((_DWORD *)this + 20) &= ~0x10u;
    v1 = *((_DWORD *)this + 20);
  }
  if ( (v1 & 0x20) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_QWORD *)this + 9), 32LL, 0LL);
    if ( updated < 0 )
    {
      v4 = 123LL;
      goto LABEL_4;
    }
    *((_DWORD *)this + 20) &= ~0x20u;
    v1 = *((_DWORD *)this + 20);
  }
  if ( (v1 & 0x40) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_QWORD *)this + 9), 64LL, 0LL);
    if ( updated < 0 )
    {
      v4 = 131LL;
      goto LABEL_4;
    }
    *((_DWORD *)this + 20) &= ~0x40u;
    v1 = *((_DWORD *)this + 20);
  }
  if ( (v1 & 0x80u) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_QWORD *)this + 9), 128LL, 0LL);
    if ( updated < 0 )
    {
      v4 = 139LL;
      goto LABEL_4;
    }
    *((_DWORD *)this + 20) &= ~0x80u;
  }
  return 0LL;
}
