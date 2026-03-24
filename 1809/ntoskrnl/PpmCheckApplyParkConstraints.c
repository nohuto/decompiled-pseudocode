/*
 * XREFs of PpmCheckApplyParkConstraints @ 0x14018A1F8
 * Callers:
 *     PpmCheckInitProcessors @ 0x14074EE38 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x14074F024 (PpmReapplyPerfPolicy.c)
 *     PpmParkApplyForcedMask @ 0x14087C534 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x14087C608 (PpmParkClearForcedMask.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x140141B74 (PpmCheckCustomRun.c)
 */

__int64 PpmCheckApplyParkConstraints()
{
  return PpmCheckCustomRun(4);
}
