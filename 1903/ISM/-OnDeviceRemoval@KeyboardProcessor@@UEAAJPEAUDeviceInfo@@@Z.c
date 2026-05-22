/*
 * XREFs of ?OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x18012B0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InvalidateKeyboardModifiers@KeyboardProcessor@@AEAAJXZ @ 0x18012AF48 (-InvalidateKeyboardModifiers@KeyboardProcessor@@AEAAJXZ.c)
 *     ?OnKeyPress@KeyboardProcessorTelemetry@@QEAAX_N@Z @ 0x18012B294 (-OnKeyPress@KeyboardProcessorTelemetry@@QEAAX_N@Z.c)
 */

__int64 __fastcall KeyboardProcessor::OnDeviceRemoval(KeyboardProcessor *this, struct DeviceInfo *a2)
{
  int v3; // eax
  bool v4; // dl
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = KeyboardProcessor::InvalidateKeyboardModifiers(this);
  v5 = v3;
  if ( v3 >= 0 )
  {
    KeyboardProcessorTelemetry::OnKeyPress((KeyboardProcessor *)((char *)this + 64), v4);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x98,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
      (const char *)(unsigned int)v3);
    return v5;
  }
}
