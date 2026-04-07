/*
 * XREFs of ?DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z @ 0x180003C44
 * Callers:
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x1800090A8 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18002A1BC (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 * Callees:
 *     ?_DiscardStoredSnapshotByIndex@CTransitionVisualController@@IEAAJH@Z @ 0x180003C68 (-_DiscardStoredSnapshotByIndex@CTransitionVisualController@@IEAAJH@Z.c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180030260 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::DiscardStoredSnapshot(CTransitionVisualController *this, HWND a2)
{
  int SnapshotIndex; // eax
  CTransitionVisualController *v3; // rcx

  SnapshotIndex = CTransitionVisualController::_GetSnapshotIndex(this, a2);
  if ( SnapshotIndex >= 0 )
    CTransitionVisualController::_DiscardStoredSnapshotByIndex(v3, SnapshotIndex);
  return 0LL;
}
