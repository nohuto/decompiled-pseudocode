/*
 * XREFs of PpmCheckApplyParkConstraints @ 0x140194510
 * Callers:
 *     PpmParkInitSoftCoreParkingSupport @ 0x1405B1C60 (PpmParkInitSoftCoreParkingSupport.c)
 *     PpmCheckInitProcessors @ 0x140772AD8 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x14077378C (PpmReapplyPerfPolicy.c)
 *     PpmParkApplyForcedMask @ 0x1408A91F8 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1408A930C (PpmParkClearForcedMask.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14015B030 (PpmCheckCustomRun.c)
 */

__int64 PpmCheckApplyParkConstraints()
{
  return PpmCheckCustomRun(4);
}
