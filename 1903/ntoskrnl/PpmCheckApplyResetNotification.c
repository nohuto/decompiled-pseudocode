/*
 * XREFs of PpmCheckApplyResetNotification @ 0x1402FFB78
 * Callers:
 *     PpmPostProcessMediaBuffering @ 0x1408B6D5C (PpmPostProcessMediaBuffering.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14015B030 (PpmCheckCustomRun.c)
 */

__int64 PpmCheckApplyResetNotification()
{
  return PpmCheckCustomRun(5);
}
