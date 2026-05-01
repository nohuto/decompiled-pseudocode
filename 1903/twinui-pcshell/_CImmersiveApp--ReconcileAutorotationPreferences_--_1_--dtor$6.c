/*
 * XREFs of _CImmersiveApp::ReconcileAutorotationPreferences_::_1_::dtor$6 @ 0x1800C60FC
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800FF580 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CImmersiveApp::ReconcileAutorotationPreferences_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 96) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 96) &= ~8u;
    Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(a2 + 112));
  }
}
