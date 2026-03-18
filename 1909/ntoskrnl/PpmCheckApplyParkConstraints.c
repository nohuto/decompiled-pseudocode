/*
 * XREFs of PpmCheckApplyParkConstraints @ 0x140194CF0
 * Callers:
 *     PpmParkInitSoftCoreParkingSupport @ 0x1405B1FCC (PpmParkInitSoftCoreParkingSupport.c)
 *     PpmCheckInitProcessors @ 0x1407760B8 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x140776D6C (PpmReapplyPerfPolicy.c)
 *     PpmParkApplyForcedMask @ 0x1408A8A58 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1408A8B6C (PpmParkClearForcedMask.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14015B6D0 (PpmCheckCustomRun.c)
 */

__int64 __fastcall PpmCheckApplyParkConstraints(__int64 a1, __int64 a2, __int64 a3)
{
  return PpmCheckCustomRun(4u, a2, a3);
}
