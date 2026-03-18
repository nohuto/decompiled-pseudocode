/*
 * XREFs of ?CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@@Z @ 0x1C0109094
 * Callers:
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1C0022FF4 (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C006F578 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C01090CC (_anonymous_namespace_--NotifyShellSimplePayload.c)
 */

void __fastcall NotifyShell::CuratedWindowHidden(NotifyShell *this, struct tagWND *a2)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 81);
  if ( (v2 & 2) != 0 )
  {
    *((_DWORD *)this + 81) = v2 & 0xFFFFFFFD;
    anonymous_namespace_::NotifyShellSimplePayload(*(_QWORD *)this, 11LL, 0LL);
  }
}
