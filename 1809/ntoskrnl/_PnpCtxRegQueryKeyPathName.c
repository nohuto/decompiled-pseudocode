/*
 * XREFs of _PnpCtxRegQueryKeyPathName @ 0x14073AE58
 * Callers:
 *     PipHardwareConfigInit @ 0x1409C73FC (PipHardwareConfigInit.c)
 * Callees:
 *     _RegRtlQueryKeyPathName @ 0x140762A2C (_RegRtlQueryKeyPathName.c)
 */

__int64 __fastcall PnpCtxRegQueryKeyPathName(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return RegRtlQueryKeyPathName(a2, a3, a4);
}
