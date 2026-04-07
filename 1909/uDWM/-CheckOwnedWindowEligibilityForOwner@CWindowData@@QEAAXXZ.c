/*
 * XREFs of ?CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ @ 0x180026EE4
 * Callers:
 *     ?TrackOwnedWindows@CWindowData@@AEAAX_N@Z @ 0x180026E74 (-TrackOwnedWindows@CWindowData@@AEAAX_N@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18002957C (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x180014F54 (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 */

void __fastcall CWindowData::CheckOwnedWindowEligibilityForOwner(CWindowData *this)
{
  __int64 i; // rbx

  CWindowData::CheckOwnedWindowEligibility(this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 146); i = (unsigned int)(i + 1) )
    CWindowData::CheckOwnedWindowEligibility(*(CWindowData **)(*((_QWORD *)this + 70) + 8 * i));
}
