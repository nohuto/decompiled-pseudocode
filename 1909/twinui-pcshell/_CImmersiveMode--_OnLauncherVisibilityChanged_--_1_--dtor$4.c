/*
 * XREFs of _CImmersiveMode::_OnLauncherVisibilityChanged_::_1_::dtor$4 @ 0x1800E78A2
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18011E570 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CImmersiveMode::_OnLauncherVisibilityChanged_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 112) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 112) &= ~2u;
    Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(a2 + 136));
  }
}
