/*
 * XREFs of PpmCheckApplyResetNotification @ 0x1402E3060
 * Callers:
 *     PpmPostProcessMediaBuffering @ 0x14087BA08 (PpmPostProcessMediaBuffering.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x140141C74 (PpmCheckCustomRun.c)
 */

__int64 PpmCheckApplyResetNotification()
{
  return PpmCheckCustomRun(5);
}
