/*
 * XREFs of ?CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ @ 0x18019EEBC
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x18004F550 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?ProcessDwmRestartCompleted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_DWMRESTARTCOMPLETED@@@Z @ 0x1801A047C (-ProcessDwmRestartCompleted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION.c)
 * Callees:
 *     ?EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z @ 0x18019F57C (-EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z.c)
 *     ?EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z @ 0x18019F608 (-EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z.c)
 *     ?EnsureScaleIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ @ 0x18019F694 (-EnsureScaleIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ.c)
 */

void __fastcall CInteractionTracker::CheckForOutOfBounds(CInteractionTracker *this)
{
  CInteractionTracker::EnsurePositionIsGreaterThanOrEqualToMin(this, 7LL);
  CInteractionTracker::EnsurePositionIsLessThanOrEqualToMax(this, 7LL);
  CInteractionTracker::EnsureScaleIsGreaterThanOrEqualToMin(this);
  CInteractionTracker::EnsureScaleIsLessThanOrEqualToMax(this);
}
