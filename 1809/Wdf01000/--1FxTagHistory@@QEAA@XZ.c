/*
 * XREFs of ??1FxTagHistory@@QEAA@XZ @ 0x1C005BC90
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00054C8 (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxTagHistory::~FxTagHistory(FxTagHistory *this)
{
  FxTagTrackingStackFrames *StackFrames; // rcx

  StackFrames = this->StackFrames;
  if ( StackFrames )
  {
    FxPoolFree((FX_POOL_TRACKER *)StackFrames);
    this->StackFrames = 0LL;
  }
}
