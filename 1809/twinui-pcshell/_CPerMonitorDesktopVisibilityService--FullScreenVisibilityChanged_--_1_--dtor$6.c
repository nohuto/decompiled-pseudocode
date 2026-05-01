/*
 * XREFs of _CPerMonitorDesktopVisibilityService::FullScreenVisibilityChanged_::_1_::dtor$6 @ 0x18032ECAE
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800DD820 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CPerMonitorDesktopVisibilityService::FullScreenVisibilityChanged_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 112) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 112) &= ~2u;
    Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 32));
  }
}
