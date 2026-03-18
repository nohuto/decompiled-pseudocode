/*
 * XREFs of ?NotifyProcessStatusChange@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C007A594
 * Callers:
 *     VidMmNotifyProcessStatusChange @ 0x1C0010C80 (VidMmNotifyProcessStatusChange.c)
 * Callees:
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C007A5AC (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyProcessStatusChange(VIDMM_GLOBAL *this)
{
  VIDMM_GLOBAL::RequestNewBudget(this, 1);
}
