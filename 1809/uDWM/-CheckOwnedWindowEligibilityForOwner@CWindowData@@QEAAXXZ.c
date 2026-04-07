/*
 * XREFs of ?CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ @ 0x18000F620
 * Callers:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000D8A0 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?TrackOwnedWindows@CWindowData@@AEAAX_N@Z @ 0x18000F02C (-TrackOwnedWindows@CWindowData@@AEAAX_N@Z.c)
 * Callees:
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x18000F668 (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 */

void __fastcall CWindowData::CheckOwnedWindowEligibilityForOwner(CWindowData *this)
{
  __int64 i; // rbx

  CWindowData::CheckOwnedWindowEligibility(this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 144); i = (unsigned int)(i + 1) )
    CWindowData::CheckOwnedWindowEligibility(*(CWindowData **)(*((_QWORD *)this + 69) + 8 * i));
}
