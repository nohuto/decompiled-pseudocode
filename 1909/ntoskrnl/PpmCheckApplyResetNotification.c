/*
 * XREFs of PpmCheckApplyResetNotification @ 0x1402FF628
 * Callers:
 *     PpmPostProcessMediaBuffering @ 0x1408B662C (PpmPostProcessMediaBuffering.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14015B6D0 (PpmCheckCustomRun.c)
 */

__int64 __fastcall PpmCheckApplyResetNotification(__int64 a1, __int64 a2, __int64 a3)
{
  return PpmCheckCustomRun(5u, a2, a3);
}
