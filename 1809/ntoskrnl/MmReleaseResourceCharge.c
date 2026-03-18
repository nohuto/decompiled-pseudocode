/*
 * XREFs of MmReleaseResourceCharge @ 0x1400E3DB8
 * Callers:
 *     SmAcquireReleaseCharges @ 0x1400E3CE4 (SmAcquireReleaseCharges.c)
 *     MmChargeResources @ 0x1400E3D2C (MmChargeResources.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x140065D40 (MiReturnCommit.c)
 */

void __fastcall MmReleaseResourceCharge(unsigned __int64 a1, char a2, int a3)
{
  if ( (a2 & 2) != 0 && (!a3 || a3 == 1) )
    MiReturnResidentAvailable(a1);
  if ( (a2 & 1) != 0 )
    MiReturnCommit((__int64)&MiSystemPartition, a1);
}
