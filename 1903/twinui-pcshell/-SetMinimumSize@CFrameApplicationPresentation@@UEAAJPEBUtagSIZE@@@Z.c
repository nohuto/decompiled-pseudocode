/*
 * XREFs of ?SetMinimumSize@CFrameApplicationPresentation@@UEAAJPEBUtagSIZE@@@Z @ 0x18006B3D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFrameApplicationPresentation::SetMinimumSize(struct tagSIZE *this, const struct tagSIZE *a2)
{
  this[19] = *a2;
  return CFrameApplicationPresentation::_AddTaskToQueue__lambda_7464ecf0133c584dcba4bc781e3eeb3c___(this, this);
}
