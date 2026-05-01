/*
 * XREFs of _CImmersiveApp::SetMonitorInternal_::_1_::dtor$6 @ 0x1800AE545
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800DD820 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CImmersiveApp::SetMonitorInternal_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 200) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 200) &= ~2u;
    Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(a2 + 48));
  }
}
