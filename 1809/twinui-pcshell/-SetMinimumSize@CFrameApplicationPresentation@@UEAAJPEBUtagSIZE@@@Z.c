/*
 * XREFs of ?SetMinimumSize@CFrameApplicationPresentation@@UEAAJPEBUtagSIZE@@@Z @ 0x1800684A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFrameApplicationPresentation::SetMinimumSize(struct tagSIZE *this, const struct tagSIZE *a2)
{
  this[19] = *a2;
  return CFrameApplicationPresentation::_AddTaskToQueue__lambda_b19e27c48b295a3a48a5cf32f8a10a66___(this, this);
}
