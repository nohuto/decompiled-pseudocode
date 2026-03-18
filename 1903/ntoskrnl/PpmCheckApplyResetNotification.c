/*
 * XREFs of PpmCheckApplyResetNotification @ 0x1402FFB78
 * Callers:
 *     PpmPostProcessMediaBuffering @ 0x1408B6D5C (PpmPostProcessMediaBuffering.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14015B030 (PpmCheckCustomRun.c)
 */

__int64 __fastcall PpmCheckApplyResetNotification(__int64 a1, __int64 a2, __int64 a3)
{
  return PpmCheckCustomRun(5u, a2, a3);
}
