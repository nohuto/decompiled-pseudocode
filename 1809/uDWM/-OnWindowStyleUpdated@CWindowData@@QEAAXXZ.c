/*
 * XREFs of ?OnWindowStyleUpdated@CWindowData@@QEAAXXZ @ 0x180028320
 * Callers:
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x180027198 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?SetThemeAttributesAttribute@CWindowList@@AEAAJPEAUHWND__@@K@Z @ 0x180039C2C (-SetThemeAttributesAttribute@CWindowList@@AEAAJPEAUHWND__@@K@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CWindowData::OnWindowStyleUpdated(CWindowData *this)
{
  CVisual *v2; // rcx
  CWindowIconic *v3; // rcx

  v2 = (CVisual *)*((_QWORD *)this + 49);
  if ( v2 )
    CVisual::SetDirtyFlags(v2, 0x8000);
  v3 = (CWindowIconic *)*((_QWORD *)this + 54);
  if ( v3 )
    CWindowIconic::OnWindowStyleUpdated(v3, 1);
}
