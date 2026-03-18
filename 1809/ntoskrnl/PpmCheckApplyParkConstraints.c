/*
 * XREFs of PpmCheckApplyParkConstraints @ 0x14018A1D8
 * Callers:
 *     PpmCheckInitProcessors @ 0x14074EE58 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x14074F044 (PpmReapplyPerfPolicy.c)
 *     PpmParkApplyForcedMask @ 0x14087C554 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x14087C628 (PpmParkClearForcedMask.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x140141B54 (PpmCheckCustomRun.c)
 */

__int64 PpmCheckApplyParkConstraints()
{
  return PpmCheckCustomRun(4);
}
