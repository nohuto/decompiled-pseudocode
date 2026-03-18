/*
 * XREFs of ?CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@@Z @ 0x1C0108034
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00391F4 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1C0107FB4 (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C0157414 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 */

void __fastcall NotifyShell::CuratedWindowHidden(NotifyShell *this, struct tagWND *a2)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 77);
  if ( (v2 & 2) != 0 )
  {
    *((_DWORD *)this + 77) = v2 & 0xFFFFFFFD;
    anonymous_namespace_::NotifyShellSimplePayload(*(_QWORD *)this, 11LL, 0LL);
  }
}
