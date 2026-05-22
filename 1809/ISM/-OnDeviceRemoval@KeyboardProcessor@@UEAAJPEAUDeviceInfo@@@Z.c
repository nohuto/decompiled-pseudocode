/*
 * XREFs of ?OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800ED580
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnKeyPress@KeyboardProcessorTelemetry@@QEAAX_N@Z @ 0x1800ED920 (-OnKeyPress@KeyboardProcessorTelemetry@@QEAAX_N@Z.c)
 *     ?UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z @ 0x18010423C (-UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z.c)
 */

__int64 __fastcall KeyboardProcessor::OnDeviceRemoval(KeyboardProcessor *this, struct DeviceInfo *a2)
{
  int v2; // eax
  int updated; // eax
  int v5; // edi
  __int64 v6; // rdx
  char v7; // dl
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_DWORD *)this + 14);
  if ( (v2 & 1) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_QWORD *)this + 6), 1LL, 0LL);
    v5 = updated;
    if ( updated < 0 )
    {
      v6 = 82LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
        (const char *)(unsigned int)updated);
      goto LABEL_35;
    }
    *((_DWORD *)this + 14) &= ~1u;
    v2 = *((_DWORD *)this + 14);
  }
  if ( (v2 & 2) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_QWORD *)this + 6), 2LL, 0LL);
    v5 = updated;
    if ( updated < 0 )
    {
      v6 = 90LL;
      goto LABEL_4;
    }
    *((_DWORD *)this + 14) &= ~2u;
    v2 = *((_DWORD *)this + 14);
  }
  if ( (v2 & 4) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_QWORD *)this + 6), 4LL, 0LL);
    v5 = updated;
    if ( updated < 0 )
    {
      v6 = 98LL;
      goto LABEL_4;
    }
    *((_DWORD *)this + 14) &= ~4u;
    v2 = *((_DWORD *)this + 14);
  }
  if ( (v2 & 8) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_QWORD *)this + 6), 8LL, 0LL);
    v5 = updated;
    if ( updated < 0 )
    {
      v6 = 106LL;
      goto LABEL_4;
    }
    *((_DWORD *)this + 14) &= ~8u;
    v2 = *((_DWORD *)this + 14);
  }
  if ( (v2 & 0x10) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_QWORD *)this + 6), 16LL, 0LL);
    v5 = updated;
    if ( updated < 0 )
    {
      v6 = 114LL;
      goto LABEL_4;
    }
    *((_DWORD *)this + 14) &= ~0x10u;
    v2 = *((_DWORD *)this + 14);
  }
  if ( (v2 & 0x20) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_QWORD *)this + 6), 32LL, 0LL);
    v5 = updated;
    if ( updated < 0 )
    {
      v6 = 122LL;
      goto LABEL_4;
    }
    *((_DWORD *)this + 14) &= ~0x20u;
    v2 = *((_DWORD *)this + 14);
  }
  if ( (v2 & 0x40) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_QWORD *)this + 6), 64LL, 0LL);
    v5 = updated;
    if ( updated < 0 )
    {
      v6 = 130LL;
      goto LABEL_4;
    }
    *((_DWORD *)this + 14) &= ~0x40u;
    v2 = *((_DWORD *)this + 14);
  }
  v7 = 0x80;
  if ( (v2 & 0x80u) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_QWORD *)this + 6), 128LL, 0LL);
    v5 = updated;
    if ( updated < 0 )
    {
      v6 = 138LL;
      goto LABEL_4;
    }
    *((_DWORD *)this + 14) &= ~0x80u;
  }
  v5 = 0;
LABEL_35:
  if ( v5 >= 0 )
  {
    KeyboardProcessorTelemetry::OnKeyPress((KeyboardProcessor *)((char *)this + 40), v7);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x97,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
}
