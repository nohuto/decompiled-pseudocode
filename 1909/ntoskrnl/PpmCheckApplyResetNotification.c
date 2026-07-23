/*
 * XREFs of PpmCheckApplyResetNotification @ 0x1402FF628
 * Callers:
 *     PpmPostProcessMediaBuffering @ 0x1408B662C (PpmPostProcessMediaBuffering.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14015B6D0 (PpmCheckCustomRun.c)
 */

__int64 PpmCheckApplyResetNotification()
{
  return PpmCheckCustomRun(5);
}
